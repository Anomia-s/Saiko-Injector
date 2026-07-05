/**
 * Function: unknown_name_here_s
 * Address:  140c5df30
 * Signature: undefined unknown_name_here_s(void)
 * Body size: 739 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 unknown_name_here_s(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *local_res10;
  
  uVar5 = 0;
  uVar6 = 0;
  if ((param_2 == (char *)0x0) || (lVar3 = FUN_140b77a70(&LAB_140c5f600), lVar3 == 0)) {
    return 0;
  }
  iVar2 = FUN_140c20ac0((int)*param_2,8);
  while (iVar2 != 0) {
    pcVar1 = param_2 + 1;
    param_2 = param_2 + 1;
    iVar2 = FUN_140c20ac0((int)*pcVar1,8);
  }
  local_res10 = param_2;
  if (*param_2 == '\0') {
LAB_140c5e1b5:
    uVar5 = duplicated_name_s(param_1,lVar3);
LAB_140c5e1c3:
    piVar4 = (int *)0x0;
    uVar7 = uVar5;
  }
  else {
    piVar4 = (int *)FUN_140b8d8d0(0x18,"crypto\\property\\property_parse.c",0x169);
    while (uVar7 = 0, piVar4 != (int *)0x0) {
      piVar4[4] = 0;
      piVar4[5] = 0;
      piVar4[3] = piVar4[3] & 0xfffffffe;
      iVar2 = here_s(param_1,&local_res10,1,piVar4);
      pcVar1 = local_res10;
      uVar7 = uVar6;
      if (iVar2 == 0) break;
      piVar4[2] = 0;
      if (*piVar4 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\property\\property_parse.c",0x172,"ossl_parse_property");
        FUN_140b91cc0(0x37,0x6c,"Unknown name HERE-->%s",param_2);
        break;
      }
      if (*local_res10 == '=') {
        iVar2 = FUN_140c20ac0((int)local_res10[1],8);
        while (pcVar1 = pcVar1 + 1, iVar2 != 0) {
          iVar2 = FUN_140c20ac0((int)pcVar1[1],8);
        }
        local_res10 = pcVar1;
        iVar2 = property_s_overflows(param_1,&local_res10,piVar4,1);
        if (iVar2 == 0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\property\\property_parse.c",0x178,"ossl_parse_property");
          FUN_140b91cc0(0x37,0x6b,"HERE-->%s",param_2);
          break;
        }
      }
      else {
        piVar4[1] = 0;
        piVar4[4] = 1;
      }
      pcVar1 = local_res10;
      iVar2 = FUN_140b78340(lVar3,piVar4);
      if (iVar2 == 0) break;
      if (*pcVar1 != ',') {
        if (*pcVar1 == '\0') goto LAB_140c5e1b5;
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\property\\property_parse.c",0x188,"ossl_parse_property");
        FUN_140b91cc0(0x37,0x6e,"HERE-->%s",pcVar1);
        goto LAB_140c5e1c3;
      }
      iVar2 = FUN_140c20ac0((int)pcVar1[1],8);
      while (param_2 = pcVar1 + 1, iVar2 != 0) {
        iVar2 = FUN_140c20ac0((int)pcVar1[2],8);
        pcVar1 = param_2;
      }
      local_res10 = param_2;
      piVar4 = (int *)FUN_140b8d8d0(0x18,"crypto\\property\\property_parse.c",0x169);
    }
  }
  FUN_140b8d990(piVar4,"crypto\\property\\property_parse.c",399);
  FUN_140b77c60(lVar3,FUN_140c5f620);
  return uVar7;
}

