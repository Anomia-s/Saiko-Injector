/**
 * Function: is_zu_should_be_at_least_zu
 * Address:  140daab90
 * Signature: undefined is_zu_should_be_at_least_zu(void)
 * Body size: 930 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void is_zu_should_be_at_least_zu
               (longlong *param_1,undefined1 *param_2,undefined1 *param_3,longlong param_4,
               undefined8 *param_5,undefined1 *param_6,ulonglong param_7)

{
  longlong lVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_198 [32];
  undefined1 *local_178;
  undefined1 *local_170;
  undefined1 *local_168;
  undefined8 local_160;
  ulonglong local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  ulonglong local_140;
  undefined1 *local_138;
  undefined8 *local_130;
  undefined1 *local_128;
  longlong local_120;
  longlong local_118;
  undefined8 *local_110;
  undefined1 local_108 [56];
  undefined1 local_d0 [32];
  undefined1 local_b0 [32];
  undefined1 local_90 [56];
  ulonglong local_58;
  
  local_58 = DAT_1414ef3c0 ^ (ulonglong)auStack_198;
  lVar1 = *param_1;
  local_110 = param_5;
  local_158 = param_7;
  local_120 = *(longlong *)(lVar1 + 0xa0);
  local_130 = *(undefined8 **)(lVar1 + 0xb0);
  local_118 = *(longlong *)(lVar1 + 0xa8);
  puVar6 = (undefined1 *)(ulonglong)*(uint *)(local_120 + 0x34);
  uVar7 = (ulonglong)(*(int *)(local_120 + 0x24) * *(int *)(local_120 + 0x20) + 7U >> 3);
  local_150 = param_2;
  local_128 = param_3;
  if (param_4 == 0) {
    *param_5 = puVar6;
  }
  else if (param_6 < puVar6) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\slh_dsa\\slh_dsa.c",0x49,"slh_sign_internal");
    local_178 = puVar6;
    FUN_140b91cc0(0x39,0xb3,"is %zu, should be at least %zu",param_6);
  }
  else if (*(int *)(lVar1 + 0x98) == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\slh_dsa\\slh_dsa.c",0x4f,"slh_sign_internal");
    FUN_140b91cc0(0x39,0x80,0);
  }
  else {
    iVar3 = FUN_140c21d10(local_108,param_4,puVar6,0);
    if (iVar3 != 0) {
      local_148 = local_90;
      local_140 = (ulonglong)*(uint *)(local_120 + 0x28);
      uVar8 = (ulonglong)(uint)(*(int *)(*(longlong *)(lVar1 + 0xa0) + 0x10) * 2) + lVar1;
      if (local_158 == 0) {
        local_158 = uVar8;
      }
      (**(code **)(local_118 + 0x48))(local_d0);
      local_138 = (undefined1 *)FUN_140c22760(local_108);
      local_170 = local_108;
      local_178 = local_128;
      iVar3 = (*(code *)local_130[2])
                        (param_1,(ulonglong)*(uint *)(*(longlong *)(lVar1 + 0xa0) + 0x10) + lVar1,
                         local_158,local_150);
      if (iVar3 != 0) {
        local_160 = 0x31;
        local_168 = local_90;
        local_170 = local_128;
        local_178 = local_150;
        iVar3 = (*(code *)*local_130)
                          (param_1,local_138,uVar8,
                           (ulonglong)(uint)(*(int *)(*(longlong *)(lVar1 + 0xa0) + 0x10) * 3) +
                           lVar1);
        if ((iVar3 != 0) && (uVar7 <= local_140)) {
          local_140 = local_140 - uVar7;
          local_138 = local_148;
          local_148 = local_148 + uVar7;
          iVar3 = FUN_140daaa80(&local_148,local_120,&local_150,&local_158);
          lVar5 = local_118;
          if (iVar3 != 0) {
            (**(code **)(local_118 + 8))(local_d0,local_150);
            (**(code **)(lVar5 + 0x10))(local_d0,3);
            (**(code **)(lVar5 + 0x18))(local_d0,local_158 & 0xffffffff);
            puVar4 = (undefined1 *)FUN_140c22760(local_108);
            puVar2 = local_138;
            local_170 = local_108;
            local_178 = local_d0;
            iVar3 = FUN_140db9350(param_1,local_138,lVar1,uVar8);
            if (iVar3 != 0) {
              lVar5 = FUN_140c22760(local_108);
              if ((ulonglong)(lVar5 - (longlong)puVar4) < 0x8000000000000000) {
                local_170 = local_b0;
                local_168 = &DAT_00000020;
                local_178 = local_d0;
                local_148 = puVar4;
                local_140 = lVar5 - (longlong)puVar4;
                iVar3 = FUN_140db95e0(param_1,&local_148,puVar2,uVar8);
                if (iVar3 != 0) {
                  local_168 = local_108;
                  local_170 = (undefined1 *)CONCAT44(local_170._4_4_,(undefined4)local_158);
                  local_178 = local_150;
                  FUN_140db9010(param_1,local_b0,lVar1,uVar8);
                }
              }
            }
            *local_110 = puVar6;
          }
        }
      }
      FUN_140c21e60(local_108);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_58 ^ (ulonglong)auStack_198);
}

