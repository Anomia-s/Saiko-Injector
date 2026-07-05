/**
 * Function: provider_conf_init
 * Address:  140cab4f0
 * Signature: undefined provider_conf_init(void)
 * Body size: 924 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 provider_conf_init(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  char *pcVar7;
  longlong lVar8;
  char *_Str1;
  uint uVar9;
  int *piVar11;
  int iVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  int local_res18 [2];
  int local_res20 [2];
  longlong local_60;
  longlong lStack_58;
  undefined8 local_50;
  longlong lStack_48;
  undefined8 local_40;
  char *pcVar10;
  
  uVar3 = FUN_140b77290();
  lVar4 = FUN_140c1a380(param_2,uVar3);
  if (lVar4 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\provider_conf.c",0x19c,"provider_conf_init");
    FUN_140b91cc0(0xf,0x69,0);
    return 0;
  }
  iVar12 = 0;
  iVar2 = FUN_140b77980(lVar4);
  if (0 < iVar2) {
    do {
      pcVar10 = (char *)0x0;
      lVar5 = FUN_140b77990(lVar4,iVar12);
      uVar3 = *(undefined8 *)(lVar5 + 0x10);
      pcVar13 = *(char **)(lVar5 + 8);
      uVar6 = FUN_140b6a6a0(param_2);
      local_res20[0] = 0;
      local_res18[0] = 0;
      pcVar7 = strchr(pcVar13,0x2e);
      pcVar14 = pcVar7 + 1;
      if (pcVar7 == (char *)0x0) {
        pcVar14 = pcVar13;
      }
      lVar5 = FUN_140c1a380(param_2,uVar3);
      if (lVar5 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\provider_conf.c",0x148,"provider_conf_load");
        FUN_140b91cc0(0xf,0x69,"section=%s not found",uVar3);
        return 0;
      }
      iVar2 = FUN_140b77980(lVar5);
      pcVar13 = pcVar14;
      pcVar15 = pcVar10;
      pcVar7 = pcVar10;
      if (iVar2 < 1) {
LAB_140cab712:
        local_40 = 0;
        local_60 = 0;
        lStack_58 = 0;
        local_50 = 0;
        lStack_48 = 0;
        if ((pcVar14 == (char *)0x0) ||
           (local_60 = FUN_140b8c830(pcVar14,"crypto\\provider_conf.c",0x171), local_60 != 0)) {
          if ((pcVar7 == (char *)0x0) ||
             (lStack_58 = FUN_140b8c830(pcVar7,"crypto\\provider_conf.c",0x176), lStack_58 != 0)) {
            lVar5 = FUN_140b77ab0();
            if (lVar5 == 0) {
              iVar2 = -1;
            }
            else {
              iVar2 = FUN_140caad90(0,&local_60,0,uVar3,param_2,lVar5);
              FUN_140b77c10(lVar5);
              if ((0 < iVar2) &&
                 (((lStack_58 != 0 || (lStack_48 != 0)) &&
                  (iVar2 = ossl_provider_info_add_to_store(uVar6,&local_60), iVar2 != 0))))
              goto LAB_140cab7f7;
            }
          }
          else {
            iVar2 = 0;
          }
        }
        else {
          iVar2 = 0;
        }
        FUN_140bd3db0(&local_60);
      }
      else {
        do {
          lVar8 = FUN_140b77990(lVar5,pcVar10);
          pcVar14 = *(char **)(lVar8 + 8);
          pcVar7 = strchr(pcVar14,0x2e);
          _Str1 = pcVar7 + 1;
          if (pcVar7 == (char *)0x0) {
            _Str1 = pcVar14;
          }
          pcVar1 = *(char **)(lVar8 + 0x10);
          iVar2 = strcmp(_Str1,"identity");
          pcVar14 = pcVar1;
          pcVar7 = pcVar15;
          if (iVar2 != 0) {
            iVar2 = strcmp(_Str1,"soft_load");
            pcVar14 = pcVar13;
            if (iVar2 == 0) {
              piVar11 = local_res20;
            }
            else {
              iVar2 = strcmp(_Str1,"module");
              pcVar7 = pcVar1;
              if ((iVar2 == 0) || (iVar2 = strcmp(_Str1,"activate"), pcVar7 = pcVar15, iVar2 != 0))
              goto LAB_140cab6bd;
              piVar11 = local_res18;
            }
            iVar2 = directive_s_set_to_unrecognized_value(_Str1,pcVar1,piVar11);
            pcVar7 = pcVar15;
            if (iVar2 == 0) {
              return 0;
            }
          }
LAB_140cab6bd:
          uVar9 = (int)pcVar10 + 1;
          pcVar10 = (char *)(ulonglong)uVar9;
          iVar2 = FUN_140b77980(lVar5);
          pcVar13 = pcVar14;
          pcVar15 = pcVar7;
        } while ((int)uVar9 < iVar2);
        if (local_res18[0] == 0) goto LAB_140cab712;
        iVar2 = FUN_140cab060(uVar6,pcVar14,uVar3,pcVar7,local_res20[0],param_2);
      }
LAB_140cab7f7:
      if (iVar2 < 0) {
        return 0;
      }
      iVar12 = iVar12 + 1;
      iVar2 = FUN_140b77980(lVar4);
    } while (iVar12 < iVar2);
  }
  return 1;
}

