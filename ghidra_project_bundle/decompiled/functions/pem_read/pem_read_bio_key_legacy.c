/**
 * Function: pem_read_bio_key_legacy
 * Address:  140bf5e00
 * Signature: undefined pem_read_bio_key_legacy(void)
 * Body size: 1013 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void pem_read_bio_key_legacy
               (undefined8 param_1,longlong *param_2,code *param_3,undefined8 param_4,
               undefined8 param_5,code *param_6,uint param_7)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined1 auStack_4d8 [32];
  undefined8 local_4b8;
  code *local_4b0;
  undefined8 local_4a8;
  int local_498 [2];
  char *local_490;
  undefined8 local_488;
  undefined8 local_480;
  uint local_478;
  code *local_470;
  undefined8 local_468;
  undefined1 local_458 [1024];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x140bf5e1f;
  local_58 = DAT_1414ef3c0 ^ (ulonglong)auStack_4d8;
  local_468 = param_5;
  local_470 = param_6;
  local_490 = (char *)0x0;
  local_488 = 0;
  local_480 = 0;
  FUN_140b932f0();
  local_478 = param_7 & 1;
  local_4b8 = param_1;
  local_4b0 = param_3;
  local_4a8 = param_4;
  if (local_478 == 0) {
    pcVar6 = "PUBLIC KEY";
    if ((param_7 & 2) == 0) {
      pcVar6 = "PARAMETERS";
    }
    iVar2 = FUN_140bf4400(&local_480,local_498,&local_490,pcVar6);
  }
  else {
    iVar2 = FUN_140bf4140(&local_480,local_498,&local_490,"ANY PRIVATE KEY");
  }
  if (iVar2 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    goto LAB_140bf6153;
  }
  FUN_140b93470();
  pcVar6 = local_490;
  local_488 = local_480;
  iVar2 = strcmp(local_490,"PRIVATE KEY");
  if (iVar2 == 0) {
    lVar3 = FUN_140c6c200(0,&local_488,local_498[0]);
    if (lVar3 != 0) {
      lVar4 = FUN_140c6c6c0(lVar3,local_468,local_470);
      if (param_2 != (longlong *)0x0) {
        FUN_140b7efe0(*param_2);
        *param_2 = lVar4;
      }
      FUN_140c6c1e0(lVar3);
      goto LAB_140bf60e0;
    }
LAB_140bf60e5:
    iVar2 = FUN_140b92170();
    if (iVar2 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\pem\\pem_pkey.c",0xcf,"pem_read_bio_key_legacy");
      FUN_140b91cc0(9,0x8000d,0);
    }
  }
  else {
    iVar2 = strcmp(pcVar6,"ENCRYPTED PRIVATE KEY");
    if (iVar2 != 0) {
      iVar2 = FUN_140bf48f0(pcVar6,"PRIVATE KEY");
      if (iVar2 < 1) {
        if ((local_478 == 0) && ((param_7 & 2) != 0)) {
          lVar4 = FUN_140b9eda0(param_2,&local_488,local_498[0]);
          goto LAB_140bf60e0;
        }
        if (((param_7 & 0x87) == 0) && (iVar2 = FUN_140bf48f0(local_490,"PARAMETERS"), 0 < iVar2)) {
          lVar4 = FUN_140b7ed00();
          if (lVar4 != 0) {
            iVar2 = FUN_140b7e290(lVar4,local_490,iVar2);
            if (((iVar2 == 0) ||
                (pcVar1 = *(code **)(*(longlong *)(lVar4 + 8) + 0x70), pcVar1 == (code *)0x0)) ||
               (iVar2 = (*pcVar1)(lVar4,&local_488,local_498[0]), iVar2 == 0)) {
              FUN_140b7efe0(lVar4);
            }
            else if (param_2 != (longlong *)0x0) {
              FUN_140b7efe0(*param_2);
              *param_2 = lVar4;
            }
          }
          goto LAB_140bf611d;
        }
      }
      else {
        puVar5 = (undefined4 *)FUN_140c0a730(0,local_490,iVar2);
        if ((puVar5 != (undefined4 *)0x0) && (*(longlong *)(puVar5 + 0x2e) != 0)) {
          local_4b0 = local_470;
          local_4b8 = local_468;
          lVar4 = FUN_140bf2db0(*puVar5,param_2,&local_488,local_498[0]);
LAB_140bf60e0:
          if (lVar4 != 0) goto LAB_140bf611d;
        }
      }
      goto LAB_140bf60e5;
    }
    lVar4 = FUN_140c6f6a0(0,&local_488,local_498[0]);
    if (lVar4 == 0) goto LAB_140bf60e5;
    if (param_3 == (code *)0x0) {
      iVar2 = enter_pem_pass_phrase(local_458,0x400,0,param_4);
    }
    else {
      iVar2 = (*param_3)();
    }
    if (-1 < iVar2) {
      lVar3 = FUN_140c71190(lVar4,local_458,iVar2);
      FUN_140c6f680(lVar4);
      FUN_14046e980(local_458,(longlong)iVar2);
      if (lVar3 != 0) {
        lVar4 = FUN_140c6c6c0(lVar3,local_468,local_470);
        if (param_2 != (longlong *)0x0) {
          FUN_140b7efe0(*param_2);
          *param_2 = lVar4;
        }
        FUN_140c6c1e0(lVar3);
        goto LAB_140bf60e0;
      }
      goto LAB_140bf60e5;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\pem\\pem_pkey.c",0x9f,"pem_read_bio_key_legacy");
    FUN_140b91cc0(9,0x68,0);
    FUN_140c6f680(lVar4);
  }
LAB_140bf611d:
  FUN_140b8df00(local_490,"crypto\\pem\\pem_pkey.c",0xd1);
  FUN_140b8dfb0(local_480,(longlong)local_498[0],"crypto\\pem\\pem_pkey.c",0xd2);
LAB_140bf6153:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_58 ^ (ulonglong)auStack_4d8);
}

