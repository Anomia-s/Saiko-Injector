/**
 * Function: here_s
 * Address:  140c5f060
 * Signature: undefined here_s(void)
 * Body size: 424 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void here_s(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined4 param_4)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  ulonglong uVar8;
  undefined1 auStack_468 [32];
  undefined1 local_448 [1008];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x140c5f077;
  local_58 = DAT_1414ef3c0 ^ (ulonglong)auStack_468;
  pcVar7 = (char *)*param_2;
  uVar8 = 0;
  bVar2 = false;
  cVar1 = *pcVar7;
  if ((cVar1 != '\0') && (cVar1 != ',')) {
    iVar4 = FUN_140c20ac0((int)cVar1,0x100);
    for (; ((iVar4 != 0 && (iVar4 = FUN_140c20ac0((int)*pcVar7,8), iVar4 == 0)) && (*pcVar7 != ','))
        ; pcVar7 = pcVar7 + 1) {
      if (uVar8 < 999) {
        uVar3 = FUN_140c20ae0((int)*pcVar7);
        local_448[uVar8] = uVar3;
        uVar8 = uVar8 + 1;
      }
      else {
        bVar2 = true;
      }
      iVar4 = FUN_140c20ac0((int)pcVar7[1],0x100);
    }
    iVar4 = FUN_140c20ac0((int)*pcVar7,8);
    if (((iVar4 == 0) && (*pcVar7 != '\0')) && (*pcVar7 != ',')) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\property\\property_parse.c",0xf2,"parse_unquoted");
      FUN_140b91cc0(0x37,0x65,"HERE-->%s",pcVar7);
    }
    else {
      if (999 < uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_140b68c50();
      }
      local_448[uVar8] = 0;
      if (bVar2) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\property\\property_parse.c",0xf8,"parse_unquoted");
        FUN_140b91cc0(0x37,0x6d,"HERE-->%s",*param_2);
      }
      else {
        uVar5 = FUN_140caa3a0(param_1,local_448,param_4);
        *(undefined4 *)(param_3 + 0x10) = uVar5;
      }
      uVar6 = FUN_140c5eb10(pcVar7);
      *param_2 = uVar6;
      *(undefined4 *)(param_3 + 4) = 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_58 ^ (ulonglong)auStack_468);
}

