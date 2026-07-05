/**
 * Function: ossl_ssl_connection_reset
 * Address:  140b6d590
 * Signature: undefined ossl_ssl_connection_reset(void)
 * Body size: 555 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool ossl_ssl_connection_reset(int *param_1)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  
  if ((param_1 != (int *)0x0) &&
     ((piVar3 = param_1, *param_1 == 0 ||
      (((char)*param_1 < '\0' && (piVar3 = (int *)FUN_140bc8b20(), piVar3 != (int *)0x0)))))) {
    iVar2 = FUN_140ba49e0(piVar3);
    if (iVar2 != 0) {
      FUN_140ba4520(*(undefined8 *)(piVar3 + 0x23e));
      piVar3[0x23e] = 0;
      piVar3[0x23f] = 0;
    }
    FUN_140ba4520(*(undefined8 *)(piVar3 + 0x240));
    piVar3[0x240] = 0;
    piVar3[0x241] = 0;
    FUN_140b8d990(*(undefined8 *)(piVar3 + 0x242),"ssl\\ssl_lib.c",0x256);
    piVar3[0x242] = 0;
    piVar3[0x243] = 0;
    piVar3[0x244] = 0;
    piVar3[0x245] = 0;
    piVar3[0x232] = 0;
    piVar3[0x552] = 0;
    piVar3[0x553] = 0;
    piVar3[600] = 0;
    piVar3[0x142] = 0;
    piVar3[0x21] = 0;
    if (piVar3[0x2e6] == 0) {
      FUN_140ba3110(piVar3);
      iVar2 = **(int **)(param_1 + 6);
      piVar3[0x12] = iVar2;
      piVar3[0x273] = iVar2;
      piVar3[0x1a] = 1;
      FUN_140b8ef10(*(undefined8 *)(piVar3 + 0x3e));
      piVar3[0x3e] = 0;
      piVar3[0x3f] = 0;
      piVar3[0x272] = 0;
      piVar3[0x2e7] = -1;
      piVar3[0x2cd] = 0;
      piVar3[0x2ce] = 0;
      piVar3[0x2cf] = 0;
      piVar3[0x2d0] = 0;
      piVar3[0x2d1] = 0;
      FUN_140b709d0(*(undefined8 *)(piVar3 + 0x2f0));
      piVar3[0x2f0] = 0;
      piVar3[0x2f1] = 0;
      piVar3[0x151] = -1;
      piVar3[0x152] = -1;
      FUN_140b763d0(*(undefined8 *)(piVar3 + 0x14e));
      piVar3[0x14e] = 0;
      piVar3[0x14f] = 0;
      piVar3[0x14c] = 0;
      piVar3[0x14d] = 0;
      FUN_140b9bde0(*(undefined8 *)(piVar3 + 0x144),0);
      FUN_140b8d990(*(undefined8 *)(piVar3 + 0x55e),"ssl\\ssl_lib.c",0x282);
      piVar3[0x55e] = 0;
      piVar3[0x55f] = 0;
      piVar3[0x560] = 0;
      piVar3[0x561] = 0;
      lVar1 = *(longlong *)(param_1 + 6);
      if (lVar1 == *(longlong *)(param_1 + 4)) {
        pcVar4 = *(code **)(lVar1 + 0x30);
      }
      else {
        (**(code **)(lVar1 + 0x38))(param_1);
        *(longlong *)(param_1 + 6) = *(longlong *)(param_1 + 4);
        pcVar4 = *(code **)(*(longlong *)(param_1 + 4) + 0x28);
      }
      iVar2 = (*pcVar4)(param_1);
      if (iVar2 != 0) {
        FUN_140badfe0(*(undefined8 *)(piVar3 + 0x56));
        iVar2 = FUN_140baaa60(piVar3 + 0x312);
        return iVar2 != 0;
      }
    }
    else {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\ssl_lib.c",0x261,"ossl_ssl_connection_reset");
      FUN_140b91cc0(0x14,0xc0103,0);
    }
  }
  return false;
}

