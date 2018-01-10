# Parse config

```C
//----- (0040AE40) --------------------------------------------------------
signed int __cdecl sub_40AE40(int a1) {
  signed int result; // eax
  int v2; // eax
  char v3; // [esp+10h] [ebp-100h]

  sprintf(&v3, aSSS, aDataConfig, a1, aForceCfg);
  if ( !sub_4877B0(&v3) ) {
    sub_487900();
    return -1;
  }

  while( sub_487AE0()) {
    if (!strcmp(dword_EC8E84, aEnd) ) {
      break;
    }

    if ( !_strcmpi(dword_EC8E84, aForcefeedback) ) {
      if ( !_strcmpi(dword_EC8E8C, aStrength) ) {
        dword_EC83E0 = atoi(dword_EC8E90);
      } else if ( !_strcmpi(dword_EC8E8C, aAutocenter) ) {
        dword_EC83E4 = atoi(dword_EC8E90);
      } else if ( !_strcmpi(dword_EC8E8C, aCollisions) ) {
        dword_EC83E8 = atoi(dword_EC8E90);
      } else if ( !_strcmpi(dword_EC8E8C, aDamage) ) {
        dword_EC83EC = atoi(dword_EC8E90);
      } else if ( !_strcmpi(dword_EC8E8C, aTerrain) ) {
        dword_EC83F0 = atoi(dword_EC8E90);
      } else if ( !_strcmpi(dword_EC8E8C, aPodactions) ) {
        dword_EC83F4 = atoi(dword_EC8E90);
      } else if ( !_strcmpi(dword_EC8E8C, aGforces) ) {
        dword_EC83F8 = !_strcmpi(dword_EC8E90, aOn);
      } else if (! _strcmpi(dword_EC8E8C, aEnginerumble) ) {
        dword_EC83FC = !_strcmpi(dword_EC8E90, aOn);
      } else if ( !_strcmpi(dword_EC8E8C, aEnabled) ) {
        if ( !dword_4B4938 || !dword_4B2914
          || (v2 = _strcmpi(dword_EC8E90, aTrue), dword_4B2910 = 1, v2) ) {
          dword_4B2910 = 0;
        }
      } else {
        sub_487900();
        return 0;
      }         

    }

  }
  sub_487900();
  sub_40A680();
  return 1;
}
```