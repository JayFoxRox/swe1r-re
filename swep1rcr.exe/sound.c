/* Code related to the sound subsystem */

// Research based on patched US version


//----- (00421F30) --------------------------------------------------------
// Parses data/sounds.map
signed int sub_421F30()
{
  signed int result; // eax
  int v1; // eax
  _DWORD *v2; // ebp
  _DWORD *v3; // [esp+10h] [ebp-4h]

  if ( sub_487AE0() && !_strcmpi(dword_EC8E84, aNumsounds) )
  {
    v1 = atoi(dword_EC8E88);
    dword_E9F360 = v1;
    if ( v1 )
    {
      sub_422770(v1);
      if ( sub_487AE0() )
      {
        v2 = v3;
        do
        {
          if ( !strcmp(dword_EC8E84, aEnd) )
            break;
          if ( _strcmpi(dword_EC8E84, aNumvoices) )
          {
            if ( dword_4EB450 )
              v2 = sub_4227E0(dword_EC8E84, 1);
            if ( !v2 )
              v2 = sub_4227E0(aSfxCrashWoodWa, 1);
          }
          else
          {
            dword_E9F360 -= atoi(dword_EC8E88);
          }
        }
        while ( sub_487AE0() );
      }
    }
    result = 0;
  }
  else
  {
    if ( *((_DWORD *)off_4B6D34 + 10) )
      sub_4226C0();
    result = 1;
  }
  return result;
}

//----- (00440550) --------------------------------------------------------
// Plays a sound effect?
// a1 = Sound effect index?
void __cdecl sub_440550(int a1) {

  // What is this?
  float v3 = (double)(unsigned __int8)byte_E364A5 * 0.0039215689; //FIXME: `/ 255.0f` ?

  int v1; // eax
  float v2; // [esp+4h] [ebp-8h]
  switch ( a1 ) {
    case 75:
      v1 = 1;
      v2 = 0.5f;
      break;
    case 77:
      v1 = 0;
      v2 = 0.25f;
      break;
    case 79:
      v1 = 1;
      v2 = 0.125f;
      break;
    case 84:
      v1 = 0;
      v2 = 0.125f;
      break;
    case 88:
      v1 = 0;
      v2 = 0.25f;
      v3 = v3 * 0.75f;
      break;
    default:
      v1 = 0;
      v2 = 0.25f;
      break;
  }

  // Start playing the sound?
  sub_426C80(a1, 6, v2, v3, v1);
  return;
}
