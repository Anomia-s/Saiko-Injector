/**
 * Function: warning_range
 * Address:  1405fb7b0
 * Signature: undefined warning_range(void)
 * Body size: 1010 bytes
 */


void warning_range(undefined8 param_1,longlong param_2,int param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 uVar12;
  char *pcVar13;
  int *piVar14;
  int iVar15;
  undefined8 local_68;
  
  if (*(longlong *)(param_2 + 0x10) == 0) {
    local_68 = 0;
  }
  else {
    local_68 = FUN_1400ba4f0(param_1,*(undefined8 *)(param_2 + -0x18),0x169);
  }
  if (0 < param_3) {
    iVar15 = 0;
    do {
      if (*(longlong *)(param_2 + 0x10 + (longlong)iVar15 * 0x38) != 0) {
        FUN_1405fc490(param_4);
      }
      piVar14 = (int *)((longlong)iVar15 * 0x38 + param_2);
      switch(*piVar14) {
      case 0:
        FUN_1405fc360(param_4);
        FUN_1405fbbb0(param_1,piVar14,param_4);
        FUN_1405fc380(param_4);
        iVar15 = iVar15 + (short)piVar14[7] + -1;
        goto LAB_1405fb82b;
      default:
        FUN_1405fc330(param_4);
        if (*piVar14 - 0xdU < 0x12) {
          iVar8 = FUN_1405fcaa0();
          if (iVar8 - 1U < 0x12) {
            FUN_1405fc390(param_4,(&PTR_DAT_1411f7418)[iVar8 - 1U]);
            FUN_1403b8d70(param_4);
          }
          goto switchD_1405fba28_caseD_3;
        }
        switch(*piVar14) {
        case 1:
          FUN_1403b9090(param_4,"\"array\"");
          thunk_FUN_1403b8d70(param_4);
          FUN_1405fbbb0(param_1,piVar14,param_4);
          uVar9 = FUN_140757840(piVar14,0);
          FUN_1403b9020(param_4,"%u",uVar9);
          break;
        case 2:
          FUN_1403b9090(param_4,"\"vector\"");
          thunk_FUN_1403b8d70(param_4);
          FUN_1405fbbb0(param_1,piVar14,param_4);
          break;
        default:
          goto switchD_1405fba28_caseD_3;
        case 10:
          uVar12 = *(undefined8 *)(piVar14 + 8);
          pcVar13 = "\"enum\"";
          goto LAB_1405fbb45;
        case 0xb:
          uVar12 = *(undefined8 *)(piVar14 + 8);
          pcVar13 = "\"bitmask\"";
LAB_1405fbb45:
          FUN_1403b9090(param_4,pcVar13);
          FUN_1405fbd20(param_1,uVar12,param_4);
          goto switchD_1405fba28_caseD_3;
        }
        iVar15 = iVar15 + (short)piVar14[7] + -1;
switchD_1405fba28_caseD_3:
        if (*(longlong *)(piVar14 + 4) != 0) {
          lVar11 = FUN_1403b30a0(local_68,0x68,(int)*(short *)((longlong)piVar14 + 0x1e));
          lVar1 = *(longlong *)(lVar11 + 0x18);
          lVar2 = *(longlong *)(lVar11 + 0x28);
          lVar3 = *(longlong *)(lVar11 + 0x30);
          lVar4 = *(longlong *)(lVar11 + 0x38);
          lVar5 = *(longlong *)(lVar11 + 0x40);
          lVar6 = *(longlong *)(lVar11 + 0x48);
          lVar7 = *(longlong *)(lVar11 + 0x50);
          if (((lVar4 != lVar5 || lVar1 != 0) || lVar6 != lVar7) || lVar2 != lVar3) {
            thunk_FUN_1403b8d70(param_4);
            FUN_1405fc360(param_4);
            if (lVar1 != 0) {
              FUN_1405fbc50(param_1,param_4,lVar1);
            }
            if (lVar2 != lVar3) {
              FUN_1405fc490(param_4,"range");
              FUN_1405fc330(param_4);
              thunk_FUN_1403b8d70(param_4);
              thunk_FUN_1403b7ce0(param_4,*(undefined8 *)(lVar11 + 0x28));
              thunk_FUN_1403b8d70(param_4);
              thunk_FUN_1403b7ce0(param_4,*(undefined8 *)(lVar11 + 0x30));
              FUN_1405fc350(param_4);
            }
            if (lVar4 != lVar5) {
              FUN_1405fc490(param_4,"error_range");
              FUN_1405fc330(param_4);
              thunk_FUN_1403b8d70(param_4);
              thunk_FUN_1403b7ce0(param_4,*(undefined8 *)(lVar11 + 0x38));
              thunk_FUN_1403b8d70(param_4);
              thunk_FUN_1403b7ce0(param_4,*(undefined8 *)(lVar11 + 0x40));
              FUN_1405fc350(param_4);
            }
            if (lVar6 != lVar7) {
              FUN_1405fc490(param_4,"warning_range");
              FUN_1405fc330(param_4);
              thunk_FUN_1403b8d70(param_4);
              thunk_FUN_1403b7ce0(param_4,*(undefined8 *)(lVar11 + 0x48));
              thunk_FUN_1403b8d70(param_4);
              thunk_FUN_1403b7ce0(param_4,*(undefined8 *)(lVar11 + 0x50));
              FUN_1405fc350(param_4);
            }
            FUN_1405fc380(param_4);
          }
        }
        FUN_1405fc350(param_4);
        goto LAB_1405fb82b;
      case 4:
      case 5:
      case 6:
      case 9:
        puVar10 = (undefined8 *)FUN_1400ba4f0(param_1,*(undefined8 *)(piVar14 + 8),0x16c);
        uVar12 = *puVar10;
        break;
      case 7:
        uVar12 = *(undefined8 *)(piVar14 + 8);
      }
      FUN_1405fb6a0(param_1,uVar12,param_4);
LAB_1405fb82b:
      iVar15 = iVar15 + 1;
    } while (iVar15 < param_3);
  }
  return;
}

