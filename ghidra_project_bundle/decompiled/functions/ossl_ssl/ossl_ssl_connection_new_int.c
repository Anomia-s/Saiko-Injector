/**
 * Function: ossl_ssl_connection_new_int
 * Address:  140b6c8a0
 * Signature: undefined ossl_ssl_connection_new_int(void)
 * Body size: 2288 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

byte * ossl_ssl_connection_new_int(longlong param_1,byte *param_2,int *param_3)

{
  int *piVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  byte *pbVar8;
  longlong lVar9;
  longlong lVar10;
  void *_Dst;
  byte *pbVar11;
  byte *pbVar12;
  undefined4 uVar13;
  
  pbVar8 = (byte *)FUN_140b8da80(0x15a8,"ssl\\ssl_lib.c",0x2e9);
  if (pbVar8 == (byte *)0x0) {
    return (byte *)0x0;
  }
  if (param_2 == (byte *)0x0) {
    param_2 = pbVar8;
  }
  *(byte **)(pbVar8 + 0x40) = param_2;
  LOCK();
  piVar1 = (int *)(param_1 + 0xa4);
  iVar7 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if (iVar7 + 1 < 2) {
LAB_140b6d0d2:
    FUN_140b8d990(pbVar8,"ssl\\ssl_lib.c",0x2f1);
    pbVar8 = (byte *)0x0;
  }
  else {
    lVar9 = cryptothreads_winc();
    *(longlong *)(pbVar8 + 0x28) = lVar9;
    if (lVar9 == 0) {
LAB_140b6d0bd:
      cryptothreads_winc(*(undefined8 *)(pbVar8 + 0x28));
      pbVar8[0x28] = 0;
      pbVar8[0x29] = 0;
      pbVar8[0x2a] = 0;
      pbVar8[0x2b] = 0;
      pbVar8[0x2c] = 0;
      pbVar8[0x2d] = 0;
      pbVar8[0x2e] = 0;
      pbVar8[0x2f] = 0;
      FUN_140b6a120(param_1);
      goto LAB_140b6d0d2;
    }
    pbVar8[0x20] = 1;
    pbVar8[0x21] = 0;
    pbVar8[0x22] = 0;
    pbVar8[0x23] = 0;
    iVar7 = FUN_140b8cf40(0,pbVar8,pbVar8 + 0x30);
    if (iVar7 == 0) goto LAB_140b6d0bd;
    *(longlong *)(pbVar8 + 8) = param_1;
    uVar13 = 0;
    pbVar8[0] = 0;
    pbVar8[1] = 0;
    pbVar8[2] = 0;
    pbVar8[3] = 0;
    *(int **)(pbVar8 + 0x18) = param_3;
    *(int **)(pbVar8 + 0x10) = param_3;
    FUN_140baa940(pbVar8 + 0xc48,pbVar8);
    *(undefined8 *)(pbVar8 + 0x9a8) = *(undefined8 *)(param_1 + 0x138);
    *(undefined4 *)(pbVar8 + 0x54c) = *(undefined4 *)(param_1 + 0x3cc);
    if (*param_3 == **(int **)(param_1 + 8)) {
      *(undefined4 *)(pbVar8 + 0x9b4) = *(undefined4 *)(param_1 + 0x144);
      *(undefined4 *)(pbVar8 + 0x9b8) = *(undefined4 *)(param_1 + 0x148);
    }
    *(undefined4 *)(pbVar8 + 0x9b0) = *(undefined4 *)(param_1 + 0x140);
    *(undefined8 *)(pbVar8 + 0x9c0) = *(undefined8 *)(param_1 + 0x150);
    *(undefined4 *)(pbVar8 + 0x1530) = *(undefined4 *)(param_1 + 0x3f0);
    *(undefined4 *)(pbVar8 + 0x1534) = *(undefined4 *)(param_1 + 0x3f4);
    *(undefined8 *)(pbVar8 + 0x1540) = *(undefined8 *)(param_1 + 0x430);
    *(undefined4 *)(pbVar8 + 0xba4) = *(undefined4 *)(param_1 + 0x448);
    lVar9 = FUN_140b78410(*(undefined8 *)(param_1 + 0x20));
    *(longlong *)(pbVar8 + 0x568) = lVar9;
    if (lVar9 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\ssl_lib.c",0x3cd,"ossl_ssl_connection_new_int");
      FUN_140b91cc0(0x14,0x8000f,0);
      goto LAB_140b6d11e;
    }
    lVar9 = FUN_140ba8d60(*(undefined8 *)(param_1 + 0x158));
    *(longlong *)(pbVar8 + 0x878) = lVar9;
    if (lVar9 == 0) goto LAB_140b6d0ea;
    *(undefined4 *)(pbVar8 + 0xc90) = *(undefined4 *)(param_1 + 0x168);
    *(undefined8 *)(pbVar8 + 0x4f8) = *(undefined8 *)(param_1 + 0x170);
    *(undefined8 *)(pbVar8 + 0x500) = *(undefined8 *)(param_1 + 0x178);
    *(undefined4 *)(pbVar8 + 0x948) = *(undefined4 *)(param_1 + 0x180);
    *(undefined8 *)(pbVar8 + 0xc40) = *(undefined8 *)(param_1 + 0x3d8);
    *(undefined8 *)(pbVar8 + 0xcd8) = *(undefined8 *)(param_1 + 0x3f8);
    *(undefined8 *)(pbVar8 + 0xce0) = *(undefined8 *)(param_1 + 0x400);
    *(undefined8 *)(pbVar8 + 0xce8) = *(undefined8 *)(param_1 + 0x408);
    *(undefined8 *)(pbVar8 + 0xcf0) = *(undefined8 *)(param_1 + 0x410);
    uVar2 = *(ulonglong *)(param_1 + 0x188);
    *(ulonglong *)(pbVar8 + 0x8d0) = uVar2;
    if (0x20 < uVar2) goto LAB_140b6d11e;
    uVar4 = *(undefined4 *)(param_1 + 0x194);
    uVar5 = *(undefined4 *)(param_1 + 0x198);
    uVar6 = *(undefined4 *)(param_1 + 0x19c);
    *(undefined4 *)(pbVar8 + 0x8d8) = *(undefined4 *)(param_1 + 400);
    *(undefined4 *)(pbVar8 + 0x8dc) = uVar4;
    *(undefined4 *)(pbVar8 + 0x8e0) = uVar5;
    *(undefined4 *)(pbVar8 + 0x8e4) = uVar6;
    uVar4 = *(undefined4 *)(param_1 + 0x1a4);
    uVar5 = *(undefined4 *)(param_1 + 0x1a8);
    uVar6 = *(undefined4 *)(param_1 + 0x1ac);
    *(undefined4 *)(pbVar8 + 0x8e8) = *(undefined4 *)(param_1 + 0x1a0);
    *(undefined4 *)(pbVar8 + 0x8ec) = uVar4;
    *(undefined4 *)(pbVar8 + 0x8f0) = uVar5;
    *(undefined4 *)(pbVar8 + 0x8f4) = uVar6;
    *(undefined8 *)(pbVar8 + 0x950) = *(undefined8 *)(param_1 + 0x1b0);
    *(undefined8 *)(pbVar8 + 0x918) = *(undefined8 *)(param_1 + 0x1b8);
    lVar9 = FUN_140b9b940();
    *(longlong *)(pbVar8 + 0x510) = lVar9;
    if (lVar9 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\ssl_lib.c",0x3d0,"ossl_ssl_connection_new_int");
      FUN_140b91cc0(0x14,0x8000d,0);
      goto LAB_140b6d11e;
    }
    FUN_140b9ba30(lVar9,*(undefined8 *)(param_1 + 0x1c0));
    lVar9 = FUN_140ba2f20();
    if (((*(longlong *)(param_1 + 8) != lVar9) &&
        (lVar9 = FUN_140ba2f30(), *(longlong *)(param_1 + 8) != lVar9)) &&
       (lVar9 = FUN_140ba2f40(), *(longlong *)(param_1 + 8) != lVar9)) {
      uVar13 = *(undefined4 *)(param_1 + 0x1c8);
    }
    *(undefined4 *)(pbVar8 + 0x80) = uVar13;
    lVar9 = *(longlong *)(param_1 + 8);
    lVar10 = FUN_140ba2f20();
    if (((lVar9 != lVar10) &&
        (lVar9 = *(longlong *)(param_1 + 8), lVar10 = FUN_140ba2f30(), lVar9 != lVar10)) &&
       (lVar9 = *(longlong *)(param_1 + 8), lVar10 = FUN_140ba2f40(), lVar9 != lVar10)) {
      pbVar8[0xb2c] = *(byte *)(param_1 + 0x27c);
    }
    *(undefined8 *)(pbVar8 + 0x9d8) = *(undefined8 *)(param_1 + 0x1f0);
    *(undefined8 *)(pbVar8 + 0x9d0) = *(undefined8 *)(param_1 + 0x1e8);
    *(undefined8 *)(pbVar8 + 0x9e0) = *(undefined8 *)(param_1 + 0x1f8);
    *(undefined8 *)(pbVar8 + 0xc88) = *(undefined8 *)(param_1 + 0x200);
    pbVar8[0xa08] = 0;
    pbVar8[0xa09] = 0;
    pbVar8[0xa0a] = 0;
    pbVar8[0xa0b] = 0;
    pbVar8[0xa0c] = 0;
    pbVar8[0xa0d] = 0;
    pbVar8[0xa0e] = 0;
    pbVar8[0xa0f] = 0;
    pbVar8[0xa10] = 0;
    pbVar8[0xa11] = 0;
    pbVar8[0xa12] = 0;
    pbVar8[0xa13] = 0;
    pbVar8[0xa14] = 0;
    pbVar8[0xa15] = 0;
    pbVar8[0xa16] = 0;
    pbVar8[0xa17] = 0;
    pbVar8[0xa58] = 0;
    pbVar8[0xa59] = 0;
    pbVar8[0xa5a] = 0;
    pbVar8[0xa5b] = 0;
    *(undefined4 *)(pbVar8 + 0xa20) = *(undefined4 *)(param_1 + 0x278);
    pbVar8[0xa34] = 0;
    pbVar8[0xa35] = 0;
    pbVar8[0xa36] = 0;
    pbVar8[0xa37] = 0;
    pbVar8[0xa38] = 0;
    pbVar8[0xa39] = 0;
    pbVar8[0xa3a] = 0;
    pbVar8[0xa3b] = 0;
    pbVar8[0xa3c] = 0;
    pbVar8[0xa3d] = 0;
    pbVar8[0xa3e] = 0;
    pbVar8[0xa3f] = 0;
    pbVar8[0xa40] = 0;
    pbVar8[0xa41] = 0;
    pbVar8[0xa42] = 0;
    pbVar8[0xa43] = 0;
    pbVar8[0xa44] = 0;
    pbVar8[0xa45] = 0;
    pbVar8[0xa46] = 0;
    pbVar8[0xa47] = 0;
    pbVar8[0xa48] = 0;
    pbVar8[0xa49] = 0;
    pbVar8[0xa4a] = 0;
    pbVar8[0xa4b] = 0;
    pbVar8[0xa4c] = 0;
    pbVar8[0xa4d] = 0;
    pbVar8[0xa4e] = 0;
    pbVar8[0xa4f] = 0;
    pbVar8[0xa50] = 0;
    pbVar8[0xa51] = 0;
    pbVar8[0xa52] = 0;
    pbVar8[0xa53] = 0;
    pbVar8[0xa54] = 0;
    pbVar8[0xa55] = 0;
    pbVar8[0xa56] = 0;
    pbVar8[0xa57] = 0;
    LOCK();
    piVar1 = (int *)(param_1 + 0xa4);
    iVar7 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (iVar7 + 1 < 2) goto LAB_140b6d11e;
    *(longlong *)(pbVar8 + 0xb80) = param_1;
    if (*(longlong *)(param_1 + 0x288) != 0) {
      lVar9 = FUN_140b8c7c0(*(longlong *)(param_1 + 0x288),*(undefined8 *)(param_1 + 0x280),
                            "ssl\\ssl_lib.c",0x34a);
      *(longlong *)(pbVar8 + 0xa68) = lVar9;
      if (lVar9 == 0) {
        pbVar8[0xa60] = 0;
        pbVar8[0xa61] = 0;
        pbVar8[0xa62] = 0;
        pbVar8[0xa63] = 0;
        pbVar8[0xa64] = 0;
        pbVar8[0xa65] = 0;
        pbVar8[0xa66] = 0;
        pbVar8[0xa67] = 0;
        goto LAB_140b6d11e;
      }
      *(undefined8 *)(pbVar8 + 0xa60) = *(undefined8 *)(param_1 + 0x280);
    }
    if (*(longlong *)(param_1 + 0x298) != 0) {
      lVar9 = FUN_140b8c7c0(*(longlong *)(param_1 + 0x298),
                            ((ulonglong)(*(longlong *)(param_1 + 0x290) == 0) +
                            *(longlong *)(param_1 + 0x290)) * 2,"ssl\\ssl_lib.c",0x35b);
      *(longlong *)(pbVar8 + 0xa88) = lVar9;
      if (lVar9 == 0) {
        pbVar8[0xa80] = 0;
        pbVar8[0xa81] = 0;
        pbVar8[0xa82] = 0;
        pbVar8[0xa83] = 0;
        pbVar8[0xa84] = 0;
        pbVar8[0xa85] = 0;
        pbVar8[0xa86] = 0;
        pbVar8[0xa87] = 0;
        goto LAB_140b6d11e;
      }
      *(undefined8 *)(pbVar8 + 0xa80) = *(undefined8 *)(param_1 + 0x290);
    }
    if (*(longlong *)(param_1 + 0x2a8) != 0) {
      lVar9 = FUN_140b8c7c0(*(longlong *)(param_1 + 0x2a8),
                            ((ulonglong)(*(longlong *)(param_1 + 0x2a0) == 0) +
                            *(longlong *)(param_1 + 0x2a0)) * 2,"ssl\\ssl_lib.c",0x36b);
      *(longlong *)(pbVar8 + 0xaa8) = lVar9;
      if (lVar9 == 0) {
        pbVar8[0xaa0] = 0;
        pbVar8[0xaa1] = 0;
        pbVar8[0xaa2] = 0;
        pbVar8[0xaa3] = 0;
        pbVar8[0xaa4] = 0;
        pbVar8[0xaa5] = 0;
        pbVar8[0xaa6] = 0;
        pbVar8[0xaa7] = 0;
        goto LAB_140b6d11e;
      }
      *(undefined8 *)(pbVar8 + 0xaa0) = *(undefined8 *)(param_1 + 0x2a0);
    }
    if (*(longlong *)(param_1 + 0x2b8) != 0) {
      lVar9 = FUN_140b8c7c0(*(longlong *)(param_1 + 0x2b8),
                            ((ulonglong)(*(longlong *)(param_1 + 0x2b0) == 0) +
                            *(longlong *)(param_1 + 0x2b0)) * 8,"ssl\\ssl_lib.c",0x37b);
      *(longlong *)(pbVar8 + 0xab8) = lVar9;
      if (lVar9 == 0) {
        pbVar8[0xab0] = 0;
        pbVar8[0xab1] = 0;
        pbVar8[0xab2] = 0;
        pbVar8[0xab3] = 0;
        pbVar8[0xab4] = 0;
        pbVar8[0xab5] = 0;
        pbVar8[0xab6] = 0;
        pbVar8[0xab7] = 0;
        goto LAB_140b6d11e;
      }
      *(undefined8 *)(pbVar8 + 0xab0) = *(undefined8 *)(param_1 + 0x2b0);
    }
    pbVar8[0xaf8] = 0;
    pbVar8[0xaf9] = 0;
    pbVar8[0xafa] = 0;
    pbVar8[0xafb] = 0;
    pbVar8[0xafc] = 0;
    pbVar8[0xafd] = 0;
    pbVar8[0xafe] = 0;
    pbVar8[0xaff] = 0;
    if (*(longlong *)(param_1 + 0x2d0) != 0) {
      _Dst = (void *)FUN_140b8d8d0(*(undefined8 *)(param_1 + 0x2d8),"ssl\\ssl_lib.c",0x388);
      *(void **)(pbVar8 + 0xae8) = _Dst;
      if (_Dst == (void *)0x0) {
        pbVar8[0xaf0] = 0;
        pbVar8[0xaf1] = 0;
        pbVar8[0xaf2] = 0;
        pbVar8[0xaf3] = 0;
        pbVar8[0xaf4] = 0;
        pbVar8[0xaf5] = 0;
        pbVar8[0xaf6] = 0;
        pbVar8[0xaf7] = 0;
        goto LAB_140b6d11e;
      }
      memcpy(_Dst,*(void **)(param_1 + 0x2d0),*(size_t *)(param_1 + 0x2d8));
      *(undefined8 *)(pbVar8 + 0xaf0) = *(undefined8 *)(param_1 + 0x2d8);
    }
    pbVar8[0x988] = 0;
    pbVar8[0x989] = 0;
    pbVar8[0x98a] = 0;
    pbVar8[0x98b] = 0;
    pbVar8[0x98c] = 0;
    pbVar8[0x98d] = 0;
    pbVar8[0x98e] = 0;
    pbVar8[0x98f] = 0;
    pbVar8[0x990] = 0;
    pbVar8[0x991] = 0;
    pbVar8[0x992] = 0;
    pbVar8[0x993] = 0;
    *(undefined8 *)(pbVar8 + 0x1508) = *(undefined8 *)(param_1 + 0xb8);
    *(undefined8 *)(pbVar8 + 0x1510) = *(undefined8 *)(param_1 + 0xc0);
    pbVar8[0xb9c] = 0xff;
    pbVar8[0xb9d] = 0xff;
    pbVar8[0xb9e] = 0xff;
    pbVar8[0xb9f] = 0xff;
    lVar9 = *(longlong *)(param_1 + 8);
    lVar10 = FUN_140ba2f20();
    if (((lVar9 != lVar10) &&
        (lVar9 = *(longlong *)(param_1 + 8), lVar10 = FUN_140ba2f30(), lVar9 != lVar10)) &&
       (lVar9 = *(longlong *)(param_1 + 8), lVar10 = FUN_140ba2f40(), lVar9 != lVar10)) {
      *(undefined8 *)(pbVar8 + 0x1558) = *(undefined8 *)(param_1 + 0x438);
      *(undefined8 *)(pbVar8 + 0x1560) = *(undefined8 *)(param_1 + 0x440);
    }
    iVar7 = (**(code **)(param_3 + 10))(pbVar8);
    if (iVar7 != 0) {
      *(uint *)(pbVar8 + 0x78) = (uint)(*(code **)(param_3 + 0x10) != FUN_140b694e0);
      iVar7 = (**(code **)(param_3 + 8))(pbVar8);
      if (iVar7 != 0) {
        *(undefined8 *)(pbVar8 + 0x968) = *(undefined8 *)(param_1 + 800);
        *(undefined8 *)(pbVar8 + 0x970) = *(undefined8 *)(param_1 + 0x328);
        *(undefined8 *)(pbVar8 + 0x978) = *(undefined8 *)(param_1 + 0x330);
        *(undefined8 *)(pbVar8 + 0x980) = *(undefined8 *)(param_1 + 0x338);
        *(undefined8 *)(pbVar8 + 0x1568) = *(undefined8 *)(param_1 + 0x450);
        *(undefined8 *)(pbVar8 + 0x1570) = *(undefined8 *)(param_1 + 0x458);
        pbVar8[0x1518] = 0;
        pbVar8[0x1519] = 0;
        pbVar8[0x151a] = 0;
        pbVar8[0x151b] = 0;
        pbVar8[0x151c] = 0;
        pbVar8[0x151d] = 0;
        pbVar8[0x151e] = 0;
        pbVar8[0x151f] = 0;
        if (*(longlong *)(param_1 + 0x6a0) != 0) {
          lVar9 = FUN_140b8c7c0(*(longlong *)(param_1 + 0x6a0),*(undefined8 *)(param_1 + 0x6a8),
                                "ssl\\ssl_lib.c",0x3b7);
          *(longlong *)(pbVar8 + 0x1588) = lVar9;
          if (lVar9 == 0) goto LAB_140b6d0ea;
          *(undefined8 *)(pbVar8 + 0x1590) = *(undefined8 *)(param_1 + 0x6a8);
        }
        if (*(longlong *)(param_1 + 0x6b0) != 0) {
          lVar9 = FUN_140b8c7c0(*(longlong *)(param_1 + 0x6b0),*(undefined8 *)(param_1 + 0x6b8),
                                "ssl\\ssl_lib.c",0x3be);
          *(longlong *)(pbVar8 + 0x1598) = lVar9;
          if (lVar9 == 0) goto LAB_140b6d0ea;
          *(undefined8 *)(pbVar8 + 0x15a0) = *(undefined8 *)(param_1 + 0x6b8);
        }
        uVar3 = *(undefined8 *)(param_1 + 0x1e0);
        lVar9 = *(longlong *)(param_1 + 0x1d8);
        pbVar11 = pbVar8;
        if ((*(int *)pbVar8 == 0) ||
           (((char)*(int *)pbVar8 < '\0' &&
            (pbVar11 = (byte *)FUN_140bc8b20(pbVar8), pbVar11 != (byte *)0x0)))) {
          if (lVar9 == 0) {
LAB_140b6d095:
            *(longlong *)(pbVar11 + 0xb60) = lVar9;
            *(undefined8 *)(pbVar11 + 0xb68) = uVar3;
            *(longlong *)(pbVar8 + 0x118) = *(longlong *)(param_1 + 0x680) + 9;
            return pbVar8;
          }
          iVar7 = FUN_140ba21d0(*(undefined8 *)(pbVar8 + 8),0x12);
          if (iVar7 == 0) {
            pbVar12 = pbVar8;
            if ((*(int *)pbVar8 != 0) && (pbVar12 = (byte *)0x0, (char)*(int *)pbVar8 < '\0')) {
              pbVar12 = (byte *)FUN_140bc8b20(pbVar8);
            }
            if ((((*pbVar8 & 0x80) != 0) || (pbVar12 != (byte *)0x0)) &&
               (iVar7 = (**(code **)(*(longlong *)(pbVar8 + 0x18) + 0x98))(pbVar8,0x41,1,0),
               iVar7 != 0)) goto LAB_140b6d095;
          }
          else {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("ssl\\ssl_lib.c",0x199f,"SSL_set_ct_validation_callback");
            FUN_140b91cc0(0x14,0xce,0);
          }
        }
      }
    }
  }
LAB_140b6d0ea:
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("ssl\\ssl_lib.c",0x3d3,"ossl_ssl_connection_new_int");
  FUN_140b91cc0(0x14,0x80014,0);
  if (pbVar8 == (byte *)0x0) {
    return (byte *)0x0;
  }
LAB_140b6d11e:
  LOCK();
  pbVar11 = pbVar8 + 0x20;
  iVar7 = *(int *)pbVar11;
  *(int *)pbVar11 = *(int *)pbVar11 + -1;
  UNLOCK();
  if (iVar7 < 2) {
    if (*(longlong *)(pbVar8 + 0x18) != 0) {
      (**(code **)(*(longlong *)(pbVar8 + 0x18) + 0x18))(pbVar8);
    }
    get_and_lock(0,pbVar8,pbVar8 + 0x30);
    FUN_140b6a120(*(undefined8 *)(pbVar8 + 8));
    cryptothreads_winc(*(undefined8 *)(pbVar8 + 0x28));
    FUN_140b8d990(pbVar8,"ssl\\ssl_lib.c",0x5a9);
  }
  return (byte *)0x0;
}

