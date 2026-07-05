/**
 * Function: loader_from_algorithm
 * Address:  140c5c780
 * Signature: undefined loader_from_algorithm(void)
 * Body size: 660 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong loader_from_algorithm(undefined4 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_2 + 0x10);
  lVar2 = FUN_140b8da80(0xd8,"crypto\\store\\store_meth.c",0x32);
  if (lVar2 == 0) {
LAB_140c5c9e2:
    FUN_140b8d990(lVar2,"crypto\\store\\store_meth.c",0x37);
    return 0;
  }
  *(undefined4 *)(lVar2 + 0x80) = 1;
  iVar1 = FUN_140bd3100(param_3);
  if (iVar1 == 0) goto LAB_140c5c9e2;
  *(longlong *)(lVar2 + 0x60) = param_3;
  *(undefined4 *)(lVar2 + 0x68) = param_1;
  *(undefined8 *)(lVar2 + 0x70) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(lVar2 + 0x78) = *(undefined8 *)(param_2 + 0x18);
  iVar1 = *piVar3;
  if (iVar1 != 0) {
    piVar3 = piVar3 + 2;
    do {
      switch(iVar1) {
      case 1:
        if (*(longlong *)(lVar2 + 0x88) == 0) {
          *(undefined8 *)(lVar2 + 0x88) = *(undefined8 *)piVar3;
        }
        break;
      case 2:
        if (*(longlong *)(lVar2 + 0x90) == 0) {
          *(undefined8 *)(lVar2 + 0x90) = *(undefined8 *)piVar3;
        }
        break;
      case 3:
        if (*(longlong *)(lVar2 + 0x98) == 0) {
          *(undefined8 *)(lVar2 + 0x98) = *(undefined8 *)piVar3;
        }
        break;
      case 4:
        if (*(longlong *)(lVar2 + 0xa0) == 0) {
          *(undefined8 *)(lVar2 + 0xa0) = *(undefined8 *)piVar3;
        }
        break;
      case 5:
        if (*(longlong *)(lVar2 + 0xa8) == 0) {
          *(undefined8 *)(lVar2 + 0xa8) = *(undefined8 *)piVar3;
        }
        break;
      case 6:
        if (*(longlong *)(lVar2 + 0xb0) == 0) {
          *(undefined8 *)(lVar2 + 0xb0) = *(undefined8 *)piVar3;
        }
        break;
      case 7:
        if (*(longlong *)(lVar2 + 0xb8) == 0) {
          *(undefined8 *)(lVar2 + 0xb8) = *(undefined8 *)piVar3;
        }
        break;
      case 8:
        if (*(longlong *)(lVar2 + 0xc0) == 0) {
          *(undefined8 *)(lVar2 + 0xc0) = *(undefined8 *)piVar3;
        }
        break;
      case 9:
        if (*(longlong *)(lVar2 + 200) == 0) {
          *(undefined8 *)(lVar2 + 200) = *(undefined8 *)piVar3;
        }
        break;
      case 10:
        if (*(longlong *)(lVar2 + 0xd0) == 0) {
          *(undefined8 *)(lVar2 + 0xd0) = *(undefined8 *)piVar3;
        }
      }
      iVar1 = piVar3[2];
      piVar3 = piVar3 + 4;
    } while (iVar1 != 0);
  }
  if ((((*(longlong *)(lVar2 + 0x88) != 0) || (*(longlong *)(lVar2 + 0x90) != 0)) &&
      (*(longlong *)(lVar2 + 0xa8) != 0)) &&
     ((*(longlong *)(lVar2 + 0xb0) != 0 && (*(longlong *)(lVar2 + 0xb8) != 0)))) {
    return lVar2;
  }
  if (param_3 != 0) {
    LOCK();
    piVar3 = (int *)(lVar2 + 0x80);
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (1 < iVar1) goto LAB_140c5c9b1;
    FUN_140bd3160(*(undefined8 *)(lVar2 + 0x60));
  }
  FUN_140b8d990(lVar2,"crypto\\store\\store_meth.c",0x27);
LAB_140c5c9b1:
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("crypto\\store\\store_meth.c",0xf2,"loader_from_algorithm");
  FUN_140b91cc0(0x2c,0x74,0);
  return 0;
}

