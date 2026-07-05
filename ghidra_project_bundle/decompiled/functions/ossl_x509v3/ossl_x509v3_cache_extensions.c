/**
 * Function: ossl_x509v3_cache_extensions
 * Address:  140bc56c0
 * Signature: undefined ossl_x509v3_cache_extensions(void)
 * Body size: 1905 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ossl_x509v3_cache_extensions(longlong param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  int *piVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  int local_res8 [2];
  int local_res10 [2];
  
  if (*(int *)(param_1 + 0x150) != 0) {
    return (ulonglong)(~(*(uint *)(param_1 + 0xd8) >> 7) & 1);
  }
  uVar6 = FUN_140b8b770(*(undefined8 *)(param_1 + 0x148));
  if ((int)uVar6 == 0) {
    return uVar6;
  }
  puVar14 = (uint *)(param_1 + 0xd8);
  if ((*puVar14 & 0x100) != 0) {
    FUN_140b8b7a0(*(undefined8 *)(param_1 + 0x148));
    return (ulonglong)(~(*puVar14 >> 7) & 1);
  }
  FUN_140b932f0();
  uVar7 = FUN_140b70380();
  iVar2 = FUN_140bf32e0(param_1,uVar7,param_1 + 0x128,0);
  if (iVar2 == 0) {
    *puVar14 = *puVar14 | 0x100000;
  }
  iVar2 = FUN_140b9f260(param_1);
  if (iVar2 == 0) {
    *puVar14 = *puVar14 | 0x40;
  }
  puVar14 = (uint *)(param_1 + 0xd8);
  uVar4 = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd0) = 0xffffffff;
  piVar8 = (int *)FUN_140b778e0(param_1,0x57,local_res8,0);
  if (piVar8 == (int *)0x0) {
    if (local_res8[0] != -1) {
      *puVar14 = *puVar14 | 0x80;
    }
  }
  else {
    if (*piVar8 != 0) {
      *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 0x10;
    }
    puVar13 = (uint *)(param_1 + 0xd8);
    if (*(longlong *)(piVar8 + 2) != 0) {
      if (*(int *)(*(longlong *)(piVar8 + 2) + 4) == 0x102) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\x509\\v3_purp.c",0x1e3,"ossl_x509v3_cache_extensions");
        FUN_140b91cc0(0x22,0xa8,0);
        *puVar14 = *puVar14 | 0x80;
        FUN_140c4b850(piVar8);
        *puVar13 = *puVar13 | 1;
        goto LAB_140bc585d;
      }
      uVar3 = FUN_140bd8680();
      *(undefined4 *)(param_1 + 0xd0) = uVar3;
    }
    FUN_140c4b850(piVar8);
    *puVar13 = *puVar13 | 1;
  }
LAB_140bc585d:
  puVar14 = (uint *)(param_1 + 0xd8);
  plVar9 = (longlong *)FUN_140b778e0(param_1,0x297,local_res8,0);
  if (plVar9 == (longlong *)0x0) {
    if (local_res8[0] != -1) {
      *puVar14 = *puVar14 | 0x80;
    }
  }
  else {
    if ((((*(byte *)puVar14 & 0x10) != 0) ||
        (iVar2 = FUN_140b77840(param_1,0x55,0xffffffff), -1 < iVar2)) ||
       (iVar2 = FUN_140b77840(param_1,0x56,0xffffffff), -1 < iVar2)) {
      *puVar14 = *puVar14 | 0x80;
    }
    if (*plVar9 != 0) {
      uVar4 = FUN_140bd8680();
    }
    *(undefined4 *)(param_1 + 0xd4) = uVar4;
    FUN_140c4b650(plVar9);
    *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 0x400;
  }
  puVar14 = (uint *)(param_1 + 0xd8);
  piVar8 = (int *)FUN_140b778e0(param_1,0x53,local_res8,0);
  if (piVar8 == (int *)0x0) {
    if (local_res8[0] == -1) goto LAB_140bc5998;
  }
  else {
    *(undefined4 *)(param_1 + 0xdc) = 0;
    if (0 < *piVar8) {
      bVar1 = **(byte **)(piVar8 + 2);
      *(uint *)(param_1 + 0xdc) = (uint)bVar1;
      if (1 < *piVar8) {
        *(uint *)(param_1 + 0xdc) =
             (uint)CONCAT11(*(undefined1 *)(*(longlong *)(piVar8 + 2) + 1),bVar1);
      }
    }
    *puVar14 = *puVar14 | 2;
    FUN_140b90e80(piVar8);
    if (*(int *)(param_1 + 0xdc) != 0) goto LAB_140bc5998;
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\x509\\v3_purp.c",0x20c,"ossl_x509v3_cache_extensions");
    FUN_140b91cc0(0x22,0xa9,0);
  }
  *puVar14 = *puVar14 | 0x80;
LAB_140bc5998:
  puVar14 = (uint *)(param_1 + 0xd8);
  *(undefined4 *)(param_1 + 0xe0) = 0;
  lVar10 = FUN_140b778e0(param_1,0x7e,local_res8,0);
  if (lVar10 == 0) {
    if (local_res8[0] != -1) {
      *puVar14 = *puVar14 | 0x80;
    }
  }
  else {
    *puVar14 = *puVar14 | 4;
    local_res8[0] = 0;
    iVar2 = FUN_140b77980(lVar10);
    if (local_res8[0] < iVar2) {
      do {
        uVar7 = FUN_140b77990(lVar10,local_res8[0]);
        iVar2 = FUN_140b964c0(uVar7);
        if (iVar2 < 0xb5) {
          if (iVar2 == 0xb4) {
            *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) | 0x20;
          }
          else {
            switch(iVar2) {
            case 0x81:
              *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) | 1;
              break;
            case 0x82:
              *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) | 2;
              break;
            case 0x83:
              *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) | 8;
              break;
            case 0x84:
              *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) | 4;
              break;
            case 0x85:
              *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) | 0x40;
              break;
            case 0x89:
            case 0x8b:
              *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) | 0x10;
            }
          }
        }
        else if (iVar2 == 0x129) {
          *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) | 0x80;
        }
        else if (iVar2 == 0x38e) {
          *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) | 0x100;
        }
        local_res8[0] = local_res8[0] + 1;
        iVar2 = FUN_140b77980(lVar10);
      } while (local_res8[0] < iVar2);
    }
    FUN_140b77c60(lVar10,FUN_140bde750);
  }
  puVar14 = (uint *)(param_1 + 0xd8);
  piVar8 = (int *)FUN_140b778e0(param_1,0x47,local_res8,0);
  if (piVar8 == (int *)0x0) {
    if (local_res8[0] != -1) {
      *puVar14 = *puVar14 | 0x80;
    }
  }
  else {
    if (*piVar8 < 1) {
      uVar12 = 0;
    }
    else {
      uVar12 = (uint)**(byte **)(piVar8 + 2);
    }
    *(uint *)(param_1 + 0xe4) = uVar12;
    *puVar14 = *puVar14 | 8;
    FUN_140b90e80(piVar8);
  }
  lVar10 = FUN_140b778e0(param_1,0x52,local_res8,0);
  *(longlong *)(param_1 + 0xe8) = lVar10;
  if ((lVar10 == 0) && (local_res8[0] != -1)) {
    *puVar14 = *puVar14 | 0x80;
  }
  lVar10 = FUN_140b778e0(param_1,0x5a,local_res8,0);
  *(longlong *)(param_1 + 0xf0) = lVar10;
  if ((lVar10 == 0) && (local_res8[0] != -1)) {
    *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 0x80;
  }
  puVar14 = (uint *)(param_1 + 0xd8);
  uVar7 = FUN_140b74cb0(param_1);
  uVar11 = FUN_140b74cc0(param_1);
  iVar2 = FUN_140b755d0(uVar11,uVar7);
  if (iVar2 == 0) {
    *puVar14 = *puVar14 | 0x20;
    iVar2 = FUN_140bc5480(param_1,*(undefined8 *)(param_1 + 0xf0));
    if (iVar2 == 0) {
      uVar7 = FUN_140b74cd0(param_1);
      iVar2 = FUN_140bc61f0(uVar7,param_1);
      if (iVar2 == 0) {
        *puVar14 = *puVar14 | 0x2000;
      }
    }
  }
  lVar10 = FUN_140b778e0(param_1,0x55,local_res8,0);
  *(longlong *)(param_1 + 0x108) = lVar10;
  if ((lVar10 == 0) && (local_res8[0] != -1)) {
    *puVar14 = *puVar14 | 0x80;
  }
  lVar10 = FUN_140b778e0(param_1,0x29a,local_res8,0);
  *(longlong *)(param_1 + 0x110) = lVar10;
  if ((lVar10 == 0) && (local_res8[0] != -1)) {
    *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 0x80;
  }
  puVar14 = (uint *)(param_1 + 0xd8);
  iVar2 = FUN_140bc6040(param_1);
  if (iVar2 == 0) {
    *puVar14 = *puVar14 | 0x80;
  }
  lVar10 = FUN_140b778e0(param_1,0x122,local_res8,0);
  *(longlong *)(param_1 + 0x118) = lVar10;
  if ((lVar10 == 0) && (local_res8[0] != -1)) {
    *puVar14 = *puVar14 | 0x80;
  }
  puVar14 = (uint *)(param_1 + 0xd8);
  lVar10 = FUN_140b778e0(param_1,0x123,local_res8,0);
  *(longlong *)(param_1 + 0x120) = lVar10;
  if ((lVar10 == 0) && (local_res8[0] != -1)) {
    *puVar14 = *puVar14 | 0x80;
  }
  local_res8[0] = 0;
  iVar2 = FUN_140b77820(param_1);
  if (local_res8[0] < iVar2) {
    do {
      uVar7 = FUN_140b77860(param_1,local_res8[0]);
      uVar11 = FUN_140b76060(uVar7);
      iVar2 = FUN_140b964c0(uVar11);
      if (iVar2 == 0x359) {
        *puVar14 = *puVar14 | 0x1000;
      }
      iVar5 = FUN_140bebdd0(uVar7);
      if (iVar5 != 0) {
        uVar7 = FUN_140b76060(uVar7);
        local_res10[0] = FUN_140b964c0(uVar7);
        if ((local_res10[0] == 0) ||
           (lVar10 = FUN_140b96c30(local_res10,&DAT_141235b60,0xf,4,&LAB_140bc6030), lVar10 == 0)) {
          *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 0x200;
          break;
        }
        if (iVar2 == 0x52) {
          *puVar14 = *puVar14 | 0x40000;
        }
        else if (iVar2 == 0x55) {
          *puVar14 = *puVar14 | 0x80000;
        }
        else if (iVar2 == 0x57) {
          *puVar14 = *puVar14 | 0x10000;
        }
        else if (iVar2 == 0x5a) {
          *puVar14 = *puVar14 | 0x20000;
        }
      }
      local_res8[0] = local_res8[0] + 1;
      iVar2 = FUN_140b77820(param_1);
    } while (local_res8[0] < iVar2);
  }
  FUN_140b9f330(param_1);
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 0x100;
  *(undefined4 *)(param_1 + 0x150) = 1;
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  if ((*(byte *)(param_1 + 0xd8) & 0x80) == 0) {
    FUN_140b8b7a0(*(undefined8 *)(param_1 + 0x148));
    return 1;
  }
  FUN_140b8b7a0(*(undefined8 *)(param_1 + 0x148));
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("crypto\\x509\\v3_purp.c",0x2a4,"ossl_x509v3_cache_extensions");
  FUN_140b91cc0(0x22,0x9e,0);
  return 0;
}

