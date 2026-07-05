/**
 * Function: missing_reflection_data_for_type_s
 * Address:  1405e1080
 * Signature: undefined missing_reflection_data_for_type_s(void)
 * Body size: 736 bytes
 */


void missing_reflection_data_for_type_s(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  int *piVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_a8 [32];
  Decoration<__int64> *local_88;
  undefined4 local_7c;
  longlong local_78;
  Decoration<__int64> local_70;
  int iStack_68;
  int iStack_64;
  ulonglong local_60;
  
  local_60 = DAT_1414ef3c0 ^ (ulonglong)auStack_a8;
  lVar11 = (longlong)*(int *)((longlong)param_1 + 0x14);
  if (0 < lVar11) {
    uVar1 = *param_1;
    lVar12 = 0;
    local_78 = lVar11;
    do {
      uVar2 = *(undefined8 *)(param_1[3] + lVar12 * 8);
      local_88 = (Decoration<__int64> *)0x14136be0d;
      FUN_1403b2710(0,&local_70,0x38,0);
      piVar6 = (int *)FUN_1400ba4f0(uVar1,uVar2,0x16e);
      if (piVar6 == (int *)0x0) {
        local_88 = (Decoration<__int64> *)0x0;
        local_88 = (Decoration<__int64> *)FUN_1403ae340(uVar1,0,uVar2,".");
        FUN_140399630(0xfffffffd,
                      "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/meta/serializer.c"
                      ,0x23b);
        (*DAT_1415033b0)();
      }
      else {
        if (*piVar6 == 5) {
          puVar7 = (undefined8 *)FUN_1400ba4f0(uVar1,uVar2,0x16b);
          if (puVar7 != (undefined8 *)0x0) {
            local_7c = _anon_C953E3F2::Decoration<__int64>::vfunction3(&local_70);
            puVar8 = (undefined4 *)FUN_1403b2f60(0,&local_70,0x38);
            *puVar8 = 2;
            *(undefined2 *)(puVar8 + 7) = 1;
            *(undefined8 *)(puVar8 + 4) = 0;
            *(undefined8 *)((longlong)puVar8 + 0x1e) = 0;
            *(undefined8 *)((longlong)puVar8 + 0x26) = 0;
            *(undefined8 *)(puVar8 + 10) = 0;
            *(undefined8 *)(puVar8 + 0xc) = 0;
            puVar8[2] = 0;
            *(undefined8 *)(puVar8 + 8) = uVar2;
            uVar9 = FUN_1403a5610(uVar1,uVar2);
            *(undefined8 *)(puVar8 + 10) = uVar9;
            uVar5 = FUN_1403a55a0(uVar1,*puVar7);
            lVar11 = local_78;
            puVar8[6] = uVar5;
            iVar4 = entity_s_is_not_a_primitive_type(uVar1,*puVar7,0);
            if (iVar4 == 0) {
              puVar8 = (undefined4 *)FUN_1403b2f60(0,&local_70,0x38);
              *puVar8 = 3;
              *(undefined2 *)(puVar8 + 7) = 1;
              *(undefined8 *)(puVar8 + 4) = 0;
              *(undefined8 *)((longlong)puVar8 + 0x1e) = 0;
              *(undefined8 *)((longlong)puVar8 + 0x26) = 0;
              *(undefined8 *)(puVar8 + 10) = 0;
              *(undefined8 *)(puVar8 + 0xc) = 0;
              puVar8[2] = 0;
              *(undefined8 *)(puVar8 + 8) = uVar2;
              uVar9 = FUN_1403a5610(uVar1,uVar2);
              *(undefined8 *)(puVar8 + 10) = uVar9;
              uVar5 = _anon_C953E3F2::Decoration<__int64>::vfunction3(&local_70);
              sVar3 = (short)local_7c;
              lVar11 = FUN_1403b30a0(&local_70,0x38);
              *(short *)(lVar11 + 0x1c) = (short)uVar5 - sVar3;
              lVar11 = local_78;
              goto LAB_1405e12f4;
            }
          }
        }
        else {
          if (*piVar6 == 4) {
            puVar7 = (undefined8 *)FUN_1400ba4f0(uVar1,uVar2,0x16a);
            if (puVar7 == (undefined8 *)0x0) goto LAB_1405e12df;
            local_88 = &local_70;
            iVar4 = FUN_1405e1970(uVar1,*puVar7,*(undefined4 *)(puVar7 + 1));
          }
          else {
            iVar4 = entity_s_is_not_a_primitive_type(uVar1,uVar2,0);
          }
          if (iVar4 == 0) {
LAB_1405e12f4:
            piVar10 = (int *)FUN_1400ba6e0(uVar1,uVar2,0x16d);
            if (*(longlong *)(piVar10 + 2) != 0) {
              FUN_1403c9260(piVar10);
            }
            *piVar10 = *piVar6;
            piVar10[2] = (int)local_70.vftablePtr;
            piVar10[3] = local_70.vftablePtr._4_4_;
            piVar10[4] = iStack_68;
            piVar10[5] = iStack_64;
            goto LAB_1405e111c;
          }
        }
LAB_1405e12df:
        FUN_1403b2770(0,&local_70,0x38);
      }
LAB_1405e111c:
      lVar12 = lVar12 + 1;
    } while (lVar11 != lVar12);
  }
  if (DAT_1414ef3c0 == (local_60 ^ (ulonglong)auStack_a8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_60 ^ (ulonglong)auStack_a8);
}

