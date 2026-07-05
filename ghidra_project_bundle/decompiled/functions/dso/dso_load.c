/**
 * Function: dso_load
 * Address:  140c5d660
 * Signature: undefined dso_load(void)
 * Body size: 372 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * dso_load(longlong *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  bVar1 = false;
  bVar2 = false;
  if (param_1 == (longlong *)0x0) {
    param_1 = (longlong *)FUN_140c5d890(param_3);
    if (param_1 == (longlong *)0x0) {
      uVar5 = 0x80025;
      uVar6 = 0x70;
      goto LAB_140c5d788;
    }
    *(undefined4 *)((longlong)param_1 + 0x14) = param_4;
    bVar2 = true;
  }
  bVar1 = bVar2;
  if (param_1[7] == 0) {
    if (param_2 == 0) {
      uVar5 = 0x6f;
      uVar6 = 0x8b;
    }
    else {
      if (param_1[8] == 0) {
        lVar4 = FUN_140b8c830(param_2,"crypto\\dso\\dso_lib.c",0xee);
        if (lVar4 != 0) {
          FUN_140b8d990(param_1[7],"crypto\\dso\\dso_lib.c",0xf1);
          param_1[7] = lVar4;
          if (*(code **)(*param_1 + 8) == (code *)0x0) {
            uVar5 = 0x6c;
            uVar6 = 0x8f;
          }
          else {
            iVar3 = (**(code **)(*param_1 + 8))(param_1);
            if (iVar3 != 0) {
              return param_1;
            }
            uVar5 = 0x67;
            uVar6 = 0x93;
          }
          goto LAB_140c5d788;
        }
      }
      else {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\dso\\dso_lib.c",0xea,"DSO_set_filename");
        FUN_140b91cc0(0x25,0x6e,0);
      }
      uVar5 = 0x70;
      uVar6 = 0x86;
    }
  }
  else {
    uVar5 = 0x6e;
    uVar6 = 0x7d;
  }
LAB_140c5d788:
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\dso\\dso_lib.c",uVar6,"DSO_load");
  FUN_140b91cc0(0x25,uVar5,0);
  if (bVar1) {
    FUN_140c5d2b0(param_1);
  }
  return (longlong *)0x0;
}

