/**
 * Function: ssl_generate_session_id
 * Address:  140ba4a40
 * Signature: undefined ssl_generate_session_id(void)
 * Body size: 658 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_generate_session_id(longlong param_1,longlong param_2)

{
  code *pcVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  uint local_res8 [2];
  
  iVar2 = *(int *)(param_1 + 0x48);
  if (iVar2 < 0x304) {
    if ((((iVar2 == 0x303) || (iVar2 == 0x100)) || (iVar2 == 0x300)) || (iVar2 == 0x301))
    goto LAB_140ba4ade;
    bVar5 = iVar2 == 0x302;
  }
  else {
    if ((iVar2 == 0x304) || (iVar2 == 0xfefd)) goto LAB_140ba4ade;
    bVar5 = iVar2 == 0xfeff;
  }
  if (!bVar5) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\ssl_sess.c",0x171,"ssl_generate_session_id")
    ;
    FUN_140ba3290(param_1,0x50,0x103,0);
    return 0;
  }
LAB_140ba4ade:
  *(undefined8 *)(param_2 + 0x250) = 0x20;
  if (*(int *)(param_1 + 0xa58) != 0) {
    *(undefined8 *)(param_2 + 0x250) = 0;
    return 1;
  }
  iVar2 = FUN_140b8b750(*(undefined8 *)(param_1 + 0x28));
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = FUN_140b8b750(*(undefined8 *)(*(longlong *)(param_1 + 0xb80) + 0x3e0));
  if (iVar2 == 0) {
    FUN_140b8b7a0(*(undefined8 *)(param_1 + 0x28));
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\ssl_sess.c",399,"ssl_generate_session_id");
    FUN_140ba3290(param_1,0x50,0x115,0);
    return 0;
  }
  pcVar3 = *(code **)(param_1 + 0x918);
  if (*(code **)(param_1 + 0x918) == (code *)0x0) {
    pcVar1 = *(code **)(*(longlong *)(param_1 + 0xb80) + 0x1b8);
    pcVar3 = FUN_140ba5c40;
    if (pcVar1 != (code *)0x0) {
      pcVar3 = pcVar1;
    }
  }
  FUN_140b8b7a0(*(undefined8 *)(*(longlong *)(param_1 + 0xb80) + 0x3e0));
  FUN_140b8b7a0(*(undefined8 *)(param_1 + 0x28));
  memset((void *)(param_2 + 600),0,*(size_t *)(param_2 + 0x250));
  local_res8[0] = *(uint *)(param_2 + 0x250);
  iVar2 = (*pcVar3)(param_1,param_2 + 600,local_res8);
  if (iVar2 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\ssl_sess.c",0x19e,"ssl_generate_session_id")
    ;
    uVar4 = 0x12d;
  }
  else if ((local_res8[0] == 0) || (*(ulonglong *)(param_2 + 0x250) < (ulonglong)local_res8[0])) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\ssl_sess.c",0x1a8,"ssl_generate_session_id")
    ;
    uVar4 = 0x12f;
  }
  else {
    *(ulonglong *)(param_2 + 0x250) = (ulonglong)local_res8[0];
    iVar2 = FUN_140b6ade0(param_1,param_2 + 600,local_res8[0]);
    if (iVar2 == 0) {
      return 1;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\ssl_sess.c",0x1af,"ssl_generate_session_id")
    ;
    uVar4 = 0x12e;
  }
  FUN_140ba3290(param_1,0x50,uVar4,0);
  return 0;
}

