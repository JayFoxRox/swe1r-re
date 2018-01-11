# Unknown

```C
//----- (00484140) --------------------------------------------------------
char *__cdecl sub_484140(char *a1, int a2, int a3) {
  typdef struct {
    uint32_t unk; // + 0
    uint32_t unk; // + 4
    char name[128];
    uint32_t unk; // + 136
    // 140 bytes
  } Unk;
  char *result; // eax
  result = dword_ECC420->unk8(140);
  if (result == 0) {
    return 0;
  }

  memset(result, 0x00, 140);

  if ( a2 >= 0 ) {
    if ( a2 <= 2 ) {
      sub_4846E0(result + 8, 128, a1, asc_4C7D54);
    } else if ( a2 == 3 ) {
      if (*(_BYTE *)a3 == '.') {
        a3++;
      }
      sprintf(OutputString, aS, a3);
      sub_4846E0(result + 8, 128, a1, OutputString);
    }
  }

  *(_DWORD *)result = a2;
  return result;
}
```

# Close filesearch ?

```C
//----- (004841E0) --------------------------------------------------------
// a1 = some file search handle?
// Probably returns nothing
void __cdecl sub_4841E0(uint32_t* a1) {
  if (a1 == 0) {
    return;
  }

  if ( a1[1] ) {
    findclose(a1[34]); // +136
  }

  // Free memory
  //FIXME: This check feels redundant? Probably part of some SAFE_FREE macro.
  if ( a1 ) {
    dword_ECC420->unk9(a1);
  }

  return;
}
```

# Start or continue filesearch

```C
typdef struct {
  uint32_t unk0; // +0 = search mode (0 = ?, 1 = only files, 2 = only directories, 3 = ?)
  uint32_t unk1; // +4 = index of file in directory?
  char path[128] // +8 = path
  ...
  intptr_t handle; // +136 = filesearch handle

} FileSearch;

typdef struct {
  char path[256]; // unusure
  uint32_t unk;
  uint32_t is_subdirectory; // +260 Value 0x10 if this is a subdirectory, otherwise 0
  uint32_t time_write; // + 264 Time of the last write to file. This time is stored in UTC format.
} A2;

//----- (00484220) --------------------------------------------------------
// a1 = file search object
// a2 = current file being returned
BOOL __cdecl sub_484220(FileSearch *a1, int a2) {
  BOOL result; // eax
  int v3; // eax
  int v4; // eax
  int v5; // esi
  char v6; // dl
  time_t v7; // ecx
  struct _finddata_t v8; // [esp+Ch] [ebp-118h]

  if (a1 == 0) {
    return 0;
  }

  if (a1->unk1 == 0) {
    v4 = _findfirst(a1->path, &v8);
    a1->handle = v4;
  } else {
    v4 = _findnext(a1->handle, &v8);
  }
  a1->unk1 = a1->unk1 + 1;

  // Check for errors
  if ( v4 == -1 ) {
    return 0;
  }

  uint32_t is_subdirectory = v8.attrib & _A_SUBDIR;

  result = 0;
  result = result || (a1->unk0 == 0); // Unspecified search mode?
  result = result || (a1->unk0 == 1 && !is_subdirectory) // File search and this is not a directory
  result = result || (a1->unk0 == 2 && is_subdirectory)); // Directory search and this is a directory
  result = result || (a1->unk0 == 3); // Unspecified search mode?
  if (!result) {
    return 0;
  }
   
  strcpy(a2->name, v8.name);
  a2->is_subdirectory = is_subdirectory;
  a2->time_write =  v8.time_write;
  return 1;
}
```

# Create directory

```C
//----- (00484310) --------------------------------------------------------
BOOL __cdecl sub_484310(LPCSTR lpPathName) {
  return CreateDirectoryA(lpPathName, 0);
}
```

# Delete file

```C
//----- (00484320) --------------------------------------------------------
BOOL __cdecl sub_484320(LPCSTR lpFileName) {
  return DeleteFileA(lpFileName);
}
```

# Delete directory

```C
//----- (00484330) --------------------------------------------------------
// Returns 1 on success, something else otherwise
BOOL __cdecl sub_484330(LPCSTR lpPathName) {
  HANDLE hFindFile; // [esp+10h] [ebp-248h]

  CHAR FileName[260]; // [esp+14h] [ebp-244h] //FIXME: Probably just 256 bytes?!

  struct _WIN32_FIND_DATAA FindFileData; // [esp+118h] [ebp-140h]

  // Construct the pathname
  strcpy(&FileName, lpPathName);
  strcat(&FileName, asc_4C7D60);

  hFindFile = FindFirstFileA(&FileName, &FindFileData);
  if ( hFindFile == (HANDLE)-1 ) {
    return 0;
  }

  // Loop until our success-flag is cleared
  // This is a bug in the game. Should be `!= 0` as Microsoft only defines a value for failure.
  int32_t v1 = 1;
  while(v1 == 1) {
    if ( FindFileData.dwFileAttributes == FILE_ATTRIBUTE_DIRECTORY) {
      // This is a directory, make sure this is not "." or "..", and delete it recursively
      if (!(!strcmp(FindFileData.cFileName, ".") || !strcmp(FindFileData.cFileName, ".."))) {
        strcpy(&FileName, lpPathName);
        strcat(&FileName, (const char *)&unk_4B3B48);
        strcat(&FileName, FindFileData.cFileName);
        v1 = sub_484330(&FileName);
      }
    } else {
      // Delete this file
      strcpy(&FileName, lpPathName);
      strcat(&FileName, (const char *)&unk_4B3B48);
      strcat(&FileName, FindFileData.cFileName);
      v1 = DeleteFileA(&FileName);
    }

    // Get the next file
    if(!FindNextFileA(hFindFile, &FindFileData)) {
      break;
    }
  }

  // Close the filesearch
  FindClose(hFindFile);

  // Now that the directory is empty, delete it
  if (v1) {
    return RemoveDirectoryA(lpPathName);
  }
  return v1;
}
```

# Get pointer to filename in path string

```C
//----- (004845B0) --------------------------------------------------------
// a1 = path, seperated using backslashes
// Returns filename, or full path if no backslash was found
char *__cdecl sub_4845B0(char *a1) {
  char v2; // cl

  char* result = strrchr(a1, '\\');
  if (result == NULL) {
    return a1;
  }

  // This scans forward until we are not on a backslash anymore.
  // This is probably useless, because strrchr already kind-of did this for us..
  // So basically this does `result++` once.
  while (*result == '\\') {
    result++;
  }

  return result;
}
```

# Get pointer to file extension in path string

```C
//----- (004845E0) --------------------------------------------------------
// a1 = path, seperated using backslashes
// Returns extension or NULL if no extension found
char* __cdecl sub_4845E0(char* a1) {
  char* filename = sub_4845B0(a1);
  char* extension = strrchr(v1, '.');
  if (extension == NULL) {
    return NULL;
  }
  return extension + 1;
}
```