/**
 * Function: aes_ocb_init_key
 * Address:  140b8a8e0
 * Signature: undefined aes_ocb_init_key(void)
 * Body size: 457 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 aes_ocb_init_key(undefined8 param_1,longlong param_2,void *param_3)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  code *pcVar5;
  
  lVar2 = FUN_140b987a0();
  if (param_3 == (void *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_2 == 0) {
    if (*(int *)(lVar2 + 0x1f0) == 0) {
      memcpy(*(void **)(lVar2 + 0x2a8),param_3,(longlong)*(int *)(lVar2 + 0x2e8));
    }
    else {
      FUN_140c1fd20(lVar2 + 0x1f8,param_3,(longlong)*(int *)(lVar2 + 0x2e8),
                    (longlong)*(int *)(lVar2 + 0x2ec));
    }
    *(undefined4 *)(lVar2 + 500) = 1;
    return 1;
  }
  iVar1 = FUN_140b981e0(param_1);
  iVar4 = iVar1 << 3;
  if (iVar1 << 3 < 1) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\evp\\e_aes.c",0xf52,"aes_ocb_init_key");
    FUN_140b91cc0(6,0x82,0);
  }
  else {
    if ((DAT_1416f2384 & 0x200) == 0) {
      FUN_14076e170(param_2,iVar4,lVar2);
      FUN_14076e450(param_2,iVar4,lVar2 + 0xf8);
      pcVar3 = FUN_14076e090;
      pcVar5 = FUN_14076dae0;
    }
    else {
      FUN_14076f570();
      FUN_14076f650(param_2,iVar4,lVar2 + 0xf8);
      pcVar3 = (code *)&DAT_14076f810;
      pcVar5 = (code *)&DAT_14076f740;
    }
    iVar1 = FUN_140c1fa90(lVar2 + 0x1f8,lVar2,lVar2 + 0xf8,pcVar5,pcVar3,0);
    if (iVar1 != 0) {
      if ((param_3 != (void *)0x0) ||
         ((*(int *)(lVar2 + 500) != 0 &&
          (param_3 = *(void **)(lVar2 + 0x2a8), param_3 != (void *)0x0)))) {
        iVar1 = FUN_140c1fd20(lVar2 + 0x1f8,param_3,(longlong)*(int *)(lVar2 + 0x2e8),
                              (longlong)*(int *)(lVar2 + 0x2ec));
        if (iVar1 != 1) {
          return 0;
        }
        *(undefined4 *)(lVar2 + 500) = 1;
      }
      *(undefined4 *)(lVar2 + 0x1f0) = 1;
      return 1;
    }
  }
  return 0;
}

