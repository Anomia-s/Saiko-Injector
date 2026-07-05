/**
 * Function: ssl_session_dup_intern
 * Address:  140ba57f0
 * Signature: undefined ssl_session_dup_intern(void)
 * Body size: 1089 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * ssl_session_dup_intern(undefined8 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  
  puVar6 = (undefined8 *)FUN_140b8d8d0(0x398,"ssl\\ssl_sess.c",0x8c);
  if (puVar6 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  lVar9 = 7;
  puVar7 = param_1;
  puVar8 = puVar6;
  do {
    uVar4 = puVar7[1];
    *puVar8 = *puVar7;
    puVar8[1] = uVar4;
    uVar4 = puVar7[3];
    puVar8[2] = puVar7[2];
    puVar8[3] = uVar4;
    uVar4 = puVar7[5];
    puVar8[4] = puVar7[4];
    puVar8[5] = uVar4;
    uVar4 = puVar7[7];
    puVar8[6] = puVar7[6];
    puVar8[7] = uVar4;
    uVar4 = puVar7[9];
    puVar8[8] = puVar7[8];
    puVar8[9] = uVar4;
    uVar4 = puVar7[0xb];
    puVar8[10] = puVar7[10];
    puVar8[0xb] = uVar4;
    uVar4 = puVar7[0xd];
    puVar8[0xc] = puVar7[0xc];
    puVar8[0xd] = uVar4;
    uVar1 = *(undefined4 *)((longlong)puVar7 + 0x74);
    uVar2 = *(undefined4 *)(puVar7 + 0xf);
    uVar3 = *(undefined4 *)((longlong)puVar7 + 0x7c);
    *(undefined4 *)(puVar8 + 0xe) = *(undefined4 *)(puVar7 + 0xe);
    *(undefined4 *)((longlong)puVar8 + 0x74) = uVar1;
    *(undefined4 *)(puVar8 + 0xf) = uVar2;
    *(undefined4 *)((longlong)puVar8 + 0x7c) = uVar3;
    lVar9 = lVar9 + -1;
    puVar7 = puVar7 + 0x10;
    puVar8 = puVar8 + 0x10;
  } while (lVar9 != 0);
  puVar6[0x54] = 0;
  puVar6[0x55] = 0;
  puVar6[99] = 0;
  puVar6[100] = 0;
  puVar6[0x68] = 0;
  puVar6[0x6b] = 0;
  puVar6[0x59] = 0;
  puVar6[0x58] = 0;
  puVar6[0x57] = 0;
  puVar6[0x6c] = 0;
  puVar6[0x61] = 0;
  puVar6[0x62] = 0;
  puVar6[0x70] = 0;
  puVar6[0x71] = 0;
  puVar6[0x6f] = 0;
  *(undefined4 *)(puVar6 + 0x72) = 1;
  iVar5 = FUN_140b8cf40(2,puVar6,puVar6 + 0x61);
  if (iVar5 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\ssl_sess.c",0xb5,"ssl_session_dup_intern");
    FUN_140b91cc0(0x14,0x8000f,0);
    FUN_140ba4520(puVar6);
    return (undefined8 *)0x0;
  }
  if (param_1[0x58] != 0) {
    iVar5 = FUN_140b9f2d0();
    if (iVar5 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\ssl_sess.c",0xbb,"ssl_session_dup_intern")
      ;
      FUN_140b91cc0(0x14,0x8000b,0);
      FUN_140ba4520(puVar6);
      return (undefined8 *)0x0;
    }
    puVar6[0x58] = param_1[0x58];
  }
  if (param_1[0x59] != 0) {
    lVar9 = FUN_140b750c0();
    puVar6[0x59] = lVar9;
    if (lVar9 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\ssl_sess.c",0xc4,"ssl_session_dup_intern")
      ;
      FUN_140b91cc0(0x14,0x8000b,0);
      FUN_140ba4520(puVar6);
      return (undefined8 *)0x0;
    }
  }
  if (param_1[0x57] != 0) {
    iVar5 = FUN_140b7ee20();
    if (iVar5 == 0) goto LAB_140ba5c08;
    puVar6[0x57] = param_1[0x57];
  }
  if (param_1[0x54] != 0) {
    lVar9 = FUN_140b8c830(param_1[0x54],"ssl\\ssl_sess.c",0xd1);
    puVar6[0x54] = lVar9;
    if (lVar9 == 0) goto LAB_140ba5c08;
  }
  if (param_1[0x55] != 0) {
    lVar9 = FUN_140b8c830(param_1[0x55],"ssl\\ssl_sess.c",0xd6);
    puVar6[0x55] = lVar9;
    if (lVar9 == 0) goto LAB_140ba5c08;
  }
  iVar5 = get_and_lock(2,puVar6 + 0x61,param_1 + 0x61);
  if (iVar5 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\ssl_sess.c",0xde,"ssl_session_dup_intern");
    FUN_140b91cc0(0x14,0x8000f,0);
    FUN_140ba4520(puVar6);
    return (undefined8 *)0x0;
  }
  if (param_1[99] != 0) {
    lVar9 = FUN_140b8c830(param_1[99],"ssl\\ssl_sess.c",0xe3);
    puVar6[99] = lVar9;
    if (lVar9 == 0) goto LAB_140ba5c08;
  }
  if ((param_2 == 0) || (param_1[100] == 0)) {
    *(undefined4 *)(puVar6 + 0x66) = 0;
    puVar6[0x65] = 0;
  }
  else {
    lVar9 = FUN_140b8c7c0(param_1[100],param_1[0x65],"ssl\\ssl_sess.c",0xea);
    puVar6[100] = lVar9;
    if (lVar9 == 0) goto LAB_140ba5c08;
  }
  if (param_1[0x68] != 0) {
    lVar9 = FUN_140b8c7c0(param_1[0x68],param_1[0x69],"ssl\\ssl_sess.c",0xf4);
    puVar6[0x68] = lVar9;
    if (lVar9 == 0) goto LAB_140ba5c08;
  }
  if (param_1[0x6b] != 0) {
    lVar9 = FUN_140b8c830(param_1[0x6b],"ssl\\ssl_sess.c",0xfb);
    puVar6[0x6b] = lVar9;
    if (lVar9 == 0) goto LAB_140ba5c08;
  }
  if (param_1[0x6c] == 0) {
    return puVar6;
  }
  lVar9 = FUN_140b8c7c0(param_1[0x6c],param_1[0x6d],"ssl\\ssl_sess.c",0x103);
  puVar6[0x6c] = lVar9;
  if (lVar9 != 0) {
    return puVar6;
  }
LAB_140ba5c08:
  FUN_140ba4520(puVar6);
  return (undefined8 *)0x0;
}

