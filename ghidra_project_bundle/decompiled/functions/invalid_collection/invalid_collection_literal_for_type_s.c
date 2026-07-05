/**
 * Function: invalid_collection_literal_for_type_s
 * Address:  140766840
 * Signature: undefined invalid_collection_literal_for_type_s(void)
 * Body size: 380 bytes
 */


undefined8
invalid_collection_literal_for_type_s(undefined8 *param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  char *pcVar8;
  
  if ((param_3 == 0) || (cVar1 = FUN_140758640(param_3), *(char *)(param_2 + 0x38) == cVar1)) {
    lVar6 = *(longlong *)(param_2 + 8);
    if (lVar6 == 0) {
      return 0;
    }
    plVar2 = (longlong *)FUN_1400ba4f0(*param_1,lVar6,0x16c);
    if (plVar2 != (longlong *)0x0) {
      lVar6 = *plVar2;
    }
    piVar3 = (int *)FUN_1400ba4f0(*param_1,lVar6,0x16e);
    if (piVar3 == (int *)0x0) {
      return 0;
    }
    if (*(char *)(param_2 + 0x38) == '\x01') {
      if (param_3 != 0) {
        return 0;
      }
      if (0xfffffffd < *piVar3 - 6U) {
        return 0;
      }
      uVar4 = FUN_1403ae340(*param_1,0,*(undefined8 *)(param_2 + 8),".",0);
      uVar5 = param_1[1];
      lVar6 = param_1[2];
      lVar7 = *(longlong *)(param_2 + 0x18) - lVar6;
      pcVar8 = "invalid collection literal for type \'%s\'";
    }
    else {
      if (*piVar3 == 3) {
        return 0;
      }
      uVar4 = FUN_1403ae340(*param_1,0,*(undefined8 *)(param_2 + 8),".",0);
      uVar5 = param_1[1];
      lVar6 = param_1[2];
      lVar7 = *(longlong *)(param_2 + 0x18) - lVar6;
      pcVar8 = "invalid object literal for type \'%s\'";
    }
  }
  else {
    uVar4 = FUN_1403ae340(*param_1,0,*(undefined8 *)(param_2 + 8),".",0);
    uVar5 = param_1[1];
    lVar6 = param_1[2];
    lVar7 = *(longlong *)(param_2 + 0x18) - lVar6;
    pcVar8 = "invalid object literal for collection type \'%s\'";
    if (*(char *)(param_2 + 0x38) != '\0') {
      pcVar8 = "invalid collection literal for non-collection type \'%s\'";
    }
  }
  FUN_140399a50(uVar5,lVar6,lVar7,pcVar8,uVar4);
  (*DAT_1415033b0)(uVar4);
  return 0xffffffff;
}

