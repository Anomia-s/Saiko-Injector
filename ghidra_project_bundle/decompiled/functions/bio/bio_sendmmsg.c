/**
 * Function: bio_sendmmsg
 * Address:  140b738f0
 * Signature: undefined bio_sendmmsg(void)
 * Body size: 660 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong bio_sendmmsg(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 *param_6)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  code *pcVar6;
  ulonglong in_stack_ffffffffffffff88;
  uint uVar7;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x140b73902;
  if (param_1 == 0) {
    *param_6 = 0;
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\bio\\bio_lib.c",0x193,"BIO_sendmmsg");
    FUN_140b91cc0(0x20,0xc0102,0);
    return 0;
  }
  if ((*(longlong *)(param_1 + 8) == 0) || (*(longlong *)(*(longlong *)(param_1 + 8) + 0x60) == 0))
  {
    *param_6 = 0;
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\bio\\bio_lib.c",0x199,"BIO_sendmmsg");
    FUN_140b91cc0(0x20,0x79,0);
    return 0;
  }
  plVar1 = (longlong *)(param_1 + 0x18);
  if ((*(code **)(param_1 + 0x10) != (code *)0x0) || (*plVar1 != 0)) {
    local_40 = param_5;
    local_38 = param_6;
    local_58 = param_2;
    local_50 = param_3;
    local_48 = param_4;
    if ((code *)*plVar1 == (code *)0x0) {
      iVar2 = (**(code **)(param_1 + 0x10))
                        (param_1,8,&local_58,0,in_stack_ffffffffffffff88 & 0xffffffff00000000,1);
    }
    else {
      iVar2 = (*(code *)*plVar1)();
    }
    if (iVar2 == 0) {
      return 0;
    }
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    *param_6 = 0;
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\bio\\bio_lib.c",0x1ac,"BIO_sendmmsg");
    FUN_140b91cc0(0x20,0x78,0);
    return 0;
  }
  uVar4 = (**(code **)(*(longlong *)(param_1 + 8) + 0x60))
                    (param_1,param_2,param_3,param_4,param_5,param_6);
  iVar2 = (int)uVar4;
  uVar5 = (ulonglong)iVar2;
  uVar7 = (uint)((ulonglong)param_6 >> 0x20);
  uVar3 = (uint)((ulonglong)param_5 >> 0x20);
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    if (*plVar1 == 0) {
LAB_140b73b33:
      return uVar5 & 0xffffffff;
    }
    pcVar6 = (code *)*plVar1;
  }
  else {
    pcVar6 = (code *)*plVar1;
    if (pcVar6 == (code *)0x0) {
      if ((0 < iVar2) && (uVar4 = _DAT_00000000, 0x7fffffff < _DAT_00000000)) {
        return 0xffffffff;
      }
      iVar2 = (**(code **)(param_1 + 0x10))
                        (param_1,0x88,&local_58,0,(ulonglong)uVar3 << 0x20,
                         CONCAT44(uVar7,(int)uVar4));
      if (0 < iVar2) {
        _DAT_00000000 = (ulonglong)iVar2;
        iVar2 = 1;
      }
      uVar5 = (ulonglong)iVar2;
      goto LAB_140b73b33;
    }
  }
  uVar3 = (*pcVar6)(param_1,0x88,&local_58,uVar5,(ulonglong)uVar3 << 0x20,(ulonglong)uVar7 << 0x20,
                    iVar2,0);
  return (ulonglong)uVar3;
}

