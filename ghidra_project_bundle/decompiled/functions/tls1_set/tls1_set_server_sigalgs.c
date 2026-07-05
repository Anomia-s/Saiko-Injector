/**
 * Function: tls1_set_server_sigalgs
 * Address:  140bafed0
 * Signature: undefined tls1_set_server_sigalgs(void)
 * Body size: 615 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls1_set_server_sigalgs(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  size_t _Size;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong local_res8;
  
  FUN_140b8d990(*(undefined8 *)(param_1 + 0x1578),"ssl\\t1_lib.c",0xb7f);
  uVar6 = 0;
  _Size = *(longlong *)(param_1 + 0x118) << 2;
  *(undefined8 *)(param_1 + 0x1578) = 0;
  *(undefined8 *)(param_1 + 0x1580) = 0;
  if (*(void **)(param_1 + 0x408) == (void *)0x0) {
    uVar5 = FUN_140b8da80(_Size,"ssl\\t1_lib.c",0xb87);
    *(undefined8 *)(param_1 + 0x408) = uVar5;
  }
  else {
    memset(*(void **)(param_1 + 0x408),0,_Size);
  }
  lVar3 = *(longlong *)(param_1 + 0x408);
  if (lVar3 == 0) {
    return 0;
  }
  if ((*(longlong *)(param_1 + 1000) != 0) || (*(longlong *)(param_1 + 0x3e0) != 0)) {
    iVar1 = FUN_140bb50b0(param_1);
    if (iVar1 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\t1_lib.c",0xba5,"tls1_set_server_sigalgs")
      ;
      uVar5 = 0x50;
      uVar9 = 0xc0103;
    }
    else {
      uVar7 = uVar6;
      if (*(longlong *)(param_1 + 0x118) != 0) {
        do {
          *(undefined4 *)(lVar3 + uVar7 * 4) = 0;
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(ulonglong *)(param_1 + 0x118));
      }
      if (*(longlong *)(param_1 + 0x1580) != 0) {
        do {
          lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1578) + uVar6 * 8);
          if ((((((*(byte *)(*(longlong *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) != 0) ||
                (iVar1 = **(int **)(param_1 + 0x18), iVar1 < 0x304)) || (iVar1 == 0x10000)) ||
              (*(int *)(lVar8 + 0x1c) != 6)) &&
             ((lVar8 = (longlong)*(int *)(lVar8 + 0x20), *(int *)(lVar3 + lVar8 * 4) == 0 &&
              (iVar1 = FUN_140ba6fd0(*(undefined8 *)(param_1 + 8),lVar8), iVar1 == 0)))) {
            *(undefined4 *)(lVar3 + lVar8 * 4) = 0x102;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < *(ulonglong *)(param_1 + 0x1580));
      }
      if (*(longlong *)(param_1 + 0x1578) != 0) {
        return 1;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\t1_lib.c",0xbad,"tls1_set_server_sigalgs")
      ;
      uVar5 = 0x28;
      uVar9 = 0x178;
    }
    FUN_140ba3290(param_1,uVar5,uVar9,0);
    return 0;
  }
  uVar2 = FUN_140bb25a0(param_1,1,&local_res8);
  uVar7 = uVar6;
  if (*(longlong *)(param_1 + 0x118) == 0) {
    return 1;
  }
  do {
    lVar3 = FUN_140bb4bb0(param_1,uVar7 & 0xffffffff);
    if ((lVar3 != 0) && (uVar2 != 0)) {
      uVar4 = uVar6;
      do {
        if (*(short *)(lVar3 + 0x10) == *(short *)(local_res8 + uVar4 * 2)) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x408) + uVar7 * 4) = 2;
          break;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar2);
    }
    uVar7 = uVar7 + 1;
    if (*(ulonglong *)(param_1 + 0x118) <= uVar7) {
      return 1;
    }
  } while( true );
}

