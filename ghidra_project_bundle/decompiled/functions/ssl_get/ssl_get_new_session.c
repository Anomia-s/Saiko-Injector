/**
 * Function: ssl_get_new_session
 * Address:  140ba4ce0
 * Signature: undefined ssl_get_new_session(void)
 * Body size: 628 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_get_new_session(longlong param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  iVar1 = openssl_init_ssl(0x200000,0);
  if ((iVar1 != 0) &&
     (puVar2 = (undefined4 *)FUN_140b8da80(0x398,"ssl\\ssl_sess.c",0x6d),
     puVar2 != (undefined4 *)0x0)) {
    *(undefined1 *)(puVar2 + 0xd4) = 0xff;
    puVar2[0xb4] = 1;
    *(undefined8 *)(puVar2 + 0xb6) = 304000000000;
    lVar3 = FUN_140c21250();
    lVar5 = -1;
    *(longlong *)(puVar2 + 0xb8) = lVar3;
    if (-lVar3 - 1U < *(ulonglong *)(puVar2 + 0xb6)) {
      lVar3 = -1;
    }
    else {
      lVar3 = lVar3 + *(ulonglong *)(puVar2 + 0xb6);
    }
    *(longlong *)(puVar2 + 0xba) = lVar3;
    puVar2[0xe4] = 1;
    iVar1 = FUN_140b8cf40(2,puVar2,puVar2 + 0xc2);
    if (iVar1 != 0) {
      uVar4 = *(ulonglong *)(*(longlong *)(param_1 + 0xb80) + 0x58);
      if (uVar4 == 0) {
        uVar4 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0xd0))();
      }
      *(ulonglong *)(puVar2 + 0xb6) = uVar4;
      if (uVar4 <= ~*(ulonglong *)(puVar2 + 0xb8)) {
        lVar5 = *(ulonglong *)(puVar2 + 0xb8) + uVar4;
      }
      *(longlong *)(puVar2 + 0xba) = lVar5;
      FUN_140ba4520(*(undefined8 *)(param_1 + 0x8f8));
      *(undefined8 *)(param_1 + 0x8f8) = 0;
      if ((param_2 == 0) ||
         ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0 &&
           (iVar1 = **(int **)(param_1 + 0x18), 0x303 < iVar1)) && (iVar1 != 0x10000)))) {
        *(undefined8 *)(puVar2 + 0x94) = 0;
      }
      else {
        iVar1 = ssl_generate_session_id(param_1,puVar2);
        if (iVar1 == 0) {
          FUN_140ba4520(puVar2);
          return 0;
        }
      }
      if (0x20 < *(ulonglong *)(param_1 + 0x8d0)) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\ssl_sess.c",0x1dd,"ssl_get_new_session")
        ;
        FUN_140ba3290(param_1,0x50,0xc0103,0);
        FUN_140ba4520(puVar2);
        return 0;
      }
      memcpy(puVar2 + 0xa0,(void *)(param_1 + 0x8d8),*(ulonglong *)(param_1 + 0x8d0));
      *(undefined8 *)(puVar2 + 0x9e) = *(undefined8 *)(param_1 + 0x8d0);
      *(undefined4 **)(param_1 + 0x8f8) = puVar2;
      *puVar2 = *(undefined4 *)(param_1 + 0x48);
      puVar2[0xb4] = 0;
      if ((*(uint *)(param_1 + 0x160) & 0x200) != 0) {
        puVar2[0xdc] = puVar2[0xdc] | 1;
      }
      return 1;
    }
    FUN_140b8d990(puVar2,"ssl\\ssl_sess.c",0x7e);
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\ssl_sess.c",0x1bd,"ssl_get_new_session");
  FUN_140ba3290(param_1,0x50,0x80014,0);
  return 0;
}

