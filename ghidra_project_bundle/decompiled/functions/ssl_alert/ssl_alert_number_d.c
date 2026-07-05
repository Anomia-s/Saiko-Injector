/**
 * Function: ssl_alert_number_d
 * Address:  140bf1480
 * Signature: undefined ssl_alert_number_d(void)
 * Body size: 2714 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ssl_alert_number_d(int *param_1,char param_2,undefined1 *param_3,void *param_4,ulonglong param_5,
                  int param_6,size_t *param_7)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  int *piVar15;
  char *pcVar16;
  size_t sVar17;
  code *pcVar18;
  code *pcVar19;
  undefined8 in_stack_ffffffffffffff68;
  int *piVar20;
  char local_78 [56];
  undefined8 uStack_40;
  
  uStack_40 = 0x140bf14a4;
  pcVar18 = (code *)0x0;
  if ((param_1 != (int *)0x0) &&
     ((piVar7 = param_1, *param_1 == 0 ||
      (((char)*param_1 < '\0' && (piVar7 = (int *)FUN_140bc8b20(), piVar7 != (int *)0x0)))))) {
    if (((param_2 == '\0') || ((byte)(param_2 - 0x16U) < 2)) &&
       ((param_6 == 0 || (param_2 == '\x17')))) {
      iVar5 = FUN_140ba3380(piVar7);
      pcVar19 = (code *)0x0;
      if ((iVar5 == 0) && (iVar5 = FUN_140ba2f50(param_1), pcVar19 = pcVar18, iVar5 != 0)) {
        uVar12 = (**(code **)(piVar7 + 0x1c))(param_1);
        iVar5 = (int)uVar12;
        if (-1 < iVar5) goto joined_r0x000140bf156b;
        return uVar12;
      }
LAB_140bf1570:
      do {
        while( true ) {
          do {
            piVar7[0x1a] = 1;
            iVar5 = FUN_140ba2fe0(param_1);
            if (((iVar5 != 0) && (*(ulonglong *)(piVar7 + 0x33e) <= *(ulonglong *)(piVar7 + 0x340)))
               && (lVar8 = FUN_140bae2f0(*(undefined8 *)(*(longlong *)(piVar7 + 0x334) + 8)),
                  lVar8 != 0)) {
              puVar10 = *(undefined8 **)(lVar8 + 8);
              uVar12 = puVar10[1];
              *(undefined8 *)(piVar7 + 0x342) = *puVar10;
              *(undefined8 *)(piVar7 + 0x344) = uVar12;
              uVar12 = puVar10[3];
              *(undefined8 *)(piVar7 + 0x346) = puVar10[2];
              *(undefined8 *)(piVar7 + 0x348) = uVar12;
              iVar5 = *(int *)((longlong)puVar10 + 0x24);
              iVar3 = *(int *)(puVar10 + 5);
              iVar4 = *(int *)((longlong)puVar10 + 0x2c);
              piVar7[0x34a] = *(int *)(puVar10 + 4);
              piVar7[0x34b] = iVar5;
              piVar7[0x34c] = iVar3;
              piVar7[0x34d] = iVar4;
              iVar5 = *(int *)((longlong)puVar10 + 0x34);
              iVar3 = *(int *)(puVar10 + 7);
              iVar4 = *(int *)((longlong)puVar10 + 0x3c);
              piVar7[0x34e] = *(int *)(puVar10 + 6);
              piVar7[0x34f] = iVar5;
              piVar7[0x350] = iVar3;
              piVar7[0x351] = iVar4;
              piVar7[0x33e] = 1;
              piVar7[0x33f] = 0;
              piVar7[0x340] = 0;
              piVar7[0x341] = 0;
              FUN_140b8d990(*(undefined8 *)(lVar8 + 8),"ssl\\record\\rec_layer_d1.c",0xa5);
              sslpqueuec(lVar8);
            }
            iVar5 = dtls1_check_timeout_num(piVar7);
          } while (0 < iVar5);
          iVar5 = FUN_140ba3330(piVar7);
          if (iVar5 != 0) {
            return 0xffffffff;
          }
          if (*(ulonglong *)(piVar7 + 0x340) < *(ulonglong *)(piVar7 + 0x33e)) break;
          piVar15 = piVar7 + 0x342;
          piVar7[0x33e] = 0;
          piVar7[0x33f] = 0;
          piVar20 = piVar7 + 0x346;
          piVar7[0x340] = 0;
          piVar7[0x341] = 0;
          uVar6 = (**(code **)(*(longlong *)(piVar7 + 0x318) + 0x40))
                            (*(undefined8 *)(piVar7 + 0x31c),piVar15,piVar7 + 0x344,piVar7 + 0x345,
                             piVar20,piVar7 + 0x34a,piVar7 + 0x34e,(longlong)piVar7 + 0xd3a);
          in_stack_ffffffffffffff68 = CONCAT44((int)((ulonglong)piVar20 >> 0x20),0x102);
          iVar5 = FUN_140bac250(piVar7,0,uVar6,"ssl\\record\\rec_layer_d1.c",
                                in_stack_ffffffffffffff68);
          while (0 < iVar5) {
            piVar15[10] = 0;
            piVar15[0xb] = 0;
            *(longlong *)(piVar7 + 0x33e) = *(longlong *)(piVar7 + 0x33e) + 1;
            iVar5 = (**(code **)(*(longlong *)(piVar7 + 0x318) + 0x18))
                              (*(undefined8 *)(piVar7 + 0x31c));
            if ((iVar5 == 0) || (0x1f < *(ulonglong *)(piVar7 + 0x33e))) goto LAB_140bf1797;
            piVar15 = piVar7 + *(ulonglong *)(piVar7 + 0x33e) * 0x10 + 0x342;
            piVar20 = piVar15 + 4;
            uVar6 = (**(code **)(*(longlong *)(piVar7 + 0x318) + 0x40))
                              (*(undefined8 *)(piVar7 + 0x31c),piVar15,piVar15 + 2,piVar15 + 3,
                               piVar20,piVar15 + 8,piVar15 + 0xc,(longlong)piVar15 + 0x32);
            in_stack_ffffffffffffff68 = CONCAT44((int)((ulonglong)piVar20 >> 0x20),0x102);
            iVar5 = FUN_140bac250(piVar7,0,uVar6,"ssl\\record\\rec_layer_d1.c",
                                  in_stack_ffffffffffffff68);
          }
          uVar12 = dtls1_read_failed(piVar7,iVar5);
          if ((int)uVar12 < 1) {
            return uVar12;
          }
        }
LAB_140bf1797:
        piVar20 = piVar7 + *(longlong *)(piVar7 + 0x340) * 0x10 + 0x342;
        if (((char)piVar20[3] != '\x15') && (*(longlong *)(piVar20 + 8) != 0)) {
          piVar7[0x332] = 0;
        }
        pcVar18 = pcVar19;
        if ((piVar7[0x6e] != 0) && ((char)piVar20[3] != '\x16')) {
          uVar12 = *(undefined8 *)(*(longlong *)(piVar7 + 0x334) + 8);
          uVar9 = FUN_140bae370(uVar12);
          if (uVar9 < 100) {
            if (*(longlong *)(piVar20 + 10) != 0) {
              return 0xffffffff;
            }
            puVar10 = (undefined8 *)FUN_140b8d8d0(0x40,"ssl\\record\\rec_layer_d1.c",0x59);
            lVar8 = sslpqueuec((longlong)piVar20 + 0x32,puVar10);
            if ((puVar10 == (undefined8 *)0x0) || (lVar8 == 0)) {
              FUN_140b8d990(puVar10,"ssl\\record\\rec_layer_d1.c",0x5c);
              sslpqueuec(lVar8);
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              pcVar16 = "dtls_buffer_record";
              uVar12 = 0x5e;
              goto LAB_140bf1504;
            }
            uVar13 = *(undefined8 *)(piVar20 + 2);
            *puVar10 = *(undefined8 *)piVar20;
            puVar10[1] = uVar13;
            uVar13 = *(undefined8 *)(piVar20 + 6);
            puVar10[2] = *(undefined8 *)(piVar20 + 4);
            puVar10[3] = uVar13;
            iVar5 = piVar20[9];
            iVar3 = piVar20[10];
            iVar4 = piVar20[0xb];
            *(int *)(puVar10 + 4) = piVar20[8];
            *(int *)((longlong)puVar10 + 0x24) = iVar5;
            *(int *)(puVar10 + 5) = iVar3;
            *(int *)((longlong)puVar10 + 0x2c) = iVar4;
            iVar5 = piVar20[0xd];
            iVar3 = piVar20[0xe];
            iVar4 = piVar20[0xf];
            *(int *)(puVar10 + 6) = piVar20[0xc];
            *(int *)((longlong)puVar10 + 0x34) = iVar5;
            *(int *)(puVar10 + 7) = iVar3;
            *(int *)((longlong)puVar10 + 0x3c) = iVar4;
            lVar11 = FUN_140b8c7c0(*(undefined8 *)(piVar20 + 4),*(undefined8 *)(piVar20 + 8),
                                   "ssl\\record\\rec_layer_d1.c",0x68);
            puVar10[3] = lVar11;
            puVar10[2] = lVar11;
            if (lVar11 == 0) {
              FUN_140b8d990(puVar10,"ssl\\record\\rec_layer_d1.c",0x6a);
              sslpqueuec(lVar8);
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("ssl\\record\\rec_layer_d1.c",0x6c,"dtls_buffer_record");
              uVar12 = 0x8000f;
              goto LAB_140bf1516;
            }
            *puVar10 = 0;
            *(undefined8 **)(lVar8 + 8) = puVar10;
            lVar11 = FUN_140bae240(uVar12,lVar8);
            if (lVar11 == 0) {
              FUN_140b8d990(puVar10[3],"ssl\\record\\rec_layer_d1.c",0x83);
              FUN_140b8d990(puVar10,"ssl\\record\\rec_layer_d1.c");
              sslpqueuec(lVar8);
            }
          }
          iVar5 = FUN_140bac170(piVar7,piVar20,0);
joined_r0x000140bf156b:
          pcVar19 = pcVar18;
          if (iVar5 == 0) {
            return 0xffffffff;
          }
          goto LAB_140bf1570;
        }
        if ((piVar7[0x21] & 2U) != 0) {
          iVar5 = FUN_140bac170(piVar7,piVar20,0);
          if (iVar5 != 0) {
            piVar7[0x1a] = 1;
            return 0;
          }
          return 0xffffffff;
        }
        cVar1 = (char)piVar20[3];
        if (param_2 == cVar1) {
LAB_140bf1e05:
          iVar5 = FUN_140ba2f50(param_1);
          if (((iVar5 == 0) || (param_2 != '\x17')) ||
             ((*(longlong *)(piVar7 + 0x98) != 0 && (*(longlong *)(piVar7 + 0xba) != 0)))) {
            if (param_3 != (undefined1 *)0x0) {
              *param_3 = (char)piVar20[3];
            }
            uVar9 = *(ulonglong *)(piVar20 + 8);
            if (param_5 == 0) {
              if (uVar9 != 0) {
                return 0;
              }
              goto LAB_140bf1e79;
            }
            if (uVar9 < param_5) {
              param_5 = uVar9;
            }
            memcpy(param_4,(void *)(*(longlong *)(piVar20 + 10) + *(longlong *)(piVar20 + 4)),
                   param_5);
            sVar17 = param_5;
            if (param_6 != 0) {
              if (*(longlong *)(piVar20 + 8) != 0) goto LAB_140bf1ee1;
              sVar17 = 0;
            }
            iVar5 = FUN_140bac170(piVar7,piVar20,sVar17);
            if (iVar5 == 0) {
              return 0xffffffff;
            }
LAB_140bf1ee1:
            *param_7 = param_5;
            return 1;
          }
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("ssl\\record\\rec_layer_d1.c",0x149,"dtls1_read_bytes");
          uVar13 = 10;
          uVar12 = 100;
          goto LAB_140bf151b;
        }
        if (cVar1 == '\x14') {
          if ((param_2 == '\x16') && (param_3 != (undefined1 *)0x0)) goto LAB_140bf1e05;
        }
        else if (cVar1 == '\x15') {
          pcVar16 = (char *)(*(longlong *)(piVar20 + 10) + *(longlong *)(piVar20 + 4));
          uVar9 = *(ulonglong *)(piVar20 + 8);
          if ((((0x7fffffffffffffff < uVar9) || (uVar9 == 0)) || (cVar1 = *pcVar16, uVar9 == 1)) ||
             (bVar2 = pcVar16[1], uVar9 != 2)) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("ssl\\record\\rec_layer_d1.c",0x187,"dtls1_read_bytes");
            uVar13 = 10;
            uVar12 = 0xcd;
            goto LAB_140bf151b;
          }
          if (*(code **)(piVar7 + 0x13e) != (code *)0x0) {
            in_stack_ffffffffffffff68 = 0;
            (**(code **)(piVar7 + 0x13e))
                      (0,piVar7[0x12],0x15,pcVar16,2,param_1,*(undefined8 *)(piVar7 + 0x140));
          }
          uVar14 = (uint)bVar2;
          pcVar18 = *(code **)(piVar7 + 0x256);
          if (((*(code **)(piVar7 + 0x256) != (code *)0x0) ||
              (pcVar18 = *(code **)(*(longlong *)(param_1 + 2) + 0x120),
              *(code **)(*(longlong *)(param_1 + 2) + 0x120) != (code *)0x0)) ||
             (pcVar18 = pcVar19, pcVar19 != (code *)0x0)) {
            (*pcVar18)(param_1,0x4004);
          }
          uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
          if (cVar1 != '\x01') {
            if (cVar1 == '\x02') {
              piVar7[0x1a] = 1;
              piVar7[0x70] = uVar14;
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("ssl\\record\\rec_layer_d1.c",0x1c6,"dtls1_read_bytes");
              FUN_140ba3290(piVar7,0xffffffff,bVar2 + 1000,"SSL alert number %d",
                            CONCAT44(uVar6,uVar14));
              piVar7[0x21] = piVar7[0x21] | 2;
              iVar5 = FUN_140bac170(piVar7,piVar20,0);
              if (iVar5 != 0) {
                FUN_140ba48d0(*(undefined8 *)(piVar7 + 0x2e0),*(undefined8 *)(piVar7 + 0x23e));
                return 0;
              }
              return 0xffffffff;
            }
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("ssl\\record\\rec_layer_d1.c",0x1cf,"dtls1_read_bytes");
            uVar13 = 0x2f;
            uVar12 = 0xf6;
            goto LAB_140bf151b;
          }
          piVar7[0x6f] = uVar14;
          iVar5 = FUN_140bac170(piVar7,piVar20,0);
          if (iVar5 == 0) {
            return 0xffffffff;
          }
          piVar7[0x332] = piVar7[0x332] + 1;
          if (piVar7[0x332] == 5) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("ssl\\record\\rec_layer_d1.c",0x1a1,"dtls1_read_bytes");
            uVar13 = 10;
            uVar12 = 0x199;
            goto LAB_140bf151b;
          }
          if (uVar14 == 0) {
            piVar7[0x21] = piVar7[0x21] | 2;
            return 0;
          }
          pcVar19 = pcVar18;
          if (uVar14 == 100) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("ssl\\record\\rec_layer_d1.c",0x1c0,"dtls1_read_bytes");
            uVar13 = 0x28;
            uVar12 = 0x153;
            goto LAB_140bf151b;
          }
          goto LAB_140bf1570;
        }
        if ((piVar7[0x21] & 1U) != 0) {
          piVar7[0x1a] = 1;
LAB_140bf1e79:
          iVar5 = FUN_140bac170(piVar7,piVar20,0);
          if (iVar5 != 0) {
            return 0;
          }
          return 0xffffffff;
        }
        if (cVar1 == '\x14') {
LAB_140bf1935:
          iVar5 = FUN_140bac170(piVar7,piVar20,0);
          goto joined_r0x000140bf156b;
        }
        if ((cVar1 != '\x16') || (iVar5 = FUN_140ba3380(piVar7), iVar5 != 0)) {
          cVar1 = (char)piVar20[3];
          if ((cVar1 == '\x14') || ((cVar1 == '\x15' || (cVar1 == '\x16')))) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("ssl\\record\\rec_layer_d1.c",0x250,"dtls1_read_bytes");
            uVar13 = 10;
            uVar12 = 0xc0103;
          }
          else {
            if (cVar1 == '\x17') {
              if (((piVar7[0x76] != 0) && (piVar7[0x74] != 0)) &&
                 (iVar5 = FUN_140ba3510(piVar7), iVar5 != 0)) {
                piVar7[0x76] = 2;
                return 0xffffffff;
              }
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              uVar12 = 0x260;
            }
            else {
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              uVar12 = 0x246;
            }
            d_aplatformplatformopenssl_srccryptoerrerr_lo
                      ("ssl\\record\\rec_layer_d1.c",uVar12,"dtls1_read_bytes");
            uVar13 = 10;
            uVar12 = 0xf5;
          }
          goto LAB_140bf151b;
        }
        if (((short)piVar20[0xc] != **(short **)(piVar7 + 0x334)) ||
           (*(ulonglong *)(piVar20 + 8) < 0xc)) goto LAB_140bf1935;
        FUN_140c33af0(*(undefined8 *)(piVar20 + 4),local_78);
        if (local_78[0] == '\x14') {
          iVar5 = dtls1_check_timeout_num(piVar7);
          if (iVar5 < 0) {
            return 0xffffffff;
          }
          iVar5 = FUN_140c338a0(piVar7);
          if ((iVar5 < 1) && (iVar5 = FUN_140ba3330(piVar7), iVar5 != 0)) {
            return 0xffffffff;
          }
          iVar5 = FUN_140bac170(piVar7,piVar20,0);
        }
        else {
          iVar5 = FUN_140ba2fe0(param_1);
          if (iVar5 == 0) {
            d_aplatformplatformopenssl_srccryptoerrerr_lo();
            pcVar16 = "dtls1_read_bytes";
            uVar12 = 0x222;
            goto LAB_140bf1504;
          }
          FUN_140ba3340(piVar7,1);
          uVar12 = (**(code **)(piVar7 + 0x1c))(param_1);
          iVar5 = (int)uVar12;
          if (iVar5 < 0) {
            return uVar12;
          }
        }
        if (iVar5 == 0) {
          return 0xffffffff;
        }
        if (((*(byte *)(piVar7 + 0x26c) & 4) == 0) &&
           (iVar5 = (**(code **)(*(longlong *)(piVar7 + 0x318) + 0x10))
                              (*(undefined8 *)(piVar7 + 0x31c)), iVar5 == 0)) {
          piVar7[0x1a] = 3;
          uVar12 = FUN_140b6abb0(param_1);
          FUN_140b73030(uVar12,0xf);
          FUN_140b73010(uVar12,9);
          return 0xffffffff;
        }
      } while( true );
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    pcVar16 = "dtls1_read_bytes";
    uVar12 = 0xd7;
LAB_140bf1504:
    d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\record\\rec_layer_d1.c",uVar12,pcVar16);
    uVar12 = 0xc0103;
LAB_140bf1516:
    uVar13 = 0x50;
LAB_140bf151b:
    FUN_140ba3290(piVar7,uVar13,uVar12,0);
  }
  return 0xffffffff;
}

