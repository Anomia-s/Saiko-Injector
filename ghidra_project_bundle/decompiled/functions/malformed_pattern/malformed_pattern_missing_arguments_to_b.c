/**
 * Function: malformed_pattern_missing_arguments_to_b
 * Address:  1406ae5f0
 * Signature: undefined malformed_pattern_missing_arguments_to_b(void)
 * Body size: 2490 bytes
 */


/* WARNING: Type propagation algorithm not settling */

byte * malformed_pattern_missing_arguments_to_b(int *param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  ulonglong uVar8;
  longlong *plVar9;
  byte *_Buf2;
  byte *pbVar10;
  longlong lVar11;
  byte *pbVar12;
  byte bVar13;
  byte *pbVar14;
  longlong lVar15;
  longlong lVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  bool bVar20;
  bool bVar21;
  
  iVar5 = *param_1;
  *param_1 = *param_1 + -1;
  lVar16 = *(longlong *)(param_1 + 8);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1406b7390(lVar16,"pattern too complex");
  }
  pcVar3 = *(code **)(*(longlong *)(lVar16 + 0x18) + 0x4e0);
  if (pcVar3 != (code *)0x0) {
    *(short *)(lVar16 + 0x50) = *(short *)(lVar16 + 0x50) + 1;
    (*pcVar3)(lVar16,0xffffffff);
    *(short *)(lVar16 + 0x50) = *(short *)(lVar16 + 0x50) + -1;
  }
LAB_1406ae646:
  do {
    pbVar17 = param_3;
    _Buf2 = param_2;
LAB_1406ae657:
    pbVar18 = *(byte **)(param_1 + 6);
LAB_1406ae673:
    pbVar10 = _Buf2;
    if (pbVar17 == pbVar18) goto LAB_1406aed07;
    bVar13 = *pbVar17;
    param_3 = pbVar17 + 1;
    if (bVar13 != 0x25) {
      if (0x28 < bVar13) {
        if (bVar13 == 0x29) {
          uVar8 = (ulonglong)(uint)param_1[10];
          plVar9 = (longlong *)(param_1 + uVar8 * 4 + 10);
          do {
            if ((int)uVar8 < 1) {
                    /* WARNING: Subroutine does not return */
              FUN_1406b7390(*(undefined8 *)(param_1 + 8),"invalid pattern capture");
            }
            uVar8 = uVar8 - 1;
            lVar16 = *plVar9;
            plVar9 = plVar9 + -2;
          } while (lVar16 != -1);
          uVar8 = uVar8 & 0xffffffff;
          *(longlong *)(param_1 + uVar8 * 4 + 0xe) =
               (longlong)_Buf2 - *(longlong *)(param_1 + uVar8 * 4 + 0xc);
          pbVar10 = (byte *)malformed_pattern_missing_arguments_to_b(param_1,_Buf2,param_3);
          if (pbVar10 != (byte *)0x0) goto LAB_1406aed07;
          (param_1 + uVar8 * 4 + 0xe)[0] = -1;
          (param_1 + uVar8 * 4 + 0xe)[1] = -1;
          goto LAB_1406aed05;
        }
        if (bVar13 != 0x5b) goto LAB_1406ae930;
        pbVar10 = pbVar17 + 2;
        if (pbVar17[1] != 0x5e) {
          pbVar10 = param_3;
        }
        do {
          if (pbVar10 == pbVar18) {
LAB_1406aefac:
                    /* WARNING: Subroutine does not return */
            FUN_1406b7390(*(undefined8 *)(param_1 + 8),"malformed pattern (missing \']\')");
          }
          param_3 = pbVar10 + 1;
          bVar21 = param_3 < pbVar18;
          if (bVar21 && *pbVar10 == 0x25) {
            param_3 = pbVar10 + 2;
          }
          pbVar14 = pbVar10 + (ulonglong)(bVar21 && *pbVar10 == 0x25) + 1;
          pbVar10 = param_3;
        } while (*pbVar14 != 0x5d);
        param_3 = param_3 + 1;
        bVar13 = 0x5b;
        pbVar18 = *(byte **)(param_1 + 4);
joined_r0x0001406ae96b:
        if (_Buf2 < pbVar18) goto LAB_1406ae971;
        goto LAB_1406aea9c;
      }
      if (bVar13 == 0x24) {
        bVar13 = 0x24;
        if (param_3 == pbVar18) {
          pbVar10 = (byte *)0x0;
          if (_Buf2 == *(byte **)(param_1 + 4)) {
            pbVar10 = _Buf2;
          }
          goto LAB_1406aed07;
        }
        pbVar18 = *(byte **)(param_1 + 4);
        goto joined_r0x0001406ae957;
      }
      if (bVar13 != 0x28) {
LAB_1406ae930:
        pbVar18 = *(byte **)(param_1 + 4);
        goto joined_r0x0001406ae96b;
      }
      iVar5 = param_1[10];
      lVar16 = (longlong)iVar5;
      if (*param_3 == 0x29) {
        if (0x1f < iVar5) {
LAB_1406aeffb:
                    /* WARNING: Subroutine does not return */
          FUN_1406b7390(*(undefined8 *)(param_1 + 8),"too many captures");
        }
        *(byte **)(param_1 + lVar16 * 4 + 0xc) = _Buf2;
        (param_1 + lVar16 * 4 + 0xe)[0] = -2;
        (param_1 + lVar16 * 4 + 0xe)[1] = -1;
        param_1[10] = iVar5 + 1;
        pbVar10 = (byte *)malformed_pattern_missing_arguments_to_b(param_1,_Buf2,pbVar17 + 2);
      }
      else {
        if (0x1f < iVar5) goto LAB_1406aeffb;
        *(byte **)(param_1 + lVar16 * 4 + 0xc) = _Buf2;
        (param_1 + lVar16 * 4 + 0xe)[0] = -1;
        (param_1 + lVar16 * 4 + 0xe)[1] = -1;
        param_1[10] = iVar5 + 1;
        pbVar10 = (byte *)malformed_pattern_missing_arguments_to_b(param_1,_Buf2,param_3);
      }
      if (pbVar10 != (byte *)0x0) goto LAB_1406aed07;
      param_1[10] = param_1[10] + -1;
      goto LAB_1406aed05;
    }
    bVar13 = *param_3;
    if (bVar13 == 0x66) {
      if (pbVar17[2] != 0x5b) {
                    /* WARNING: Subroutine does not return */
        FUN_1406b7390(*(undefined8 *)(param_1 + 8),"missing \'[\' after \'%%f\' in pattern");
      }
      bVar21 = pbVar17[3] == 0x5e;
      pbVar10 = pbVar17 + 4;
      if (!bVar21) {
        pbVar10 = pbVar17 + 3;
      }
      do {
        if (pbVar10 == pbVar18) goto LAB_1406aefac;
        pbVar14 = pbVar10 + 1;
        bVar20 = pbVar14 < pbVar18;
        if (bVar20 && *pbVar10 == 0x25) {
          pbVar14 = pbVar10 + 2;
        }
        pbVar12 = pbVar10 + (ulonglong)(bVar20 && *pbVar10 == 0x25) + 1;
        pbVar10 = pbVar14;
      } while (*pbVar12 != 0x5d);
      if (_Buf2 == *(byte **)(param_1 + 2)) {
        bVar13 = 0;
      }
      else {
        bVar13 = _Buf2[-1];
      }
      bVar20 = pbVar17[3] == 0x5e;
      pbVar10 = pbVar17 + 2;
      if (bVar20) {
        pbVar10 = pbVar17 + 3;
      }
      pbVar12 = pbVar10 + 1;
      if (pbVar14 <= pbVar12) {
LAB_1406aec01:
        pbVar10 = (byte *)0x0;
        goto LAB_1406aed07;
      }
      pbVar17 = pbVar14 + 1;
      pbVar7 = pbVar12;
      pbVar19 = pbVar10;
      do {
        bVar1 = pbVar19[1];
        if (bVar1 == 0x25) {
          iVar5 = FUN_1406af030(bVar13);
          if (iVar5 != 0) goto LAB_1406ae7b0;
          pbVar19 = pbVar19 + 2;
        }
        else if ((pbVar19[2] == 0x2d) && (pbVar19 = pbVar19 + 3, pbVar19 < pbVar14)) {
          if ((bVar1 <= bVar13) && (bVar13 <= *pbVar19)) {
LAB_1406ae7b0:
            if (!bVar20) goto LAB_1406aec01;
            goto LAB_1406ae7e6;
          }
        }
        else {
          pbVar19 = pbVar7;
          if (bVar13 == bVar1) goto LAB_1406ae7b0;
        }
        pbVar7 = pbVar19 + 1;
      } while (pbVar7 < pbVar14);
      if (bVar21) goto LAB_1406aec01;
LAB_1406ae7e6:
      bVar13 = *_Buf2;
      do {
        bVar1 = pbVar10[1];
        if (bVar1 == 0x25) {
          iVar5 = FUN_1406af030(bVar13);
          if (iVar5 != 0) goto LAB_1406ae660;
          pbVar10 = pbVar10 + 2;
        }
        else if ((pbVar10[2] == 0x2d) && (pbVar10 = pbVar10 + 3, pbVar10 < pbVar14)) {
          if ((bVar1 <= bVar13) && (bVar13 <= *pbVar10)) {
LAB_1406ae660:
            if (bVar20) goto LAB_1406aed05;
            goto LAB_1406ae673;
          }
        }
        else {
          pbVar10 = pbVar12;
          if (bVar13 == bVar1) goto LAB_1406ae660;
        }
        pbVar12 = pbVar10 + 1;
      } while (pbVar12 < pbVar14);
      if (!bVar21) goto LAB_1406aed05;
      goto LAB_1406ae673;
    }
    if (bVar13 - 0x30 < 10) {
      if ((0x30 < bVar13) && (uVar6 = bVar13 - 0x31, (int)uVar6 < param_1[10])) {
        uVar8 = *(ulonglong *)(param_1 + (ulonglong)uVar6 * 4 + 0xe);
        if (uVar8 != 0xffffffffffffffff) {
          if (((ulonglong)(*(longlong *)(param_1 + 4) - (longlong)_Buf2) < uVar8) ||
             (iVar5 = memcmp(*(void **)(param_1 + (ulonglong)uVar6 * 4 + 0xc),_Buf2,uVar8),
             iVar5 != 0)) goto LAB_1406aed05;
          pbVar10 = (byte *)0x0;
          if (_Buf2 == (byte *)0x0) goto LAB_1406aed07;
          param_2 = _Buf2 + uVar8;
          param_3 = pbVar17 + 2;
          goto LAB_1406ae646;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_1406b7390(*(undefined8 *)(param_1 + 8),"invalid capture index %%%d");
    }
    if (bVar13 == 0x62) {
      if (pbVar18 + -1 <= pbVar17 + 2) {
                    /* WARNING: Subroutine does not return */
        FUN_1406b7390(*(undefined8 *)(param_1 + 8),
                      "malformed pattern (missing arguments to \'%%b\')");
      }
      if (*_Buf2 != pbVar17[2]) goto LAB_1406aed05;
      pbVar18 = _Buf2 + 1;
      if (*(byte **)(param_1 + 4) <= pbVar18) goto LAB_1406aed05;
      iVar5 = 1;
      goto LAB_1406aebb9;
    }
    if (pbVar17 + 1 == pbVar18) {
                    /* WARNING: Subroutine does not return */
      FUN_1406b7390(*(undefined8 *)(param_1 + 8),"malformed pattern (ends with \'%%\')");
    }
    param_3 = pbVar17 + 2;
    bVar13 = 0x25;
    pbVar18 = *(byte **)(param_1 + 4);
joined_r0x0001406ae957:
    if (pbVar18 <= _Buf2) goto LAB_1406aea9c;
LAB_1406ae971:
    pbVar14 = pbVar17 + 1;
    bVar1 = *_Buf2;
    if (bVar13 == 0x5b) {
      pbVar10 = param_3 + -1;
      bVar20 = pbVar17[1] == 0x5e;
      bVar21 = !bVar20;
      pbVar12 = pbVar17;
      if (bVar20) {
        pbVar12 = pbVar14;
      }
      pbVar19 = pbVar12 + 1;
      if (pbVar12 + 1 < pbVar10) {
        do {
          while( true ) {
            pbVar7 = pbVar19;
            bVar2 = pbVar12[1];
            bVar4 = bVar21;
            if (bVar2 != 0x25) break;
            iVar5 = FUN_1406af030(bVar1);
            if (iVar5 != 0) goto LAB_1406aead8;
            pbVar12 = pbVar12 + 2;
LAB_1406aea52:
            pbVar19 = pbVar12 + 1;
            bVar4 = bVar20;
            if (pbVar10 <= pbVar12 + 1) goto LAB_1406aead8;
          }
          if ((pbVar12[2] == 0x2d) && (pbVar12 = pbVar12 + 3, pbVar12 < pbVar10)) {
            if (bVar1 < bVar2) goto LAB_1406aea52;
            pbVar7 = pbVar12;
            if (bVar1 <= *pbVar12) break;
          }
          else if (bVar1 == bVar2) break;
          pbVar19 = pbVar7 + 1;
          pbVar12 = pbVar7;
          bVar4 = bVar20;
        } while (pbVar7 + 1 < pbVar10);
LAB_1406aead8:
        if (!bVar4) goto LAB_1406aea9c;
        goto LAB_1406ae9a6;
      }
      if (pbVar17[1] == 0x5e) goto LAB_1406ae9a6;
LAB_1406aea9c:
      if (0x3f < (ulonglong)*param_3) goto LAB_1406aed05;
      pbVar10 = (byte *)0x0;
      if ((0x8000240000000000U >> ((ulonglong)*param_3 & 0x3f) & 1) == 0) goto LAB_1406aed07;
      pbVar17 = param_3 + 1;
      goto LAB_1406ae657;
    }
    if (bVar13 != 0x2e) {
      if (bVar13 == 0x25) {
        iVar5 = FUN_1406af030(bVar1,*pbVar14);
        if (iVar5 == 0) goto LAB_1406aea9c;
      }
      else if (bVar13 != bVar1) goto LAB_1406aea9c;
    }
LAB_1406ae9a6:
    bVar1 = *param_3;
    if (bVar1 == 0x3f) {
      pbVar17 = param_3 + 1;
      pbVar10 = (byte *)malformed_pattern_missing_arguments_to_b(param_1,_Buf2 + 1,pbVar17);
      if (pbVar10 != (byte *)0x0) goto LAB_1406aed07;
      goto LAB_1406ae657;
    }
    if (bVar1 == 0x2a) {
LAB_1406aee2c:
      if (pbVar18 <= _Buf2) {
        lVar16 = 0;
        goto LAB_1406aef82;
      }
      if (bVar13 == 0x25) {
        bVar13 = *pbVar14;
        lVar11 = 0;
        goto LAB_1406aef56;
      }
      if (bVar13 != 0x5b) {
        lVar11 = (longlong)pbVar18 - (longlong)_Buf2;
        lVar16 = lVar11;
        if (bVar13 == 0x2e) goto LAB_1406aef82;
        lVar15 = 0;
        goto LAB_1406aee51;
      }
      pbVar10 = param_3 + -1;
      bVar21 = pbVar17[1] == 0x5e;
      if (!bVar21) {
        pbVar14 = pbVar17;
      }
      bVar20 = !bVar21;
      lVar11 = (longlong)pbVar18 - (longlong)_Buf2;
      if (pbVar14 + 1 < pbVar10) {
        lVar15 = 0;
        do {
          bVar13 = _Buf2[lVar15];
          pbVar17 = pbVar14 + 1;
          pbVar18 = pbVar14;
          do {
            while( true ) {
              pbVar12 = pbVar17;
              bVar1 = pbVar18[1];
              bVar4 = bVar20;
              if (bVar1 != 0x25) break;
              iVar5 = FUN_1406af030(bVar13);
              if (iVar5 != 0) goto LAB_1406aef33;
              pbVar18 = pbVar18 + 2;
LAB_1406aeefc:
              pbVar17 = pbVar18 + 1;
              bVar4 = bVar21;
              if (pbVar10 <= pbVar18 + 1) goto LAB_1406aef33;
            }
            if ((pbVar18[2] == 0x2d) && (pbVar18 = pbVar18 + 3, pbVar18 < pbVar10)) {
              if (bVar13 < bVar1) goto LAB_1406aeefc;
              pbVar12 = pbVar18;
              if (bVar13 <= *pbVar18) break;
            }
            else if (bVar13 == bVar1) break;
            pbVar17 = pbVar12 + 1;
            pbVar18 = pbVar12;
            bVar4 = bVar21;
          } while (pbVar12 + 1 < pbVar10);
LAB_1406aef33:
          lVar16 = lVar15;
        } while ((bVar4) && (lVar15 = lVar15 + 1, lVar16 = lVar11, lVar15 != lVar11));
      }
      else {
        lVar16 = 0;
        if (pbVar17[1] == 0x5e) {
          lVar16 = lVar11;
        }
      }
      goto LAB_1406aef82;
    }
    if (bVar1 == 0x2b) {
      _Buf2 = _Buf2 + 1;
      goto LAB_1406aee2c;
    }
    param_2 = _Buf2 + 1;
  } while (bVar1 != 0x2d);
  pbVar10 = (byte *)malformed_pattern_missing_arguments_to_b(param_1,_Buf2,param_3 + 1);
  if (pbVar10 == (byte *)0x0) {
    pbVar18 = param_3 + -1;
    do {
      if (*(byte **)(param_1 + 4) <= _Buf2) goto LAB_1406aed05;
      bVar13 = *_Buf2;
      bVar1 = *pbVar17;
      if (bVar1 == 0x5b) {
        bVar20 = pbVar17[1] == 0x5e;
        bVar21 = !bVar20;
        pbVar10 = pbVar17;
        if (bVar20) {
          pbVar10 = pbVar14;
        }
        pbVar12 = pbVar10 + 1;
        if (pbVar10 + 1 < pbVar18) {
          do {
            while( true ) {
              pbVar19 = pbVar12;
              bVar1 = pbVar10[1];
              bVar4 = bVar21;
              if (bVar1 != 0x25) break;
              iVar5 = FUN_1406af030(bVar13);
              if (iVar5 != 0) goto LAB_1406aee15;
              pbVar10 = pbVar10 + 2;
LAB_1406aeddd:
              pbVar12 = pbVar10 + 1;
              bVar4 = bVar20;
              if (pbVar18 <= pbVar10 + 1) goto LAB_1406aee15;
            }
            if ((pbVar10[2] == 0x2d) && (pbVar10 = pbVar10 + 3, pbVar10 < pbVar18)) {
              if (bVar13 < bVar1) goto LAB_1406aeddd;
              pbVar19 = pbVar10;
              if (bVar13 <= *pbVar10) break;
            }
            else if (bVar13 == bVar1) break;
            pbVar12 = pbVar19 + 1;
            pbVar10 = pbVar19;
            bVar4 = bVar20;
          } while (pbVar19 + 1 < pbVar18);
LAB_1406aee15:
          if (!bVar4) goto LAB_1406aed05;
        }
        else if (pbVar17[1] != 0x5e) goto LAB_1406aed05;
      }
      else if (bVar1 != 0x2e) {
        if (bVar1 == 0x25) {
          iVar5 = FUN_1406af030(bVar13,*pbVar14);
          if (iVar5 == 0) goto LAB_1406aed05;
        }
        else if (bVar1 != bVar13) goto LAB_1406aed05;
      }
      _Buf2 = _Buf2 + 1;
      pbVar10 = (byte *)malformed_pattern_missing_arguments_to_b(param_1,_Buf2,param_3 + 1);
    } while (pbVar10 == (byte *)0x0);
  }
  goto LAB_1406aed07;
LAB_1406aebb9:
  if (*pbVar18 == pbVar17[3]) {
    iVar5 = iVar5 + -1;
    if (iVar5 == 0) goto code_r0x0001406aebc8;
  }
  else {
    iVar5 = iVar5 + (uint)(*pbVar18 == *_Buf2);
  }
  pbVar18 = pbVar18 + 1;
  if (pbVar18 == *(byte **)(param_1 + 4)) goto LAB_1406aed05;
  goto LAB_1406aebb9;
code_r0x0001406aebc8:
  param_2 = pbVar18 + 1;
  param_3 = pbVar17 + 4;
  goto LAB_1406ae646;
  while (lVar11 = lVar11 + 1, lVar16 = (longlong)pbVar18 - (longlong)_Buf2,
        (longlong)pbVar18 - (longlong)_Buf2 != lVar11) {
LAB_1406aef56:
    iVar5 = FUN_1406af030(_Buf2[lVar11],bVar13);
    lVar16 = lVar11;
    if (iVar5 == 0) break;
  }
  goto LAB_1406aef82;
LAB_1406aed05:
  pbVar10 = (byte *)0x0;
  goto LAB_1406aed07;
  while (lVar15 = lVar15 + 1, lVar16 = lVar11, lVar11 != lVar15) {
LAB_1406aee51:
    lVar16 = lVar15;
    if (bVar13 != _Buf2[lVar15]) break;
  }
LAB_1406aef82:
  do {
    if (lVar16 < 0) goto LAB_1406aed05;
    pbVar10 = (byte *)malformed_pattern_missing_arguments_to_b(param_1,_Buf2 + lVar16,param_3 + 1);
    lVar16 = lVar16 + -1;
  } while (pbVar10 == (byte *)0x0);
LAB_1406aed07:
  *param_1 = *param_1 + 1;
  return pbVar10;
}

