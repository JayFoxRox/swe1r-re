/* Code related to the sound subsystem */

// Research based on patched US version


//----- (00440550) --------------------------------------------------------
void __cdecl sub_440550(int a1)
{
  int v1; // eax
  signed int v2; // [esp+4h] [ebp-8h]
  float v3; // [esp+8h] [ebp-4h]

  v1 = 0;
  v2 = 1040187392;
  v3 = (double)(unsigned __int8)byte_E364A5 * 0.0039215689;
  switch ( a1 )
  {
    case 75:
      sub_426C80(a1, 6, 0.5, v3, 1);
      return;
    case 77:
      sub_426C80(a1, 6, 0.25, v3, 0);
      return;
    case 79:
      v1 = 1;
      break;
    case 84:
      break;
    case 88:
      v2 = 1048576000;
      v3 = v3 * 0.75;
      break;
    default:
      v2 = 1048576000;
      v1 = 0;
      break;
  }
  sub_426C80(a1, 6, *(float *)&v2, v3, v1);
}
