/**
 * Function: bio_read_intern
 * Address:  140b747f0
 * Signature: undefined bio_read_intern(void)
 * Body size: 653 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong bio_read_intern(longlong param_1,undefined8 param_2,ulonglong param_3,ulonglong *param_4)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  ulonglong uVar4;
  
  if (param_1 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\bio\\bio_lib.c",0x10b,"bio_read_intern");
    FUN_140b91cc0(0x20,0xc0102,0);
    return 0xffffffff;
  }
  if ((*(longlong *)(param_1 + 8) == 0) || (*(longlong *)(*(longlong *)(param_1 + 8) + 0x20) == 0))
  {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\bio\\bio_lib.c",0x10f,"bio_read_intern");
    FUN_140b91cc0(0x20,0x79,0);
    return 0xfffffffe;
  }
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      pcVar3 = *(code **)(param_1 + 0x18);
LAB_140b74893:
      uVar1 = (*pcVar3)(param_1,2,param_2,param_3,0,0,1,0);
      goto LAB_140b748e6;
    }
  }
  else {
    pcVar3 = *(code **)(param_1 + 0x18);
    if (pcVar3 != (code *)0x0) goto LAB_140b74893;
    if (0x7fffffff < param_3) {
      return 0xffffffff;
    }
    uVar1 = (**(code **)(param_1 + 0x10))(param_1,2,param_2,param_3 & 0xffffffff,0,1);
LAB_140b748e6:
    if ((int)uVar1 < 1) {
      return (ulonglong)uVar1;
    }
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\bio\\bio_lib.c",0x119,"bio_read_intern");
    FUN_140b91cc0(0x20,0x78,0);
    return 0xffffffff;
  }
  uVar4 = (**(code **)(*(longlong *)(param_1 + 8) + 0x20))(param_1,param_2,param_3,param_4);
  iVar2 = (int)uVar4;
  if (0 < iVar2) {
    *(longlong *)(param_1 + 0x60) = *(longlong *)(param_1 + 0x60) + *param_4;
  }
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    if (*(longlong *)(param_1 + 0x18) == 0) goto LAB_140b749fd;
    pcVar3 = *(code **)(param_1 + 0x18);
  }
  else {
    pcVar3 = *(code **)(param_1 + 0x18);
    if (pcVar3 == (code *)0x0) {
      if (param_3 < 0x80000000) {
        if ((iVar2 < 1) || (uVar4 = *param_4, uVar4 < 0x80000000)) {
          uVar4 = (**(code **)(param_1 + 0x10))
                            (param_1,0x82,param_2,param_3 & 0xffffffff,0,(int)uVar4);
          if ((int)uVar4 < 1) {
            return uVar4;
          }
          *param_4 = (longlong)(int)uVar4;
          uVar4 = 1;
        }
        else {
          uVar4 = 0xffffffff;
        }
      }
      else {
        uVar4 = 0xffffffff;
      }
      goto LAB_140b749fd;
    }
  }
  uVar4 = (*pcVar3)(param_1,0x82,param_2,param_3,0,0,iVar2,param_4);
LAB_140b749fd:
  if ((0 < (int)uVar4) && (param_3 < *param_4)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\bio\\bio_lib.c",0x128,"bio_read_intern");
    FUN_140b91cc0(0x20,0xc0103,0);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

