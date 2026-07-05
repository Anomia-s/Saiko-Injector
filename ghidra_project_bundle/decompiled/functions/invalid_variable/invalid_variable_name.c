/**
 * Function: invalid_variable_name
 * Address:  14039c030
 * Signature: undefined invalid_variable_name(void)
 * Body size: 1101 bytes
 */


void invalid_variable_name(undefined8 param_1,ulonglong *param_2,undefined8 param_3,int param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  char cVar3;
  char cVar4;
  char *pcVar5;
  ulonglong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulonglong in_stack_ffffffffffffff98;
  
  puVar1 = param_2 + 5;
  uVar6 = param_2[3];
  cVar3 = FUN_140392f80(param_2);
  cVar4 = FUN_140392fa0(puVar1);
  if ((uVar6 & 0xffffffffffffff) == 0x140) {
    pcVar5 = "{";
    goto LAB_14039c42b;
  }
  if ((uVar6 & 0xffffffffffffff) == 0x141) {
    pcVar5 = "}";
    goto LAB_14039c42b;
  }
  puVar2 = param_2 + 3;
  uVar6 = *puVar2 & 0xffffffffffffff;
  if (((*puVar2 >> 0x39 & 1) != 0) && (uVar6 == 0x13d || uVar6 == 0x13e)) {
    FUN_1403b7a10(param_3,&DAT_14139d6c7,1);
    uVar6 = param_2[1];
    if ((uVar6 >> 0x3a & 1) == 0 || (uVar6 & 0xffffffffffffff) != 0x110) {
      if ((uVar6 & 0x400000000000000) != 0) {
        pcVar5 = (char *)param_2[2];
        if (pcVar5 == (char *)0x0) {
          pcVar5 = "<<invalid variable name>>";
        }
        FUN_1403b8780(param_3,pcVar5);
      }
    }
    else {
      FUN_1403b7a10(param_3,&DAT_141334ef1,4);
    }
    if ((*puVar2 & 0xffffffffffffff) == 0x13d) {
      puVar7 = &DAT_1413a1201;
      if (*(short *)((longlong)param_2 + 0x42) == 2) {
        puVar7 = &DAT_1413a1206;
      }
LAB_14039c1dd:
      FUN_1403b7a10(param_3,puVar7,4);
    }
    else if ((*puVar2 & 0xffffffffffffff) == 0x13e) {
      puVar7 = &DAT_1413a11fc;
      goto LAB_14039c1dd;
    }
    uVar6 = *puVar1;
    if ((uVar6 & 0x200000000000000) != 0) {
      FUN_1403adfd0(param_1,0,uVar6 & 0xffffffffffffff,".",0,param_3,0);
      return;
    }
    if ((uVar6 & 0x400000000000000) != 0) {
      FUN_1403b7a10(param_3,&DAT_14139d6c7,1);
      if (param_2[6] != 0) {
        FUN_1403b8780(param_3);
        return;
      }
      if ((*puVar1 & 0xffffffffffffff) != 0x110) {
        return;
      }
      pcVar5 = "this";
      uVar8 = 4;
      goto LAB_14039c434;
    }
    if ((uVar6 & 0x100000000000000) == 0) {
      return;
    }
    FUN_1403b7a10(param_3,&DAT_14139efde,1);
    if (((*puVar2 & 0xffffffffffffff) == 0x13e) && (*(short *)((longlong)param_2 + 0x42) == 2)) {
      FUN_1403b7a10(param_3,&DAT_14139fff1,1);
    }
    FUN_1403b8780(param_3,param_2[6]);
    pcVar5 = "\"";
    goto LAB_14039c42b;
  }
  if ((param_4 != 0) && (*(short *)((longlong)param_2 + -6) == 1)) goto switchD_14039c163_caseD_2;
  switch((short)param_2[8]) {
  case 1:
    if (*(short *)((longlong)param_2 + 0x42) != 2) {
      pcVar5 = "[none] ";
      uVar8 = 7;
      break;
    }
  default:
    goto switchD_14039c163_caseD_2;
  case 3:
    pcVar5 = "[inout] ";
    uVar8 = 8;
    break;
  case 4:
    pcVar5 = "[in] ";
    uVar8 = 5;
    break;
  case 5:
    pcVar5 = "[out] ";
    uVar8 = 6;
  }
  FUN_1403b7a10(param_3,pcVar5,uVar8);
switchD_14039c163_caseD_2:
  if (*(short *)((longlong)param_2 + 0x42) == 2) {
    pcVar5 = "!";
LAB_14039c330:
    FUN_1403b7a10(param_3,pcVar5,1);
  }
  else if (*(short *)((longlong)param_2 + 0x42) == 3) {
    pcVar5 = "?";
    goto LAB_14039c330;
  }
  if (cVar3 == '\0') {
    if (((*param_2 & 0xf000000000000000) != 0) && ((*param_2 & 0x8000000000000000) == 0)) {
      uVar8 = FUN_1403b3470();
      FUN_1403b8780(param_3,uVar8);
      FUN_1403b7ad0(param_3,0x7c);
    }
    in_stack_ffffffffffffff98 = in_stack_ffffffffffffff98 & 0xffffffffffffff00;
    FUN_14039c480(param_1,param_3,param_2,puVar2,in_stack_ffffffffffffff98);
    FUN_1403b7a10(param_3,&DAT_14139c234,1);
    in_stack_ffffffffffffff98 = CONCAT71((int7)(in_stack_ffffffffffffff98 >> 8),1);
    FUN_14039c480(param_1,param_3,param_2,param_2 + 1,in_stack_ffffffffffffff98);
    if (cVar4 != '\0') {
      puVar7 = &DAT_1413944a3;
      uVar8 = 1;
      goto LAB_14039c409;
    }
  }
  else {
    in_stack_ffffffffffffff98 = in_stack_ffffffffffffff98 & 0xffffffffffffff00;
    FUN_14039c480(param_1,param_3,param_2,puVar2,in_stack_ffffffffffffff98);
    if (cVar4 == '\0') {
      pcVar5 = "()";
      uVar8 = 2;
      goto LAB_14039c434;
    }
    puVar7 = &DAT_14139448a;
    uVar8 = 4;
LAB_14039c409:
    FUN_1403b7a10(param_3,puVar7,uVar8);
    FUN_14039c480(param_1,param_3,param_2,puVar1,in_stack_ffffffffffffff98 & 0xffffffffffffff00);
  }
  pcVar5 = ")";
LAB_14039c42b:
  uVar8 = 1;
LAB_14039c434:
  FUN_1403b7a10(param_3,pcVar5,uVar8);
  return;
}

