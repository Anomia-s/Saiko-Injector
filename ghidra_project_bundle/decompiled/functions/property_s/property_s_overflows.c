/**
 * Function: property_s_overflows
 * Address:  140c5f220
 * Signature: undefined property_s_overflows(void)
 * Body size: 967 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void property_s_overflows(undefined8 param_1,longlong *param_2,longlong param_3,undefined4 param_4)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  char cVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined1 auStack_488 [32];
  longlong *local_468;
  longlong *local_458 [2];
  char local_448 [1008];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x140c5f237;
  local_58 = DAT_1414ef3c0 ^ (ulonglong)auStack_488;
  pcVar2 = (char *)*param_2;
  uVar12 = 0;
  iVar3 = 0;
  cVar8 = *pcVar2;
  local_458[0] = param_2;
  if ((cVar8 == '\"') || (cVar8 == '\'')) {
    cVar8 = pcVar2[1];
    plVar11 = (longlong *)(pcVar2 + 1);
    cVar1 = *pcVar2;
    iVar3 = 0;
    uVar7 = uVar12;
    uVar13 = uVar12;
    plVar14 = plVar11;
    if (cVar8 == '\0') {
LAB_140c5f508:
      if ((char)*plVar14 == '\0') goto LAB_140c5f50d;
      if (999 < uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_140b68c50();
      }
      local_448[uVar7] = '\0';
      if (iVar3 == 0) {
        uVar5 = FUN_140caa3a0(param_1,local_448,param_4);
        *(undefined4 *)(param_3 + 0x10) = uVar5;
      }
      else {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\property\\property_parse.c",0xd7,"parse_string");
        FUN_140b91cc0(0x37,0x6d,"HERE-->%s",plVar11);
      }
      iVar4 = FUN_140c20ac0((int)*(char *)((longlong)plVar14 + 1),8);
      while (plVar11 = (longlong *)((longlong)plVar14 + 1), iVar4 != 0) {
        iVar4 = FUN_140c20ac0((int)*(char *)((longlong)plVar14 + 2),8);
        plVar14 = plVar11;
      }
      *(undefined4 *)(param_3 + 4) = 0;
      uVar12 = (ulonglong)(iVar3 == 0);
    }
    else {
      do {
        iVar3 = (int)uVar13;
        if (cVar8 == cVar1) goto LAB_140c5f508;
        if (uVar7 < 999) {
          local_448[uVar7] = cVar8;
          uVar7 = uVar7 + 1;
        }
        else {
          uVar13 = 1;
        }
        cVar8 = *(char *)((longlong)plVar14 + 1);
        plVar14 = (longlong *)((longlong)plVar14 + 1);
      } while (cVar8 != '\0');
LAB_140c5f50d:
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\property\\property_parse.c",0xd1,"parse_string");
      local_468 = plVar11;
      FUN_140b91cc0(0x37,0x6a,"HERE-->%c%s",(int)cVar1);
    }
    iVar3 = (int)uVar12;
    param_2 = local_458[0];
  }
  else if (cVar8 == '+') {
    local_458[0] = (longlong *)(pcVar2 + 1);
    iVar3 = property_s_overflows(local_458,param_3);
    plVar11 = local_458[0];
  }
  else if (cVar8 == '-') {
    local_458[0] = (longlong *)(pcVar2 + 1);
    iVar3 = property_s_overflows(local_458,param_3);
    *(longlong *)(param_3 + 0x10) = -*(longlong *)(param_3 + 0x10);
    plVar11 = local_458[0];
  }
  else {
    if (cVar8 != '0') {
LAB_140c5f463:
      iVar3 = FUN_140c20af0((int)*pcVar2);
      if (iVar3 == 0) {
        iVar3 = FUN_140c20ac0((int)*pcVar2,3);
        if (iVar3 != 0) {
          here_s(param_1,param_2,param_3,param_4);
        }
      }
      else {
        property_s_overflows(param_2,param_3);
      }
      goto LAB_140c5f47a;
    }
    plVar11 = (longlong *)(pcVar2 + 1);
    if (pcVar2[1] == 'x') {
      local_458[0] = (longlong *)(pcVar2 + 2);
      iVar3 = property_s_overflows(local_458,param_3);
      plVar11 = local_458[0];
    }
    else {
      iVar4 = FUN_140c20af0((int)pcVar2[1]);
      if (iVar4 == 0) goto LAB_140c5f463;
      cVar8 = (char)*plVar11;
      plVar14 = plVar11;
      do {
        if (((byte)(cVar8 - 0x38U) < 2) || (iVar4 = FUN_140c20af0((int)cVar8), iVar4 == 0)) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          uVar10 = 0xaa;
          goto LAB_140c5f432;
        }
        lVar9 = (longlong)((char)*plVar14 + -0x30);
        lVar6 = 0x7fffffffffffffff - lVar9;
        if ((longlong)(lVar6 + (ulonglong)((uint)(lVar6 >> 0x3f) & 7)) >> 3 < (longlong)uVar12) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\property\\property_parse.c",0xaf,"parse_oct");
          FUN_140b91cc0(0x37,0x6c,"Property %s overflows",plVar11);
          goto LAB_140c5f5e8;
        }
        uVar12 = lVar9 + uVar12 * 8;
        plVar14 = (longlong *)((longlong)plVar14 + 1);
        iVar4 = FUN_140c20af0((int)*(char *)plVar14);
      } while (((iVar4 != 0) && (cVar8 = *(char *)plVar14, cVar8 != '9')) && (cVar8 != '8'));
      iVar4 = FUN_140c20ac0((int)*(char *)plVar14,8);
      if (((iVar4 == 0) && (*(char *)plVar14 != '\0')) && (*(char *)plVar14 != ',')) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        uVar10 = 0xb7;
LAB_140c5f432:
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\property\\property_parse.c",uVar10,"parse_oct");
        FUN_140b91cc0(0x37,0x68,"HERE-->%s",plVar11);
      }
      else {
        iVar3 = FUN_140c20ac0((int)*(char *)plVar14,8);
        plVar11 = plVar14;
        while (iVar3 != 0) {
          pcVar2 = (char *)((longlong)plVar11 + 1);
          plVar11 = (longlong *)((longlong)plVar11 + 1);
          iVar3 = FUN_140c20ac0((int)*pcVar2,8);
        }
        *(undefined4 *)(param_3 + 4) = 1;
        iVar3 = 1;
        *(ulonglong *)(param_3 + 0x10) = uVar12;
      }
    }
  }
LAB_140c5f5e8:
  if (iVar3 != 0) {
    *param_2 = (longlong)plVar11;
  }
LAB_140c5f47a:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_58 ^ (ulonglong)auStack_488);
}

