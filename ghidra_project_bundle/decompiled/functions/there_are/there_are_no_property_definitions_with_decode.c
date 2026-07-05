/**
 * Function: there_are_no_property_definitions_with_decode
 * Address:  140c2c8e0
 * Signature: undefined there_are_no_property_definitions_with_decode(void)
 * Body size: 580 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * there_are_no_property_definitions_with_decode(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_1 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\encode_decode\\decoder_lib.c",0xfb,"ossl_decoder_instance_new");
    FUN_140b91cc0(0x3c,0xc0102,0);
    return (longlong *)0x0;
  }
  plVar2 = (longlong *)FUN_140b8da80(0x30,"crypto\\encode_decode\\decoder_lib.c",0xff);
  if (plVar2 != (longlong *)0x0) {
    uVar3 = FUN_140c2b1b0(param_1);
    uVar3 = FUN_140bd3af0(uVar3);
    lVar4 = FUN_140c2b870(param_1);
    if (lVar4 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\encode_decode\\decoder_lib.c",0x106,"ossl_decoder_instance_new");
      uVar3 = FUN_140b77290(param_1);
      FUN_140b91cc0(0x3c,0x8010e,"there are no property definitions with decoder %s",uVar3);
    }
    else {
      uVar5 = FUN_140c5f930(lVar4,uVar3,"input");
      lVar6 = FUN_140c5f9b0(uVar3,uVar5);
      plVar2[2] = lVar6;
      *(undefined4 *)(plVar2 + 4) = 0;
      if (lVar6 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\encode_decode\\decoder_lib.c",0x111,"ossl_decoder_instance_new");
        uVar3 = FUN_140c2b200(param_1);
        uVar5 = FUN_140b77290(param_1);
        FUN_140b91cc0(0x3c,0x8010e,
                      "the mandatory \'input\' property is missing for decoder %s (properties: %s)",
                      uVar5,uVar3);
      }
      else {
        lVar4 = FUN_140c5f930(lVar4,uVar3,"structure");
        if (lVar4 != 0) {
          lVar4 = FUN_140c5f9b0(uVar3,lVar4);
          plVar2[3] = lVar4;
        }
        iVar1 = FUN_140bfdef0(param_1);
        if (iVar1 != 0) {
          *plVar2 = param_1;
          plVar2[1] = param_2;
          return plVar2;
        }
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\encode_decode\\decoder_lib.c",0x121,"ossl_decoder_instance_new");
        FUN_140b91cc0(0x3c,0xc0103,0);
      }
    }
    if (*plVar2 != 0) {
      (**(code **)(*plVar2 + 0x38))(plVar2[1]);
    }
    plVar2[1] = 0;
    FUN_140c2b140(*plVar2);
    *plVar2 = 0;
    FUN_140b8d990(plVar2,"crypto\\encode_decode\\decoder_lib.c",0x134);
    return (longlong *)0x0;
  }
  return (longlong *)0x0;
}

