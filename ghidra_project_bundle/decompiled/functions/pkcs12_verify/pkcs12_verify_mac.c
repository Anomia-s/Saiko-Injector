/**
 * Function: pkcs12_verify_mac
 * Address:  140d00b90
 * Signature: undefined pkcs12_verify_mac(void)
 * Body size: 623 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void pkcs12_verify_mac(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_e8 [32];
  int *local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  int local_a8 [2];
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88 [2];
  undefined1 local_78 [64];
  ulonglong local_38;
  
  local_38 = DAT_1414ef3c0 ^ (ulonglong)auStack_e8;
  if (*(undefined8 **)(param_1 + 8) == (undefined8 *)0x0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\pkcs12\\p12_mutl.c",0x130,"PKCS12_verify_mac");
    FUN_140b91cc0(0x23,0x6c,0);
    goto LAB_140d00ca7;
  }
  FUN_140c6ea90(**(undefined8 **)(param_1 + 8),&local_a0,0);
  FUN_140bdf8f0(&local_90,0,0,local_a0);
  iVar1 = FUN_140b964c0(local_90);
  if (iVar1 == 0xa2) {
    uVar5 = *(undefined8 *)(local_a0 + 8);
    uVar3 = FUN_140d00260();
    lVar4 = FUN_140bec440(uVar3,uVar5);
    if (lVar4 != 0) {
      FUN_140bdf8f0(local_88,0,0,*(undefined8 *)(lVar4 + 8));
      uVar2 = FUN_140b964c0(local_88[0]);
      local_c0 = FUN_140b71c80(uVar2);
      local_b0 = 0;
      local_b8 = 0;
      local_c8 = local_a8;
      iVar1 = FUN_140d010a0(param_1,param_2,param_3,local_78);
      if (iVar1 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\pkcs12\\p12_mutl.c",0x144,"PKCS12_verify_mac");
        FUN_140b91cc0(0x23,0x6d,0);
        FUN_140d00240(lVar4);
        goto LAB_140d00ca7;
      }
      FUN_140d00240(lVar4);
LAB_140d00d5b:
      FUN_140c6ea90(**(undefined8 **)(param_1 + 8),0,&local_98);
      iVar1 = FUN_140b78ee0(local_98);
      if (local_a8[0] == iVar1) {
        uVar5 = FUN_140b76c30(local_98);
        FUN_14046e9f0(local_78,uVar5,local_a8[0]);
      }
      goto LAB_140d00ca7;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\pkcs12\\p12_mutl.c",0x13d,"PKCS12_verify_mac");
    uVar5 = 0x8010c;
  }
  else {
    local_c8 = local_a8;
    local_b0 = 0;
    local_b8 = 0;
    local_c0 = 0;
    iVar1 = FUN_140d010a0(param_1,param_2,param_3,local_78);
    if (iVar1 != 0) goto LAB_140d00d5b;
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\pkcs12\\p12_mutl.c",0x14b,"PKCS12_verify_mac");
    uVar5 = 0x6d;
  }
  FUN_140b91cc0(0x23,uVar5,0);
LAB_140d00ca7:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_38 ^ (ulonglong)auStack_e8);
}

