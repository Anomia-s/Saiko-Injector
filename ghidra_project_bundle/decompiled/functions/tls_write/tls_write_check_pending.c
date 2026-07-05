/**
 * Function: tls_write_check_pending
 * Address:  140baae40
 * Signature: undefined tls_write_check_pending(void)
 * Body size: 1482 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void tls_write_check_pending
               (int *param_1,char param_2,longlong param_3,ulonglong param_4,ulonglong *param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  ulonglong uVar6;
  int *piVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  int *piVar11;
  ulonglong uVar12;
  int *piVar13;
  ulonglong uVar14;
  int *piVar15;
  int *piVar16;
  undefined8 uVar17;
  undefined1 auStack_398 [32];
  ulonglong *local_378;
  ulonglong local_368;
  ulonglong local_360;
  longlong local_358;
  ulonglong *local_350;
  undefined1 local_348 [4];
  int local_344 [191];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x140baae5a;
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_398;
  local_350 = param_5;
  local_358 = param_3;
  if (param_1 == (int *)0x0) goto LAB_140bab3fa;
  piVar16 = (int *)0x0;
  piVar13 = piVar16;
  if (*param_1 == 0) {
    piVar13 = param_1;
  }
  if (piVar13 == (int *)0x0) goto LAB_140bab3fa;
  uVar14 = *(ulonglong *)(piVar13 + 0x326);
  piVar13[0x1a] = 1;
  if ((param_4 < uVar14) ||
     ((*(longlong *)(piVar13 + 0x32c) != 0 && (param_4 < *(longlong *)(piVar13 + 0x32c) + uVar14))))
  {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\record\\rec_layer_s3.c",299,"ssl3_write_bytes");
    uVar17 = 0x10f;
  }
  else if (piVar13[0x3c] == 4) {
    uVar1 = FUN_140bacd50(piVar13);
    if (uVar1 == 0) {
      uVar17 = 0x9d;
    }
    else {
      if (param_4 + (uint)piVar13[0x54e] <= (ulonglong)uVar1) {
        piVar13[0x54e] = piVar13[0x54e] + (int)param_4;
        goto LAB_140baaf51;
      }
      uVar17 = 0xa6;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\record\\rec_layer_s3.c",uVar17,"ossl_early_data_count_ok");
    uVar17 = 0xa4;
  }
  else {
LAB_140baaf51:
    piVar13[0x326] = 0;
    piVar13[0x327] = 0;
    if ((*(longlong *)(piVar13 + 0x32c) == 0) && ((piVar13[0x2e7] != -1 || (0 < piVar13[0x297])))) {
      FUN_140ba3340(piVar13,1);
    }
    iVar2 = FUN_140ba2f50(param_1);
    if (((iVar2 != 0) && (iVar2 = FUN_140ba3380(piVar13), iVar2 == 0)) && (piVar13[0x3c] != 6)) {
      iVar2 = (**(code **)(piVar13 + 0x1c))(param_1);
      if ((iVar2 < 0) || (iVar2 == 0)) goto LAB_140bab3fa;
    }
    if (*(ulonglong *)(piVar13 + 0x32c) == 0) {
LAB_140bab03c:
      if (uVar14 == 0) {
        piVar13[0x32c] = 0;
        piVar13[0x32d] = 0;
        *(char *)(piVar13 + 0x32e) = param_2;
        *(longlong *)(piVar13 + 0x330) = param_3;
      }
      if (uVar14 == param_4) {
        *local_350 = uVar14;
        goto LAB_140bab3fa;
      }
      if ((0 < piVar13[0x71]) &&
         (iVar2 = (**(code **)(*(longlong *)(param_1 + 6) + 0x90))(param_1), iVar2 < 1))
      goto LAB_140bab368;
      param_4 = param_4 - uVar14;
      uVar1 = FUN_140b6e7f0(piVar13);
      uVar6 = (ulonglong)uVar1;
      local_360 = uVar6;
      uVar1 = FUN_140b6e820(piVar13);
      local_368 = (ulonglong)uVar1;
      if ((uVar6 != 0) && ((local_368 != 0 && (local_368 <= uVar6)))) {
        iVar2 = piVar13[0x12];
        if (piVar13[0x12] == 0x304) {
          iVar2 = 0x303;
        }
        iVar4 = FUN_140ba3030(param_1);
        if ((((iVar4 == 0xd) && (piVar13[0x2e6] == 0)) &&
            (uVar1 = FUN_140b6bdf0(param_1), (uVar1 & 0xffffff00) == 0x300)) &&
           ((iVar4 = FUN_140b6bdf0(param_1), 0x301 < iVar4 && (piVar13[0x232] == 0)))) {
          iVar2 = 0x301;
        }
        while( true ) {
          local_378 = &local_368;
          piVar5 = (int *)(**(code **)(*(longlong *)(piVar13 + 0x31a) + 0x28))
                                    (*(undefined8 *)(piVar13 + 0x31e),param_2,param_4,local_360);
          piVar7 = *(int **)(piVar13 + 0x278);
          if ((piVar7 != (int *)0x0) && (piVar7 < piVar5)) {
            piVar5 = piVar7;
          }
          if (&DAT_00000020 < piVar5) {
            piVar5 = (int *)&DAT_00000020;
          }
          if (local_360 < local_368) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            uVar17 = 0x1ad;
            goto LAB_140bab37e;
          }
          uVar6 = param_4 / (ulonglong)piVar5;
          if (uVar6 < local_368) {
            uVar9 = param_4;
            if (piVar5 != (int *)0x0) {
              piVar7 = local_344;
              uVar12 = uVar6 + 1;
              piVar11 = piVar16;
              piVar15 = piVar16;
              if ((int *)(param_4 % (ulonglong)piVar5) == (int *)0x0) {
                uVar12 = uVar6;
              }
              do {
                *(ulonglong *)(piVar7 + 3) = uVar12;
                puVar8 = (undefined1 *)((longlong)piVar11 + local_358 + uVar14);
                *(char *)(piVar7 + -1) = param_2;
                piVar11 = (int *)((longlong)piVar11 + uVar12);
                *(undefined1 **)(piVar7 + 1) = puVar8;
                piVar15 = (int *)((longlong)piVar15 + 1);
                *piVar7 = iVar2;
                piVar7 = piVar7 + 6;
                uVar6 = uVar12 - 1;
                if (piVar15 != (int *)(param_4 % (ulonglong)piVar5)) {
                  uVar6 = uVar12;
                }
                uVar12 = uVar6;
              } while (piVar15 < piVar5);
            }
          }
          else {
            if (piVar5 != (int *)0x0) {
              piVar7 = local_344;
              lVar10 = local_358 + uVar14;
              piVar11 = piVar5;
              do {
                *(longlong *)(piVar7 + 1) = lVar10;
                lVar10 = lVar10 + local_368;
                *(char *)(piVar7 + -1) = param_2;
                *piVar7 = iVar2;
                *(ulonglong *)(piVar7 + 3) = local_368;
                piVar7 = piVar7 + 6;
                piVar11 = (int *)((longlong)piVar11 + -1);
              } while (piVar11 != (int *)0x0);
            }
            uVar9 = (longlong)piVar5 * local_368;
          }
          *(ulonglong *)(piVar13 + 0x32c) = uVar9;
          iVar4 = (**(code **)(*(longlong *)(piVar13 + 0x31a) + 0x30))
                            (*(undefined8 *)(piVar13 + 0x31e),local_348);
          if (iVar4 == 0) {
            piVar13[0x1a] = 2;
            goto LAB_140bab368;
          }
          piVar13[0x1a] = 1;
          if (iVar4 == -3) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\record\\rec_layer_s3.c",0x1d6,0);
            FUN_140ba3290(piVar13,0x50,0xc0103,0);
            *(ulonglong *)(piVar13 + 0x326) = uVar14;
            goto LAB_140bab3fa;
          }
          if (iVar4 == -2) {
            iVar2 = (**(code **)(*(longlong *)(piVar13 + 0x318) + 0x50))
                              (*(undefined8 *)(piVar13 + 0x31c));
            if (iVar2 == -1) goto LAB_140bab368;
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\record\\rec_layer_s3.c",0x1d6,0);
            FUN_140ba3290(piVar13,iVar2,0x139,0);
            *(ulonglong *)(piVar13 + 0x326) = uVar14;
            goto LAB_140bab3fa;
          }
          if (iVar4 == -1) {
            *(ulonglong *)(piVar13 + 0x326) = uVar14;
            goto LAB_140bab3fa;
          }
          if ((iVar4 < -1) || (iVar4 < 1)) goto LAB_140bab368;
          uVar6 = *(ulonglong *)(piVar13 + 0x32c);
          if ((uVar6 == param_4) || ((param_2 == '\x17' && ((*(byte *)(piVar13 + 0x26c) & 1) != 0)))
             ) break;
          param_4 = param_4 - uVar6;
          uVar14 = uVar14 + uVar6;
        }
        *local_350 = uVar6 + uVar14;
        piVar13[0x32c] = 0;
        piVar13[0x32d] = 0;
        goto LAB_140bab3fa;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      uVar17 = 0x186;
LAB_140bab37e:
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\record\\rec_layer_s3.c",uVar17,"ssl3_write_bytes");
      uVar17 = 0xc0103;
    }
    else {
      if (((*(ulonglong *)(piVar13 + 0x32c) <= param_4) &&
          (((*(byte *)(piVar13 + 0x26c) & 2) != 0 || (*(longlong *)(piVar13 + 0x330) == param_3))))
         && ((char)piVar13[0x32e] == param_2)) {
        uVar3 = (**(code **)(*(longlong *)(piVar13 + 0x31a) + 0x38))
                          (*(undefined8 *)(piVar13 + 0x31e));
        local_378 = (ulonglong *)CONCAT44(local_378._4_4_,0x157);
        iVar2 = FUN_140bac250(piVar13,1,uVar3,"ssl\\record\\rec_layer_s3.c");
        if (0 < iVar2) {
          uVar14 = uVar14 + *(longlong *)(piVar13 + 0x32c);
          piVar13[0x32c] = 0;
          piVar13[0x32d] = 0;
          goto LAB_140bab03c;
        }
LAB_140bab368:
        *(ulonglong *)(piVar13 + 0x326) = uVar14;
        goto LAB_140bab3fa;
      }
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\record\\rec_layer_s3.c",0x105,"tls_write_check_pending");
      uVar17 = 0x7f;
    }
  }
  FUN_140ba3290(piVar13,0x50,uVar17,0);
LAB_140bab3fa:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_398);
}

