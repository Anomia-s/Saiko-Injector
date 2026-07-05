/**
 * Function: srp_generate_client_master_secret
 * Address:  140bc4410
 * Signature: undefined srp_generate_client_master_secret(void)
 * Body size: 663 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong srp_generate_client_master_secret(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  char *_Str;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  size_t sVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  uVar9 = 0;
  iVar2 = FUN_140c4b400(*(undefined8 *)(param_1 + 0xc08),*(undefined8 *)(param_1 + 0xbf0));
  uVar4 = uVar9;
  if (iVar2 == 0) {
LAB_140bc4646:
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\tls_srp.c",0x176,"srp_generate_client_master_secret");
    uVar10 = 0xc0103;
  }
  else {
    uVar4 = FUN_140c4aeb0(*(undefined8 *)(param_1 + 0xc10),*(undefined8 *)(param_1 + 0xc08),
                          *(undefined8 *)(param_1 + 0xbf0),*puVar1,puVar1[0x8c]);
    if ((uVar4 == 0) || (*(code **)(param_1 + 0xbe0) == (code *)0x0)) goto LAB_140bc4646;
    _Str = (char *)(**(code **)(param_1 + 0xbe0))
                             (*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0xbc8));
    if (_Str != (char *)0x0) {
      lVar5 = FUN_140c4aed0(*(undefined8 *)(param_1 + 0xc00),*(undefined8 *)(param_1 + 0xbe8),_Str,
                            *puVar1,puVar1[0x8c]);
      uVar6 = uVar9;
      if (lVar5 == 0) {
LAB_140bc45d7:
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\tls_srp.c",0x186,"srp_generate_client_master_secret");
        uVar10 = 0xc0103;
LAB_140bc45fa:
        FUN_140ba3290(param_1,0x50,uVar10,0);
      }
      else {
        uVar6 = FUN_140c4b1b0(*(undefined8 *)(param_1 + 0xbf0),*(undefined8 *)(param_1 + 0xc08),
                              *(undefined8 *)(param_1 + 0xbf8),lVar5,
                              *(undefined8 *)(param_1 + 0xc18),uVar4,*puVar1,puVar1[0x8c]);
        if (uVar6 == 0) goto LAB_140bc45d7;
        iVar2 = FUN_140bfc870(uVar6);
        lVar11 = (longlong)((int)(iVar2 + 7 + (iVar2 + 7 >> 0x1f & 7U)) >> 3);
        lVar7 = FUN_140b8d8d0(lVar11,"ssl\\tls_srp.c",0x18b);
        if (lVar7 == 0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("ssl\\tls_srp.c",0x18c,"srp_generate_client_master_secret");
          uVar10 = 0x8000f;
          goto LAB_140bc45fa;
        }
        FUN_140bfcc70(uVar6,lVar7);
        uVar3 = FUN_140bed4e0(param_1,lVar7,lVar11,1);
        uVar9 = (ulonglong)uVar3;
      }
      FUN_140bfcb30(uVar6);
      FUN_140bfcb30(lVar5);
      sVar8 = strlen(_Str);
      FUN_140b8db20(_Str,sVar8,"ssl\\tls_srp.c",0x196);
      goto LAB_140bc4687;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\tls_srp.c",0x17c,"srp_generate_client_master_secret");
    uVar10 = 0xea;
  }
  FUN_140ba3290(param_1,0x50,uVar10,0);
  FUN_140bfcb30(0);
  FUN_140bfcb30(0);
LAB_140bc4687:
  FUN_140bfcb30(uVar4);
  return uVar9;
}

