/**
 * Function: stbl_module_init
 * Address:  140cff000
 * Signature: undefined stbl_module_init(void)
 * Body size: 961 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 stbl_module_init(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  char *_Str1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  int iVar9;
  ulong uVar10;
  char *pcVar11;
  int iVar12;
  int local_res18 [2];
  ulong local_res20;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar13;
  int local_58;
  char *local_50;
  longlong local_48;
  longlong local_40;
  
  uVar5 = FUN_140b77290();
  lVar6 = FUN_140c1a380(param_2,uVar5);
  local_40 = lVar6;
  if (lVar6 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\asn1\\asn_mstbl.c",0x1d,"stbl_module_init");
    FUN_140b91cc0(0xd,0xac,0);
    return 0;
  }
  iVar12 = 0;
  iVar3 = FUN_140b77980(lVar6);
  if (0 < iVar3) {
    do {
      lVar6 = FUN_140b77990(lVar6,iVar12);
      local_res18[0] = 0;
      uVar4 = 0xffffffff;
      local_res20 = 0xffffffff;
      uVar8 = 0;
      lVar7 = 0;
      uVar5 = *(undefined8 *)(lVar6 + 8);
      lVar6 = *(longlong *)(lVar6 + 0x10);
      local_48 = lVar6;
      local_58 = FUN_140b96b00(uVar5);
      if (((local_58 == 0) && (local_58 = FUN_140b969d0(uVar5), local_58 == 0)) ||
         (lVar7 = FUN_140bc6bb0(lVar6), lVar7 == 0)) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\asn1\\asn_mstbl.c",0x6b,"do_tcreate")
        ;
        pcVar11 = "name=%s, value=%s";
LAB_140cff362:
        FUN_140b91cc0(0xd,0xda,pcVar11,uVar5,lVar6);
LAB_140cff379:
        FUN_140b77c60(lVar7,FUN_140bc6410);
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\asn1\\asn_mstbl.c",0x23,"stbl_module_init");
        FUN_140b91cc0(0xd,0xdb,0);
        return 0;
      }
      iVar9 = 0;
      iVar3 = FUN_140b77980(lVar7);
      uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
      uVar10 = 0xffffffff;
      uVar2 = 0;
      if (0 < iVar3) {
        do {
          uVar8 = uVar2;
          lVar6 = FUN_140b77990(lVar7,iVar9);
          pcVar11 = *(char **)(lVar6 + 0x10);
          if (pcVar11 == (char *)0x0) goto LAB_140cff171;
          _Str1 = *(char **)(lVar6 + 8);
          iVar3 = strcmp(_Str1,"min");
          if (iVar3 == 0) {
            uVar4 = strtoul(pcVar11,&local_50,0);
            cVar1 = *local_50;
joined_r0x000140cff16b:
            if (cVar1 != '\0') {
LAB_140cff171:
              if (*(longlong *)(lVar6 + 0x10) != 0) {
                local_48 = *(longlong *)(lVar6 + 0x10);
              }
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("crypto\\asn1\\asn_mstbl.c",0x66,"do_tcreate");
              uVar5 = *(undefined8 *)(lVar6 + 8);
              pcVar11 = "field=%s, value=%s";
              lVar6 = local_48;
              goto LAB_140cff362;
            }
          }
          else {
            iVar3 = strcmp(_Str1,"max");
            if (iVar3 == 0) {
              local_res20 = strtoul(pcVar11,&local_50,0);
              cVar1 = *local_50;
              goto joined_r0x000140cff16b;
            }
            iVar3 = strcmp(_Str1,"mask");
            if (iVar3 == 0) {
              iVar3 = FUN_140cc4190(pcVar11,local_res18);
              if ((iVar3 != 0) && (local_res18[0] != 0)) goto LAB_140cff279;
              goto LAB_140cff171;
            }
            iVar3 = strcmp(_Str1,"flags");
            if (iVar3 != 0) goto LAB_140cff171;
            iVar3 = strcmp(pcVar11,"nomask");
            if (iVar3 == 0) {
              uVar8 = 2;
            }
            else {
              iVar3 = strcmp(pcVar11,"none");
              if (iVar3 != 0) goto LAB_140cff171;
              uVar8 = 1;
            }
          }
LAB_140cff279:
          iVar9 = iVar9 + 1;
          iVar3 = FUN_140b77980(lVar7);
          uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
          uVar10 = local_res20;
          uVar2 = uVar8;
        } while (iVar9 < iVar3);
      }
      in_stack_ffffffffffffff98 = CONCAT44(uVar13,uVar8);
      iVar3 = FUN_140bdf4f0(local_58,uVar4,uVar10,local_res18[0],in_stack_ffffffffffffff98);
      if (iVar3 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\asn1\\asn_mstbl.c",0x71,"do_tcreate")
        ;
        FUN_140b91cc0(0xd,0x8000d,0);
        goto LAB_140cff379;
      }
      FUN_140b77c60(lVar7,FUN_140bc6410);
      lVar6 = local_40;
      iVar12 = iVar12 + 1;
      iVar3 = FUN_140b77980(local_40);
    } while (iVar12 < iVar3);
  }
  return 1;
}

