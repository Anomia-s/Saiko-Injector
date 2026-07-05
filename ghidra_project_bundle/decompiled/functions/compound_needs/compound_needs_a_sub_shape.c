/**
 * Function: compound_needs_a_sub_shape
 * Address:  1402e6a20
 * Signature: undefined compound_needs_a_sub_shape(void)
 * Body size: 908 bytes
 */


/* WARNING: Removing unreachable block (ram,0x0001402e6b44) */
/* WARNING: Removing unreachable block (ram,0x0001402e6b4a) */
/* WARNING: Removing unreachable block (ram,0x0001402e6b54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [32]
compound_needs_a_sub_shape(longlong param_1,undefined1 (*param_2) [32],longlong *param_3)

{
  RefTarget<JPH::Shape> *pRVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  ulonglong *puVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  undefined4 uVar9;
  Shape *pSVar10;
  Shape_vftable *pSVar11;
  undefined8 *puVar12;
  void *_Dst;
  char *pcVar13;
  ulonglong uVar14;
  longlong *_Src;
  undefined1 auVar15 [16];
  undefined1 auStack_c8 [32];
  Shape *local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  Shape *local_90;
  ulonglong local_78;
  char local_70;
  undefined1 local_68 [16];
  ulonglong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_1414ef3c0 ^ (ulonglong)auStack_c8;
  _Src = (longlong *)(param_1 + 0x18);
  cVar3 = *(char *)(param_1 + 0x38);
  if (cVar3 != '\0') {
    param_2[1][0] = cVar3;
    goto joined_r0x0001402e6cda;
  }
  if (*(longlong *)(param_1 + 0x40) == 1) {
    puVar5 = *(ulonglong **)(param_1 + 0x50);
    auVar15._0_12_ = ZEXT812(0);
    auVar15._12_4_ = 0;
    auVar8 = vcmpps_avx(auVar15,*(undefined1 (*) [16])(puVar5 + 2),0);
    uVar9 = vmovmskps_avx(auVar8);
    if (((~(byte)uVar9 & 7) == 0) &&
       (auVar8 = vcmpps_avx(_DAT_140de0210,*(undefined1 (*) [16])(puVar5 + 4),4),
       (((SUB161(auVar8 >> 0x1f,0) & 1) == 0 && (SUB161(auVar8 >> 0x3f,0) & 1) == 0) &&
       (SUB161(auVar8 >> 0x5f,0) & 1) == 0) && -1 < auVar8[0xf])) {
      pSVar10 = (Shape *)puVar5[1];
      if (pSVar10 == (Shape *)0x0) {
        plVar6 = (longlong *)*puVar5;
        if (plVar6 == (longlong *)0x0) {
          pcVar13 = "Sub shape is null!";
          goto LAB_1402e6a9b;
        }
        (**(code **)(*plVar6 + 0x18))(plVar6,&local_a8);
        FUN_1402e6e40(_Src,&local_a8);
        FUN_1402e6f10(&local_a8);
      }
      else {
        LOCK();
        *(int *)&pSVar10->RefTarget<JPH::Shape> = *(int *)&pSVar10->RefTarget<JPH::Shape> + 1;
        UNLOCK();
        local_a8 = pSVar10;
        FUN_1402e6db0(_Src,&local_a8);
        pSVar10 = local_a8;
joined_r0x0001402e6c54:
        if (pSVar10 != (Shape *)0x0) {
          LOCK();
          pRVar1 = &pSVar10->RefTarget<JPH::Shape>;
          *(int *)pRVar1 = *(int *)pRVar1 + -1;
          UNLOCK();
          if (*(int *)pRVar1 == 0) {
            pSVar11 = pSVar10->vftablePtr;
            goto LAB_1402e6b92;
          }
        }
      }
    }
    else {
      local_a0 = 0;
      local_98 = 0;
      local_70 = '\0';
      local_68._0_8_ = 0;
      local_a8 = (Shape *)&PTR_FUN_140e08640;
      local_58 = puVar5[2];
      uStack_50 = puVar5[3];
      local_48 = puVar5[4];
      uStack_40 = puVar5[5];
      uVar7 = *puVar5;
      if (uVar7 == 0) {
        uVar14 = puVar5[1];
        uVar7 = local_68._0_8_;
      }
      else {
        local_68._8_8_ = 0;
        local_68._0_8_ = uVar7;
        LOCK();
        *(int *)(uVar7 + 8) = *(int *)(uVar7 + 8) + 1;
        UNLOCK();
        uVar14 = puVar5[1];
        auVar15 = local_68;
      }
      local_68 = auVar15;
      if ((uVar14 != 0) && (local_68._8_8_ = uVar14, local_68._0_8_ = uVar7, uVar14 != 0)) {
        LOCK();
        *(int *)(uVar14 + 8) = *(int *)(uVar14 + 8) + 1;
        UNLOCK();
      }
      puVar12 = (undefined8 *)(*DAT_14151f528)(0x50);
      FUN_140327fc0(puVar12,&local_a8,_Src);
      LOCK();
      *(int *)(puVar12 + 1) = *(int *)(puVar12 + 1) + 1;
      UNLOCK();
      LOCK();
      piVar2 = (int *)(puVar12 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*puVar12)(puVar12,1);
      }
      local_a8 = (Shape *)&PTR_FUN_140e08660;
      if ((undefined8 *)local_68._8_8_ != (undefined8 *)0x0) {
        LOCK();
        piVar2 = (int *)(local_68._8_8_ + 8);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)**(undefined8 **)local_68._8_8_)(local_68._8_8_,1);
        }
      }
      if ((longlong *)local_68._0_8_ != (longlong *)0x0) {
        LOCK();
        plVar6 = (longlong *)(local_68._0_8_ + 8);
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)(*(longlong *)local_68._0_8_ + 0x10))(local_68._0_8_,1);
        }
      }
      local_a8 = (Shape *)&PTR_FUN_140de4730;
      if (local_70 == '\x02') {
        if (0xf < local_78) {
          (*DAT_14151f538)(local_90);
        }
      }
      else {
        pSVar10 = local_90;
        if (local_70 == '\x01') goto joined_r0x0001402e6c54;
      }
    }
  }
  else if (*(longlong *)(param_1 + 0x40) == 0) {
    pcVar13 = "Compound needs a sub shape!";
LAB_1402e6a9b:
    FUN_1400e7cd0(_Src,pcVar13);
  }
  else {
    pSVar10 = (Shape *)(*DAT_14151f528)(0x90);
    JPH::Shape::Shape(pSVar10,param_1,param_3,_Src);
    LOCK();
    *(int *)&pSVar10->RefTarget<JPH::Shape> = *(int *)&pSVar10->RefTarget<JPH::Shape> + 1;
    UNLOCK();
    LOCK();
    pRVar1 = &pSVar10->RefTarget<JPH::Shape>;
    *(int *)pRVar1 = *(int *)pRVar1 + -1;
    UNLOCK();
    if (*(int *)pRVar1 == 0) {
      pSVar11 = pSVar10->vftablePtr;
LAB_1402e6b92:
      (*pSVar11->vfunction1)(pSVar10,1);
    }
  }
  cVar3 = *(char *)(param_1 + 0x38);
  param_2[1][0] = cVar3;
joined_r0x0001402e6cda:
  if (cVar3 == '\x02') {
                    /* WARNING: Read-only address (ram,0x000140de0210) is written */
    *param_2 = ZEXT1232(ZEXT812(0));
    uVar7 = *(ulonglong *)(param_1 + 0x28);
    if (0xf < *(ulonglong *)(param_1 + 0x30)) {
      _Src = *(longlong **)(param_1 + 0x18);
    }
    if ((longlong)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      string_too_long();
    }
    if (uVar7 < 0x10) {
      *(ulonglong *)(*param_2 + 0x10) = uVar7;
      *(undefined8 *)(*param_2 + 0x18) = 0xf;
      lVar4 = _Src[1];
      *(longlong *)*param_2 = *_Src;
      *(longlong *)(*param_2 + 8) = lVar4;
    }
    else {
      uVar14 = 0x16;
      if (0x16 < (uVar7 | 0xf)) {
        uVar14 = uVar7 | 0xf;
      }
      _Dst = (void *)(*DAT_14151f528)(uVar14 + 1);
      *(void **)*param_2 = _Dst;
      *(ulonglong *)(*param_2 + 0x10) = uVar7;
      *(ulonglong *)(*param_2 + 0x18) = uVar14;
      memcpy(_Dst,_Src,uVar7 + 1);
    }
  }
  else {
                    /* WARNING: Read-only address (ram,0x000140de0210) is written */
    if (cVar3 == '\x01') {
      lVar4 = *_Src;
      *(longlong *)*param_2 = lVar4;
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
    }
  }
  if (DAT_1414ef3c0 == (local_30 ^ (ulonglong)auStack_c8)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_30 ^ (ulonglong)auStack_c8);
}

