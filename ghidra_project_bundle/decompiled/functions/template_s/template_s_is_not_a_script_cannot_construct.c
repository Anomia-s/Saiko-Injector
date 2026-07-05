/**
 * Function: template_s_is_not_a_script_cannot_construct
 * Address:  1405ecc70
 * Signature: undefined template_s_is_not_a_script_cannot_construct(void)
 * Body size: 379 bytes
 */


void template_s_is_not_a_script_cannot_construct(longlong param_1,int param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  char *pcVar8;
  int iVar9;
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar11;
  undefined8 uVar10;
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  uVar10 = *(undefined8 *)(param_3 + 0x20);
  uVar7 = *(undefined8 *)(param_3 + 0x2c);
  FUN_1403a47f0();
  plVar4 = (longlong *)FUN_1400ba4f0(uVar10,uVar7,0x169);
  if (plVar4 != (longlong *)0x0) {
    lVar5 = FUN_1400ba4f0(uVar10,uVar7);
    if (lVar5 == 0) {
      uVar10 = *(undefined8 *)(param_3 + 0x2e);
      pcVar8 = "template \'%s\' is not a script, cannot construct";
      uVar7 = 0x43;
    }
    else {
      uVar1 = *(uint *)(plVar4 + 1);
      uVar2 = *(uint *)(*(longlong *)(lVar5 + 0x20) + 0x30);
      if (uVar1 == uVar2) {
        if ((int)uVar1 < 1) {
          return;
        }
        if (param_2 < 1) {
          return;
        }
        lVar3 = *plVar4;
        lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x20) + 0x28);
        uVar6 = 0;
        do {
          uVar7 = *(undefined8 *)(lVar5 + 0x18 + uVar6 * 0x28);
          iVar9 = 0;
          do {
            FUN_140762c00(uVar10,uVar7,
                          *(int *)(lVar3 + uVar6 * 0x68 + 0x14) + param_1 +
                          (longlong)*param_3 * (longlong)iVar9,
                          *(undefined8 *)(lVar5 + uVar6 * 0x28 + 0x10));
            iVar9 = iVar9 + 1;
          } while (param_2 != iVar9);
          uVar6 = uVar6 + 1;
        } while (uVar6 != uVar1);
        return;
      }
      uVar10 = CONCAT44(uVar11,uVar2);
      pcVar8 = 
      "number of props (%d) of template \'%s\' does not match members (%d), cannot construct";
      uVar7 = 0x4c;
    }
    FUN_140399630(0xfffffffd,
                  "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/script/template.c"
                  ,uVar7,pcVar8,uVar10);
  }
  return;
}

