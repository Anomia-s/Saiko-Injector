/**
 * Function: ssl_module_init
 * Address:  140c49fe0
 * Signature: undefined ssl_module_init(void)
 * Body size: 696 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_module_init(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  char *pcVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong local_res18;
  
  uVar4 = FUN_140b77290();
  lVar5 = FUN_140c1a380(param_2,uVar4);
  iVar3 = FUN_140b77980(lVar5);
  if (iVar3 < 1) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\conf\\conf_ssl.c",0x4c,"ssl_module_init")
    ;
    FUN_140b91cc0(0xe,0x78 - (uint)(lVar5 != 0),"section=%s",uVar4);
  }
  else {
    iVar3 = FUN_140b77980(lVar5);
    uVar10 = (ulonglong)iVar3;
    FUN_140c49ea0(param_1);
    DAT_141700a90 = FUN_140b8da80(uVar10 * 0x18,"crypto\\conf\\conf_ssl.c",0x51);
    if (DAT_141700a90 != 0) {
      uVar12 = 0;
      DAT_141700a98 = uVar10;
      if (uVar10 != 0) {
        local_res18 = 0;
        do {
          plVar1 = (longlong *)(local_res18 + DAT_141700a90);
          lVar6 = FUN_140b77990(lVar5,uVar12 & 0xffffffff);
          lVar7 = FUN_140c1a380(param_2,*(undefined8 *)(lVar6 + 0x10));
          iVar3 = FUN_140b77980(lVar7);
          if (iVar3 < 1) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("crypto\\conf\\conf_ssl.c",0x60,"ssl_module_init");
            FUN_140b91cc0(0xe,0x76 - (uint)(lVar7 != 0),"name=%s, value=%s",
                          *(undefined8 *)(lVar6 + 8),*(undefined8 *)(lVar6 + 0x10));
            goto LAB_140c4a069;
          }
          lVar6 = FUN_140b8c830(*(undefined8 *)(lVar6 + 8),"crypto\\conf\\conf_ssl.c",100);
          *plVar1 = lVar6;
          if (lVar6 == 0) goto LAB_140c4a069;
          iVar3 = FUN_140b77980(lVar7);
          uVar10 = (ulonglong)iVar3;
          lVar6 = FUN_140b8da80(uVar10 << 4,"crypto\\conf\\conf_ssl.c",0x68);
          plVar1[1] = lVar6;
          if (lVar6 == 0) goto LAB_140c4a069;
          uVar11 = 0;
          plVar1[2] = uVar10;
          if (uVar10 != 0) {
            lVar6 = 0;
            do {
              lVar8 = FUN_140b77990(lVar7,uVar11 & 0xffffffff);
              lVar2 = plVar1[1];
              pcVar9 = strchr(*(char **)(lVar8 + 8),0x2e);
              if (pcVar9 == (char *)0x0) {
                pcVar9 = *(char **)(lVar8 + 8);
              }
              else {
                pcVar9 = pcVar9 + 1;
              }
              uVar4 = FUN_140b8c830(pcVar9,"crypto\\conf\\conf_ssl.c",0x77);
              *(undefined8 *)(lVar2 + lVar6) = uVar4;
              lVar8 = FUN_140b8c830(*(undefined8 *)(lVar8 + 0x10),"crypto\\conf\\conf_ssl.c",0x78);
              *(longlong *)(lVar2 + 8 + lVar6) = lVar8;
              if ((*(longlong *)(lVar2 + lVar6) == 0) || (lVar8 == 0)) goto LAB_140c4a069;
              uVar11 = uVar11 + 1;
              lVar6 = lVar6 + 0x10;
            } while (uVar11 < uVar10);
          }
          uVar12 = uVar12 + 1;
          local_res18 = local_res18 + 0x18;
        } while (uVar12 < DAT_141700a98);
      }
      return 1;
    }
  }
LAB_140c4a069:
  FUN_140c49ea0(param_1);
  return 0;
}

