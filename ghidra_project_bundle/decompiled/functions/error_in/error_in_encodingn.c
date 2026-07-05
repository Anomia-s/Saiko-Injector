/**
 * Function: error_in_encodingn
 * Address:  140ca6030
 * Signature: undefined error_in_encodingn(void)
 * Body size: 2219 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * error_in_encodingn(undefined8 param_1,longlong *param_2,int param_3,int param_4,int param_5,
                        int param_6,int param_7)

{
  byte bVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  undefined1 *puVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  int *piVar14;
  undefined1 *puVar15;
  int iVar16;
  int local_78;
  uint local_74;
  undefined1 *local_70;
  uint local_68 [2];
  undefined1 *local_60;
  int local_58;
  int local_54;
  undefined8 local_50;
  undefined1 *local_48;
  
  piVar8 = (int *)0x0;
  local_50 = 0;
  local_74 = 0;
  if (0x80 < param_5) {
    FUN_140b73bf0(param_1,"BAD RECURSION DEPTH\n");
    return (int *)0x0;
  }
  local_48 = (undefined1 *)*param_2 + param_3;
  puVar15 = (undefined1 *)*param_2;
  piVar14 = piVar8;
joined_r0x000140ca60b8:
  piVar12 = piVar8;
  piVar6 = piVar8;
  piVar7 = piVar8;
  local_70 = puVar15;
  if (param_3 < 1) {
    piVar9 = (int *)0x1;
LAB_140ca6844:
    FUN_140bde750(local_50);
    FUN_140b90e80(piVar6);
    FUN_140b90e80(piVar7);
    FUN_140b90e80(piVar12);
    *param_2 = (longlong)local_70;
    return piVar9;
  }
  uVar3 = FUN_140b78ef0(&local_70,&local_78,local_68,&local_54,param_3);
  if ((char)uVar3 < '\0') {
    FUN_140b73bf0(param_1,"Error in encoding\n");
    piVar9 = (int *)0x0;
    piVar12 = (int *)0x0;
    piVar7 = (int *)0x0;
    goto LAB_140ca6844;
  }
  iVar13 = (int)local_70 - (int)puVar15;
  param_3 = param_3 - iVar13;
  iVar4 = 0;
  if (param_6 != 0) {
    iVar4 = param_5;
  }
  iVar4 = _ld_d_2d_hlld_l4ld_s
                    (param_1,((int)puVar15 - (int)*param_2) + param_4,param_5,iVar13,local_78,
                     local_68[0],local_54,uVar3,iVar4);
  puVar2 = local_70;
  piVar9 = piVar8;
  if (iVar4 == 0) goto LAB_140ca6844;
  if ((uVar3 & 0x20) != 0) {
    puVar10 = local_70 + local_78;
    iVar4 = FUN_140b73860(param_1,&DAT_1413a7288,1);
    puVar15 = local_48;
    if (0 < iVar4) {
      if (local_78 <= param_3) {
        if ((uVar3 == 0x21) && (local_78 == 0)) {
          do {
            iVar4 = error_in_encodingn(param_1,&local_70,(int)puVar15 - (int)local_70,
                                       ((int)local_70 - (int)*param_2) + param_4,param_5 + 1,param_6
                                       ,param_7);
            if (iVar4 == 0) goto LAB_140ca6844;
          } while ((iVar4 != 2) && (local_70 < puVar15));
          local_78 = (int)local_70 - (int)puVar2;
          piVar14 = (int *)(ulonglong)local_74;
        }
        else {
          if (local_70 < puVar10) {
            iVar4 = local_78;
            do {
              iVar16 = (int)local_70;
              iVar13 = error_in_encodingn(param_1,&local_70,iVar4,(iVar16 - (int)*param_2) + param_4
                                          ,param_5 + 1,param_6,param_7);
              if (iVar13 == 0) goto LAB_140ca6844;
              iVar4 = iVar4 + (iVar16 - (int)local_70);
            } while (local_70 < puVar10);
          }
          piVar14 = (int *)(ulonglong)local_74;
        }
        goto LAB_140ca6820;
      }
      FUN_140c078a0(param_1,"length is greater than %ld\n",param_3);
    }
    goto LAB_140ca6844;
  }
  if (local_54 != 0) {
    local_70 = local_70 + local_78;
    iVar4 = FUN_140b73860(param_1,&DAT_1413a7288,1);
    if (0 < iVar4) goto LAB_140ca6820;
    goto LAB_140ca6844;
  }
  local_58 = 0;
  if ((local_68[0] < 0x1b) && ((0x5dc1000U >> (local_68[0] & 0x1f) & 1) != 0)) {
    iVar4 = FUN_140b73860(param_1,":",1);
    piVar6 = (int *)0x0;
    if ((0 < iVar4) &&
       ((local_78 < 1 || (iVar4 = FUN_140b73860(param_1,local_70), iVar4 == local_78))))
    goto LAB_140ca6774;
    goto LAB_140ca6844;
  }
  if (local_68[0] == 6) {
    local_60 = puVar15;
    lVar5 = FUN_140bde800(&local_50,&local_60,local_78 + iVar13);
    if (lVar5 != 0) {
      iVar4 = FUN_140b73860(param_1,":",1);
      if (0 < iVar4) {
        FUN_140bde8c0(param_1,local_50);
        goto LAB_140ca6774;
      }
      goto LAB_140ca6844;
    }
    iVar4 = FUN_140b73bf0(param_1,":BAD OBJECT");
    if (iVar4 < 1) goto LAB_140ca6844;
    piVar14 = (int *)0x1;
    local_74 = 1;
  }
  else {
    if (local_68[0] == 1) {
      if (local_78 != 1) {
        iVar4 = FUN_140b73bf0(param_1,":BAD BOOLEAN");
        if (iVar4 < 1) goto LAB_140ca6844;
        piVar14 = (int *)0x1;
        local_74 = 1;
      }
      if (0 < local_78) {
        FUN_140c078a0(param_1,&DAT_1413a5a00,*local_70);
      }
      goto LAB_140ca6774;
    }
    piVar11 = (int *)0x0;
    if (local_68[0] == 0x1e) goto LAB_140ca6774;
    if (local_68[0] == 4) {
      local_60 = puVar15;
      piVar6 = (int *)FUN_140b90f70(0,&local_60,local_78 + iVar13);
      if ((piVar6 == (int *)0x0) || (*piVar6 < 1)) goto LAB_140ca64cd;
      local_60 = *(undefined1 **)(piVar6 + 2);
      piVar11 = piVar8;
      if (0 < (longlong)*piVar6) {
        do {
          bVar1 = *(byte *)((longlong)piVar11 + (longlong)local_60);
          if (((bVar1 < 0x20) && ((0xffffd9ffU >> (bVar1 & 0x1f) & 1) != 0)) || (0x7e < bVar1)) {
            if (param_7 == 0) {
              iVar4 = FUN_140b73860(param_1,"[HEX DUMP]:",0xb);
              if (iVar4 < 1) goto LAB_140ca6844;
              piVar14 = piVar8;
              piVar11 = piVar8;
              if (0 < *piVar6) goto LAB_140ca64a0;
              goto LAB_140ca64c9;
            }
            iVar4 = FUN_140b73860(param_1,&DAT_1413a7288,1);
            if (iVar4 < 1) goto LAB_140ca6844;
            if ((param_7 == -1) || (iVar4 = param_7, *piVar6 < param_7)) {
              iVar4 = *piVar6;
            }
            iVar4 = FUN_140c62210(param_1,local_60,iVar4,6);
            if (iVar4 < 1) goto LAB_140ca6844;
            local_58 = 1;
            FUN_140b90e80(piVar6);
            goto LAB_140ca6774;
          }
          piVar11 = (int *)((longlong)piVar11 + 1);
        } while ((longlong)piVar11 < (longlong)*piVar6);
      }
      iVar4 = FUN_140b73860(param_1,":",1);
      if ((0 < iVar4) && (iVar4 = FUN_140b73860(param_1,local_60,*piVar6), 0 < iVar4)) {
        FUN_140b90e80(piVar6);
        goto LAB_140ca6774;
      }
      goto LAB_140ca6844;
    }
    piVar6 = piVar11;
    if (local_68[0] == 2) {
      local_60 = puVar15;
      piVar7 = (int *)FUN_140b90ed0(0,&local_60,local_78 + iVar13);
      if (piVar7 == (int *)0x0) {
        iVar4 = FUN_140b73bf0(param_1,":BAD INTEGER");
        if (iVar4 < 1) goto LAB_140ca6844;
        local_74 = 1;
      }
      else {
        iVar4 = FUN_140b73860(param_1,":",1);
        piVar6 = piVar8;
        if ((iVar4 < 1) ||
           ((piVar7[1] == 0x102 &&
            (iVar4 = FUN_140b73860(param_1,&DAT_1413a70b0,1), piVar6 = piVar11, iVar4 < 1))))
        goto LAB_140ca6844;
        iVar4 = *piVar7;
        piVar14 = piVar8;
        if (0 < iVar4) {
          do {
            iVar4 = FUN_140c078a0(param_1,&DAT_1413a6654,
                                  *(undefined1 *)((longlong)piVar12 + *(longlong *)(piVar7 + 2)));
            if (iVar4 < 1) goto LAB_140ca65f5;
            iVar4 = *piVar7;
            uVar3 = (int)piVar14 + 1;
            piVar14 = (int *)(ulonglong)uVar3;
            piVar12 = (int *)((longlong)piVar12 + 1);
          } while ((int)uVar3 < iVar4);
        }
        if ((iVar4 == 0) && (iVar4 = FUN_140b73860(param_1,&DAT_1413a7088,2), iVar4 < 1)) {
LAB_140ca65f5:
          piVar12 = (int *)0x0;
          piVar6 = piVar8;
          goto LAB_140ca6844;
        }
      }
      FUN_140b90e80(piVar7);
      piVar14 = (int *)(ulonglong)local_74;
      goto LAB_140ca6774;
    }
    if (local_68[0] == 10) {
      local_60 = puVar15;
      piVar12 = (int *)FUN_140b90f20(0,&local_60,local_78 + iVar13);
      if (piVar12 == (int *)0x0) {
        iVar4 = FUN_140b73bf0(param_1,":BAD ENUMERATED");
        if (0 < iVar4) {
          local_74 = 1;
LAB_140ca6708:
          FUN_140b90e80(piVar12);
          piVar14 = (int *)(ulonglong)local_74;
          goto LAB_140ca6774;
        }
      }
      else {
        iVar4 = FUN_140b73860(param_1,":",1);
        if ((0 < iVar4) &&
           ((piVar12[1] != 0x10a || (iVar4 = FUN_140b73860(param_1,&DAT_1413a70b0,1), 0 < iVar4))))
        {
          iVar4 = *piVar12;
          piVar14 = piVar8;
          piVar6 = piVar8;
          if (0 < iVar4) {
            do {
              iVar4 = FUN_140c078a0(param_1,&DAT_1413a6654,
                                    *(undefined1 *)((longlong)piVar14 + *(longlong *)(piVar12 + 2)))
              ;
              if (iVar4 < 1) goto LAB_140ca66e9;
              iVar4 = *piVar12;
              uVar3 = (int)piVar6 + 1;
              piVar6 = (int *)(ulonglong)uVar3;
              piVar14 = (int *)((longlong)piVar14 + 1);
            } while ((int)uVar3 < iVar4);
          }
          if ((iVar4 != 0) || (iVar4 = FUN_140b73860(param_1,&DAT_1413a7088,2), 0 < iVar4))
          goto LAB_140ca6708;
        }
      }
LAB_140ca66e9:
      piVar6 = (int *)0x0;
      piVar7 = (int *)0x0;
      goto LAB_140ca6844;
    }
    if ((0 < local_78) && (param_7 != 0)) {
      iVar4 = FUN_140b73860(param_1,&DAT_1413a7288,1);
      if (iVar4 < 1) goto LAB_140ca6844;
      iVar4 = local_78;
      if ((param_7 != -1) && (param_7 <= local_78)) {
        iVar4 = param_7;
      }
      iVar4 = FUN_140c62210(param_1,local_70,iVar4,6);
      if (iVar4 < 1) goto LAB_140ca6844;
      local_58 = 1;
    }
  }
LAB_140ca6774:
  if ((int)piVar14 != 0) {
    puVar15 = puVar15 + iVar13;
    iVar4 = FUN_140b73bf0(param_1,&DAT_1413a65f0);
    piVar12 = piVar8;
    piVar6 = piVar8;
    piVar7 = piVar8;
    if (iVar4 < 1) goto LAB_140ca6844;
    piVar14 = piVar8;
    if (0 < local_78) {
      do {
        iVar4 = FUN_140c078a0(param_1,&DAT_1413a6654,*puVar15);
        if (iVar4 < 1) goto LAB_140ca6844;
        uVar3 = (int)piVar14 + 1;
        piVar14 = (int *)(ulonglong)uVar3;
        puVar15 = puVar15 + 1;
      } while ((int)uVar3 < local_78);
    }
    iVar4 = FUN_140b73bf0(param_1,&DAT_1413a65e4);
    if (iVar4 < 1) goto LAB_140ca6844;
    local_74 = 0;
    piVar14 = piVar8;
  }
  if ((local_58 == 0) &&
     (iVar4 = FUN_140b73860(param_1,&DAT_1413a7288,1), piVar9 = (int *)0x0, piVar12 = piVar8,
     piVar6 = piVar8, piVar7 = piVar8, iVar4 < 1)) goto LAB_140ca6844;
  local_70 = local_70 + local_78;
  if ((local_68[0] == 0) && (local_54 == 0)) {
    piVar9 = (int *)0x2;
    piVar12 = piVar8;
    piVar6 = piVar8;
    piVar7 = piVar8;
    goto LAB_140ca6844;
  }
LAB_140ca6820:
  param_3 = param_3 - local_78;
  puVar15 = local_70;
  goto joined_r0x000140ca60b8;
  while( true ) {
    uVar3 = (int)piVar14 + 1;
    piVar14 = (int *)(ulonglong)uVar3;
    piVar11 = (int *)((longlong)piVar11 + 1);
    if (*piVar6 <= (int)uVar3) break;
LAB_140ca64a0:
    iVar4 = FUN_140c078a0(param_1,&DAT_1413a6654,
                          *(undefined1 *)((longlong)piVar11 + (longlong)local_60));
    if (iVar4 < 1) goto LAB_140ca6844;
  }
LAB_140ca64c9:
  piVar14 = (int *)(ulonglong)local_74;
LAB_140ca64cd:
  FUN_140b90e80(piVar6);
  goto LAB_140ca6774;
}

