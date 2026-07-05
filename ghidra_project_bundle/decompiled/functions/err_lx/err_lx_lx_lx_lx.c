/**
 * Function: err_lx_lx_lx_lx
 * Address:  140b92d70
 * Signature: undefined err_lx_lx_lx_lx(void)
 * Body size: 702 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void err_lx_lx_lx_lx(uint param_1,undefined8 param_2,char *param_3,longlong param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  size_t sVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint uVar9;
  undefined1 auStack_208 [32];
  undefined1 *local_1e8;
  undefined8 local_1e0;
  undefined1 *local_1d8;
  undefined8 local_1c8;
  uint local_1c0 [4];
  int local_1b0 [6];
  undefined1 local_198 [64];
  undefined1 local_158 [256];
  ulonglong local_58;
  
  if (param_4 == 0) {
    return;
  }
  local_58 = DAT_1414ef3c0 ^ (ulonglong)auStack_208;
  uVar7 = param_1 >> 0x17;
  uVar9 = 2;
  if (-1 < (int)param_1) {
    uVar9 = uVar7 & 0xff;
  }
  local_1c8 = param_2;
  iVar2 = FUN_140b8b890(&DAT_1416ff87c,FUN_140b93100);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = DAT_1416ff890;
  }
  if (iVar3 == 0) {
LAB_140b92e54:
    FUN_140c07aa0(local_198,0x40,"lib(%lu)",uVar9);
    puVar8 = local_198;
  }
  else {
    bVar1 = (byte)uVar7;
    if ((int)param_1 < 0) {
      bVar1 = 2;
    }
    local_1b0[0] = (uint)bVar1 << 0x17;
    iVar3 = FUN_140b8b750(DAT_1416ff880);
    if (iVar3 == 0) goto LAB_140b92e54;
    lVar4 = FUN_140b91690(DAT_1416ff888,local_1b0);
    FUN_140b8b7a0(DAT_1416ff880);
    if ((lVar4 == 0) || (puVar8 = *(undefined1 **)(lVar4 + 8), puVar8 == (undefined1 *)0x0))
    goto LAB_140b92e54;
  }
  uVar6 = ((int)param_1 >> 0x1f & 0x7f800000U) + 0x7fffff & param_1;
  if ((int)param_1 < 0) {
    iVar3 = FUN_140b8c940(uVar6,local_158,0x100);
    local_1d8 = local_158;
    if (iVar3 == 0) {
      local_1d8 = (undefined1 *)0x0;
    }
    goto LAB_140b92f71;
  }
  iVar2 = FUN_140b8b890(&DAT_1416ff87c);
  local_1d8 = (undefined1 *)0x0;
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = DAT_1416ff890;
  }
  if (iVar3 == 0) goto LAB_140b92f71;
  local_1c0[0] = (uVar7 & 0xff) << 0x17 | param_1 & 0x7fffff;
  iVar3 = FUN_140b8b750(DAT_1416ff880);
  if (iVar3 == 0) {
LAB_140b92f2b:
    local_1c0[0] = param_1 & 0x7fffff;
    iVar3 = FUN_140b8b750();
    if (iVar3 != 0) {
      lVar4 = FUN_140b91690(DAT_1416ff888,local_1c0);
      FUN_140b8b7a0();
      if (lVar4 != 0) goto LAB_140b92f64;
    }
    local_1d8 = (undefined1 *)0x0;
    param_2 = local_1c8;
  }
  else {
    lVar4 = FUN_140b91690(DAT_1416ff888,local_1c0);
    FUN_140b8b7a0(DAT_1416ff880);
    if (lVar4 == 0) goto LAB_140b92f2b;
LAB_140b92f64:
    local_1d8 = *(undefined1 **)(lVar4 + 8);
    param_2 = local_1c8;
  }
LAB_140b92f71:
  if (local_1d8 == (undefined1 *)0x0) {
    FUN_140c07aa0(local_158,0x100,"reason(%lu)",uVar6 & 0xff83ffff);
    local_1d8 = local_158;
  }
  local_1e8 = puVar8;
  local_1e0 = param_2;
  FUN_140c07aa0(param_3,param_4,"error:%08lX:%s:%s:%s",param_1);
  sVar5 = strlen(param_3);
  if (sVar5 == param_4 - 1U) {
    local_1d8 = (undefined1 *)CONCAT44(local_1d8._4_4_,uVar6);
    local_1e0 = 0;
    local_1e8 = (undefined1 *)CONCAT44(local_1e8._4_4_,uVar9);
    FUN_140c07aa0(param_3,param_4,"err:%lx:%lx:%lx:%lx",param_1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_58 ^ (ulonglong)auStack_208);
}

