/**
 * Function: bn_blinding_create_param
 * Address:  140cb4e40
 * Signature: undefined bn_blinding_create_param(void)
 * Body size: 812 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong *
bn_blinding_create_param
          (longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,longlong param_5
          ,longlong param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  int local_res8 [2];
  
  plVar4 = param_1;
  if (param_1 == (longlong *)0x0) {
    plVar4 = (longlong *)FUN_140b8da80(0x48,"crypto\\bn\\bn_blind.c",0x24);
    if (plVar4 != (longlong *)0x0) {
      lVar5 = cryptothreads_winc();
      plVar4[8] = lVar5;
      if (lVar5 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\bn\\bn_blind.c",0x29,"BN_BLINDING_new");
        FUN_140b91cc0(3,0x8000f,0);
        uVar6 = 0x2a;
      }
      else {
        uVar1 = FUN_140b8b9d0();
        *(undefined4 *)(plVar4 + 4) = uVar1;
        lVar5 = FUN_140bfd090(param_3);
        plVar4[3] = lVar5;
        if (lVar5 != 0) {
          iVar3 = FUN_140bfc6e0(param_3,4);
          if (iVar3 != 0) {
            FUN_140bfc6d0(plVar4[3],4);
          }
          *(undefined4 *)((longlong)plVar4 + 0x24) = 0xffffffff;
          goto LAB_140cb4f67;
        }
        FUN_140bfcf10(*plVar4);
        FUN_140bfcf10(plVar4[1]);
        FUN_140bfcf10(plVar4[2]);
        FUN_140bfcf10(plVar4[3]);
        cryptothreads_winc(plVar4[8]);
        uVar6 = 0x58;
      }
      FUN_140b8d990(plVar4,"crypto\\bn\\bn_blind.c",uVar6);
      plVar4 = (longlong *)0x0;
    }
LAB_140cb4f67:
    if (plVar4 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
  }
  if (*plVar4 == 0) {
    lVar5 = FUN_140bfcab0();
    *plVar4 = lVar5;
    if (lVar5 == 0) goto LAB_140cb5103;
  }
  if (plVar4[1] == 0) {
    lVar5 = FUN_140bfcab0();
    plVar4[1] = lVar5;
    if (lVar5 == 0) goto LAB_140cb5103;
  }
  if (param_2 != 0) {
    FUN_140bfcf10(plVar4[2]);
    lVar5 = FUN_140bfd090(param_2);
    plVar4[2] = lVar5;
  }
  if (plVar4[2] != 0) {
    if (param_5 != 0) {
      plVar4[7] = param_5;
    }
    if (param_6 != 0) {
      plVar4[6] = param_6;
    }
    iVar2 = FUN_140ca3c70(*plVar4,plVar4[3],0,param_4);
    iVar3 = 0x20;
    while (iVar2 != 0) {
      lVar5 = FUN_140cf3b70(plVar4[1],*plVar4,plVar4[3],param_4,local_res8);
      if (lVar5 != 0) {
        if (((code *)plVar4[7] == (code *)0x0) || (plVar4[6] == 0)) {
          iVar3 = FUN_140c9a860(*plVar4,*plVar4,plVar4[2],plVar4[3],param_4);
        }
        else {
          iVar3 = (*(code *)plVar4[7])(*plVar4,*plVar4,plVar4[2],plVar4[3],param_4,plVar4[6]);
        }
        if (iVar3 != 0) {
          if (plVar4[6] == 0) {
            return plVar4;
          }
          iVar3 = FUN_140c93150(plVar4[1],plVar4[1],plVar4[6],param_4);
          if ((iVar3 != 0) && (iVar3 = FUN_140c93150(*plVar4,*plVar4,plVar4[6],param_4), iVar3 != 0)
             ) {
            return plVar4;
          }
        }
        break;
      }
      if (local_res8[0] == 0) break;
      if (iVar3 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\bn\\bn_blind.c",0x11c,"BN_BLINDING_create_param");
        FUN_140b91cc0(3,0x71,0);
        break;
      }
      iVar2 = FUN_140ca3c70(*plVar4,plVar4[3],0,param_4);
      iVar3 = iVar3 + -1;
    }
  }
LAB_140cb5103:
  if (param_1 == (longlong *)0x0) {
    if (plVar4 != (longlong *)0x0) {
      FUN_140bfcf10(*plVar4);
      FUN_140bfcf10(plVar4[1]);
      FUN_140bfcf10(plVar4[2]);
      FUN_140bfcf10(plVar4[3]);
      cryptothreads_winc(plVar4[8]);
      FUN_140b8d990(plVar4,"crypto\\bn\\bn_blind.c",0x58);
    }
    return (longlong *)0x0;
  }
  return plVar4;
}

