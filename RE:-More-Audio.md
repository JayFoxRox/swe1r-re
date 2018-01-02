# Something to do with streaming

```C
//----- (00422AC0) --------------------------------------------------------
// a1 = some kind of audio stream object, also used by the Helper Thread
signed int __cdecl sub_422AC0(_DWORD *a1) {
  int v4; // eax
  char v9[128]; // [esp+10h] [ebp-280h]
  char v10[512]; // [esp+90h] [ebp-200h]

  if ( a1[9] & 1 ) {
    return 0;
  }

  if ( a1[10] + dword_4EB44C > (unsigned int)dword_4B6D10 && !(a1[9] & 8) ) {
    sub_422F60(a1[10] + 102400);
  }

  if ( a1[9] & 8 ) {
    v4 = dword_4EB414;
  } else {
    v4 = sub_484AA0(a1[13], a1[11], a1[12], a1[10], dword_4B6D30);
    if ( !v4 ) {
      goto HandleError;
    }
    dword_4EB44C += a1[10];
  }
  a1[18] = v4;

  // Generate the path to search in
  char* v6 = dword_4B6D14 ? aDataWavs22kDat : aDataWavs11kDat;
  sprintf(v10, aSSSSS, v6, &unk_E9F300, aDataWavsMusic, &Class, aDataWavsVoice);
  
  // Search for file
  v1 = 0;
  int32_t v5 = 0;
  char* v7 = v10;
  while ( v7 ) {
    v7 = sub_48C2D0(v7, v9, 128, asc_4B3B5C);
    if ( v9[0] != '\0' ) {
      sprintf(v9, aSCS, v9, '\\', a1);
      v1 = dword_ECC420->unk12(v9, aRb); // fopen
      if ( v1 ) {
        v5 = 1;
        break;
      }
    }
  }

  // Error if file could not be opened
  if ( !v5 ) {
    goto HandleError;
  }

  if ( !(a1[9] & 8) ) {

    // Seek somewhere
    dword_ECC420->unk19(v1, a1[15], 0);

    if ( !sub_422F00(v1, (int)a1) ) {
      goto HandleError;
    }

    a1[9] |= 1u;

    // Close file
    dword_ECC420->unk13(v1);

    return 1;
  }

  // Close the currently streaming file if there is one
  if ( dword_4EB418 ) {
    if ( *(_BYTE *)(dword_4EB418 + 36) & 1 ) {
      sub_422D10((_DWORD *)dword_4EB418);
    }
  }

  // Set the new stream values
  dword_4EB404 = v1; // Set file handle for audio which is being streamed
  dword_4EB418 = (int)a1; // Set pointer to some audio stream instance (?) being streamed
  dword_4EB40C = a1[10]; // Set number of available bytes

  // Seek somewhere
  dword_ECC420->unk19(v1, a1[15], 0);

  //  Update the stream buffer (See Helper Thread)
  dword_4EB40C -= sub_4233A0((int)a1, 0, (void *)dword_4EB410);

  // Mark the stream as playing 
  a1[9] |= 1u;

  // Signal the streaming thread
  SetEvent(hEvent);

  return 1;

HandleError:

  // Close the file if it was opened
  if ( v1 ) {
    dword_ECC420->unk13(v1);
  }

  // FIXME: Unknown, probably some sort of `free`
  if ( a1[18] ) {
    sub_4850A0(a1[18]);
  }
  a1[18] = 0;

  return 0;
}
```