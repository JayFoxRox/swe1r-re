## Parse MAlt

Short little function... NOT!

```C
//----- (004476B0) --------------------------------------------------------
void __cdecl sub_4476B0(signed int *a1)
{
  int *v1; // ebx
  int v2; // ecx
  signed int v3; // eax
  int v4; // edx
  unsigned int v5; // esi
  int v6; // ecx
  unsigned int v7; // esi
  unsigned int v8; // ecx
  int v9; // edx
  unsigned int v10; // esi
  unsigned int v11; // ecx
  signed int v12; // edx
  unsigned int *v13; // ecx
  unsigned int v14; // eax
  int v15; // eax
  int v16; // ebp
  int v17; // edi
  int v18; // eax
  int v19; // esi
  __int16 v20; // dx
  __int16 v21; // cx
  int v22; // eax
  __int16 v23; // dx
  __int16 v24; // cx
  __int16 *v25; // eax
  signed int v26; // edx
  __int16 v27; // cx
  __int16 v28; // bx
  __int16 v29; // dx
  __int16 v30; // ax
  __int16 v31; // cx
  __int16 v32; // ax
  __int16 v33; // ax
  __int16 v34; // ax
  __int16 v35; // ax
  int v36; // esi
  int v37; // eax
  unsigned int *v38; // ecx
  __int16 v39; // dx
  signed int v40; // edx
  unsigned int v41; // eax
  unsigned int *v42; // ecx
  signed int v43; // edx
  unsigned int v44; // eax
  unsigned int v45; // eax
  int v46; // eax
  int v47; // esi
  __int16 v48; // dx
  unsigned int v49; // ecx
  int v50; // edx
  unsigned int v51; // edi
  unsigned int v52; // ecx
  int v53; // edx
  unsigned int v54; // edi
  unsigned int v55; // ecx
  int v56; // edx
  unsigned int v57; // edi
  unsigned int v58; // ecx
  int v59; // edx
  unsigned int v60; // edi
  unsigned int v61; // ecx
  int v62; // edx
  unsigned int v63; // edi
  unsigned int v64; // ecx
  int v65; // edx
  unsigned int v66; // edi
  unsigned int v67; // ecx
  int v68; // edx
  unsigned int v69; // edi
  unsigned int v70; // ecx
  int v71; // edx
  unsigned int v72; // edi
  unsigned int v73; // ecx
  unsigned int *v74; // ecx
  signed int v75; // edx
  unsigned int v76; // eax
  unsigned int *v77; // ecx
  signed int v78; // edx
  unsigned int v79; // eax
  __int16 v80; // cx
  __int16 v81; // dx
  unsigned int *v82; // ecx
  signed int v83; // edx
  unsigned int v84; // eax
  __int16 v85; // cx
  __int16 v86; // ax
  __int16 v87; // cx
  __int16 v88; // ax
  __int16 v89; // dx
  int v90; // ecx
  signed int v91; // ecx
  unsigned int *v92; // edx
  int v93; // esi
  __int16 v94; // cx
  int v95; // eax
  int v96; // edx
  int *v97; // ecx
  int v98; // edi
  _WORD *v99; // edi
  __int16 v100; // dx
  __int16 v101; // cx
  __int16 v102; // cx
  int v103; // eax
  int v104; // edx
  __int16 v105; // cx
  _WORD *v106; // esi
  __int16 v107; // dx
  __int16 v108; // ax
  __int16 v109; // cx
  __int16 v110; // ax
  unsigned int *v111; // ecx
  signed int v112; // edx
  unsigned int v113; // eax
  unsigned int *v114; // ecx
  signed int v115; // edx
  unsigned int v116; // eax
  unsigned int *v117; // ecx
  signed int v118; // edx
  unsigned int v119; // eax
  int v120; // eax
  __int16 v121; // cx
  __int16 v122; // ax
  __int16 v123; // dx
  unsigned int *v124; // ecx
  signed int v125; // edx
  unsigned int v126; // eax
  unsigned int *v127; // ecx
  signed int v128; // edx
  unsigned int v129; // eax
  unsigned int *v130; // ecx
  signed int v131; // edx
  unsigned int v132; // eax
  int v133; // eax
  int v134; // esi
  unsigned int v135; // edx
  bool v136; // zf
  bool v137; // sf
  int v138; // [esp+10h] [ebp-4h]

  v1 = a1;
  if ( a1 )
  {
    v2 = *a1;
    if ( *a1 != 20581 && v2 != 20582 && v2 != 53348 && v2 != 53349 && v2 != 20580 && v2 != 12388 && v2 != 53350 )
    {
      v3 = ((*a1 & 0xFF0000 | ((unsigned int)*a1 >> 16)) >> 8) | (((*a1 << 16) | *a1 & 0xFF00) << 8);
      v4 = (a1[1] << 16) | a1[1] & 0xFF00;
      v5 = (unsigned int)a1[1] >> 16;
      v6 = a1[1] & 0xFF0000;
      *a1 = v3;
      v7 = v6 | v5;
      v8 = a1[2];
      a1[1] = (v7 >> 8) | (v4 << 8);
      v9 = (v8 << 16) | (unsigned __int16)(v8 & 0xFF00);
      v10 = v8 & 0xFF0000 | (v8 >> 16);
      LOWORD(v8) = *((_WORD *)a1 + 6);
      a1[2] = (v10 >> 8) | (v9 << 8);
      LOBYTE(v9) = BYTE1(v8);
      BYTE1(v9) = v8;
      LOWORD(v8) = *((_WORD *)a1 + 7);
      *((_WORD *)a1 + 6) = v9;
      LOBYTE(v9) = BYTE1(v8);
      BYTE1(v9) = v8;
      v11 = a1[4];
      *((_WORD *)a1 + 7) = v9;
      a1[4] = ((v11 & 0xFF0000 | (v11 >> 16)) >> 8) | (((v11 << 16) | v11 & 0xFF00) << 8);
      if ( v3 > 20581 )
      {
        if ( v3 > 53348 )
        {
          v120 = v3 - 53349;
          if ( v120 )
          {
            if ( v120 == 1 )
            {
              LOBYTE(v121) = *((_WORD *)a1 + 14) >> 8;
              HIBYTE(v121) = *((_WORD *)a1 + 14);
              v122 = *((_WORD *)a1 + 15);
              HIBYTE(v123) = *((_WORD *)a1 + 15);
              *((_WORD *)a1 + 14) = v121;
              LOBYTE(v123) = HIBYTE(v122);
              v124 = (unsigned int *)(a1 + 8);
              *((_WORD *)a1 + 15) = v123;
              v125 = 3;
              do
              {
                v126 = *v124;
                ++v124;
                --v125;
                *(v124 - 1) = (((v126 >> 16) | v126 & 0xFF0000) >> 8) | (((v126 << 16) | v126 & 0xFF00) << 8);
              }
              while ( v125 );
            }
          }
          else
          {
            v127 = (unsigned int *)(a1 + 7);
            v128 = 12;
            do
            {
              v129 = *v127;
              ++v127;
              --v128;
              *(v127 - 1) = ((v129 & 0xFF0000 | (v129 >> 16)) >> 8) | (((v129 << 16) | v129 & 0xFF00) << 8);
            }
            while ( v128 );
            v130 = (unsigned int *)(a1 + 19);
            v131 = 3;
            do
            {
              v132 = *v130;
              ++v130;
              --v131;
              *(v130 - 1) = (((v132 >> 16) | v132 & 0xFF0000) >> 8) | (((v132 << 16) | v132 & 0xFF00) << 8);
            }
            while ( v131 );
          }
        }
        else if ( v3 == 53348 )
        {
          v117 = (unsigned int *)(a1 + 7);
          v118 = 12;
          do
          {
            v119 = *v117;
            ++v117;
            --v118;
            *(v117 - 1) = (((v119 >> 16) | v119 & 0xFF0000) >> 8) | (((v119 << 16) | v119 & 0xFF00) << 8);
          }
          while ( v118 );
        }
        else if ( v3 == 20582 )
        {
          v111 = (unsigned int *)(a1 + 7);
          v112 = 8;
          do
          {
            v113 = *v111;
            ++v111;
            --v112;
            *(v111 - 1) = (((v113 >> 16) | v113 & 0xFF0000) >> 8) | (((v113 << 16) | v113 & 0xFF00) << 8);
          }
          while ( v112 );
          v114 = (unsigned int *)(a1 + 15);
          v115 = 3;
          do
          {
            v116 = *v114;
            ++v114;
            --v115;
            *(v114 - 1) = ((v116 & 0xFF0000 | (v116 >> 16)) >> 8) | (((v116 << 16) | v116 & 0xFF00) << 8);
          }
          while ( v115 );
        }
      }
      else if ( v3 == 20581 )
      {
        a1[7] = ((((unsigned int)a1[7] >> 16) | a1[7] & 0xFF0000) >> 8) | (((a1[7] << 16) | a1[7] & 0xFF00) << 8);
      }
      else if ( v3 == 12388 )
      {
        v12 = 6;
        a1[5] = ((((unsigned int)a1[5] >> 16) | a1[5] & 0xFF0000) >> 8) | (((a1[5] << 16) | a1[5] & 0xFF00) << 8);
        v13 = (unsigned int *)(a1 + 7);
        do
        {
          v14 = *v13;
          ++v13;
          --v12;
          *(v13 - 1) = ((v14 & 0xFF0000 | (v14 >> 16)) >> 8) | (((v14 << 16) | v14 & 0xFF00) << 8);
        }
        while ( v12 );
        v15 = 0;
        v138 = 0;
        if ( a1[5] > 0 )
        {
          do
          {
            v16 = *(_DWORD *)(v1[6] + 4 * v15);
            if ( v16 )
            {
              v17 = *(_DWORD *)v16;
              if ( *(_DWORD *)v16 && !sub_4475F0(*(_DWORD *)v16) )
              {
                v18 = dword_50C628;
                dword_E95300[dword_50C628] = v17;
                dword_50C628 = v18 + 1;
                v19 = *(_DWORD *)(v17 + 8);
                LOWORD(v18) = *(_WORD *)(v17 + 4);
                *(_DWORD *)v17 = ((*(_DWORD *)v17 & 0xFF0000u | (*(_DWORD *)v17 >> 16)) >> 8) | (((*(_DWORD *)v17 << 16) | *(_DWORD *)v17 & 0xFF00) << 8);
                LOBYTE(v20) = BYTE1(v18);
                HIBYTE(v20) = v18;
                LOWORD(v18) = *(_WORD *)(v17 + 6);
                HIBYTE(v21) = *(_WORD *)(v17 + 6);
                *(_WORD *)(v17 + 4) = v20;
                LOBYTE(v21) = BYTE1(v18);
                *(_WORD *)(v17 + 6) = v21;
                if ( v19 && !sub_447630(v19) )
                {
                  v22 = dword_50C62C;
                  dword_E90980[dword_50C62C] = v19;
                  dword_50C62C = v22 + 1;
                  LOWORD(v22) = *(_WORD *)(v19 + 4);
                  *(_DWORD *)v19 = (((*(_DWORD *)v19 >> 16) | *(_DWORD *)v19 & 0xFF0000u) >> 8) | (((*(_DWORD *)v19 << 16) | *(_DWORD *)v19 & 0xFF00) << 8);
                  LOBYTE(v23) = BYTE1(v22);
                  HIBYTE(v23) = v22;
                  LOWORD(v22) = *(_WORD *)(v19 + 6);
                  HIBYTE(v24) = *(_WORD *)(v19 + 6);
                  *(_WORD *)(v19 + 4) = v23;
                  LOBYTE(v24) = BYTE1(v22);
                  v25 = (__int16 *)(v19 + 8);
                  *(_WORD *)(v19 + 6) = v24;
                  v26 = 2;
                  do
                  {
                    v27 = *v25;
                    LOBYTE(v28) = (unsigned __int16)*v25 >> 8;
                    ++v25;
                    HIBYTE(v28) = v27;
                    --v26;
                    *(v25 - 1) = v28;
                  }
                  while ( v26 );
                  LOBYTE(v29) = *(_WORD *)(v19 + 16) >> 8;
                  HIBYTE(v29) = *(_WORD *)(v19 + 16);
                  v30 = *(_WORD *)(v19 + 18);
                  LOBYTE(v31) = *(_WORD *)(v19 + 18) >> 8;
                  *(_WORD *)(v19 + 16) = v29;
                  HIBYTE(v31) = v30;
                  v32 = *(_WORD *)(v19 + 20);
                  *(_WORD *)(v19 + 18) = v31;
                  LOBYTE(v29) = HIBYTE(v32);
                  HIBYTE(v29) = v32;
                  v33 = *(_WORD *)(v19 + 22);
                  LOBYTE(v31) = *(_WORD *)(v19 + 22) >> 8;
                  *(_WORD *)(v19 + 20) = v29;
                  HIBYTE(v31) = v33;
                  v34 = *(_WORD *)(v19 + 24);
                  v1 = a1;
                  HIBYTE(v29) = *(_WORD *)(v19 + 24);
                  *(_WORD *)(v19 + 22) = v31;
                  LOBYTE(v29) = HIBYTE(v34);
                  v35 = *(_WORD *)(v19 + 26);
                  *(_WORD *)(v19 + 24) = v29;
                  LOBYTE(v31) = HIBYTE(v35);
                  HIBYTE(v31) = v35;
                  *(_WORD *)(v19 + 26) = v31;
                }
                v36 = *(_DWORD *)(v17 + 12);
                if ( v36 && !sub_447670(*(_DWORD *)(v17 + 12)) )
                {
                  v37 = dword_50C630;
                  dword_E68280[dword_50C630] = v36;
                  dword_50C630 = v37 + 1;
                  LOWORD(v37) = *(_WORD *)(v36 + 4);
                  v38 = (unsigned int *)(v36 + 6);
                  *(_DWORD *)v36 = (((*(_DWORD *)v36 >> 16) | *(_DWORD *)v36 & 0xFF0000u) >> 8) | (((*(_DWORD *)v36 << 16) | *(_DWORD *)v36 & 0xFF00) << 8);
                  LOBYTE(v39) = BYTE1(v37);
                  HIBYTE(v39) = v37;
                  *(_WORD *)(v36 + 4) = v39;
                  v40 = 2;
                  do
                  {
                    v41 = *v38;
                    ++v38;
                    --v40;
                    *(v38 - 1) = (((v41 >> 16) | v41 & 0xFF0000) >> 8) | (((v41 << 16) | v41 & 0xFF00) << 8);
                  }
                  while ( v40 );
                  v42 = (unsigned int *)(v36 + 14);
                  v43 = 2;
                  do
                  {
                    v44 = *v42;
                    ++v42;
                    --v43;
                    *(v42 - 1) = (((v44 >> 16) | v44 & 0xFF0000) >> 8) | (((v44 << 16) | v44 & 0xFF00) << 8);
                  }
                  while ( v43 );
                  v1 = a1;
                  v45 = *(_DWORD *)(v36 + 28);
                  *(_DWORD *)(v36 + 24) = ((*(_DWORD *)(v36 + 24) & 0xFF0000u | (*(_DWORD *)(v36 + 24) >> 16)) >> 8) | (((*(_DWORD *)(v36 + 24) << 16) | *(_DWORD *)(v36 + 24) & 0xFF00) << 8);
                  *(_DWORD *)(v36 + 28) = ((v45 & 0xFF0000 | (v45 >> 16)) >> 8) | (((v45 << 16) | v45 & 0xFF00) << 8);
                }
              }
              v46 = *(_DWORD *)(v16 + 4);
              if ( v46 )
              {
                v47 = *(_DWORD *)(v46 + 60);
                LOBYTE(v48) = *(_WORD *)v46 >> 8;
                HIBYTE(v48) = *(_WORD *)v46;
                *(_WORD *)v46 = v48;
                LOBYTE(v48) = *(_WORD *)(v46 + 6) >> 8;
                HIBYTE(v48) = *(_WORD *)(v46 + 6);
                *(_WORD *)(v46 + 6) = v48;
                LOBYTE(v48) = *(_WORD *)(v46 + 8) >> 8;
                HIBYTE(v48) = *(_WORD *)(v46 + 8);
                *(_WORD *)(v46 + 8) = v48;
                LOBYTE(v48) = *(_WORD *)(v46 + 10) >> 8;
                HIBYTE(v48) = *(_WORD *)(v46 + 10);
                v49 = *(_DWORD *)(v46 + 20);
                *(_WORD *)(v46 + 10) = v48;
                v50 = (v49 << 16) | (unsigned __int16)(v49 & 0xFF00);
                v51 = v49 & 0xFF0000 | (v49 >> 16);
                v52 = *(_DWORD *)(v46 + 24);
                *(_DWORD *)(v46 + 20) = (v51 >> 8) | (v50 << 8);
                v53 = (v52 << 16) | (unsigned __int16)(v52 & 0xFF00);
                v54 = v52 & 0xFF0000 | (v52 >> 16);
                v55 = *(_DWORD *)(v46 + 28);
                *(_DWORD *)(v46 + 24) = (v54 >> 8) | (v53 << 8);
                v56 = (v55 << 16) | (unsigned __int16)(v55 & 0xFF00);
                v57 = v55 & 0xFF0000 | (v55 >> 16);
                v58 = *(_DWORD *)(v46 + 32);
                *(_DWORD *)(v46 + 28) = (v57 >> 8) | (v56 << 8);
                v59 = (v58 << 16) | (unsigned __int16)(v58 & 0xFF00);
                v60 = v58 & 0xFF0000 | (v58 >> 16);
                v61 = *(_DWORD *)(v46 + 36);
                *(_DWORD *)(v46 + 32) = (v60 >> 8) | (v59 << 8);
                v62 = (v61 << 16) | (unsigned __int16)(v61 & 0xFF00);
                v63 = v61 & 0xFF0000 | (v61 >> 16);
                v64 = *(_DWORD *)(v46 + 40);
                *(_DWORD *)(v46 + 36) = (v63 >> 8) | (v62 << 8);
                v65 = (v64 << 16) | (unsigned __int16)(v64 & 0xFF00);
                v66 = (v64 >> 16) | v64 & 0xFF0000;
                v67 = *(_DWORD *)(v46 + 44);
                *(_DWORD *)(v46 + 40) = (v66 >> 8) | (v65 << 8);
                v68 = (v67 << 16) | (unsigned __int16)(v67 & 0xFF00);
                v69 = (v67 >> 16) | v67 & 0xFF0000;
                LOWORD(v67) = *(_WORD *)(v46 + 48);
                *(_DWORD *)(v46 + 44) = (v69 >> 8) | (v68 << 8);
                LOBYTE(v68) = BYTE1(v67);
                BYTE1(v68) = v67;
                LOWORD(v67) = *(_WORD *)(v46 + 50);
                *(_WORD *)(v46 + 48) = v68;
                LOBYTE(v68) = BYTE1(v67);
                BYTE1(v68) = v67;
                v70 = *(_DWORD *)(v46 + 52);
                *(_WORD *)(v46 + 50) = v68;
                v71 = (v70 << 16) | (unsigned __int16)(v70 & 0xFF00);
                v72 = (v70 >> 16) | v70 & 0xFF0000;
                v73 = *(_DWORD *)(v46 + 56);
                *(_DWORD *)(v46 + 52) = (v72 >> 8) | (v71 << 8);
                *(_DWORD *)(v46 + 56) = (((v73 >> 16) | v73 & 0xFF0000) >> 8) | (((v73 << 16) | v73 & 0xFF00) << 8);
                if ( v47 )
                {
                  do
                  {
                    v74 = (unsigned int *)v47;
                    v75 = 3;
                    do
                    {
                      v76 = *v74;
                      ++v74;
                      --v75;
                      *(v74 - 1) = ((v76 & 0xFF0000 | (v76 >> 16)) >> 8) | (((v76 << 16) | v76 & 0xFF00) << 8);
                    }
                    while ( v75 );
                    v77 = (unsigned int *)(v47 + 12);
                    v78 = 3;
                    do
                    {
                      v79 = *v77;
                      ++v77;
                      --v78;
                      *(v77 - 1) = (((v79 >> 16) | v79 & 0xFF0000) >> 8) | (((v79 << 16) | v79 & 0xFF00) << 8);
                    }
                    while ( v78 );
                    *(_DWORD *)(v47 + 24) = (((*(_DWORD *)(v47 + 24) >> 16) | *(_DWORD *)(v47 + 24) & 0xFF0000u) >> 8) | (((*(_DWORD *)(v47 + 24) << 16) | *(_DWORD *)(v47 + 24) & 0xFF00) << 8);
                    *(_DWORD *)(v47 + 28) = (((*(_DWORD *)(v47 + 28) >> 16) | *(_DWORD *)(v47 + 28) & 0xFF0000u) >> 8) | (((*(_DWORD *)(v47 + 28) << 16) | *(_DWORD *)(v47 + 28) & 0xFF00) << 8);
                    LOBYTE(v80) = *(_WORD *)(v47 + 36) >> 8;
                    HIBYTE(v80) = *(_WORD *)(v47 + 36);
                    *(_WORD *)(v47 + 36) = v80;
                    LOBYTE(v81) = *(_WORD *)(v47 + 38) >> 8;
                    HIBYTE(v81) = *(_WORD *)(v47 + 38);
                    *(_WORD *)(v47 + 38) = v81;
                    v47 = *(_DWORD *)(v47 + 40);
                  }
                  while ( v47 );
                  v1 = a1;
                }
              }
              v82 = (unsigned int *)(v16 + 8);
              v83 = 6;
              do
              {
                v84 = *v82;
                ++v82;
                --v83;
                *(v82 - 1) = (((v84 >> 16) | v84 & 0xFF0000) >> 8) | (((v84 << 16) | v84 & 0xFF00) << 8);
              }
              while ( v83 );
              LOBYTE(v85) = 0;
              HIBYTE(v85) = *(_WORD *)(v16 + 32);
              v86 = v85;
              v87 = *(_WORD *)(v16 + 34);
              v88 = (unsigned __int8)(*(_WORD *)(v16 + 32) >> 8) | v86;
              *(_WORD *)(v16 + 32) = v88;
              LOBYTE(v89) = HIBYTE(v87);
              HIBYTE(v89) = v87;
              v90 = *(_DWORD *)(v16 + 36);
              *(_WORD *)(v16 + 34) = v89;
              if ( v90 )
              {
                v91 = 0;
                if ( v88 > 0 )
                {
                  do
                  {
                    v92 = (unsigned int *)(*(_DWORD *)(v16 + 36) + 4 * v91++);
                    *v92 = ((*v92 & 0xFF0000 | (*v92 >> 16)) >> 8) | (((*v92 << 16) | *v92 & 0xFF00) << 8);
                  }
                  while ( v91 < *(signed __int16 *)(v16 + 32) );
                }
              }
              v93 = 0;
              if ( *(_DWORD *)(v16 + 44) && *(_DWORD *)(v16 + 40) )
              {
                v94 = *(_WORD *)(v16 + 34);
                v95 = 0;
                switch ( v94 )
                {
                  case 3:
                    v95 = 3 * *(signed __int16 *)(v16 + 32);
                    break;
                  case 4:
                    v95 = 4 * *(signed __int16 *)(v16 + 32);
                    break;
                  case 5:
                    v96 = *(signed __int16 *)(v16 + 32);
                    v138 = 0;
                    if ( v96 > 0 )
                    {
                      v97 = *(int **)(v16 + 36);
                      v138 = *(signed __int16 *)(v16 + 32);
                      do
                      {
                        v98 = *v97;
                        ++v97;
                        --v96;
                        v95 += v98 + 2;
                      }
                      while ( v96 );
                    }
                    break;
                  default:
                    while ( 1 )
                      ;
                }
                if ( v95 > 0 )
                {
                  do
                  {
                    v99 = (_WORD *)(*(_DWORD *)(v16 + 40) + 2 * v93++);
                    LOBYTE(v100) = *v99 >> 8;
                    HIBYTE(v100) = *v99;
                    *v99 = v100;
                  }
                  while ( v93 < v95 );
                }
              }
              LOBYTE(v101) = 0;
              HIBYTE(v101) = *(_WORD *)(v16 + 56);
              v102 = (unsigned __int8)(*(_WORD *)(v16 + 56) >> 8) | v101;
              *(_WORD *)(v16 + 56) = v102;
              if ( !dword_E6B168 )
              {
                if ( *(_DWORD *)(v16 + 44) )
                {
                  v103 = 0;
                  if ( 3 * v102 > 0 )
                  {
                    do
                    {
                      v104 = *(_DWORD *)(v16 + 44);
                      v105 = *(_WORD *)(v104 + 2 * v103);
                      v106 = (_WORD *)(v104 + 2 * v103++);
                      LOBYTE(v104) = HIBYTE(v105);
                      BYTE1(v104) = v105;
                      *v106 = v104;
                    }
                    while ( v103 < 3 * *(signed __int16 *)(v16 + 56) );
                  }
                }
              }
              HIBYTE(v107) = *(_WORD *)(v16 + 58);
              LOBYTE(v107) = *(_WORD *)(v16 + 58) >> 8;
              v108 = *(_WORD *)(v16 + 60);
              LOBYTE(v109) = *(_WORD *)(v16 + 60) >> 8;
              *(_WORD *)(v16 + 58) = v107;
              HIBYTE(v109) = v108;
              v110 = *(_WORD *)(v16 + 62);
              *(_WORD *)(v16 + 60) = v109;
              LOBYTE(v107) = HIBYTE(v110);
              HIBYTE(v107) = v110;
              v15 = v138;
              *(_WORD *)(v16 + 62) = v107;
            }
            v138 = ++v15;
          }
          while ( v15 < v1[5] );
        }
      }
      v133 = *v1;
      if ( v133 & 0x4000 )
      {
        v134 = 0;
        v135 = (((unsigned int)v1[5] >> 16) | v1[5] & 0xFF0000) >> 8;
        v136 = (v135 | (((v1[5] << 16) | v1[5] & 0xFF00) << 8)) == 0;
        v137 = ((v135 | (((v1[5] << 16) | v1[5] & 0xFF00) << 8)) & 0x80000000) != 0;
        v1[5] = v135 | (((v1[5] << 16) | v1[5] & 0xFF00) << 8);
        if ( !v137 && !v136 )
        {
          do
            sub_4476B0(*(_DWORD *)(v1[6] + 4 * v134++));
          while ( v134 < v1[5] );
        }
      }
    }
  }
}
```