/**
 * Function: bio_write_intern
 * Address:  140b74a80
 * Signature: undefined bio_write_intern(void)
 * Body size: 540 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong bio_write_intern(longlong param_1,undefined8 param_2,ulonglong param_3,ulonglong *param_4)

{
  int iVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong local_res8;
  
  if (param_4 != (ulonglong *)0x0) {
    *param_4 = 0;
  }
  if (param_1 == 0) {
    return 0;
  }
  if ((*(longlong *)(param_1 + 8) == 0) || (*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) == 0))
  {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\bio\\bio_lib.c",0x156,"bio_write_intern")
    ;
    FUN_140b91cc0(0x20,0x79,0);
    return 0xfffffffe;
  }
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      pcVar2 = *(code **)(param_1 + 0x18);
LAB_140b74af3:
      uVar3 = (*pcVar2)(param_1,3,param_2,param_3,0,0,1,0);
      goto LAB_140b74b3d;
    }
  }
  else {
    pcVar2 = *(code **)(param_1 + 0x18);
    if (pcVar2 != (code *)0x0) goto LAB_140b74af3;
    if (0x7fffffff < param_3) {
      return 0xffffffff;
    }
    uVar3 = (**(code **)(param_1 + 0x10))(param_1,3,param_2,param_3 & 0xffffffff,0,1);
LAB_140b74b3d:
    if ((int)uVar3 < 1) {
      return uVar3;
    }
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\bio\\bio_lib.c",0x160,"bio_write_intern")
    ;
    FUN_140b91cc0(0x20,0x78,0);
    return 0xffffffff;
  }
  uVar3 = (**(code **)(*(longlong *)(param_1 + 8) + 0x10))(param_1,param_2,param_3,&local_res8);
  iVar1 = (int)uVar3;
  if (0 < iVar1) {
    *(longlong *)(param_1 + 0x68) = *(longlong *)(param_1 + 0x68) + local_res8;
  }
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    if (*(longlong *)(param_1 + 0x18) == 0) goto LAB_140b74bf6;
    pcVar2 = *(code **)(param_1 + 0x18);
  }
  else {
    pcVar2 = *(code **)(param_1 + 0x18);
    if (pcVar2 == (code *)0x0) {
      if (param_3 < 0x80000000) {
        if (0 < iVar1) {
          if (0x7fffffff < local_res8) {
            uVar3 = 0xffffffff;
            goto LAB_140b74bf6;
          }
          uVar3 = local_res8 & 0xffffffff;
        }
        uVar3 = (**(code **)(param_1 + 0x10))
                          (param_1,0x83,param_2,param_3 & 0xffffffff,0,(int)uVar3);
        if (0 < (int)uVar3) {
          local_res8 = (ulonglong)(int)uVar3;
          uVar3 = 1;
        }
      }
      else {
        uVar3 = 0xffffffff;
      }
      goto LAB_140b74bf6;
    }
  }
  uVar3 = (*pcVar2)(param_1,0x83,param_2,param_3,0,0,iVar1,&local_res8);
LAB_140b74bf6:
  if (param_4 != (ulonglong *)0x0) {
    *param_4 = local_res8;
    return uVar3;
  }
  return uVar3;
}

