/**
 * Function: no_pss_parameter_restrictionsn
 * Address:  140d6b000
 * Signature: undefined no_pss_parameter_restrictionsn(void)
 * Body size: 1442 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 no_pss_parameter_restrictionsn(longlong param_1,longlong param_2,ulonglong param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  undefined4 local_res8;
  undefined8 local_res20;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar16;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_48;
  
  uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  uStack_48 = 0x140d6b020;
  pcVar13 = (char *)0x0;
  pcVar15 = "RSA key";
  local_60 = 0;
  local_res20 = 0;
  local_68 = 0;
  local_78 = 0;
  local_70 = 0;
  local_58 = FUN_140c2a560(param_2);
  local_res8 = 0;
  if ((param_1 == 0) || (param_2 == 0)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\encode_decode\\encode_key2text.c",0x1d7,"rsa_to_text");
    uVar11 = 0xc0102;
    pcVar10 = pcVar13;
  }
  else {
    pcVar10 = (char *)FUN_140b77ab0();
    local_78 = FUN_140b77ab0();
    local_70 = FUN_140b77ab0();
    if (((pcVar10 != (char *)0x0) && (local_78 != 0)) && (local_70 != 0)) {
      if ((param_3 & 1) == 0) {
        pcVar14 = pcVar13;
        if ((param_3 & 2) != 0) {
          pcVar15 = "Public-Key";
          pcVar13 = "Modulus:";
          pcVar14 = "Exponent:";
        }
      }
      else {
        pcVar15 = "Private-Key";
        pcVar13 = "modulus:";
        pcVar14 = "publicExponent:";
      }
      FUN_140c2a190(param_2,&local_res20,&local_68,&local_60);
      FUN_140c2a900(param_2,pcVar10,local_78,local_70);
      uVar2 = FUN_140b77980(pcVar10);
      uVar3 = FUN_140bfc870(local_res20);
      if ((param_3 & 1) == 0) {
        iVar4 = FUN_140c078a0(param_1,"%s: (%d bit)\n",pcVar15,uVar3);
      }
      else {
        iVar4 = FUN_140c078a0(param_1,"%s: (%d bit, %d primes)\n",pcVar15,uVar3,
                              CONCAT44(uVar16,uVar2));
      }
      if (((iVar4 < 1) || (iVar4 = sssllu_s0xllxn(param_1,pcVar13,local_res20), iVar4 == 0)) ||
         (iVar4 = sssllu_s0xllxn(param_1,pcVar14,local_68), iVar4 == 0)) goto LAB_140d6b56e;
      if ((param_3 & 1) != 0) {
        iVar4 = sssllu_s0xllxn(param_1,"privateExponent:",local_60);
        if (iVar4 == 0) goto LAB_140d6b56e;
        uVar11 = FUN_140b77990(pcVar10,0);
        iVar4 = sssllu_s0xllxn(param_1,"prime1:",uVar11);
        if (iVar4 == 0) goto LAB_140d6b56e;
        uVar11 = FUN_140b77990(pcVar10,1);
        iVar4 = sssllu_s0xllxn(param_1,"prime2:",uVar11);
        if (iVar4 == 0) goto LAB_140d6b56e;
        uVar11 = FUN_140b77990(local_78,0);
        iVar4 = sssllu_s0xllxn(param_1,"exponent1:",uVar11);
        if (iVar4 == 0) goto LAB_140d6b56e;
        uVar11 = FUN_140b77990(local_78,1);
        iVar4 = sssllu_s0xllxn(param_1,"exponent2:",uVar11);
        if (iVar4 == 0) goto LAB_140d6b56e;
        uVar11 = FUN_140b77990(local_70,0);
        iVar4 = sssllu_s0xllxn(param_1,"coefficient:",uVar11);
        if (iVar4 == 0) goto LAB_140d6b56e;
        iVar4 = FUN_140b77980(pcVar10);
        if (2 < iVar4) {
          iVar4 = 3;
          do {
            iVar5 = FUN_140c078a0(param_1,"prime%d:",iVar4);
            if (iVar5 < 1) goto LAB_140d6b56e;
            uVar11 = FUN_140b77990(pcVar10,iVar4 + -1);
            iVar5 = sssllu_s0xllxn(param_1,0,uVar11);
            if ((iVar5 == 0) || (iVar5 = FUN_140c078a0(param_1,"exponent%d:",iVar4), iVar5 < 1))
            goto LAB_140d6b56e;
            uVar11 = FUN_140b77990(local_78,iVar4 + -1);
            iVar5 = sssllu_s0xllxn(param_1,0,uVar11);
            if ((iVar5 == 0) || (iVar5 = FUN_140c078a0(param_1,"coefficient%d:",iVar4), iVar5 < 1))
            goto LAB_140d6b56e;
            uVar11 = FUN_140b77990(local_70,iVar4 + -2);
            iVar5 = sssllu_s0xllxn(param_1,0,uVar11);
            if (iVar5 == 0) goto LAB_140d6b56e;
            iVar5 = FUN_140b77980(pcVar10);
            bVar1 = iVar4 < iVar5;
            iVar4 = iVar4 + 1;
          } while (bVar1);
        }
      }
      if ((param_3 & 0x80) != 0) {
        iVar4 = FUN_140c2a410(param_2,0xf000);
        uVar11 = local_58;
        if (iVar4 == 0) {
          iVar4 = FUN_140c90320(local_58);
          if (iVar4 == 0) {
            pcVar13 = "(INVALID PSS PARAMETERS)\n";
LAB_140d6b502:
            iVar4 = FUN_140c078a0(param_1,pcVar13);
            goto joined_r0x000140d6b50c;
          }
        }
        else if (iVar4 == 0x1000) {
          iVar4 = FUN_140c90320(local_58);
          if (iVar4 != 0) {
            pcVar13 = "No PSS parameter restrictions\n";
            goto LAB_140d6b502;
          }
          iVar4 = FUN_140c903d0(uVar11);
          iVar5 = FUN_140c903e0(uVar11);
          iVar6 = FUN_140c903f0(uVar11);
          iVar7 = FUN_140c90400(uVar11);
          iVar8 = FUN_140b78550(uVar11);
          iVar9 = FUN_140c078a0(param_1,"PSS parameter restrictions:\n");
          if (iVar9 < 1) goto LAB_140d6b56e;
          pcVar15 = "";
          pcVar13 = "";
          if (iVar4 == 0x40) {
            pcVar13 = " (default)";
          }
          uVar11 = FUN_140ca9390(iVar4);
          iVar4 = FUN_140c078a0(param_1,"  Hash Algorithm: %s%s\n",uVar11,pcVar13);
          if (iVar4 < 1) goto LAB_140d6b56e;
          if ((iVar5 != 0x38f) || (pcVar13 = " (default)", iVar6 != 0x40)) {
            pcVar13 = "";
          }
          uVar11 = FUN_140ca9390(iVar6);
          uVar12 = FUN_140ca92f0(iVar5);
          iVar4 = FUN_140c078a0(param_1,"  Mask Algorithm: %s with %s%s\n",uVar12,uVar11,pcVar13);
          if (iVar4 < 1) goto LAB_140d6b56e;
          pcVar14 = "";
          if (iVar7 == 0x14) {
            pcVar14 = " (default)";
          }
          iVar4 = FUN_140c078a0(param_1,"  Minimum Salt Length: %d%s\n",iVar7,pcVar14,pcVar13);
          if (iVar4 < 1) goto LAB_140d6b56e;
          if (iVar8 == 1) {
            pcVar15 = " (default)";
          }
          iVar4 = FUN_140c078a0(param_1,"  Trailer Field: 0x%x%s\n",iVar8,pcVar15,pcVar13);
joined_r0x000140d6b50c:
          if (iVar4 < 1) goto LAB_140d6b56e;
        }
      }
      local_res8 = 1;
      goto LAB_140d6b56e;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\encode_decode\\encode_key2text.c",0x1e0,"rsa_to_text");
    uVar11 = 0x8000f;
  }
  FUN_140b91cc0(0x39,uVar11,0);
LAB_140d6b56e:
  FUN_140b77c10(pcVar10);
  FUN_140b77c10(local_78);
  FUN_140b77c10(local_70);
  return local_res8;
}

