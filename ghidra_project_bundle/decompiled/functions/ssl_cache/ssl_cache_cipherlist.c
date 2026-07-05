/**
 * Function: ssl_cache_cipherlist
 * Address:  140b6dc00
 * Signature: undefined ssl_cache_cipherlist(void)
 * Body size: 733 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_cache_cipherlist(longlong param_1,undefined8 *param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  char *pcVar9;
  longlong lVar10;
  char *pcVar11;
  
  if (param_2[1] == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\ssl_lib.c",0x1bb9,"ssl_cache_cipherlist");
    FUN_140ba3290(param_1,0x32,0xb7,0);
    return 0;
  }
  uVar8 = (ulonglong)(param_3 != 0) + 2;
  if ((ulonglong)param_2[1] % uVar8 == 0) {
    FUN_140b8d990(*(undefined8 *)(param_1 + 0x3a0),"ssl\\ssl_lib.c",0x1bc2);
    *(undefined8 *)(param_1 + 0x3a0) = 0;
    *(undefined8 *)(param_1 + 0x3a8) = 0;
    if (param_3 == 0) {
      FUN_140b8d990(0,"D:\\a\\Platform\\Platform\\openssl-src\\include\\internal/packet.h",0x1c6);
      *(undefined8 *)(param_1 + 0x3a0) = 0;
      *(undefined8 *)(param_1 + 0x3a8) = 0;
      lVar10 = param_2[1];
      if (lVar10 != 0) {
        lVar5 = FUN_140b8c7c0(*param_2,lVar10,
                              "D:\\a\\Platform\\Platform\\openssl-src\\include\\internal/packet.h",
                              0x1cf);
        *(longlong *)(param_1 + 0x3a0) = lVar5;
        if (lVar5 == 0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("ssl\\ssl_lib.c",0x1bed,"ssl_cache_cipherlist");
          FUN_140ba3290(param_1,0x50,0xc0103,0);
          return 0;
        }
        *(longlong *)(param_1 + 0x3a8) = lVar10;
      }
    }
    else {
      pcVar9 = (char *)*param_2;
      lVar10 = param_2[1];
      pcVar11 = pcVar9;
      lVar5 = lVar10;
      puVar4 = (undefined2 *)
               FUN_140b8d8d0(((ulonglong)param_2[1] / uVar8) * 2,"ssl\\ssl_lib.c",0x1bd3);
      *(undefined2 **)(param_1 + 0x3a0) = puVar4;
      if (puVar4 == (undefined2 *)0x0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\ssl_lib.c",0x1bd6,"ssl_cache_cipherlist");
        FUN_140ba3290(param_1,0x50,0x8000f,0,pcVar9,lVar10,pcVar11,lVar5);
        return 0;
      }
      *(undefined8 *)(param_1 + 0x3a8) = 0;
      lVar7 = lVar10;
      pcVar2 = pcVar11;
      while (lVar7 != 0) {
        cVar3 = *pcVar2;
        pcVar1 = pcVar2 + 1;
        if (lVar7 - 1U < 2) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("ssl\\ssl_lib.c",0x1be2,"ssl_cache_cipherlist");
          FUN_140ba3290(param_1,0x32,0xf0,0,pcVar9,lVar10,pcVar11,lVar5);
          FUN_140b8d990(*(undefined8 *)(param_1 + 0x3a0),"ssl\\ssl_lib.c",0x1be3);
          *(undefined8 *)(param_1 + 0x3a0) = 0;
          *(undefined8 *)(param_1 + 0x3a8) = 0;
          return 0;
        }
        lVar7 = lVar7 + -3;
        pcVar2 = pcVar2 + 3;
        if (cVar3 == '\0') {
          *puVar4 = *(undefined2 *)pcVar1;
          *(longlong *)(param_1 + 0x3a8) = *(longlong *)(param_1 + 0x3a8) + 2;
        }
        puVar4 = puVar4 + 1;
      }
    }
    uVar6 = 1;
  }
  else {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\ssl_lib.c",0x1bbe,"ssl_cache_cipherlist");
    FUN_140ba3290(param_1,0x32,0x97,0);
    uVar6 = 0;
  }
  return uVar6;
}

