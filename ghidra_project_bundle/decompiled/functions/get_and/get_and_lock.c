/**
 * Function: get_and_lock
 * Address:  140b8d660
 * Signature: undefined get_and_lock(void)
 * Body size: 488 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void get_and_lock(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [80];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x140b8d677;
  local_58 = DAT_1414ef3c0 ^ (ulonglong)auStack_d8;
  puVar5 = (undefined1 *)0x0;
  plVar4 = (longlong *)FUN_140c17820();
  if (plVar4 == (longlong *)0x0) goto LAB_140b8d838;
  if (0x11 < param_2) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\ex_data.c",0x25,"get_and_lock");
    FUN_140b91cc0(0xf,0x80106,0);
    goto LAB_140b8d838;
  }
  if (((*plVar4 == 0) || (iVar3 = FUN_140b8b750(), iVar3 == 0)) ||
     (plVar1 = plVar4 + (longlong)(int)param_2 + 1, plVar1 == (longlong *)0x0)) goto LAB_140b8d838;
  *param_4 = param_1;
  param_4[1] = 0;
  iVar3 = FUN_140b77980(*plVar1);
  lVar7 = (longlong)iVar3;
  if (iVar3 < 1) {
LAB_140b8d756:
    FUN_140b8b7a0(*plVar4);
    if (0 < iVar3) goto LAB_140b8d766;
  }
  else {
    if (iVar3 < 10) {
      puVar5 = local_a8;
    }
    else {
      puVar5 = (undefined1 *)FUN_140b8d8d0(lVar7 * 8,"crypto\\ex_data.c",0xf3);
      if (puVar5 == (undefined1 *)0x0) goto LAB_140b8d756;
    }
    iVar9 = 0;
    if (iVar3 < 1) goto LAB_140b8d756;
    lVar8 = 0;
    do {
      uVar6 = FUN_140b77990(*plVar1,iVar9);
      *(undefined8 *)(puVar5 + lVar8 * 8) = uVar6;
      iVar9 = iVar9 + 1;
      lVar8 = lVar8 + 1;
    } while (lVar8 < lVar7);
    FUN_140b8b7a0(*plVar4);
LAB_140b8d766:
    if (puVar5 == (undefined1 *)0x0) goto LAB_140b8d838;
  }
  iVar3 = 0;
  if (0 < lVar7) {
    lVar8 = 0;
    do {
      if ((*(longlong *)(puVar5 + lVar8 * 8) != 0) &&
         (*(longlong *)(*(longlong *)(puVar5 + lVar8 * 8) + 0x18) != 0)) {
        if ((param_4[1] == 0) || (iVar9 = FUN_140b77980(), iVar9 <= iVar3)) {
          uVar6 = 0;
        }
        else {
          uVar6 = FUN_140b77990(param_4[1],iVar3);
        }
        puVar2 = *(undefined4 **)(puVar5 + lVar8 * 8);
        local_b0 = *(undefined8 *)(puVar2 + 2);
        local_b8 = *puVar2;
        (**(code **)(puVar2 + 6))(param_3,uVar6,param_4,iVar3);
      }
      iVar3 = iVar3 + 1;
      lVar8 = lVar8 + 1;
    } while (lVar8 < lVar7);
  }
  if (puVar5 != local_a8) {
    FUN_140b8d990(puVar5,"crypto\\ex_data.c",0x104);
  }
LAB_140b8d838:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_58 ^ (ulonglong)auStack_d8);
}

