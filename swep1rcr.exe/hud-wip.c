//----- (00464630) --------------------------------------------------------
// Loads the HUD sprites which are used during a race
float __usercall sub_464630@<eax>(int a1, int a2, int a3) {
  signed __int16 *v3; // ebx
  signed __int16 *v4; // ebp
  signed __int16 *v5; // eax
  signed __int16 *v6; // eax
  signed __int16 *v7; // esi
  signed __int16 *v8; // eax
  signed __int16 *v9; // eax
  signed __int16 *v10; // esi
  signed __int16 *v11; // esi
  signed __int16 *v12; // eax
  signed __int16 *v13; // eax
  signed int v14; // esi
  signed __int16 *v15; // edi
  signed __int16 *v16; // eax
  signed __int16 *v17; // eax
  signed int v18; // esi
  signed __int16 *v19; // esi
  signed __int16 *v20; // esi
  signed int v21; // esi
  signed int v22; // esi
  signed __int16 *v23; // eax
  signed __int16 *v24; // eax
  signed __int16 *v25; // eax
  signed __int16 *v26; // eax
  signed __int16 *v27; // eax
  signed __int16 *v28; // eax
  signed __int16 *v29; // esi
  signed __int16 *v30; // esi
  signed __int16 *v31; // esi
  signed __int16 *v32; // esi
  int v33; // esi
  int v34; // edi
  signed __int16 *v35; // eax

  //FIXME: Maybe disable all existing sprites?
  sub_428370();

  // Load sprite for vertical gradient
  v3 = sub_446FB0(SPRITE_75);

  // Load sprite for boost light
  v4 = sub_446FB0(SPRITE_101);
  if ( dword_50CA18 > 1 ) {

    // Load sprite for boost bar (multiplayer version)
    v15 = sub_446FB0(SPRITE_166);
    sub_4282F0(21, (int)v15);

    // Link the boost light to sprite slot 22
    sub_4282F0(22, (int)v4);

    // Load sprite for boost meter
    v16 = sub_446FB0(SPRITE_99);
    sub_4282F0(19, (int)v16);

    // Load sprite for boost meter
    v17 = sub_446FB0(SPRITE_99);
    sub_4282F0(20, (int)v17);

    // Load header curve (below "TIME")
    sub_446FB0(SPRITE_105);
    sub_4282F0(23, 0);

    v18 = 21;
    do {
      sub_4287E0(v18++, 0x8000);
    } while ( v18 <= 23 );
  } else {

    // Load header curve (below "LAP" ?)
    v5 = sub_446FB0(SPRITE_100);
    sub_4282F0(0, (int)v5);

    // Load header curve (below "POS" ?)
    v6 = sub_446FB0(SPRITE_100);
    sub_4282F0(1, (int)v6);

    // Load speedometer bar (left side)
    v7 = sub_446FB0(SPRITE_102);
    sub_4282F0(3, (int)v7);
    sub_4282F0(10, (int)v7);
    sub_4287E0(10, 4);

    // Load speedometer bar (center)
    v8 = sub_446FB0(SPRITE_103);
    sub_4282F0(2, (int)v8);

    // Load header curve (below "TIME")
    v9 = sub_446FB0(SPRITE_105);
    sub_4282F0(4, (int)v9);
    sub_4282F0(5, 0);
    sub_4282F0(6, 0);

    //FIXME: Unknown sprite
    v10 = sub_446FB0(SPRITE_106);
    sub_4282F0(11, (int)v10);
    sub_4282F0(12, (int)v10);

    //FIXME: Unknown sprite - vertical bar of some sort
    v11 = sub_446FB0(SPRITE_107);
    sub_4282F0(7, (int)v11);
    sub_4282F0(8, (int)v11);

    //FIXME: Unknown sprite - vertical bar top
    v12 = sub_446FB0(SPRITE_108);
    sub_4282F0(9, (int)v12);
    sub_4282F0(13, (int)v3);

    // Load sprite for the N64 "A" button
    v13 = sub_446FB0(SPRITE_74);
    sub_4282F0(14, (int)v13);

    v14 = 0;
    do
      sub_4287E0(v14++, 0x8000);
    while ( v14 <= 13 );

    // Load sprite for boost bar (singleplayer version)
    v15 = sub_446FB0(SPRITE_104);
  }
  sub_4282F0(17, (int)v15);
  sub_4282F0(18, (int)v4);

    // Load sprite for boost meter
  v19 = sub_446FB0(SPRITE_99);
  sub_4282F0(15, (int)v19);
  dword_50C9FC = (int)v19;

    // Load sprite for boost meter
  v20 = sub_446FB0(SPRITE_99);
  sub_4282F0(16, (int)v20);
  dword_50CA00 = (int)v20;

  v21 = 17;
  do {
    sub_4287E0(v21++, 0x8000);
  } while ( v21 <= 18 );

  sub_4282F0(24, (int)v4);

  sub_4282F0(25, (int)v3);
  sub_4287E0(25, 0);

  sub_4282F0(26, (int)v3);
  sub_4287E0(26, 6144);

  v22 = 24;
  do {
    sub_4287E0(v22++, 0x8000);
  } while ( v22 <= 26 );


  // Load sprite for Start countdown "1"
  v23 = sub_446FB0(SPRITE_19);
  sub_4282F0(161, (int)v23);
  sub_4287E0(161, 0x9200);

  // Load sprite for Start countdown "2"
  v24 = sub_446FB0(SPRITE_20);
  sub_4282F0(162, (int)v24);
  sub_4287E0(162, 0x9200);

  // Load sprite for Start countdown "3"
  v25 = sub_446FB0(SPRITE_21);
  sub_4282F0(163, (int)v25);
  sub_4287E0(163, 0x9200);


  // Load sprite for podium 1st place flag
  v26 = sub_446FB0(SPRITE_92);
  sub_4282F0(164, (int)v26);
  sub_4287E0(161, 0x1200);

  // Load sprite for podium 2nd place flag
  v27 = sub_446FB0(SPRITE_93);
  sub_4282F0(165, (int)v27);
  sub_4287E0(162, 0x1200);

  // Load sprite for podium 3rd place flag
  v28 = sub_446FB0(SPRITE_94);
  sub_4282F0(166, (int)v28);
  sub_4287E0(163, 0x1200);


  // Load engine HUD status (top)
  v29 = sub_446FB0(SPRITE_46);
  sub_4282F0(27, (int)v29);
  sub_4282F0(30, (int)v29);
  sub_4287E0(30, 4);
  if ( dword_50CA18 > 1 ) {
    sub_4282F0(35, (int)v29);
    sub_4282F0(38, (int)v29);
    sub_4287E0(38, 4);
  }

  // Load engine HUD status (middle)
  v30 = sub_446FB0(SPRITE_47);
  sub_4282F0(28, (int)v30);
  sub_4282F0(31, (int)v30);
  sub_4287E0(31, 4);
  if ( dword_50CA18 > 1 ) {
    sub_4282F0(36, (int)v30);
    sub_4282F0(39, (int)v30);
    sub_4287E0(39, 4);
  }

  // Load engine HUD status (bottom)
  v31 = sub_446FB0(SPRITE_48);
  sub_4282F0(29, (int)v31);
  sub_4282F0(32, (int)v31);
  sub_4287E0(32, 4);
  if ( dword_50CA18 > 1 ) {
    sub_4282F0(37, (int)v31);
    sub_4282F0(40, (int)v31);
    sub_4287E0(40, 4);
  }

  // Load engine HUD status (border)
  v32 = sub_446FB0(SPRITE_49);
  sub_4282F0(33, (int)v32);
  sub_4282F0(34, (int)v32);
  if ( dword_50CA18 > 1 ) {
    sub_4282F0(41, (int)v32);
    sub_4282F0(42, (int)v32);
  }


  //FIXME: Load flags for all racers? (Offset 44 in PodracerData)
  v33 = 0;
  if ( *(_DWORD *)(a3 + 444) > 0 ) {
    v34 = 0;
    do {
      v35 = sub_446FB0(*(_DWORD *)(*(_DWORD *)(dword_E28960 + v34 + 24) + 44));
      sub_4282F0(v33++ + 43, (int)v35);
      v34 += 136;
    } while ( v33 < *(_DWORD *)(a3 + 444) );
  }


  sub_464010(a1, a2);
  return sub_463FF0(*(float *)&a1, a2);
}
