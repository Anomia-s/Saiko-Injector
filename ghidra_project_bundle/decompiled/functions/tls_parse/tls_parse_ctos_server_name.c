/**
 * Function: tls_parse_ctos_server_name
 * Address:  140cb5750
 * Signature: undefined tls_parse_ctos_server_name(void)
 * Body size: 728 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_ctos_server_name(ulonglong param_1,longlong *param_2)

{
  char *pcVar1;
  int iVar2;
  size_t sVar3;
  void *pvVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  char *pcVar10;
  ulonglong uVar11;
  
  pcVar1 = (char *)*param_2;
  uVar8 = param_2[1];
  uVar6 = param_1;
  pcVar10 = pcVar1;
  uVar11 = param_2[1];
  if (uVar8 < 2) {
LAB_140cb59ed:
    d_aplatformplatformopenssl_srccryptoerrerr_lo(uVar6,(int)pcVar1,uVar8,param_2,pcVar10,uVar11);
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\statem\\extensions_srvr.c",0x72,"tls_parse_ctos_server_name");
    FUN_140ba3290(param_1,0x32,0x6e,0);
    return 0;
  }
  uVar8 = uVar8 - 2;
  uVar6 = (ulonglong)CONCAT11(*pcVar1,pcVar1[1]);
  if (uVar8 < uVar6) goto LAB_140cb59ed;
  pcVar10 = pcVar1 + 2 + uVar6;
  uVar8 = uVar8 - uVar6;
  uVar11 = uVar8;
  if (uVar8 != 0) goto LAB_140cb59ed;
  *param_2 = (longlong)pcVar10;
  param_2[1] = 0;
  if (uVar6 == 0) goto LAB_140cb59ed;
  if ((pcVar1[2] == '\0') && (1 < uVar6 - 1)) {
    pcVar10 = pcVar1 + 5;
    uVar8 = (ulonglong)CONCAT11(pcVar1[3],pcVar1[4]);
    if (uVar6 - 3 == uVar8) {
      if ((*(int *)(param_1 + 0x508) != 0) &&
         ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) != 0 ||
           (iVar2 = **(int **)(param_1 + 0x18), iVar2 < 0x304)) || (iVar2 == 0x10000)))) {
        pcVar1 = *(char **)(*(longlong *)(param_1 + 0x8f8) + 0x318);
        if (pcVar1 != (char *)0x0) {
          sVar3 = strlen(pcVar1);
          if (uVar8 == sVar3) {
            iVar2 = FUN_14046e9f0(pcVar10,pcVar1,sVar3);
            if (iVar2 == 0) {
              *(undefined4 *)(param_1 + 0xb58) = 1;
              return 1;
            }
          }
        }
        *(undefined4 *)(param_1 + 0xb58) = 0;
        return 1;
      }
      if (uVar8 < 0x100) {
        pvVar4 = memchr(pcVar10,0,uVar8);
        if (pvVar4 == (void *)0x0) {
          FUN_140b8d990(*(undefined8 *)(param_1 + 0xa18),"ssl\\statem\\extensions_srvr.c",0x9b);
          *(undefined8 *)(param_1 + 0xa18) = 0;
          FUN_140b8d990(0,"D:\\a\\Platform\\Platform\\openssl-src\\include\\internal/packet.h",0x1e3
                       );
          lVar5 = FUN_140b8c8b0(pcVar10,uVar8,
                                "D:\\a\\Platform\\Platform\\openssl-src\\include\\internal/packet.h"
                                ,0x1e6);
          *(longlong *)(param_1 + 0xa18) = lVar5;
          if (lVar5 != 0) {
            *(undefined4 *)(param_1 + 0xb58) = 1;
            return 1;
          }
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("ssl\\statem\\extensions_srvr.c",0x9e,"tls_parse_ctos_server_name");
          uVar7 = 0x50;
          uVar9 = 0xc0103;
          goto LAB_140cb598b;
        }
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar7 = 0x93;
      }
      else {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar7 = 0x8e;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\statem\\extensions_srvr.c",uVar7,"tls_parse_ctos_server_name");
      uVar7 = 0x70;
      uVar9 = 0x6e;
      goto LAB_140cb598b;
    }
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("ssl\\statem\\extensions_srvr.c",0x84,"tls_parse_ctos_server_name");
  uVar7 = 0x32;
  uVar9 = 0x6e;
LAB_140cb598b:
  FUN_140ba3290(param_1,uVar7,uVar9,0);
  return 0;
}

