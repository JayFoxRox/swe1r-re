/* Code related to the sound subsystem */

// Research based on patched US version


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
