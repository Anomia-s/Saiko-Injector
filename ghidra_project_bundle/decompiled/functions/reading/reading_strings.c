/**
 * Function: reading_strings
 * Address:  140ce00b0
 * Signature: undefined reading_strings(void)
 * Body size: 473 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int reading_strings(longlong *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *pcVar6;
  
  pcVar5 = "processing";
  if ((*(code **)(*param_1 + 8) != (code *)0x0) &&
     (iVar2 = (**(code **)(*param_1 + 8))(), iVar2 < 1)) {
    pcVar5 = "opening session";
    iVar2 = -1;
    goto LAB_140ce01f5;
  }
  if ((*(uint *)(param_1 + 5) & 0x100) != 0) {
    s_d_sn(FUN_140ce0870,param_1);
  }
  iVar3 = 0;
  iVar2 = FUN_140b77980(param_1[1]);
  if (0 < iVar2) {
    do {
      if (*(longlong *)(*param_1 + 0x10) != 0) {
        pcVar1 = *(code **)(*param_1 + 0x10);
        uVar4 = FUN_140b77990(param_1[1],iVar3);
        iVar2 = (*pcVar1)(param_1,uVar4);
        if (iVar2 < 1) {
          pcVar5 = "writing strings";
          iVar2 = -1;
          goto LAB_140ce01f5;
        }
      }
      iVar3 = iVar3 + 1;
      iVar2 = FUN_140b77980(param_1[1]);
    } while (iVar3 < iVar2);
  }
  if (*(code **)(*param_1 + 0x18) != (code *)0x0) {
    iVar2 = (**(code **)(*param_1 + 0x18))(param_1);
    if (iVar2 == -1) {
LAB_140ce0230:
      *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffffffe;
      iVar2 = -2;
      goto LAB_140ce01f5;
    }
    if (iVar2 == 0) {
      pcVar5 = "flushing";
      iVar2 = -1;
      goto LAB_140ce01f5;
    }
  }
  iVar3 = 0;
  iVar2 = FUN_140b77980(param_1[1]);
  if (0 < iVar2) {
    do {
      if (*(longlong *)(*param_1 + 0x20) == 0) goto LAB_140ce0230;
      pcVar1 = *(code **)(*param_1 + 0x20);
      uVar4 = FUN_140b77990(param_1[1],iVar3);
      iVar2 = (*pcVar1)(param_1,uVar4);
      if (iVar2 == -1) goto LAB_140ce0230;
      if (iVar2 == 0) {
        pcVar5 = "reading strings";
        iVar2 = -1;
        goto LAB_140ce01f5;
      }
      iVar3 = iVar3 + 1;
      iVar2 = FUN_140b77980(param_1[1]);
    } while (iVar3 < iVar2);
  }
  iVar2 = 0;
  pcVar5 = (char *)0x0;
LAB_140ce01f5:
  if ((*(code **)(*param_1 + 0x28) == (code *)0x0) ||
     (iVar3 = (**(code **)(*param_1 + 0x28))(param_1), 0 < iVar3)) {
    pcVar6 = pcVar5;
    if (iVar2 != -1) {
      return iVar2;
    }
  }
  else {
    iVar2 = -1;
    pcVar6 = "closing session";
    if (pcVar5 != (char *)0x0) {
      pcVar6 = pcVar5;
    }
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\ui\\ui_lib.c",0x228,"UI_process");
  FUN_140b91cc0(0x28,0x6b,"while %s",pcVar6);
  return iVar2;
}

