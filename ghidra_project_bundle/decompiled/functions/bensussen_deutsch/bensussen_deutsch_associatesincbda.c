/**
 * Function: bensussen_deutsch_associatesincbda
 * Address:  14012c860
 * Signature: undefined bensussen_deutsch_associatesincbda(void)
 * Body size: 1410 bytes
 */


char * bensussen_deutsch_associatesincbda
                 (uint param_1,uint param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined *_Src;
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  char *pcVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined **ppuVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  char *pcVar13;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar15;
  undefined1 *puVar14;
  
  uVar15 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  lVar5 = FUN_14044b700(param_1 & 0xffff,param_2 & 0xffff);
  if (lVar5 != 0) {
    pcVar6 = (char *)FUN_1400fcda0(lVar5);
    return pcVar6;
  }
  if (param_3 == (undefined1 *)0x0) {
    param_3 = &DAT_1413a2ad6;
  }
  param_3 = param_3 + -1;
  do {
    pcVar6 = param_3 + 1;
    param_3 = param_3 + 1;
  } while (*pcVar6 == ' ');
  puVar14 = &DAT_1413a2ad6;
  if (param_4 != (undefined1 *)0x0) {
    puVar14 = param_4;
  }
  pcVar13 = puVar14 + -1;
  do {
    cVar2 = pcVar13[1];
    pcVar13 = pcVar13 + 1;
  } while (cVar2 == ' ');
  if ((*pcVar6 == '\0') || (cVar2 == '\0')) {
    if (cVar2 == '\0') {
      if ((short)param_2 == 0 && (short)param_1 == 0) {
        pcVar13 = "Controller";
      }
      else {
        iVar3 = lic_pro_controller(param_1,param_2,0,1);
        if (5 < iVar3 - 2U) {
          pcVar6 = (char *)FUN_140160c40(0xe);
          if (pcVar6 == (char *)0x0) {
            return (char *)0x0;
          }
          FUN_1400fd420(pcVar6,0xe,"0x%.4x/0x%.4x",param_1 & 0xffff,
                        CONCAT44(uVar15,param_2) & 0xffffffff0000ffff);
          uVar8 = FUN_1400fc570(pcVar6);
          goto joined_r0x00014012cc7a;
        }
        pcVar13 = (&PTR_s_Xbox_360_Controller_14133c92e_4_140dea310)[iVar3 - 2U];
      }
    }
    pcVar6 = (char *)FUN_1400fcda0(pcVar13);
    if (pcVar6 == (char *)0x0) {
      return (char *)0x0;
    }
    uVar8 = FUN_1400fc570(pcVar6);
  }
  else {
    lVar5 = FUN_1400fc570(param_3);
    lVar7 = FUN_1400fc570(pcVar13);
    lVar5 = lVar5 + lVar7 + 2;
    pcVar6 = (char *)FUN_140160c40(lVar5);
    if (pcVar6 == (char *)0x0) {
      return (char *)0x0;
    }
    FUN_1400fd420(pcVar6,lVar5,"%s %s",param_3,pcVar13);
    uVar8 = FUN_1400fc570(pcVar6);
  }
joined_r0x00014012cc7a:
  for (; uVar8 != 0; uVar8 = uVar8 - 1) {
    if (pcVar6[uVar8 - 1] != ' ') {
      pcVar6[uVar8] = '\0';
      uVar11 = 1;
      if (uVar8 == 1) goto LAB_14012c9ed;
      uVar10 = uVar8 - 1;
      goto LAB_14012c998;
    }
  }
  *pcVar6 = '\0';
  uVar10 = 0xffffffffffffffff;
  uVar8 = 0;
LAB_14012c998:
  uVar12 = 0;
  do {
    while ((uVar11 = uVar10, pcVar6[uVar12] == ' ' && (pcVar13 = pcVar6 + uVar12, pcVar13[1] == ' ')
           )) {
      memmove(pcVar13,pcVar13 + 1,uVar8 - uVar12);
      uVar10 = uVar11 - 1;
      uVar8 = uVar11;
      if (uVar11 - 1 <= uVar12) goto LAB_14012c9ed;
    }
    uVar12 = uVar12 + 1;
    uVar10 = uVar8 - 1;
    uVar11 = uVar8;
  } while (uVar12 < uVar8 - 1);
LAB_14012c9ed:
  uVar8 = FUN_1400fc570("ASTRO Gaming");
  iVar3 = FUN_1400fcff0(pcVar6,"ASTRO Gaming",uVar8);
  if (iVar3 == 0) {
    ppuVar9 = &PTR_s_ASTRO_Gaming_140dea250;
  }
  else {
    uVar8 = FUN_1400fc570("Bensussen Deutsch & Associates,Inc.(BDA)");
    iVar3 = FUN_1400fcff0(pcVar6,"Bensussen Deutsch & Associates,Inc.(BDA)",uVar8);
    if (iVar3 == 0) {
      ppuVar9 = &PTR_s_Bensussen_Deutsch___Associates_I_140dea260;
    }
    else {
      uVar8 = FUN_1400fc570("Guangzhou Chicken Run Network Technology Co., Ltd.");
      iVar3 = FUN_1400fcff0(pcVar6,"Guangzhou Chicken Run Network Technology Co., Ltd.",uVar8);
      if (iVar3 == 0) {
        ppuVar9 = &PTR_s_Guangzhou_Chicken_Run_Network_Te_140dea270;
      }
      else {
        uVar8 = FUN_1400fc570("HORI CO.,LTD");
        iVar3 = FUN_1400fcff0(pcVar6,"HORI CO.,LTD",uVar8);
        if (iVar3 == 0) {
          ppuVar9 = &PTR_s_HORI_CO__LTD_140dea280;
        }
        else {
          uVar8 = FUN_1400fc570("HORI CO.,LTD.");
          iVar3 = FUN_1400fcff0(pcVar6,"HORI CO.,LTD.",uVar8);
          if (iVar3 == 0) {
            ppuVar9 = &PTR_s_HORI_CO__LTD__140dea290;
          }
          else {
            uVar8 = FUN_1400fc570("Mad Catz Inc.");
            iVar3 = FUN_1400fcff0(pcVar6,"Mad Catz Inc.",uVar8);
            if (iVar3 == 0) {
              ppuVar9 = &PTR_s_Mad_Catz_Inc__140dea2a0;
            }
            else {
              uVar8 = FUN_1400fc570("Nintendo Co., Ltd.");
              iVar3 = FUN_1400fcff0(pcVar6,"Nintendo Co., Ltd.",uVar8);
              if (iVar3 == 0) {
                ppuVar9 = &PTR_s_Nintendo_Co___Ltd__140dea2b0;
              }
              else {
                uVar8 = FUN_1400fc570("NVIDIA Corporation ");
                iVar3 = FUN_1400fcff0(pcVar6,"NVIDIA Corporation ",uVar8);
                if (iVar3 == 0) {
                  ppuVar9 = &PTR_s_NVIDIA_Corporation_140dea2c0;
                }
                else {
                  uVar8 = FUN_1400fc570("Performance Designed Products");
                  iVar3 = FUN_1400fcff0(pcVar6,"Performance Designed Products",uVar8);
                  if (iVar3 == 0) {
                    ppuVar9 = &PTR_s_Performance_Designed_Products_140dea2d0;
                  }
                  else {
                    uVar8 = FUN_1400fc570("QANBA USA, LLC");
                    iVar3 = FUN_1400fcff0(pcVar6,"QANBA USA, LLC",uVar8);
                    if (iVar3 == 0) {
                      ppuVar9 = &PTR_s_QANBA_USA__LLC_140dea2e0;
                    }
                    else {
                      uVar8 = FUN_1400fc570("QANBA USA,LLC");
                      iVar3 = FUN_1400fcff0(pcVar6,"QANBA USA,LLC",uVar8);
                      if (iVar3 == 0) {
                        ppuVar9 = &PTR_s_QANBA_USA_LLC_140dea2f0;
                      }
                      else {
                        uVar8 = FUN_1400fc570("Unknown ");
                        iVar3 = FUN_1400fcff0(pcVar6,"Unknown ",uVar8);
                        if (iVar3 != 0) goto LAB_14012cd0b;
                        ppuVar9 = &PTR_s_Unknown_140dea300;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  _Src = ppuVar9[1];
  uVar10 = FUN_1400fc570(_Src);
  if (uVar10 <= uVar8) {
    memcpy(pcVar6,_Src,uVar10);
    memmove(pcVar6 + uVar10,pcVar6 + uVar8,(uVar11 - uVar8) + 1);
    uVar11 = (uVar11 - uVar8) + uVar10;
  }
LAB_14012cd0b:
  if (uVar11 - 1 < 2) {
    return pcVar6;
  }
  cVar2 = *pcVar6;
  if (cVar2 == '\0') {
    return pcVar6;
  }
  uVar8 = 1;
  do {
    if (cVar2 != '\0') {
      uVar10 = 0;
      do {
        if (pcVar6[uVar10 + uVar8] == '\0') {
LAB_14012cd70:
          if ((int)uVar10 == 0) goto LAB_14012cd98;
          break;
        }
        iVar3 = FUN_14016e610(cVar2);
        iVar4 = FUN_14016e610(pcVar6[uVar10 + uVar8]);
        if (iVar3 != iVar4) goto LAB_14012cd70;
        cVar2 = pcVar6[uVar10 + 1];
        uVar10 = uVar10 + 1;
      } while (cVar2 != '\0');
      uVar10 = uVar10 & 0xffffffff;
      do {
        if ((pcVar6[uVar10] == '-') || (pcVar6[uVar10] == ' ')) {
          pcVar6 = memmove(pcVar6,pcVar6 + uVar10 + 1,uVar11 - uVar10);
          return pcVar6;
        }
        bVar1 = 1 < (longlong)uVar10;
        uVar10 = uVar10 - 1;
      } while (bVar1);
    }
LAB_14012cd98:
    uVar8 = uVar8 + 1;
    if (uVar8 == uVar11 - 1) {
      return pcVar6;
    }
    cVar2 = *pcVar6;
  } while( true );
}

