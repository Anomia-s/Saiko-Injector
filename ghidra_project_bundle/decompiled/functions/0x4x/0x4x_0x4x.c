/**
 * Function: 0x4x_0x4x
 * Address:  14044b4b0
 * Signature: undefined 0x4x_0x4x(void)
 * Body size: 591 bytes
 */


uint _x4x_0x4x(int param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  longlong lVar6;
  uint *puVar7;
  uint *puVar8;
  undefined1 auStack_78 [32];
  uint local_58;
  char local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_1414ef3c0 ^ (ulonglong)auStack_78;
  pcVar4 = (char *)FUN_140110550("SDL_GAMECONTROLLERTYPE");
  if (pcVar4 == (char *)0x0) {
LAB_14044b650:
    param_2 = param_1 << 0x10 | param_2;
    puVar7 = &DAT_140e16320;
    lVar6 = 0x21c;
    puVar8 = puVar7;
    if (param_2 != 0x79181a) {
      do {
        if (lVar6 == 0) {
          uVar3 = 0x1e;
          goto LAB_14044b6b8;
        }
        if (param_2 == puVar8[-4]) {
          puVar8 = puVar8 + -4;
          goto LAB_14044b6b5;
        }
        if (param_2 == *puVar8) goto LAB_14044b6b5;
        if (param_2 == puVar8[4]) {
          puVar8 = puVar8 + 4;
          goto LAB_14044b6b5;
        }
        puVar7 = puVar8 + 0x10;
        lVar6 = lVar6 + -4;
        puVar1 = puVar8 + 8;
        puVar8 = puVar7;
      } while (param_2 != *puVar1);
    }
    puVar8 = puVar7 + -8;
LAB_14044b6b5:
    uVar3 = puVar8[1];
  }
  else {
    local_58 = param_2;
    FUN_1400fd420(local_48,0x20,"0x%.4x/0x%.4x=",param_1);
    pcVar5 = strstr(pcVar4,local_48);
    if (pcVar5 == (char *)0x0) {
      local_58 = param_2;
      FUN_1400fd420(local_48,0x20,"0x%.4X/0x%.4X=",param_1);
      pcVar5 = strstr(pcVar4,local_48);
      if (pcVar5 == (char *)0x0) goto LAB_14044b650;
    }
    lVar6 = FUN_1400fc570(local_48);
    iVar2 = strncmp(pcVar5 + lVar6,"k_eControllerType_",0x12);
    pcVar4 = pcVar5 + lVar6 + 0x12;
    if (iVar2 != 0) {
      pcVar4 = pcVar5 + lVar6;
    }
    iVar2 = FUN_1400fcff0(pcVar4,"Xbox360",7);
    if (iVar2 == 0) {
      uVar3 = 0x1f;
    }
    else {
      iVar2 = FUN_1400fcff0(pcVar4,"XboxOne",7);
      if (iVar2 == 0) {
        uVar3 = 0x20;
      }
      else {
        iVar2 = FUN_1400fcff0(pcVar4,"PS3",3);
        if (iVar2 == 0) {
          uVar3 = 0x21;
        }
        else {
          iVar2 = FUN_1400fcff0(pcVar4,"PS4",3);
          if (iVar2 == 0) {
            uVar3 = 0x22;
          }
          else {
            iVar2 = FUN_1400fcff0(pcVar4,"PS5",3);
            if (iVar2 == 0) {
              uVar3 = 0x2d;
            }
            else {
              iVar2 = FUN_1400fcff0(pcVar4,"SwitchPro",9);
              if (iVar2 == 0) {
                uVar3 = 0x26;
              }
              else {
                iVar2 = FUN_1400fcff0(pcVar4,"Steam",5);
                uVar3 = 0x1e;
                if (iVar2 == 0) {
                  uVar3 = 2;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_14044b6b8:
  if (DAT_1414ef3c0 != (local_28 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_28 ^ (ulonglong)auStack_78);
  }
  return uVar3;
}

