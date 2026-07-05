/**
 * Function: invalid_cast_from_s_to_s
 * Address:  140761950
 * Signature: undefined invalid_cast_from_s_to_s(void)
 * Body size: 465 bytes
 */


undefined4 * invalid_cast_from_s_to_s(undefined8 *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int *piVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  lVar1 = *(longlong *)(param_2 + 8);
  if (lVar1 == param_3) goto LAB_140761972;
  uVar4 = *param_1;
  puVar6 = (uint *)FUN_1400ba4f0(uVar4,lVar1,0x16e);
  piVar7 = (int *)FUN_1400ba4f0(uVar4,param_3,0x16e);
  if (*puVar6 == 6) {
    puVar8 = (undefined8 *)FUN_1400ba4f0(uVar4,lVar1,0x16c);
    puVar6 = (uint *)FUN_1400ba4f0(uVar4,*puVar8,0x16e);
    if (*piVar7 == 6) goto LAB_140761a5b;
LAB_140761a14:
    uVar3 = *puVar6;
    if (uVar3 != 0) goto LAB_140761a1b;
LAB_140761a85:
    if (*piVar7 == 0) {
      FUN_140766600(param_3);
      goto LAB_140761972;
    }
  }
  else {
    if (*piVar7 != 6) goto LAB_140761a14;
LAB_140761a5b:
    puVar8 = (undefined8 *)FUN_1400ba4f0(uVar4,param_3,0x16c);
    piVar7 = (int *)FUN_1400ba4f0(uVar4,*puVar8,0x16e);
    uVar3 = *puVar6;
    if (uVar3 == 0) goto LAB_140761a85;
LAB_140761a1b:
    if ((uVar3 < 3) && (cVar2 = FUN_1407665a0(param_3), cVar2 != '\0')) goto LAB_140761972;
  }
  cVar2 = FUN_1407665a0(lVar1);
  if ((cVar2 == '\0') || (1 < *piVar7 - 1U)) {
    uVar4 = FUN_1403b36e0(*param_1,*(undefined8 *)(param_2 + 8));
    uVar9 = FUN_1403b36e0(*param_1,param_3);
    FUN_140399a50(param_1[1],param_1[2],*(longlong *)(param_2 + 0x18) - param_1[2],
                  "invalid cast from %s to %s",uVar4,uVar9);
    (*DAT_1415033b0)(uVar4);
    (*DAT_1415033b0)(uVar9);
    return (undefined4 *)0x0;
  }
LAB_140761972:
  uVar4 = FUN_140391250(param_1 + 3,0x28);
  puVar5 = (undefined4 *)FUN_140391620(uVar4,"ecs_expr_cast_t");
  *puVar5 = 0xe;
  cVar2 = FUN_140766600(*(undefined8 *)(param_2 + 8));
  if ((cVar2 != '\0') && (cVar2 = FUN_140766600(param_3), cVar2 != '\0')) {
    *puVar5 = 0xf;
  }
  *(undefined8 *)(puVar5 + 6) = *(undefined8 *)(param_2 + 0x18);
  *(longlong *)(puVar5 + 2) = param_3;
  uVar4 = FUN_1403a5610(*param_1,param_3);
  *(undefined8 *)(puVar5 + 4) = uVar4;
  *(longlong *)(puVar5 + 8) = param_2;
  return puVar5;
}

