/**
 * Function: there_are_no_property_definitions_with_encode
 * Address:  140c12590
 * Signature: undefined there_are_no_property_definitions_with_encode(void)
 * Body size: 573 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * there_are_no_property_definitions_with_encode(longlong param_1,longlong param_2)

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
              ("crypto\\encode_decode\\encoder_lib.c",0xdc,"ossl_encoder_instance_new");
    FUN_140b91cc0(0x3b,0xc0102,0);
    return (longlong *)0x0;
  }
  plVar2 = (longlong *)FUN_140b8da80(0x20,"crypto\\encode_decode\\encoder_lib.c",0xe0);
  if (plVar2 != (longlong *)0x0) {
    iVar1 = FUN_140bfdef0(param_1);
    if (iVar1 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\encode_decode\\encoder_lib.c",0xe4,"ossl_encoder_instance_new");
      FUN_140b91cc0(0x3b,0xc0103,0);
    }
    else {
      uVar3 = FUN_140c106a0(param_1);
      uVar3 = FUN_140bd3af0(uVar3);
      lVar4 = FUN_140c10a80(param_1);
      if (lVar4 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\encode_decode\\encoder_lib.c",0xec,"ossl_encoder_instance_new");
        uVar3 = FUN_140b77290(param_1);
        FUN_140b91cc0(0x3c,0x8010e,"there are no property definitions with encoder %s",uVar3);
      }
      else {
        uVar5 = FUN_140c5f930(lVar4,uVar3,"output");
        lVar6 = FUN_140c5f9b0(uVar3,uVar5);
        plVar2[2] = lVar6;
        if (lVar6 != 0) {
          lVar4 = FUN_140c5f930(lVar4,uVar3,"structure");
          if (lVar4 != 0) {
            lVar4 = FUN_140c5f9b0(uVar3,lVar4);
            plVar2[3] = lVar4;
          }
          *plVar2 = param_1;
          plVar2[1] = param_2;
          return plVar2;
        }
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\encode_decode\\encoder_lib.c",0xf6,"ossl_encoder_instance_new");
        uVar3 = FUN_140c106f0(param_1);
        uVar5 = FUN_140b77290(param_1);
        FUN_140b91cc0(0x3c,0x8010e,
                      "the mandatory \'output\' property is missing for encoder %s (properties: %s)"
                      ,uVar5,uVar3);
      }
    }
    if (*plVar2 != 0) {
      (**(code **)(*plVar2 + 0x38))(plVar2[1]);
    }
    plVar2[1] = 0;
    FUN_140c10630(*plVar2);
    *plVar2 = 0;
    FUN_140b8d990(plVar2,"crypto\\encode_decode\\encoder_lib.c",0x114);
    return (longlong *)0x0;
  }
  return (longlong *)0x0;
}

