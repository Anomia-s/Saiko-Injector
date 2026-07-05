/**
 * Function: policy_cache_create
 * Address:  140bead90
 * Signature: undefined policy_cache_create(void)
 * Body size: 512 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int policy_cache_create(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  
  plVar1 = *(longlong **)(param_1 + 0xf8);
  iVar7 = 0;
  lVar4 = 0;
  iVar2 = FUN_140b77980(param_2);
  if (0 < iVar2) {
    lVar4 = FUN_140b77a70(FUN_140bead60);
    plVar1[1] = lVar4;
    if (lVar4 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\x509\\pcy_cache.c",0x26,"policy_cache_create");
      FUN_140b91cc0(0x22,0x8000f,0);
      FUN_140b77c60(param_2,FUN_140c642a0);
      goto LAB_140beaecd;
    }
    iVar6 = 0;
    do {
      uVar5 = FUN_140b77990(param_2,iVar6);
      lVar4 = FUN_140c64ea0(uVar5,0,param_3);
      if (lVar4 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\x509\\pcy_cache.c",0x2d,"policy_cache_create");
        FUN_140b91cc0(0x22,0x8000b,0);
        FUN_140b77c60(param_2,FUN_140c642a0);
        goto LAB_140beaecd;
      }
      iVar3 = FUN_140b964c0(*(undefined8 *)(lVar4 + 8));
      if (iVar3 == 0x2ea) {
        if (*plVar1 != 0) {
LAB_140beaf38:
          *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 0x800;
          iVar7 = -1;
          goto LAB_140beaeb2;
        }
        *plVar1 = lVar4;
      }
      else {
        iVar3 = FUN_140b78040(plVar1[1],lVar4);
        if (-1 < iVar3) goto LAB_140beaf38;
        iVar3 = FUN_140b78340(plVar1[1],lVar4);
        if (iVar3 == 0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\x509\\pcy_cache.c",0x3d,"policy_cache_create");
          FUN_140b91cc0(0x22,0x8000f,0);
          goto LAB_140beaeb2;
        }
      }
      lVar4 = 0;
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar2);
    FUN_140b78500(plVar1[1]);
    iVar7 = 1;
  }
LAB_140beaeb2:
  FUN_140c64fe0(lVar4);
  FUN_140b77c60(param_2,FUN_140c642a0);
  if (0 < iVar7) {
    return iVar7;
  }
LAB_140beaecd:
  FUN_140b77c60(plVar1[1],FUN_140c64fe0);
  plVar1[1] = 0;
  return iVar7;
}

