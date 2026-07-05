/**
 * Function: ld_unused_bitsn
 * Address:  140c29260
 * Signature: undefined ld_unused_bitsn(void)
 * Body size: 873 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ld_unused_bitsn(undefined8 param_1,uint *param_2,char *param_3,int param_4,undefined8 param_5,
                    undefined8 param_6,byte *param_7)

{
  code *pcVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint *puVar6;
  longlong lVar7;
  undefined1 *puVar8;
  char *pcVar9;
  uint *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStack_e8 [32];
  byte *local_c8;
  uint local_b8;
  undefined1 local_a8 [80];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x140c29277;
  local_58 = DAT_1414ef3c0 ^ (ulonglong)auStack_e8;
  local_b8 = 1;
  lVar7 = *(longlong *)(param_3 + 0x18);
  local_c8 = param_7;
  iVar3 = FUN_140c29620(param_1,param_4,param_5,param_6);
  if (iVar3 == 0) goto LAB_140c295b9;
  if ((lVar7 != 0) && (pcVar1 = *(code **)(lVar7 + 0x38), pcVar1 != (code *)0x0)) {
    local_c8 = param_7;
    (*pcVar1)(param_1,param_2,param_3,param_4);
    goto LAB_140c295b9;
  }
  puVar6 = (uint *)0x0;
  uVar4 = 0;
  if (*param_3 == '\x05') {
    puVar10 = *(uint **)param_2;
    uVar12 = puVar10[1] & 0xfffffeff;
LAB_140c2932a:
    if (uVar12 != 0xfffffffc) goto LAB_140c29317;
    param_2 = puVar10 + 2;
    uVar12 = *puVar10;
    puVar10 = *(uint **)param_2;
    if ((*param_7 & 0x10) == 0) {
      puVar6 = (uint *)FUN_140ca6000(uVar12);
    }
  }
  else {
    uVar12 = *(uint *)(param_3 + 4);
    puVar10 = puVar6;
    if (uVar12 != 1) {
      puVar10 = *(uint **)param_2;
      goto LAB_140c2932a;
    }
LAB_140c29317:
    if ((*param_7 & 8) != 0) {
      puVar6 = (uint *)FUN_140ca6000(uVar12);
    }
  }
  if (uVar12 == 5) {
    FUN_140b73bf0(param_1,"NULL\n");
  }
  else if ((puVar6 == (uint *)0x0) ||
          ((iVar3 = FUN_140b73bf0(param_1,puVar6), 0 < iVar3 &&
           (iVar3 = FUN_140b73bf0(param_1,":"), 0 < iVar3)))) {
    switch(uVar12) {
    case 1:
      uVar4 = *param_2;
      if ((uVar4 == 0xffffffff) && (uVar4 = *(uint *)(param_3 + 0x20), uVar4 == 0xffffffff)) {
        iVar3 = FUN_140b73bf0(param_1,"BOOL ABSENT");
        uVar12 = (uint)(0 < iVar3);
        uVar13 = local_b8;
      }
      else {
        pcVar9 = "TRUE";
        if (uVar4 == 0) {
          pcVar9 = "FALSE";
        }
        iVar3 = FUN_140b73bf0(param_1,pcVar9);
        uVar12 = (uint)(0 < iVar3);
        uVar13 = local_b8;
      }
      break;
    case 2:
    case 10:
      lVar7 = FUN_140bc6890(0,puVar10);
      uVar12 = uVar4;
      uVar13 = local_b8;
      if (lVar7 != 0) {
        iVar3 = FUN_140b73bf0(param_1,lVar7);
        FUN_140b8d990(lVar7,"crypto\\asn1\\tasn_prn.c",400);
        uVar12 = (uint)(0 < iVar3);
        uVar13 = local_b8;
      }
      break;
    case 3:
    case 4:
      if (puVar10[1] == 3) {
        iVar3 = FUN_140c078a0(param_1," (%ld unused bits)\n",puVar10[4] & 7);
      }
      else {
        iVar3 = FUN_140b73bf0(param_1,&DAT_1413a7288);
      }
      uVar12 = 0;
      uVar13 = 0;
      if ((0 < iVar3) &&
         ((uVar13 = uVar4, (int)*puVar10 < 1 ||
          (iVar3 = FUN_140c62210(param_1,*(undefined8 *)(puVar10 + 2),*puVar10,param_4 + 2),
          uVar12 = uVar4, 0 < iVar3)))) {
        uVar12 = 1;
      }
      break;
    case 6:
      uVar2 = *(undefined8 *)param_2;
      uVar5 = FUN_140b964c0(uVar2);
      puVar8 = (undefined1 *)FUN_140b96460(uVar5);
      puVar11 = &DAT_1413a2ad6;
      if (puVar8 != (undefined1 *)0x0) {
        puVar11 = puVar8;
      }
      FUN_140b96640(local_a8,0x50,uVar2,1);
      iVar3 = FUN_140c078a0(param_1,"%s (%s)",puVar11,local_a8);
      uVar12 = (uint)(0 < iVar3);
      uVar13 = local_b8;
      break;
    case 0x17:
      uVar12 = FUN_140c60f50(param_1,puVar10);
      uVar13 = local_b8;
      break;
    case 0x18:
      uVar12 = FUN_140c4d4c0(param_1,puVar10);
      uVar13 = local_b8;
      break;
    case 0xfffffffd:
    case 0x10:
    case 0x11:
      iVar3 = FUN_140b73bf0(param_1,&DAT_1413a7288);
      if (iVar3 < 1) goto LAB_140c295b9;
      local_c8 = (byte *)((ulonglong)local_c8 & 0xffffffff00000000);
      iVar3 = FUN_140ca5fc0(param_1,*(undefined8 *)(puVar10 + 2),*puVar10,param_4);
      uVar12 = (uint)(0 < iVar3);
      uVar13 = 0;
      break;
    default:
      uVar12 = FUN_140c27000(param_1,puVar10,*(undefined4 *)(param_7 + 0x10));
      uVar13 = local_b8;
    }
    if ((uVar12 != 0) && (uVar13 != 0)) {
      FUN_140b73bf0(param_1,&DAT_1413a7288);
    }
  }
LAB_140c295b9:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_58 ^ (ulonglong)auStack_e8);
}

