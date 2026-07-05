/**
 * Function: sweeks_of_the_year
 * Address:  140c6ab80
 * Signature: undefined sweeks_of_the_year(void)
 * Body size: 2212 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 sweeks_of_the_year(undefined8 param_1,longlong *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  char *pcVar7;
  int *piVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x140c6aba7;
  iVar1 = FUN_140c078a0(param_3,"%*sPeriod:\n",param_4,&DAT_1413a2ad6);
  if (iVar1 < 1) {
    return 0;
  }
  iVar1 = 0;
  if (*param_2 != 0) {
    iVar2 = FUN_140c078a0(param_3,"%*sDaytime bands:\n",param_4 + 4,&DAT_1413a2ad6);
    if (iVar2 < 1) {
      return 0;
    }
    iVar3 = FUN_140b77980(*param_2);
    iVar2 = iVar1;
    if (0 < iVar3) {
      do {
        plVar5 = (longlong *)FUN_140b77990(*param_2,iVar2);
        iVar3 = FUN_140c078a0(param_3,&DAT_1413a5ce4,param_4 + 8,&DAT_1413a2ad6);
        if (iVar3 < 1) {
          return 0;
        }
        if (*plVar5 == 0) {
          iVar3 = FUN_140b73bf0(param_3,"00:00:00");
        }
        else {
          iVar3 = _2lld_02lld_02lld(param_1,*plVar5,param_3,param_4 + 8);
        }
        if (iVar3 == 0) {
          return 0;
        }
        iVar3 = FUN_140b73bf0(param_3,&DAT_1413a7194);
        if (iVar3 == 0) {
          return 0;
        }
        if (plVar5[1] == 0) {
          iVar3 = FUN_140b73bf0(param_3,"23:59:59");
        }
        else {
          iVar3 = _2lld_02lld_02lld(param_1,plVar5[1],param_3,param_4 + 8);
        }
        if (iVar3 == 0) {
          return 0;
        }
        iVar3 = FUN_140b73bf0(param_3,&DAT_1413a7288);
        if (iVar3 == 0) {
          return 0;
        }
        iVar2 = iVar2 + 1;
        iVar3 = FUN_140b77980(*param_2);
      } while (iVar2 < iVar3);
    }
  }
  if ((int *)param_2[1] != (int *)0x0) {
    if (*(int *)param_2[1] == 0) {
      if (param_2[2] != 0) {
        pcVar7 = "%*sDays of the week: ";
        goto LAB_140c6ad40;
      }
      if (param_2[3] != 0) {
        pcVar7 = "%*sDays of the month: ";
        goto LAB_140c6ad40;
      }
      if (param_2[4] != 0) {
        pcVar7 = "%*sDays of the year: ";
        goto LAB_140c6ad40;
      }
    }
    else {
      pcVar7 = "%*sDays: ";
LAB_140c6ad40:
      iVar2 = FUN_140c078a0(param_3,pcVar7,param_4 + 4,&DAT_1413a2ad6);
      if (iVar2 < 1) {
        return 0;
      }
    }
    piVar8 = (int *)param_2[1];
    iVar2 = *piVar8;
    if (iVar2 == 0) {
      iVar3 = FUN_140b77980(*(undefined8 *)(piVar8 + 2));
      iVar2 = iVar1;
      if (0 < iVar3) {
        do {
          uVar6 = FUN_140b77990(*(undefined8 *)(param_2[1] + 8),iVar2);
          iVar3 = FUN_140bd8560(&local_38,uVar6);
          if (iVar3 == 0) {
            return 0;
          }
          if ((0 < iVar2) && (iVar3 = FUN_140b73bf0(param_3,&DAT_1413a7198), iVar3 == 0)) {
            return 0;
          }
          if (param_2[2] == 0) {
            iVar3 = FUN_140c078a0(param_3,&DAT_1413a6398,local_38);
            if (iVar3 < 1) {
              return 0;
            }
          }
          else {
            switch(local_38) {
            case 1:
              puVar9 = &DAT_1413a6818;
              break;
            case 2:
              puVar9 = &DAT_1413a6834;
              break;
            case 3:
              puVar9 = &DAT_1413a69a8;
              break;
            case 4:
              puVar9 = &DAT_1413a6a40;
              break;
            case 5:
              puVar9 = &DAT_1413a6678;
              break;
            case 6:
              puVar9 = &DAT_1413a68f0;
              break;
            case 7:
              puVar9 = &DAT_1413a6704;
              break;
            default:
              return 0;
            }
            iVar3 = FUN_140b73bf0(param_3,puVar9);
            if (iVar3 == 0) {
              return 0;
            }
          }
          iVar2 = iVar2 + 1;
          iVar3 = FUN_140b77980(*(undefined8 *)(param_2[1] + 8));
        } while (iVar2 < iVar3);
      }
    }
    else {
      if (iVar2 == 1) {
LAB_140c6ade4:
        iVar2 = FUN_140c6aae0(param_3,*(undefined8 *)(piVar8 + 2));
      }
      else {
        if (iVar2 != 2) {
          return 0;
        }
        iVar2 = **(int **)(piVar8 + 2);
        if (iVar2 == 0) {
          pcVar7 = "FIRST ";
        }
        else if (iVar2 == 1) {
          pcVar7 = "SECOND ";
        }
        else if (iVar2 == 2) {
          pcVar7 = "THIRD ";
        }
        else if (iVar2 == 3) {
          pcVar7 = "FOURTH ";
        }
        else {
          if (iVar2 != 4) {
            return 0;
          }
          pcVar7 = "FIFTH ";
        }
        iVar2 = FUN_140b73bf0(param_3,pcVar7);
        if (iVar2 == 0) {
          return 0;
        }
        piVar8 = *(int **)(*(longlong *)(param_2[1] + 8) + 8);
        if (*piVar8 != 0) {
          if (*piVar8 != 1) {
            return 0;
          }
          goto LAB_140c6ade4;
        }
        iVar2 = FUN_140bd8560(&local_38,*(undefined8 *)(piVar8 + 2));
        if (iVar2 == 0) {
          return 0;
        }
        switch(local_38) {
        case 1:
          puVar9 = &DAT_1413a6818;
          break;
        case 2:
          puVar9 = &DAT_1413a6834;
          break;
        case 3:
          puVar9 = &DAT_1413a69a8;
          break;
        case 4:
          puVar9 = &DAT_1413a6a40;
          break;
        case 5:
          puVar9 = &DAT_1413a6678;
          break;
        case 6:
          puVar9 = &DAT_1413a68f0;
          break;
        case 7:
          puVar9 = &DAT_1413a6704;
          break;
        default:
          return 0;
        }
        iVar2 = FUN_140b73bf0(param_3,puVar9);
      }
      if (iVar2 == 0) {
        return 0;
      }
    }
    iVar2 = FUN_140b73bf0(param_3,&DAT_1413a7288);
    if (iVar2 == 0) {
      return 0;
    }
  }
  if ((int *)param_2[2] == (int *)0x0) goto LAB_140c6b183;
  if (*(int *)param_2[2] == 1) {
    if (param_2[3] != 0) {
      pcVar7 = "%*sWeeks of the month: ";
LAB_140c6afe6:
      iVar2 = FUN_140c078a0(param_3,pcVar7,param_4 + 4,&DAT_1413a2ad6);
      goto joined_r0x000140c6b031;
    }
    if (param_2[4] != 0) {
      pcVar7 = "%*sWeeks of the year: ";
      goto LAB_140c6afe6;
    }
  }
  else {
    iVar2 = FUN_140c078a0(param_3,"%*sWeeks: ",param_4 + 4,&DAT_1413a2ad6);
joined_r0x000140c6b031:
    if (iVar2 < 1) {
      return 0;
    }
  }
  plVar5 = param_2 + 2;
  piVar8 = (int *)*plVar5;
  iVar2 = *piVar8;
  if (iVar2 == 0) {
    iVar2 = FUN_140b73bf0(param_3,&DAT_1413a68bc);
    if (iVar2 == 0) {
      return 0;
    }
  }
  else if (iVar2 == 1) {
    iVar3 = FUN_140b77980(*(undefined8 *)(piVar8 + 2));
    iVar2 = iVar1;
    if (0 < iVar3) {
      do {
        uVar6 = FUN_140b77990(*(undefined8 *)(*plVar5 + 8),iVar2);
        iVar3 = FUN_140bd8560(&local_38,uVar6);
        if (iVar3 == 0) {
          return 0;
        }
        if ((0 < iVar2) && (iVar3 = FUN_140b73bf0(param_3,&DAT_1413a7198), iVar3 == 0)) {
          return 0;
        }
        iVar3 = FUN_140c078a0(param_3,&DAT_1413a6398,local_38);
        if (iVar3 == 0) {
          return 0;
        }
        iVar2 = iVar2 + 1;
        iVar3 = FUN_140b77980(*(undefined8 *)(*plVar5 + 8));
      } while (iVar2 < iVar3);
    }
  }
  else {
    if (iVar2 != 2) {
      return 0;
    }
    uVar6 = *(undefined8 *)(piVar8 + 2);
    ppuVar10 = &PTR_s_first_141517b98;
    iVar2 = iVar1;
    iVar3 = iVar1;
    do {
      iVar4 = FUN_140c28860(uVar6,iVar3);
      if (iVar4 != 0) {
        if ((0 < iVar2) && (iVar4 = FUN_140b73bf0(param_3,&DAT_1413a7198), iVar4 == 0)) {
          return 0;
        }
        iVar2 = iVar2 + 1;
        iVar4 = FUN_140b73bf0(param_3,*ppuVar10);
        if (iVar4 == 0) {
          return 0;
        }
      }
      iVar3 = iVar3 + 1;
      ppuVar10 = ppuVar10 + 1;
    } while (iVar3 < 5);
  }
  iVar2 = FUN_140b73bf0(param_3,&DAT_1413a7288);
  if (iVar2 == 0) {
    return 0;
  }
LAB_140c6b183:
  if (param_2[3] != 0) {
    iVar2 = FUN_140c078a0(param_3,"%*sMonths: ",param_4 + 4,&DAT_1413a2ad6);
    if (iVar2 < 1) {
      return 0;
    }
    piVar8 = (int *)param_2[3];
    iVar2 = *piVar8;
    if (iVar2 == 0) {
      iVar2 = FUN_140b73bf0(param_3,&DAT_1413a68bc);
      if (iVar2 == 0) {
        return 0;
      }
    }
    else if (iVar2 == 1) {
      iVar3 = FUN_140b77980(*(undefined8 *)(piVar8 + 2));
      iVar2 = iVar1;
      if (0 < iVar3) {
        do {
          uVar6 = FUN_140b77990(*(undefined8 *)(param_2[3] + 8),iVar2);
          iVar3 = FUN_140bd8560(&local_38,uVar6);
          if (iVar3 == 0) {
            return 0;
          }
          if ((0 < iVar2) && (iVar3 = FUN_140b73bf0(param_3,&DAT_1413a7198), iVar3 == 0)) {
            return 0;
          }
          switch(local_38) {
          case 1:
            puVar9 = &DAT_1413a684c;
            break;
          case 2:
            puVar9 = &DAT_1413a6ae8;
            break;
          case 3:
            puVar9 = &DAT_1413a67b0;
            break;
          case 4:
            puVar9 = &DAT_1413a67a4;
            break;
          case 5:
            puVar9 = &DAT_1413a6618;
            break;
          case 6:
            puVar9 = &DAT_1413a681c;
            break;
          case 7:
            puVar9 = &DAT_1413a6898;
            break;
          case 8:
            puVar9 = &DAT_1413a6948;
            break;
          case 9:
            puVar9 = &DAT_1413a67fc;
            break;
          case 10:
            puVar9 = &DAT_1413a66f8;
            break;
          case 0xb:
            puVar9 = &DAT_1413a6664;
            break;
          case 0xc:
            puVar9 = &DAT_1413a6a80;
            break;
          default:
            return 0;
          }
          iVar3 = FUN_140b73bf0(param_3,puVar9);
          if (iVar3 == 0) {
            return 0;
          }
          iVar2 = iVar2 + 1;
          iVar3 = FUN_140b77980(*(undefined8 *)(param_2[3] + 8));
        } while (iVar2 < iVar3);
      }
    }
    else {
      if (iVar2 != 2) {
        return 0;
      }
      uVar6 = *(undefined8 *)(piVar8 + 2);
      ppuVar10 = &PTR_DAT_141517bc0;
      iVar2 = iVar1;
      iVar3 = iVar1;
      do {
        iVar4 = FUN_140c28860(uVar6,iVar3);
        if (iVar4 != 0) {
          if ((0 < iVar2) && (iVar4 = FUN_140b73bf0(param_3,&DAT_1413a7198), iVar4 == 0)) {
            return 0;
          }
          iVar2 = iVar2 + 1;
          iVar4 = FUN_140b73bf0(param_3,*ppuVar10);
          if (iVar4 == 0) {
            return 0;
          }
        }
        iVar3 = iVar3 + 1;
        ppuVar10 = ppuVar10 + 1;
      } while (iVar3 < 0xc);
    }
    iVar2 = FUN_140b73bf0(param_3,&DAT_1413a7288);
    if (iVar2 == 0) {
      return 0;
    }
  }
  if (param_2[4] != 0) {
    iVar2 = FUN_140c078a0(param_3,"%*sYears: ",param_4 + 4,&DAT_1413a2ad6);
    if (iVar2 < 1) {
      return 0;
    }
    iVar2 = FUN_140b77980(param_2[4]);
    if (0 < iVar2) {
      do {
        uVar6 = FUN_140b77990(param_2[4],iVar1);
        iVar2 = FUN_140bd8560(&local_38,uVar6);
        if (iVar2 == 0) {
          return 0;
        }
        if ((0 < iVar1) && (iVar2 = FUN_140b73bf0(param_3,&DAT_1413a7198), iVar2 == 0)) {
          return 0;
        }
        iVar2 = FUN_140c078a0(param_3,"%04lld",local_38);
        if (iVar2 < 1) {
          return 0;
        }
        iVar1 = iVar1 + 1;
        iVar2 = FUN_140b77980(param_2[4]);
      } while (iVar1 < iVar2);
    }
  }
  return 1;
}

