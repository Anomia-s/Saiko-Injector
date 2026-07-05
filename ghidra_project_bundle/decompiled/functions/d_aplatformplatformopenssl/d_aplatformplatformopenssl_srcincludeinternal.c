/**
 * Function: d_aplatformplatformopenssl_srcincludeinternal
 * Address:  140cbefd0
 * Signature: undefined d_aplatformplatformopenssl_srcincludeinternal(void)
 * Body size: 291 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 d_aplatformplatformopenssl_srcincludeinternal(longlong param_1,longlong *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  
  puVar6 = (undefined1 *)*param_2;
  lVar4 = param_2[1];
  if (1 < (ulonglong)param_2[1]) {
    uVar3 = param_2[1] - 2;
    puVar1 = puVar6 + 2;
    uVar5 = (ulonglong)CONCAT11(*puVar6,puVar6[1]);
    if (uVar5 <= uVar3) {
      puVar6 = puVar1 + uVar5;
      lVar4 = uVar3 - uVar5;
      if (lVar4 == 0) {
        *param_2 = (longlong)puVar6;
        param_2[1] = 0;
        FUN_140b8d990(*(undefined8 *)(param_1 + 0xb18),
                      "D:\\a\\Platform\\Platform\\openssl-src\\include\\internal/packet.h",0x1c6);
        *(undefined8 *)(param_1 + 0xb18) = 0;
        *(undefined8 *)(param_1 + 0xb20) = 0;
        if (uVar5 != 0) {
          lVar2 = FUN_140b8c7c0(puVar1,uVar5,
                                "D:\\a\\Platform\\Platform\\openssl-src\\include\\internal/packet.h"
                                ,0x1cf);
          *(longlong *)(param_1 + 0xb18) = lVar2;
          if (lVar2 == 0) goto LAB_140cbf0ae;
          *(ulonglong *)(param_1 + 0xb20) = uVar5;
        }
        return 1;
      }
    }
  }
LAB_140cbf0ae:
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("ssl\\statem\\extensions_clnt.c",0x804,"tls_parse_stoc_cookie");
  FUN_140ba3290(param_1,0x32,0x9f,0,puVar6,lVar4);
  return 0;
}

