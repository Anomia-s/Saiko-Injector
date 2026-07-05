/**
 * Function: i2v_authority_info_access
 * Address:  140c4cf30
 * Signature: undefined i2v_authority_info_access(void)
 * Body size: 402 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2v_authority_info_access(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  size_t sVar5;
  size_t sVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  char local_98 [80];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x140c4cf4a;
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_c8;
  iVar8 = 0;
  iVar1 = FUN_140b77980(param_2);
  lVar9 = param_3;
  lVar3 = param_3;
  if (0 < iVar1) {
    do {
      puVar2 = (undefined8 *)FUN_140b77990(param_2,iVar8);
      lVar3 = othername_smtputf8mailbox(param_1,puVar2[1],lVar9);
      if (lVar3 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\x509\\v3_info.c",0x4d,"i2v_AUTHORITY_INFO_ACCESS");
        FUN_140b91cc0(0x22,0x8000d,0);
LAB_140c4d092:
        if ((param_3 == 0) && (lVar9 != 0)) {
          FUN_140b77c60(lVar9,FUN_140bc6410);
        }
        goto LAB_140c4d0b2;
      }
      lVar4 = FUN_140b77990(lVar3,iVar8);
      FUN_140bdea40(local_98,0x50,*puVar2);
      sVar5 = strlen(local_98);
      sVar6 = strlen(*(char **)(lVar4 + 8));
      lVar10 = (longlong)((int)sVar5 + 4 + (int)sVar6);
      lVar7 = FUN_140b8d8d0(lVar10,"crypto\\x509\\v3_info.c",0x54);
      lVar9 = lVar3;
      if (lVar7 == 0) goto LAB_140c4d092;
      local_a8 = *(undefined8 *)(lVar4 + 8);
      FUN_140c07aa0(lVar7,lVar10,"%s - %s",local_98);
      FUN_140b8d990(*(undefined8 *)(lVar4 + 8),"crypto\\x509\\v3_info.c",0x58);
      *(longlong *)(lVar4 + 8) = lVar7;
      iVar8 = iVar8 + 1;
      iVar1 = FUN_140b77980(param_2);
    } while (iVar8 < iVar1);
  }
  if ((param_3 == 0) && (lVar3 == 0)) {
    FUN_140b77ab0();
  }
LAB_140c4d0b2:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_c8);
}

