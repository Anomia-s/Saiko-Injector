/**
 * Function: dtls1_check_timeout_num
 * Address:  140bec730
 * Signature: undefined dtls1_check_timeout_num(void)
 * Body size: 580 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dtls1_check_timeout_num(longlong param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 local_res8;
  
  if (*(longlong *)(*(longlong *)(param_1 + 0x4f0) + 0x1c0) != 0) {
    uVar4 = FUN_140c21250();
    lVar6 = *(longlong *)(param_1 + 0x4f0);
    lVar7 = -1;
    if (*(ulonglong *)(lVar6 + 0x1c0) < uVar4) {
      iVar3 = -1;
      uVar4 = 0;
    }
    else {
      uVar4 = *(ulonglong *)(lVar6 + 0x1c0) - uVar4;
      if (uVar4 < 0xe4e1c1) {
        if (uVar4 < 15000000) {
          iVar3 = -1;
        }
        else {
          iVar3 = 0;
        }
      }
      else {
        iVar3 = 1;
      }
    }
    uVar8 = 0;
    if (0 < iVar3) {
      uVar8 = uVar4;
    }
    if (uVar8 == 0) {
      if (*(code **)(lVar6 + 0x1d0) == (code *)0x0) {
        *(int *)(lVar6 + 0x1c8) = *(int *)(lVar6 + 0x1c8) * 2;
        if (60000000 < *(uint *)(*(longlong *)(param_1 + 0x4f0) + 0x1c8)) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x4f0) + 0x1c8) = 60000000;
        }
      }
      else {
        uVar2 = (**(code **)(lVar6 + 0x1d0))(*(undefined8 *)(param_1 + 0x40));
        *(undefined4 *)(*(longlong *)(param_1 + 0x4f0) + 0x1c8) = uVar2;
      }
      piVar1 = (int *)(*(longlong *)(param_1 + 0x4f0) + 0x1b8);
      *piVar1 = *piVar1 + 1;
      if (2 < *(uint *)(*(longlong *)(param_1 + 0x4f0) + 0x1b8)) {
        uVar4 = FUN_140b69530(param_1);
        if ((uVar4 >> 0xc & 1) == 0) {
          uVar5 = FUN_140b6ac10(param_1);
          iVar3 = FUN_140b74190(uVar5,0x2f,0,0);
          if ((ulonglong)(longlong)iVar3 < *(ulonglong *)(*(longlong *)(param_1 + 0x4f0) + 0x130)) {
            *(longlong *)(*(longlong *)(param_1 + 0x4f0) + 0x130) = (longlong)iVar3;
          }
        }
      }
      lVar6 = *(longlong *)(param_1 + 0x4f0);
      if (0xc < *(uint *)(lVar6 + 0x1b8)) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\d1_lib.c",0x181,"dtls1_check_timeout_num");
        FUN_140ba3290(param_1,0xffffffff,0x138,0);
        return 0xffffffff;
      }
      if (*(longlong *)(lVar6 + 0x1c0) == 0) {
        if (*(code **)(lVar6 + 0x1d0) == (code *)0x0) {
          *(undefined4 *)(lVar6 + 0x1c8) = 1000000;
        }
        else {
          uVar2 = (**(code **)(lVar6 + 0x1d0))(param_1,0);
          *(undefined4 *)(lVar6 + 0x1c8) = uVar2;
        }
      }
      uVar4 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x4f0) + 0x1c8) * 1000;
      lVar6 = FUN_140c21250();
      if (uVar4 < -lVar6 - 1U || uVar4 - (-lVar6 - 1U) == 0) {
        lVar7 = lVar6 + uVar4;
      }
      *(longlong *)(*(longlong *)(param_1 + 0x4f0) + 0x1c0) = lVar7;
      lVar7 = *(longlong *)(param_1 + 0x4f0);
      uVar5 = FUN_140b6abb0(param_1);
      local_res8 = FUN_140bec4e0(*(undefined8 *)(lVar7 + 0x1c0));
      FUN_140b74190(uVar5,0x2d,0,&local_res8);
      uVar5 = FUN_140c338a0(param_1);
      return uVar5;
    }
  }
  return 0;
}

