/**
 * Function: couldnt_destroy_tray_entry
 * Address:  14017d200
 * Signature: undefined couldnt_destroy_tray_entry(void)
 * Body size: 202 bytes
 */


void couldnt_destroy_tray_entry(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  BOOL BVar4;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  
  if (param_1 != (longlong *)0x0) {
    puVar1 = (undefined8 *)*param_1;
    iVar3 = *(int *)(puVar1 + 1);
    if (1 < iVar3) {
      lVar5 = 0;
      bVar6 = false;
      do {
        lVar2 = puVar1[2];
        bVar7 = *(longlong **)(lVar2 + lVar5 * 8) == param_1;
        if (bVar7 || bVar6) {
          *(undefined8 *)(lVar2 + lVar5 * 8) = *(undefined8 *)(lVar2 + 8 + lVar5 * 8);
          iVar3 = *(int *)(puVar1 + 1);
        }
        lVar5 = lVar5 + 1;
        bVar6 = (bool)(bVar7 | bVar6);
      } while (lVar5 < iVar3 + -1);
    }
    if (param_1[0x205] != 0) {
      FUN_14017d2e0();
      iVar3 = *(int *)(puVar1 + 1);
    }
    *(int *)(puVar1 + 1) = iVar3 + -1;
    lVar5 = FUN_140160cc0(puVar1[2],(longlong)iVar3 << 3);
    if (lVar5 != 0) {
      puVar1[2] = lVar5;
      *(undefined8 *)(lVar5 + (longlong)*(int *)(puVar1 + 1) * 8) = 0;
    }
    BVar4 = DeleteMenu((HMENU)*puVar1,*(UINT *)(param_1 + 1),0);
    if (BVar4 == 0) {
      FUN_1400fbed0("Couldn\'t destroy tray entry");
    }
    FUN_140160cf0(param_1);
    return;
  }
  return;
}

