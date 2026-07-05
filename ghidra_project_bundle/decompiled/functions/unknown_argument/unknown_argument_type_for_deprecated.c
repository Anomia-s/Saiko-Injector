/**
 * Function: unknown_argument_type_for_deprecated
 * Address:  140784df0
 * Signature: undefined unknown_argument_type_for_deprecated(void)
 * Body size: 1199 bytes
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 *
unknown_argument_type_for_deprecated(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  void *_Src;
  undefined8 uVar4;
  ulonglong uVar5;
  int ******ppppppiVar6;
  ulonglong uVar7;
  undefined8 **ppuVar8;
  char *pcVar9;
  undefined8 *puVar10;
  int *******pppppppiVar11;
  int *piVar12;
  int *******local_c0;
  undefined8 **local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulonglong uStack_a0;
  int *******local_98;
  undefined8 uStack_90;
  char *local_88;
  ulonglong uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  undefined8 *local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_68 = param_1;
  if (param_3[1] == 1) {
    plVar2 = (longlong *)*param_3;
    lVar3 = *plVar2;
    if (*(int *)(lVar3 + 8) == DAT_1416f23f4) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      lVar3 = *plVar2;
      piVar12 = *(int **)(lVar3 + 0x20);
      piVar1 = piVar12 + *(longlong *)(lVar3 + 0x28) * 6;
      do {
        if (piVar12 == piVar1) {
          return local_68;
        }
        while (*piVar12 == 1) {
          _Src = *(void **)(*(longlong *)(piVar12 + 2) + 0x20);
          pcVar9 = *(char **)(*(longlong *)(piVar12 + 2) + 0x28);
          local_88 = (char *)0x0;
          uStack_80 = 0;
          local_98 = (int *******)0x0;
          uStack_90 = 0;
          if ((longlong)pcVar9 < 0) {
                    /* WARNING: Subroutine does not return */
            string_too_long();
          }
          if (pcVar9 < (char *)0x10) {
            uStack_80 = 0xf;
            local_88 = pcVar9;
            memcpy(&local_98,_Src,(size_t)pcVar9);
            *(char *)((longlong)&local_98 + (longlong)pcVar9) = '\0';
          }
          else {
            uVar5 = (ulonglong)pcVar9 | 0xf;
            uVar7 = 0x16;
            if (0x16 < uVar5) {
              uVar7 = uVar5;
            }
            if (uVar5 < 0xfff) {
              pppppppiVar11 = (int *******)FUN_140b65d30(uVar7 + 1);
            }
            else {
              ppppppiVar6 = (int ******)FUN_140b65d30(uVar7 + 0x28);
              pppppppiVar11 = (int *******)((longlong)ppppppiVar6 + 0x27U & 0xffffffffffffffe0);
              pppppppiVar11[-1] = ppppppiVar6;
            }
            local_98 = pppppppiVar11;
            local_88 = pcVar9;
            uStack_80 = uVar7;
            memcpy(pppppppiVar11,_Src,(size_t)pcVar9);
            *(char *)((longlong)pppppppiVar11 + (longlong)pcVar9) = '\0';
          }
          pppppppiVar11 = (int *******)&local_98;
          if (0xf < uStack_80) {
            pppppppiVar11 = local_98;
          }
          if (local_88 == (char *)0x6) {
            if (*(short *)((longlong)pppppppiVar11 + 4) == 0x6e6f &&
                *(int *)pppppppiVar11 == 0x73616572) goto LAB_140784ffa;
LAB_140784f3e:
            FUN_14079f4f0(&local_b8,
                          "Unknown argument \'%s\' for @deprecated. Only string constants for \'use\' and \'reason\' are allowed"
                         );
            lVar3 = *(longlong *)(piVar12 + 2);
            puVar10 = (undefined8 *)local_68[1];
            if (puVar10 == (undefined8 *)local_68[2]) {
              FUN_14079cd00();
LAB_14078504b:
              if (0xf < uStack_a0) {
                uVar7 = uStack_a0 + 1;
                ppuVar8 = local_b8;
                if (0xfff < uVar7) {
                  ppuVar8 = (undefined8 **)local_b8[-1];
                  if (0x1f < (ulonglong)((longlong)local_b8 + (-8 - (longlong)ppuVar8)))
                  goto LAB_14078529a;
                  uVar7 = uStack_a0 + 0x28;
                }
                thunk_FUN_140b68ba8(ppuVar8,uVar7);
              }
            }
            else {
LAB_140784f68:
              uVar4 = *(undefined8 *)(lVar3 + 0x14);
              *puVar10 = *(undefined8 *)(lVar3 + 0xc);
              puVar10[1] = uVar4;
              puVar10[4] = 0;
              puVar10[5] = 0;
              puVar10[2] = 0;
              puVar10[3] = 0;
              puVar10[2] = local_b8;
              puVar10[3] = uStack_b0;
              puVar10[4] = local_a8;
              puVar10[5] = uStack_a0;
              local_68[1] = local_68[1] + 0x30;
            }
          }
          else {
            if ((local_88 != (char *)0x3) ||
               (*(char *)((longlong)pppppppiVar11 + 2) != 'e' || *(short *)pppppppiVar11 != 0x7375))
            goto LAB_140784f3e;
LAB_140784ffa:
            if (*(int *)(*(longlong *)(piVar12 + 4) + 8) != DAT_1416f23d4) {
              FUN_14079f4f0(&local_b8,"Only constant string allowed as value for \'%s\'");
              lVar3 = *(longlong *)(piVar12 + 4);
              puVar10 = (undefined8 *)local_68[1];
              if (puVar10 == (undefined8 *)local_68[2]) {
                FUN_14079cd00();
                goto LAB_14078504b;
              }
              goto LAB_140784f68;
            }
          }
          if (uStack_80 < 0x10) goto LAB_140784ea8;
          uVar7 = uStack_80 + 1;
          pppppppiVar11 = local_98;
          if (0xfff < uVar7) {
            pppppppiVar11 = (int *******)local_98[-1];
            if (0x1f < (ulonglong)((longlong)local_98 + (-8 - (longlong)pppppppiVar11)))
            goto LAB_14078529a;
            uVar7 = uStack_80 + 0x28;
          }
          thunk_FUN_140b68ba8(pppppppiVar11,uVar7);
          piVar12 = piVar12 + 6;
          if (piVar12 == piVar1) {
            return local_68;
          }
        }
        FUN_14079d1f0(local_68,*(longlong *)(piVar12 + 4) + 0xc,
                      "Only constants keys \'use\' and \'reason\' are allowed for @deprecated attribute"
                     );
LAB_140784ea8:
        piVar12 = piVar12 + 6;
      } while( true );
    }
    local_98 = *(int ********)(lVar3 + 0xc);
    uStack_90 = *(undefined8 *)(lVar3 + 0x14);
    uStack_80 = 0;
    local_88 = (char *)FUN_140b65d30(0x30);
    local_78 = 0x25;
    local_70 = 0x2f;
    builtin_strncpy(local_88,"Unknown argument type for @deprecated",0x26);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    local_c0 = (int *******)&local_98;
    local_b8 = &local_68;
    FUN_14079c900(param_1,1,&local_c0);
  }
  else {
    if (param_3[1] == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      return param_1;
    }
    local_98 = (int *******)*param_2;
    uStack_90 = param_2[1];
    uStack_80 = 0;
    local_88 = (char *)FUN_140b65d30(0x40);
    local_78 = 0x32;
    local_70 = 0x3f;
    builtin_strncpy(local_88,"@deprecated can be parametrized only by 1 argument",0x33);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    local_c0 = (int *******)&local_98;
    local_b8 = &local_68;
    FUN_14079c900(param_1,1,&local_c0);
  }
  if (0xf < local_70) {
    uVar7 = local_70 + 1;
    pcVar9 = local_88;
    if (0xfff < uVar7) {
      pcVar9 = *(char **)(local_88 + -8);
      if ((char *)0x1f < local_88 + (-8 - (longlong)pcVar9)) {
LAB_14078529a:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar7 = local_70 + 0x28;
    }
    thunk_FUN_140b68ba8(pcVar9,uVar7);
  }
  return local_68;
}

