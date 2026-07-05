/**
 * Function: xbox_one_game_controller
 * Address:  140444db0
 * Signature: undefined xbox_one_game_controller(void)
 * Body size: 362 bytes
 */


ulonglong xbox_one_game_controller(short param_1,uint param_2,undefined8 param_3,char *param_4)

{
  longlong *plVar1;
  int iVar2;
  char *pcVar3;
  short sVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  DAT_1416f1870 = 0;
  if (DAT_1416f17a8 != 0) {
    uVar5 = (ulonglong)param_2;
    sVar4 = (short)param_2;
    if (sVar4 == 0) {
      lVar6 = DAT_1416f17a8;
      if (param_4 == (char *)0x0) {
        do {
          if (param_1 == *(short *)(lVar6 + 0x18)) {
            uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
            if (*(short *)(lVar6 + 0x1a) == 0) {
              DAT_1416f1870 = 0;
              return uVar5;
            }
            if (*(short *)(lVar6 + 0x1a) == 0x2a1 && param_1 == 0x45e) {
              DAT_1416f1870 = 0;
              return uVar5;
            }
          }
          plVar1 = (longlong *)(lVar6 + 0x58);
          lVar6 = *plVar1;
        } while (*plVar1 != 0);
      }
      else {
        do {
          if (param_1 == *(short *)(lVar6 + 0x18)) {
            uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
            if (*(short *)(lVar6 + 0x1a) == 0) {
              return uVar5;
            }
            pcVar3 = strstr(*(char **)(lVar6 + 8),param_4);
            if (pcVar3 != (char *)0x0) {
              return uVar5;
            }
            if ((*(short *)(lVar6 + 0x18) == 0x45e) && (*(short *)(lVar6 + 0x1a) == 0x2a1)) {
              return uVar5;
            }
          }
          iVar2 = FUN_1400fd200(param_4,"Xbox One Game Controller");
          if (((iVar2 == 0) && (*(short *)(lVar6 + 0x18) == 0x45e)) &&
             (*(short *)(lVar6 + 0x1a) == 0x2ff)) goto LAB_140444e5b;
          plVar1 = (longlong *)(lVar6 + 0x58);
          lVar6 = *plVar1;
        } while (*plVar1 != 0);
      }
    }
    else {
      lVar6 = DAT_1416f17a8;
      if (param_4 == (char *)0x0) {
        do {
          if ((param_1 == *(short *)(lVar6 + 0x18)) && (sVar4 == *(short *)(lVar6 + 0x1a))) {
LAB_140444e5b:
            return CONCAT71((int7)(uVar5 >> 8),1);
          }
          lVar6 = *(longlong *)(lVar6 + 0x58);
        } while (lVar6 != 0);
      }
      else {
        do {
          if (((param_1 == *(short *)(lVar6 + 0x18)) && (sVar4 == *(short *)(lVar6 + 0x1a))) ||
             ((iVar2 = FUN_1400fd200(param_4,"Xbox One Game Controller"), iVar2 == 0 &&
              ((*(short *)(lVar6 + 0x18) == 0x45e && (*(short *)(lVar6 + 0x1a) == 0x2ff))))))
          goto LAB_140444e5b;
          plVar1 = (longlong *)(lVar6 + 0x58);
          lVar6 = *plVar1;
        } while (*plVar1 != 0);
      }
    }
  }
  return 0;
}

