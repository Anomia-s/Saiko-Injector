/**
 * Function: obj_create
 * Address:  140b96c60
 * Signature: undefined obj_create(void)
 * Body size: 626 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 obj_create(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  uVar3 = 0;
  if (param_1 == 0) {
    if (param_2 != 0) {
LAB_140b96cd7:
      iVar1 = FUN_140b96b00(param_2);
      if (iVar1 != 0) goto LAB_140b96cf4;
      goto LAB_140b96ce3;
    }
    if (param_3 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\objects\\obj_dat.c",0x312,"OBJ_create")
      ;
      FUN_140b91cc0(8,0x80106,0);
      return 0;
    }
  }
  else {
    if (param_2 != 0) goto LAB_140b96cd7;
LAB_140b96ce3:
    if (param_3 == 0) goto LAB_140b96d34;
  }
  iVar1 = FUN_140b969d0(param_3);
  if (iVar1 != 0) {
LAB_140b96cf4:
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\objects\\obj_dat.c",0x319,"OBJ_create");
    FUN_140b91cc0(8,0x66,0);
    return 0;
  }
LAB_140b96d34:
  if (param_1 == 0) {
    plVar4 = (longlong *)FUN_140bde710();
    if (plVar4 == (longlong *)0x0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\objects\\obj_dat.c",0x326,"OBJ_create")
      ;
      FUN_140b91cc0(8,0x8000d,0);
      return 0;
    }
  }
  else {
    plVar4 = (longlong *)FUN_140b964e0(param_1,1);
    if (plVar4 == (longlong *)0x0) {
      return 0;
    }
  }
  openssl_init_crypto(0x40,0);
  iVar2 = FUN_140b8b890(&DAT_1416ff9b0,FUN_140b97050);
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = DAT_1416ff9b4;
  }
  if ((iVar1 != 0) && (iVar1 = FUN_140b8b770(DAT_1416ff9a8), iVar1 != 0)) {
    if ((param_1 == 0) || (iVar1 = FUN_140b977e0(plVar4,0), iVar1 == 0)) {
      iVar1 = DAT_14150f974;
      LOCK();
      UNLOCK();
      iVar2 = DAT_14150f974 + 1;
      *(int *)(plVar4 + 2) = DAT_14150f974;
      DAT_14150f974 = iVar2;
      if (iVar1 != 0) {
        *plVar4 = param_2;
        plVar4[1] = param_3;
        uVar3 = FUN_140b974a0(plVar4,0);
        *plVar4 = 0;
        plVar4[1] = 0;
      }
    }
    else {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\objects\\obj_dat.c",0x334,"OBJ_create")
      ;
      FUN_140b91cc0(8,0x66,0);
    }
    FUN_140b8b7a0(DAT_1416ff9a8);
    FUN_140bde750(plVar4);
    return uVar3;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\objects\\obj_dat.c",0x32c,"OBJ_create");
  FUN_140b91cc0(8,0xc0110,0);
  FUN_140bde750(plVar4);
  return 0;
}

