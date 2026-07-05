/**
 * Function: sections_names_values
 * Address:  140cff6c0
 * Signature: undefined sections_names_values(void)
 * Body size: 931 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

char * sections_names_values(char *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  longlong lVar4;
  undefined8 *puVar5;
  char *pcVar6;
  char *_Str1;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  char *pcVar10;
  char *_Str1_00;
  int local_res20 [2];
  
  local_res20[0] = -1;
  pcVar8 = (char *)0x0;
  bVar1 = false;
  pcVar3 = strchr(param_1,0x2e);
  if (pcVar3 != (char *)0x0) {
    param_1 = pcVar3 + 1;
  }
  lVar4 = FUN_140c1a380(param_3,param_2);
  if (lVar4 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\engine\\eng_cnf.c",0x3c,"int_engine_configure");
    FUN_140b91cc0(0x26,0x95,0);
    return (char *)0x0;
  }
  iVar2 = FUN_140b77980(lVar4);
  pcVar3 = pcVar8;
  pcVar10 = pcVar8;
  if (0 < iVar2) {
    do {
      puVar5 = (undefined8 *)FUN_140b77990(lVar4,pcVar10);
      pcVar7 = (char *)puVar5[1];
      pcVar6 = strchr(pcVar7,0x2e);
      _Str1_00 = (char *)puVar5[2];
      _Str1 = pcVar6 + 1;
      if (pcVar6 == (char *)0x0) {
        _Str1 = pcVar7;
      }
      iVar2 = strcmp(_Str1,"engine_id");
      if (iVar2 != 0) {
        iVar2 = strcmp(_Str1,"soft_load");
        if (iVar2 != 0) {
          iVar2 = strcmp(_Str1,"dynamic_path");
          if (iVar2 == 0) {
            pcVar3 = (char *)openssl_engines("dynamic");
            if (((pcVar3 != (char *)0x0) &&
                (iVar2 = FUN_140cd9910(pcVar3,"SO_PATH",_Str1_00,0), iVar2 != 0)) &&
               (iVar2 = FUN_140cd9910(pcVar3,"LIST_ADD",&DAT_1413a6f94,0), iVar2 != 0)) {
              pcVar7 = (char *)0x0;
              _Str1 = "LOAD";
LAB_140cff9a5:
              iVar2 = FUN_140cd9910(pcVar3,_Str1,pcVar7,0);
              goto LAB_140cff9b0;
            }
          }
          else if ((pcVar3 == (char *)0x0) &&
                  (pcVar3 = (char *)openssl_engines(param_1), pcVar3 == (char *)0x0)) {
            if (bVar1) {
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              return (char *)0x1;
            }
          }
          else {
            iVar2 = strcmp(_Str1_00,"EMPTY");
            pcVar7 = pcVar8;
            if (iVar2 != 0) {
              pcVar7 = _Str1_00;
            }
            iVar2 = strcmp(_Str1,"init");
            if (iVar2 == 0) {
              iVar2 = groups_names(param_3,param_2,&DAT_1413a5ab0,local_res20);
              if (iVar2 != 0) {
                if (local_res20[0] == 1) {
                  iVar2 = FUN_140cff650(pcVar3);
                  goto LAB_140cff9b0;
                }
                _Str1_00 = param_1;
                if (local_res20[0] == 0) goto LAB_140cff9b8;
                d_aplatformplatformopenssl_srccryptoerrerr_lo();
                d_aplatformplatformopenssl_srccryptoerrerr_lo
                          ("crypto\\engine\\eng_cnf.c",0x76,"int_engine_configure");
                FUN_140b91cc0(0x26,0x97,0);
              }
            }
            else {
              iVar2 = strcmp(_Str1,"default_algorithms");
              if (iVar2 != 0) goto LAB_140cff9a5;
              iVar2 = FUN_140c72c30(pcVar3,pcVar7);
LAB_140cff9b0:
              _Str1_00 = param_1;
              if (iVar2 != 0) goto LAB_140cff9b8;
            }
          }
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\engine\\eng_cnf.c",0x8b,"int_engine_configure");
          FUN_140b91cc0(0x26,0x66,"section=%s, name=%s, value=%s",*puVar5,puVar5[1],puVar5[2]);
          goto LAB_140cffa3a;
        }
        bVar1 = true;
        _Str1_00 = param_1;
      }
LAB_140cff9b8:
      uVar9 = (int)pcVar10 + 1;
      iVar2 = FUN_140b77980(lVar4);
      pcVar10 = (char *)(ulonglong)uVar9;
      param_1 = _Str1_00;
    } while ((int)uVar9 < iVar2);
    if (((pcVar3 != (char *)0x0) && (local_res20[0] == -1)) &&
       (iVar2 = FUN_140cff650(pcVar3), iVar2 == 0)) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\engine\\eng_cnf.c",0x89,"int_engine_configure");
      FUN_140b91cc0(0x26,0x66,0);
      goto LAB_140cffa3a;
    }
  }
  pcVar8 = (char *)0x1;
LAB_140cffa3a:
  FUN_140c10150(pcVar3);
  return pcVar8;
}

