/**
 * Function: slh_verify_internal
 * Address:  140daaf50
 * Signature: undefined slh_verify_internal(void)
 * Body size: 622 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void slh_verify_internal(longlong *param_1,undefined1 *param_2,undefined1 *param_3,longlong param_4,
                        ulonglong param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  longlong lVar10;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  undefined8 local_f0;
  undefined8 *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [56];
  ulonglong local_40;
  
  local_40 = DAT_1414ef3c0 ^ (ulonglong)auStack_128;
  lVar1 = *param_1;
  lVar2 = *(longlong *)(lVar1 + 0xa0);
  local_e8 = *(undefined8 **)(lVar1 + 0xb0);
  lVar3 = *(longlong *)(lVar1 + 0xa8);
  uVar8 = (ulonglong)(*(int *)(lVar2 + 0x24) * *(int *)(lVar2 + 0x20) + 7U >> 3);
  local_e0 = param_2;
  local_d8 = param_3;
  if (*(longlong *)(lVar1 + 0x80) == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\slh_dsa\\slh_dsa.c",0xaa,"slh_verify_internal");
    FUN_140b91cc0(0x39,0x80,0);
  }
  else if (((param_5 == *(uint *)(lVar2 + 0x34)) && (param_5 < 0x8000000000000000)) &&
          (uVar7 = (ulonglong)*(uint *)(lVar2 + 0x10), uVar7 <= param_5)) {
    local_c8 = uVar7 + param_4;
    local_c0 = param_5 - uVar7;
    (**(code **)(lVar3 + 0x48))(local_b8);
    local_f8 = local_78;
    iVar6 = *(int *)(*(longlong *)(lVar1 + 0xa0) + 0x10);
    lVar10 = (ulonglong)(uint)(iVar6 * 2) + lVar1;
    puVar9 = (undefined1 *)((ulonglong)(uint)(iVar6 * 3) + lVar1);
    local_f0 = 0x31;
    local_100 = local_d8;
    local_108 = local_e0;
    iVar6 = (*(code *)*local_e8)(param_1,param_4,lVar10,puVar9);
    if ((iVar6 != 0) && (uVar8 < 0x32)) {
      local_d0 = 0x31 - uVar8;
      local_d8 = local_78 + uVar8;
      iVar6 = FUN_140daaa80(&local_d8,lVar2,&local_e0,&local_e8);
      puVar5 = local_e0;
      if (iVar6 != 0) {
        (**(code **)(lVar3 + 8))(local_b8,local_e0);
        (**(code **)(lVar3 + 0x10))(local_b8,3);
        uVar4 = local_e8._0_4_;
        (**(code **)(lVar3 + 0x18))(local_b8,(ulonglong)local_e8 & 0xffffffff);
        local_100 = local_98;
        local_f8 = &DAT_00000020;
        local_108 = local_b8;
        iVar6 = FUN_140db95e0(param_1,&local_c8,local_78,lVar10);
        if (iVar6 != 0) {
          local_100 = (undefined1 *)CONCAT44(local_100._4_4_,uVar4);
          local_108 = puVar5;
          local_f8 = puVar9;
          FUN_140db91e0(param_1,local_98,&local_c8,lVar10);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_40 ^ (ulonglong)auStack_128);
}

