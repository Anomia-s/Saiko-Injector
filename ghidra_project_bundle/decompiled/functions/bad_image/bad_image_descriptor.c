/**
 * Function: bad_image_descriptor
 * Address:  140492d40
 * Signature: undefined bad_image_descriptor(void)
 * Body size: 3736 bytes
 */


/* WARNING: Type propagation algorithm not settling */

longlong bad_image_descriptor(longlong param_1,uint *param_2,undefined8 param_3,longlong param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  void *_Dst;
  void *_Dst_00;
  void *_Dst_01;
  byte *pbVar17;
  ulonglong uVar18;
  byte *pbVar19;
  longlong lVar20;
  byte *pbVar21;
  byte bVar22;
  undefined1 uVar23;
  char cVar24;
  uint uVar25;
  undefined4 uVar26;
  uint uVar27;
  ulonglong uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  char *local_80;
  
  lVar3 = *(longlong *)(param_2 + 2);
  if (lVar3 == 0) {
    iVar11 = FUN_140493c00(param_1,param_2,param_3,0);
    if (iVar11 == 0) {
      return 0;
    }
    uVar29 = *param_2;
    local_80 = "too large";
    if (0x1fffffff < uVar29) goto LAB_1404935f7;
    uVar10 = param_2[1];
    if (((int)uVar10 < 0) ||
       ((uVar10 != 0 && ((uint)(0x7fffffff / (ulonglong)uVar10) < uVar29 * 4)))) goto LAB_1404935f7;
    uVar29 = uVar29 * uVar10;
    uVar18 = (ulonglong)(uVar29 * 4);
    _Dst = malloc(uVar18);
    *(void **)(param_2 + 2) = _Dst;
    _Dst_00 = malloc(uVar18);
    *(void **)(param_2 + 4) = _Dst_00;
    _Dst_01 = malloc((ulonglong)uVar29);
    *(void **)(param_2 + 6) = _Dst_01;
    local_80 = "outofmem";
    if ((_Dst == (void *)0x0) || (_Dst_01 == (void *)0x0 || _Dst_00 == (void *)0x0))
    goto LAB_1404935f7;
    memset(_Dst,0,uVar18);
    memset(_Dst_00,0,uVar18);
    memset(_Dst_01,0,(ulonglong)uVar29);
  }
  else {
    uVar25 = param_2[0xc] >> 2 & 7;
    uVar10 = param_2[1] * *param_2;
    uVar29 = 2;
    if (uVar25 != 3) {
      uVar29 = uVar25;
    }
    if (param_4 != 0) {
      uVar29 = uVar25;
    }
    if (uVar29 == 3) {
      if (0 < (int)uVar10) {
        if (uVar10 == 1) {
          uVar18 = 0;
        }
        else {
          uVar18 = 0;
          do {
            if (*(char *)(*(longlong *)(param_2 + 6) + uVar18) != '\0') {
              *(undefined4 *)(*(longlong *)(param_2 + 2) + uVar18 * 4) =
                   *(undefined4 *)(param_4 + uVar18 * 4);
            }
            if (*(char *)(*(longlong *)(param_2 + 6) + 1 + uVar18) != '\0') {
              *(undefined4 *)(*(longlong *)(param_2 + 2) + 4 + uVar18 * 4) =
                   *(undefined4 *)(param_4 + 4 + uVar18 * 4);
            }
            uVar18 = uVar18 + 2;
          } while ((uVar10 & 0x7ffffffe) != uVar18);
        }
        if (((uVar10 & 1) != 0) && (*(char *)(*(longlong *)(param_2 + 6) + uVar18) != '\0')) {
          lVar20 = *(longlong *)(param_2 + 2);
          uVar26 = *(undefined4 *)(param_4 + uVar18 * 4);
          goto LAB_140492ee4;
        }
      }
    }
    else if ((uVar29 == 2) && (0 < (int)uVar10)) {
      if (uVar10 == 1) {
        uVar18 = 0;
      }
      else {
        uVar18 = 0;
        do {
          if (*(char *)(*(longlong *)(param_2 + 6) + uVar18) != '\0') {
            *(undefined4 *)(*(longlong *)(param_2 + 2) + uVar18 * 4) =
                 *(undefined4 *)(*(longlong *)(param_2 + 4) + uVar18 * 4);
          }
          if (*(char *)(*(longlong *)(param_2 + 6) + 1 + uVar18) != '\0') {
            *(undefined4 *)(*(longlong *)(param_2 + 2) + 4 + uVar18 * 4) =
                 *(undefined4 *)(*(longlong *)(param_2 + 4) + 4 + uVar18 * 4);
          }
          uVar18 = uVar18 + 2;
        } while ((uVar10 & 0x7ffffffe) != uVar18);
      }
      if (((uVar10 & 1) != 0) && (*(char *)(*(longlong *)(param_2 + 6) + uVar18) != '\0')) {
        lVar20 = *(longlong *)(param_2 + 2);
        uVar26 = *(undefined4 *)(*(longlong *)(param_2 + 4) + uVar18 * 4);
LAB_140492ee4:
        *(undefined4 *)(lVar20 + uVar18 * 4) = uVar26;
      }
    }
    memcpy(*(void **)(param_2 + 4),*(void **)(param_2 + 2),
           (longlong)(int)param_2[1] * (longlong)(int)*param_2 * 4);
    _Dst_01 = *(void **)(param_2 + 6);
    uVar29 = param_2[1] * *param_2;
  }
  memset(_Dst_01,0,(longlong)(int)uVar29);
  pbVar1 = (byte *)(param_1 + 0x38);
  pbVar2 = (byte *)(param_1 + 0x39);
  local_80 = "unknown code";
LAB_140492f30:
  pbVar17 = *(byte **)(param_1 + 0xc0);
  pbVar19 = *(byte **)(param_1 + 200);
  if (pbVar17 < pbVar19) {
    pbVar21 = pbVar17 + 1;
    *(byte **)(param_1 + 0xc0) = pbVar21;
    bVar8 = *pbVar17;
  }
  else {
    if (*(int *)(param_1 + 0x30) == 0) goto LAB_1404935f7;
    iVar11 = (**(code **)(param_1 + 0x10))
                       (*(undefined8 *)(param_1 + 0x28),pbVar1,*(undefined4 *)(param_1 + 0x34));
    *(int *)(param_1 + 0xb8) =
         *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
    if (iVar11 == 0) {
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(undefined1 *)(param_1 + 0x38) = 0;
      pbVar19 = pbVar2;
    }
    else {
      pbVar19 = pbVar1 + iVar11;
    }
    *(byte **)(param_1 + 200) = pbVar19;
    *(byte **)(param_1 + 0xc0) = pbVar2;
    bVar8 = *pbVar1;
    pbVar21 = pbVar2;
  }
  if (bVar8 == 0x21) {
    if (pbVar21 < pbVar19) {
      pbVar17 = pbVar21 + 1;
      *(byte **)(param_1 + 0xc0) = pbVar17;
      bVar8 = *pbVar21;
    }
    else {
      if (*(int *)(param_1 + 0x30) == 0) goto LAB_1404932ed;
      iVar11 = (**(code **)(param_1 + 0x10))
                         (*(undefined8 *)(param_1 + 0x28),pbVar1,*(undefined4 *)(param_1 + 0x34));
      *(int *)(param_1 + 0xb8) =
           *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
      if (iVar11 == 0) {
        *(undefined4 *)(param_1 + 0x30) = 0;
        *(undefined1 *)(param_1 + 0x38) = 0;
        pbVar19 = pbVar2;
      }
      else {
        pbVar19 = pbVar1 + iVar11;
      }
      *(byte **)(param_1 + 200) = pbVar19;
      *(byte **)(param_1 + 0xc0) = pbVar2;
      bVar8 = *pbVar1;
      pbVar17 = pbVar2;
    }
    if (bVar8 != 0xf9) goto LAB_1404932ed;
    if (pbVar19 <= pbVar17) goto LAB_140493076;
    pbVar21 = pbVar17 + 1;
    *(byte **)(param_1 + 0xc0) = pbVar21;
    bVar8 = *pbVar17;
    goto joined_r0x000140493115;
  }
  if (bVar8 == 0x3b) {
    return param_1;
  }
  if (bVar8 != 0x2c) goto LAB_1404935f7;
  iVar11 = FUN_140492580(param_1);
  iVar12 = FUN_140492580(param_1);
  iVar13 = FUN_140492580(param_1);
  iVar14 = FUN_140492580(param_1);
  local_80 = "bad Image Descriptor";
  if (((int)*param_2 < iVar13 + iVar11) || ((int)param_2[1] < iVar14 + iVar12)) goto LAB_1404935f7;
  uVar29 = *param_2 * 4;
  param_2[0x2219] = uVar29;
  param_2[0x2213] = iVar11 << 2;
  param_2[0x2214] = iVar12 * uVar29;
  param_2[0x2215] = (iVar13 + iVar11) * 4;
  uVar10 = (iVar14 + iVar12) * uVar29;
  param_2[0x2216] = uVar10;
  param_2[0x2217] = iVar11 << 2;
  if (iVar13 != 0) {
    uVar10 = iVar12 * uVar29;
  }
  param_2[0x2218] = uVar10;
  pbVar17 = *(byte **)(param_1 + 0xc0);
  if (pbVar17 < *(byte **)(param_1 + 200)) {
    pbVar19 = pbVar17 + 1;
LAB_14049359c:
    *(byte **)(param_1 + 0xc0) = pbVar19;
    bVar8 = *pbVar17;
    param_2[0x2212] = (uint)bVar8;
    uVar29 = param_2[0x2219] * 8;
    if ((bVar8 & 0x40) == 0) {
      uVar29 = param_2[0x2219];
    }
    uVar10 = (int)((uint)bVar8 << 0x19) >> 0x1f & 3;
  }
  else {
    if (*(int *)(param_1 + 0x30) != 0) {
      iVar11 = (**(code **)(param_1 + 0x10))
                         (*(undefined8 *)(param_1 + 0x28),pbVar1,*(undefined4 *)(param_1 + 0x34));
      *(int *)(param_1 + 0xb8) =
           *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
      if (iVar11 == 0) {
        *(undefined4 *)(param_1 + 0x30) = 0;
        *(undefined1 *)(param_1 + 0x38) = 0;
        pbVar17 = pbVar2;
      }
      else {
        pbVar17 = pbVar1 + iVar11;
      }
      *(byte **)(param_1 + 200) = pbVar17;
      pbVar17 = pbVar1;
      pbVar19 = pbVar2;
      goto LAB_14049359c;
    }
    param_2[0x2212] = 0;
    uVar10 = 0;
    bVar8 = 0;
  }
  param_2[0x2211] = uVar29;
  param_2[0x2210] = uVar10;
  if (bVar8 < 0x80) {
    if ((param_2[8] & 0x80) == 0) {
      local_80 = "missing color table";
LAB_1404935f7:
      *(char **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x220) = local_80;
      return 0;
    }
    *(uint **)(param_2 + 0x220e) = param_2 + 0xd;
    pbVar17 = *(byte **)(param_1 + 0xc0);
    if (pbVar17 < *(byte **)(param_1 + 200)) goto LAB_140493671;
LAB_140493692:
    if (*(int *)(param_1 + 0x30) == 0) {
      bVar8 = 0;
      goto LAB_1404936f5;
    }
    iVar11 = (**(code **)(param_1 + 0x10))
                       (*(undefined8 *)(param_1 + 0x28),pbVar1,*(undefined4 *)(param_1 + 0x34));
    *(int *)(param_1 + 0xb8) =
         *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
    if (iVar11 == 0) {
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(undefined1 *)(param_1 + 0x38) = 0;
      pbVar17 = pbVar2;
    }
    else {
      pbVar17 = pbVar1 + iVar11;
    }
    *(byte **)(param_1 + 200) = pbVar17;
    pbVar17 = pbVar1;
    pbVar19 = pbVar2;
  }
  else {
    uVar29 = 0xffffffff;
    if ((param_2[0xc] & 1) != 0) {
      uVar29 = param_2[0xb];
    }
    FUN_140494060(param_1,param_2 + 0x10d,2 << (bVar8 & 7),uVar29);
    *(uint **)(param_2 + 0x220e) = param_2 + 0x10d;
    pbVar17 = *(byte **)(param_1 + 0xc0);
    if (*(byte **)(param_1 + 200) <= pbVar17) goto LAB_140493692;
LAB_140493671:
    pbVar19 = pbVar17 + 1;
  }
  *(byte **)(param_1 + 0xc0) = pbVar19;
  bVar8 = *pbVar17;
  if (0xc < bVar8) {
    return 0;
  }
LAB_1404936f5:
  uVar29 = 1 << (bVar8 & 0x1f);
  uVar18 = (ulonglong)(uVar29 & 3);
  if (bVar8 < 2) {
    uVar28 = 0;
  }
  else {
    uVar28 = 0;
    do {
      *(undefined2 *)(param_2 + uVar28 + 0x20d) = 0xffff;
      cVar24 = (char)uVar28;
      *(char *)((longlong)param_2 + uVar28 * 4 + 0x836) = cVar24;
      *(char *)((longlong)param_2 + uVar28 * 4 + 0x837) = cVar24;
      *(undefined2 *)(param_2 + uVar28 + 0x20e) = 0xffff;
      *(char *)((longlong)param_2 + uVar28 * 4 + 0x83a) = cVar24 + '\x01';
      *(char *)((longlong)param_2 + uVar28 * 4 + 0x83b) = cVar24 + '\x01';
      *(undefined2 *)(param_2 + uVar28 + 0x20f) = 0xffff;
      *(char *)((longlong)param_2 + uVar28 * 4 + 0x83e) = cVar24 + '\x02';
      *(char *)((longlong)param_2 + uVar28 * 4 + 0x83f) = cVar24 + '\x02';
      *(undefined2 *)(param_2 + uVar28 + 0x210) = 0xffff;
      *(char *)((longlong)param_2 + uVar28 * 4 + 0x842) = cVar24 + '\x03';
      *(char *)((longlong)param_2 + uVar28 * 4 + 0x843) = cVar24 + '\x03';
      uVar28 = uVar28 + 4;
    } while (uVar28 != (uVar29 & 0xfffc));
  }
  for (; uVar18 != 0; uVar18 = uVar18 - 1) {
    *(undefined2 *)(param_2 + uVar28 + 0x20d) = 0xffff;
    *(char *)((longlong)param_2 + uVar28 * 4 + 0x836) = (char)uVar28;
    *(char *)((longlong)param_2 + uVar28 * 4 + 0x837) = (char)uVar28;
    uVar28 = uVar28 + 1;
  }
  uVar15 = (2 << (bVar8 & 0x1f)) - 1;
  uVar31 = 0;
  iVar11 = 0;
  uVar10 = 0;
  bVar5 = false;
  uVar25 = uVar29 + 2;
  uVar6 = 0xffffffff;
  iVar12 = bVar8 + 1;
  uVar7 = uVar15;
LAB_140493853:
  do {
    for (; uVar16 = uVar7, iVar13 = iVar12, uVar27 = uVar6, uVar30 = uVar25, bVar4 = bVar5,
        iVar12 = iVar11 - iVar13, iVar11 < iVar13; iVar11 = iVar11 + 8) {
      pbVar17 = *(byte **)(param_1 + 0xc0);
      pbVar19 = *(byte **)(param_1 + 200);
      if (uVar31 == 0) {
        if (pbVar17 < pbVar19) {
          pbVar21 = pbVar17;
          pbVar17 = pbVar17 + 1;
        }
        else {
          if (*(int *)(param_1 + 0x30) == 0) {
LAB_140493b89:
            lVar20 = *(longlong *)(param_2 + 2);
            if (lVar20 == 0) {
              return 0;
            }
            if (lVar3 == 0) {
              uVar29 = param_2[1];
              uVar10 = *param_2;
              if (0 < (int)(uVar29 * uVar10) && 0 < (int)param_2[9]) {
                uVar18 = 0;
                do {
                  if (*(char *)(*(longlong *)(param_2 + 6) + uVar18) == '\0') {
                    *(undefined1 *)((longlong)param_2 + (longlong)(int)param_2[9] * 4 + 0x37) = 0xff
                    ;
                    *(uint *)(*(longlong *)(param_2 + 2) + uVar18 * 4) =
                         param_2[(longlong)(int)param_2[9] + 0xd];
                  }
                  uVar18 = uVar18 + 1;
                } while (uVar29 * uVar10 != uVar18);
                return lVar20;
              }
              return lVar20;
            }
            return lVar20;
          }
          iVar12 = (**(code **)(param_1 + 0x10))
                             (*(undefined8 *)(param_1 + 0x28),pbVar1,*(undefined4 *)(param_1 + 0x34)
                             );
          *(int *)(param_1 + 0xb8) =
               *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
          if (iVar12 == 0) {
            *(undefined4 *)(param_1 + 0x30) = 0;
            *(undefined1 *)(param_1 + 0x38) = 0;
            pbVar19 = pbVar2;
          }
          else {
            pbVar19 = pbVar1 + iVar12;
          }
          *(byte **)(param_1 + 200) = pbVar19;
          pbVar21 = pbVar1;
          pbVar17 = pbVar2;
        }
        *(byte **)(param_1 + 0xc0) = pbVar17;
        uVar31 = (uint)*pbVar21;
        if (*pbVar21 == 0) goto LAB_140493b89;
      }
      if (pbVar17 < pbVar19) {
        *(byte **)(param_1 + 0xc0) = pbVar17 + 1;
        bVar9 = *pbVar17;
      }
      else if (*(int *)(param_1 + 0x30) == 0) {
        bVar9 = 0;
      }
      else {
        iVar12 = (**(code **)(param_1 + 0x10))
                           (*(undefined8 *)(param_1 + 0x28),pbVar1,*(undefined4 *)(param_1 + 0x34));
        *(int *)(param_1 + 0xb8) =
             *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
        if (iVar12 == 0) {
          *(undefined4 *)(param_1 + 0x30) = 0;
          *(undefined1 *)(param_1 + 0x38) = 0;
          bVar9 = 0;
          pbVar17 = pbVar2;
        }
        else {
          bVar9 = *pbVar1;
          pbVar17 = pbVar1 + iVar12;
        }
        *(byte **)(param_1 + 200) = pbVar17;
        *(byte **)(param_1 + 0xc0) = pbVar2;
      }
      bVar22 = (byte)iVar11;
      uVar31 = uVar31 - 1;
      uVar10 = uVar10 | (uint)bVar9 << (bVar22 & 0x1f);
      bVar5 = bVar4;
      uVar25 = uVar30;
      uVar6 = uVar27;
      iVar12 = iVar13;
      uVar7 = uVar16;
    }
    uVar25 = (int)uVar10 >> ((byte)iVar13 & 0x1f);
    uVar32 = uVar10 & uVar16;
    iVar11 = iVar12;
    uVar10 = uVar25;
    bVar5 = true;
    uVar25 = uVar29 + 2;
    uVar6 = 0xffffffff;
    iVar12 = bVar8 + 1;
    uVar7 = uVar15;
  } while (uVar32 == uVar29);
  if (uVar32 == uVar29 + 1) {
    if (uVar31 == 0) goto LAB_140493aef;
    if ((int)uVar31 < 0) {
      *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 200);
      goto LAB_140493aef;
    }
    if (*(longlong *)(param_1 + 0x10) == 0) {
      uVar18 = *(ulonglong *)(param_1 + 0xc0);
    }
    else {
      uVar18 = *(ulonglong *)(param_1 + 0xc0);
      if ((int)*(undefined8 *)(param_1 + 200) - (int)uVar18 < (int)uVar31) {
        *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 200);
        goto LAB_140493ae8;
      }
    }
    pbVar17 = (byte *)(ulonglong)uVar31;
    do {
      *(byte **)(param_1 + 0xc0) = pbVar17 + uVar18;
LAB_140493aef:
      while( true ) {
        pbVar19 = *(byte **)(param_1 + 0xc0);
        pbVar21 = *(byte **)(param_1 + 200);
        if (pbVar19 < pbVar21) {
          pbVar17 = pbVar19 + 1;
        }
        else {
          if (*(int *)(param_1 + 0x30) == 0) goto LAB_140493b89;
          iVar11 = (**(code **)(param_1 + 0x10))
                             (*(undefined8 *)(param_1 + 0x28),pbVar1,*(undefined4 *)(param_1 + 0x34)
                             );
          *(int *)(param_1 + 0xb8) =
               *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
          if (iVar11 == 0) {
            *(undefined4 *)(param_1 + 0x30) = 0;
            *(undefined1 *)(param_1 + 0x38) = 0;
            pbVar21 = pbVar2;
          }
          else {
            pbVar21 = pbVar1 + iVar11;
          }
          *(byte **)(param_1 + 200) = pbVar21;
          pbVar17 = pbVar2;
          pbVar19 = pbVar1;
        }
        *(byte **)(param_1 + 0xc0) = pbVar17;
        bVar8 = *pbVar19;
        if (bVar8 == 0) goto LAB_140493b89;
        if ((*(longlong *)(param_1 + 0x10) == 0) ||
           ((int)(uint)bVar8 <= (int)pbVar21 - (int)pbVar17)) break;
        *(byte **)(param_1 + 0xc0) = pbVar21;
LAB_140493ae8:
        (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x28));
      }
      uVar18 = (ulonglong)(uint)bVar8;
    } while( true );
  }
  local_80 = "no clear code";
  if ((int)uVar30 < (int)uVar32) {
    local_80 = "illegal code in raster";
    goto LAB_1404935f7;
  }
  if (!bVar4) goto LAB_1404935f7;
  if ((int)uVar27 < 0) {
    if (uVar32 == uVar30) goto LAB_140493ab6;
  }
  else {
    if (0x1fff < (int)uVar30) {
      local_80 = "too many codes";
      goto LAB_1404935f7;
    }
    lVar20 = (longlong)(int)uVar30;
    uVar30 = uVar30 + 1;
    *(short *)(param_2 + lVar20 + 0x20d) = (short)uVar27;
    uVar23 = *(undefined1 *)((longlong)param_2 + (ulonglong)uVar27 * 4 + 0x836);
    *(undefined1 *)((longlong)param_2 + lVar20 * 4 + 0x836) = uVar23;
    if (uVar32 != uVar30) {
      uVar23 = *(undefined1 *)((longlong)param_2 + (longlong)(int)uVar32 * 4 + 0x836);
    }
    *(undefined1 *)((longlong)param_2 + lVar20 * 4 + 0x837) = uVar23;
  }
  FUN_1404942d0(param_2,uVar32);
  bVar5 = true;
  uVar25 = uVar30;
  uVar6 = uVar32;
  iVar12 = iVar13 + 1;
  uVar7 = ~(-1 << ((byte)(iVar13 + 1) & 0x1f));
  if ((uVar30 & uVar16) != 0 || 0xfff < (int)uVar30) {
    iVar12 = iVar13;
    uVar7 = uVar16;
  }
  goto LAB_140493853;
LAB_140493076:
  if (*(int *)(param_1 + 0x30) == 0) goto LAB_140492f30;
  iVar11 = (**(code **)(param_1 + 0x10))
                     (*(undefined8 *)(param_1 + 0x28),pbVar1,*(undefined4 *)(param_1 + 0x34));
  *(int *)(param_1 + 0xb8) =
       *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
  if (iVar11 == 0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined1 *)(param_1 + 0x38) = 0;
    pbVar19 = pbVar2;
  }
  else {
    pbVar19 = pbVar1 + iVar11;
  }
  *(byte **)(param_1 + 200) = pbVar19;
  *(byte **)(param_1 + 0xc0) = pbVar2;
  bVar8 = *pbVar1;
  pbVar21 = pbVar2;
joined_r0x000140493115:
  if (bVar8 != 4) {
    if (bVar8 != 0) {
      if ((*(longlong *)(param_1 + 0x10) == 0) || ((int)(uint)bVar8 <= (int)pbVar19 - (int)pbVar21))
      {
        *(byte **)(param_1 + 0xc0) = pbVar21 + bVar8;
      }
      else {
        *(byte **)(param_1 + 0xc0) = pbVar19;
        (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x28));
      }
    }
    goto LAB_140492f30;
  }
  if (pbVar21 < pbVar19) {
    *(byte **)(param_1 + 0xc0) = pbVar21 + 1;
    bVar8 = *pbVar21;
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    bVar8 = 0;
  }
  else {
    iVar11 = (**(code **)(param_1 + 0x10))
                       (*(undefined8 *)(param_1 + 0x28),pbVar1,*(undefined4 *)(param_1 + 0x34));
    *(int *)(param_1 + 0xb8) =
         *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
    if (iVar11 == 0) {
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(undefined1 *)(param_1 + 0x38) = 0;
      bVar8 = 0;
      pbVar17 = pbVar2;
    }
    else {
      bVar8 = *pbVar1;
      pbVar17 = pbVar1 + iVar11;
    }
    *(byte **)(param_1 + 200) = pbVar17;
    *(byte **)(param_1 + 0xc0) = pbVar2;
  }
  param_2[0xc] = (uint)bVar8;
  iVar11 = FUN_140492580(param_1);
  param_2[0x221a] = iVar11 * 10;
  if (-1 < (longlong)(int)param_2[0xb]) {
    *(undefined1 *)((longlong)param_2 + (longlong)(int)param_2[0xb] * 4 + 0x37) = 0xff;
  }
  if ((param_2[0xc] & 1) == 0) {
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar20 = *(longlong *)(param_1 + 0xc0);
    }
    else {
      lVar20 = *(longlong *)(param_1 + 0xc0);
      iVar11 = (int)*(undefined8 *)(param_1 + 200) - (int)lVar20;
      if (iVar11 < 1) {
        *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 200);
        (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x28),1 - iVar11);
        param_2[0xb] = 0xffffffff;
        pbVar17 = *(byte **)(param_1 + 0xc0);
        pbVar19 = *(byte **)(param_1 + 200);
        if (pbVar19 <= pbVar17) goto LAB_140493320;
        goto LAB_140493300;
      }
    }
    *(longlong *)(param_1 + 0xc0) = lVar20 + 1;
    param_2[0xb] = 0xffffffff;
    pbVar17 = *(byte **)(param_1 + 0xc0);
    pbVar19 = *(byte **)(param_1 + 200);
    if (pbVar19 <= pbVar17) goto LAB_140493320;
  }
  else {
    pbVar17 = *(byte **)(param_1 + 0xc0);
    if (pbVar17 < *(byte **)(param_1 + 200)) {
      *(byte **)(param_1 + 0xc0) = pbVar17 + 1;
      bVar8 = *pbVar17;
    }
    else if (*(int *)(param_1 + 0x30) == 0) {
      bVar8 = 0;
    }
    else {
      iVar11 = (**(code **)(param_1 + 0x10))
                         (*(undefined8 *)(param_1 + 0x28),pbVar1,*(undefined4 *)(param_1 + 0x34));
      *(int *)(param_1 + 0xb8) =
           *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
      if (iVar11 == 0) {
        *(undefined4 *)(param_1 + 0x30) = 0;
        *(undefined1 *)(param_1 + 0x38) = 0;
        bVar8 = 0;
        pbVar17 = pbVar2;
      }
      else {
        bVar8 = *pbVar1;
        pbVar17 = pbVar1 + iVar11;
      }
      *(byte **)(param_1 + 200) = pbVar17;
      *(byte **)(param_1 + 0xc0) = pbVar2;
    }
    param_2[0xb] = (uint)bVar8;
    *(undefined1 *)((longlong)param_2 + (ulonglong)bVar8 * 4 + 0x37) = 0;
    pbVar17 = *(byte **)(param_1 + 0xc0);
    pbVar19 = *(byte **)(param_1 + 200);
    if (pbVar19 <= pbVar17) goto LAB_140493320;
  }
LAB_140493300:
  *(byte **)(param_1 + 0xc0) = pbVar17 + 1;
  bVar8 = *pbVar17;
  pbVar17 = pbVar17 + 1;
  if (bVar8 != 0) {
    do {
      if ((*(longlong *)(param_1 + 0x10) == 0) || ((int)(uint)bVar8 <= (int)pbVar19 - (int)pbVar17))
      {
        *(byte **)(param_1 + 0xc0) = pbVar17 + bVar8;
LAB_1404932ed:
        pbVar17 = *(byte **)(param_1 + 0xc0);
        pbVar19 = *(byte **)(param_1 + 200);
        if (pbVar17 < pbVar19) goto LAB_140493300;
      }
      else {
        *(byte **)(param_1 + 0xc0) = pbVar19;
        (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x28));
        pbVar17 = *(byte **)(param_1 + 0xc0);
        pbVar19 = *(byte **)(param_1 + 200);
        if (pbVar17 < pbVar19) goto LAB_140493300;
      }
LAB_140493320:
      if (*(int *)(param_1 + 0x30) == 0) break;
      iVar11 = (**(code **)(param_1 + 0x10))
                         (*(undefined8 *)(param_1 + 0x28),pbVar1,*(undefined4 *)(param_1 + 0x34));
      *(int *)(param_1 + 0xb8) =
           *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
      if (iVar11 == 0) {
        *(undefined4 *)(param_1 + 0x30) = 0;
        *(undefined1 *)(param_1 + 0x38) = 0;
        pbVar19 = pbVar2;
      }
      else {
        pbVar19 = pbVar1 + iVar11;
      }
      *(byte **)(param_1 + 200) = pbVar19;
      *(byte **)(param_1 + 0xc0) = pbVar2;
      bVar8 = *pbVar1;
      pbVar17 = pbVar2;
      if (bVar8 == 0) break;
    } while( true );
  }
  goto LAB_140492f30;
LAB_140493ab6:
  local_80 = "illegal code in raster";
  goto LAB_1404935f7;
}

