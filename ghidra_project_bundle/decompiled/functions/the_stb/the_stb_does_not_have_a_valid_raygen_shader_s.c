/**
 * Function: the_stb_does_not_have_a_valid_raygen_shader_s
 * Address:  140710d30
 * Signature: void __thiscall the_stb_does_not_have_a_valid_raygen_shader_s(void * this, longlong * param_1)
 * Body size: 2227 bytes
 */


/* WARNING: Type propagation algorithm not settling */

void __thiscall the_stb_does_not_have_a_valid_raygen_shader_s(void *this,longlong *param_1)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  char cVar10;
  uint uVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong uVar14;
  char *pcVar15;
  int *piVar16;
  ulonglong *puVar17;
  undefined8 uVar18;
  longlong lVar19;
  longlong *plVar20;
  ulonglong uVar21;
  undefined8 local_270;
  undefined7 uStack_268;
  undefined1 uStack_261;
  undefined7 uStack_260;
  undefined1 uStack_259;
  undefined7 uStack_258;
  undefined1 uStack_251;
  undefined7 uStack_250;
  undefined1 local_249;
  undefined7 uStack_248;
  undefined1 uStack_241;
  undefined7 uStack_240;
  undefined1 local_239;
  undefined7 uStack_238;
  undefined1 uStack_231;
  undefined7 uStack_230;
  undefined1 local_229;
  undefined7 uStack_228;
  undefined1 uStack_221;
  undefined7 uStack_220;
  int *local_90;
  longlong *local_88;
  undefined8 uStack_80;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  plVar3 = (longlong *)*param_1;
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  if ((int)plVar3[3] < 0) {
    uVar18 = *(undefined8 *)((longlong)this + 0x18);
    uStack_268 = 0;
    uStack_261 = 0;
    pcVar15 = (char *)FUN_140b65d30(0x30);
    local_270._0_2_ = SUB82(pcVar15,0);
    local_270._2_1_ = (undefined1)((ulonglong)pcVar15 >> 0x10);
    local_270._3_4_ = (undefined4)((ulonglong)pcVar15 >> 0x18);
    local_270._7_1_ = (undefined1)((ulonglong)pcVar15 >> 0x38);
    uStack_260 = 0x2f;
    uStack_259 = 0;
    uStack_258 = 0x2f;
    uStack_251 = 0;
    builtin_strncpy(pcVar15,"The STB does not have a valid RayGen shader set",0x30);
    FUN_140533460(uVar18,&local_270);
    goto LAB_1407111cb;
  }
  lVar19 = plVar3[2];
  plVar20 = plVar3;
  if (*(char *)((longlong)this + 0x130) == '\x01') {
    FUN_1407cb870(this,param_1);
    plVar20 = (longlong *)*param_1;
  }
  plVar12 = *(longlong **)((longlong)this + 0x960);
  if (plVar12 != plVar20) {
    lVar13 = *(longlong *)((longlong)this + 0x138);
    local_270._0_2_ = SUB82(plVar20,0);
    local_270._2_1_ = (undefined1)((ulonglong)plVar20 >> 0x10);
    local_270._3_4_ = (undefined4)((ulonglong)plVar20 >> 0x18);
    local_270._7_1_ = (undefined1)((ulonglong)plVar20 >> 0x38);
    if (plVar20 != (longlong *)0x0) {
      (**(code **)(*plVar20 + 8))();
    }
    puVar4 = *(undefined8 **)(lVar13 + 0x18);
    if (puVar4 == *(undefined8 **)(lVar13 + 0x20)) {
      FUN_1406f5260(lVar13 + 0x10,puVar4,&local_270);
    }
    else {
      *puVar4 = 0;
      if (puVar4 != &local_270) {
        *puVar4 = CONCAT17(local_270._7_1_,
                           CONCAT43(local_270._3_4_,CONCAT12(local_270._2_1_,(undefined2)local_270))
                          );
        local_270._0_2_ = 0;
        local_270._2_1_ = 0;
        local_270._3_4_ = 0;
        local_270._7_1_ = 0;
      }
      *(longlong *)(lVar13 + 0x18) = *(longlong *)(lVar13 + 0x18) + 8;
    }
    plVar20 = (longlong *)
              CONCAT17(local_270._7_1_,
                       CONCAT43(local_270._3_4_,CONCAT12(local_270._2_1_,(undefined2)local_270)));
    if (plVar20 != (longlong *)0x0) {
      local_270._0_2_ = 0;
      local_270._2_1_ = 0;
      local_270._3_4_ = 0;
      local_270._7_1_ = 0;
      (**(code **)(*plVar20 + 0x10))();
    }
    plVar12 = *(longlong **)((longlong)this + 0x960);
  }
  if ((plVar12 == (longlong *)0x0) ||
     (lVar13 = (**(code **)(*plVar12 + 0x38))(plVar12), lVar13 != lVar19)) {
    (*DAT_1416b7008)(**(undefined8 **)((longlong)this + 0x138),0x3b9d4e88,
                     *(undefined8 *)(lVar19 + 0x118));
    *(undefined8 *)((longlong)this + 0x148) = *(undefined8 *)(lVar19 + 0x110);
    *(undefined4 *)((longlong)this + 0x150) = *(undefined4 *)(lVar19 + 0x120);
  }
  if (*(ulonglong *)((longlong)this + 0x9a8) == param_1[9]) {
    uVar14 = *(ulonglong *)((longlong)this + 0x9a8) & 0xffffffff;
    if (uVar14 != 0) {
      uVar21 = 0;
      do {
        if (*(longlong *)((longlong)this + uVar21 * 8 + 0x968) != (param_1 + 1)[uVar21])
        goto LAB_140710f0f;
        uVar21 = uVar21 + 1;
      } while (uVar14 != uVar21);
    }
    if (*(char *)((longlong)this + 0x9b0) == '\x01') goto LAB_140710f0f;
  }
  else {
LAB_140710f0f:
    before_writing_into_it_is_invalid
              (this,0x3b9d4e88,*(undefined8 *)(lVar19 + 0x110),param_1 + 1,lVar19 + 0xe8);
  }
  pcVar15 = (char *)(**(code **)(*plVar3 + 0x28))(plVar3);
  cVar1 = *pcVar15;
  piVar16 = (int *)FUN_140710b80(this);
  if (*piVar16 == (int)plVar3[0xd]) {
    if (cVar1 == '\0') goto LAB_14071123a;
LAB_140711109:
    (**(code **)(*(longlong *)this + 0x1b0))(this,plVar3[0xe],0x20);
  }
  else {
    uVar2 = *(uint *)(*(longlong *)(plVar3[2] + 0x180) + 0x38c);
    local_90 = piVar16;
    uVar11 = (**(code **)(*plVar3 + 0x30))(plVar3);
    uVar14 = (ulonglong)uVar11 * (ulonglong)uVar2;
    if ((cVar1 != '\0') &&
       (((longlong *)plVar3[0xe] == (longlong *)0x0 ||
        (puVar17 = (ulonglong *)(**(code **)(*(longlong *)plVar3[0xe] + 0x28))(),
        *puVar17 <= uVar14 && uVar14 - *puVar17 != 0)))) {
      uVar18 = *(undefined8 *)((longlong)this + 0x18);
      uStack_268 = 0;
      uStack_261 = 0;
      pcVar15 = (char *)FUN_140b65d30(0x70);
      local_270._0_2_ = SUB82(pcVar15,0);
      local_270._2_1_ = (undefined1)((ulonglong)pcVar15 >> 0x10);
      local_270._3_4_ = (undefined4)((ulonglong)pcVar15 >> 0x18);
      local_270._7_1_ = (undefined1)((ulonglong)pcVar15 >> 0x38);
      uStack_260 = 100;
      uStack_259 = 0;
      uStack_258 = 0x6f;
      uStack_251 = 0;
      builtin_strncpy(pcVar15,
                      "Required shader table size is larger than the allocated cache. Increase ShaderTableDesc::maxEntries."
                      ,0x65);
      FUN_140533460(uVar18,&local_270);
LAB_1407111cb:
      uVar14 = CONCAT17(uStack_251,uStack_258);
      if (0xf < uVar14) {
        lVar13 = CONCAT17(local_270._7_1_,
                          CONCAT43(local_270._3_4_,CONCAT12(local_270._2_1_,(undefined2)local_270)))
        ;
        uVar21 = uVar14 + 1;
        lVar19 = lVar13;
        if (0xfff < uVar21) {
          lVar19 = *(longlong *)(lVar13 + -8);
          if (0x1f < (ulonglong)((lVar13 + -8) - lVar19)) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          uVar21 = uVar14 + 0x28;
        }
        thunk_FUN_140b68ba8(lVar19,uVar21);
      }
      return;
    }
    local_88 = (longlong *)0x0;
    local_70 = 0;
    local_68 = 0;
    cVar10 = list_too_long(*(undefined8 *)((longlong)this + 0xa38),uVar14,&local_88,&local_70,
                           &local_68,
                           (ulonglong)*(uint *)((longlong)this + 0x40) << 0x3c |
                           *(ulonglong *)(*(longlong *)((longlong)this + 0x138) + 0x40) &
                           0xfffffffffffffff,
                           *(undefined4 *)(*(longlong *)((longlong)this + 0x18) + 0x38c));
    if (cVar10 == '\0') {
      uVar18 = *(undefined8 *)((longlong)this + 0x18);
      uStack_268 = 0;
      uStack_261 = 0;
      pcVar15 = (char *)FUN_140b65d30(0x40);
      local_270._0_2_ = SUB82(pcVar15,0);
      local_270._2_1_ = (undefined1)((ulonglong)pcVar15 >> 0x10);
      local_270._3_4_ = (undefined4)((ulonglong)pcVar15 >> 0x18);
      local_270._7_1_ = (undefined1)((ulonglong)pcVar15 >> 0x38);
      uStack_260 = 0x32;
      uStack_259 = 0;
      uStack_258 = 0x3f;
      uStack_251 = 0;
      builtin_strncpy(pcVar15,"Failed to suballocate an upload buffer for the SBT",0x33);
      FUN_140533460(uVar18,&local_270);
      goto LAB_1407111cb;
    }
    if (cVar1 != '\0') {
      uVar18 = (**(code **)(*(longlong *)plVar3[0xe] + 0x30))();
      FUN_140710910(plVar3,local_68,uVar18,local_90);
      (**(code **)(*(longlong *)this + 0x90))(this,plVar3[0xe],0,local_88,local_70,uVar14);
      goto LAB_140711109;
    }
    lVar19 = (**(code **)(*local_88 + 0x30))();
    FUN_140710910(plVar3,local_68,lVar19 + local_70,local_90);
  }
  lVar19 = *(longlong *)((longlong)this + 0x138);
  local_270._0_2_ = SUB82(plVar3,0);
  local_270._2_1_ = (undefined1)((ulonglong)plVar3 >> 0x10);
  local_270._3_4_ = (undefined4)((ulonglong)plVar3 >> 0x18);
  local_270._7_1_ = (undefined1)((ulonglong)plVar3 >> 0x38);
  (**(code **)(*plVar3 + 8))();
  plVar20 = *(longlong **)(lVar19 + 0x18);
  if (plVar20 == *(longlong **)(lVar19 + 0x20)) {
    FUN_1406f5260(lVar19 + 0x10,plVar20,&local_270);
    plVar12 = (longlong *)
              CONCAT17(local_270._7_1_,
                       CONCAT43(local_270._3_4_,CONCAT12(local_270._2_1_,(undefined2)local_270)));
  }
  else {
    plVar12 = (longlong *)0x0;
    if (plVar20 == &local_270) {
      plVar12 = plVar3;
      plVar3 = (longlong *)0x0;
    }
    *plVar20 = (longlong)plVar3;
    *(longlong *)(lVar19 + 0x18) = *(longlong *)(lVar19 + 0x18) + 8;
  }
  if (plVar12 != (longlong *)0x0) {
    local_270._0_2_ = 0;
    local_270._2_1_ = 0;
    local_270._3_4_ = 0;
    local_270._7_1_ = 0;
    (**(code **)(*plVar12 + 0x10))();
  }
LAB_14071123a:
  (**(code **)(*(longlong *)this + 0x1d0))(this);
  local_270._0_2_ = 0;
  local_270._2_1_ = 0;
  memset((undefined2 *)((longlong)&local_270 + 3),0,0x1d8);
  local_88 = (longlong *)0x0;
  uStack_80 = 0;
  *(undefined8 *)((longlong)this + 0x158) = 0;
  *(undefined8 *)((longlong)this + 0x160) = 0;
  *(undefined8 *)((longlong)this + 0x168) = 0;
  *(undefined8 *)((longlong)this + 0x170) = 0;
  *(undefined8 *)((longlong)this + 0x178) = 0x3f80000000000000;
  *(undefined8 *)((longlong)this + 400) = 0x3f80000000000000;
  *(undefined8 *)((longlong)this + 0x180) = 0;
  *(undefined8 *)((longlong)this + 0x188) = 0;
  *(undefined8 *)((longlong)this + 0x1a8) = 0x3f80000000000000;
  *(undefined8 *)((longlong)this + 0x198) = 0;
  *(undefined8 *)((longlong)this + 0x1a0) = 0;
  *(undefined8 *)((longlong)this + 0x1c0) = 0x3f80000000000000;
  *(undefined8 *)((longlong)this + 0x1b0) = 0;
  *(undefined8 *)((longlong)this + 0x1b8) = 0;
  *(undefined8 *)((longlong)this + 0x1c8) = 0;
  *(undefined8 *)((longlong)this + 0x1d0) = 0;
  *(undefined8 *)((longlong)this + 0x1d8) = 0x3f80000000000000;
  *(undefined8 *)((longlong)this + 0x1e0) = 0;
  *(undefined8 *)((longlong)this + 0x1e8) = 0;
  *(undefined8 *)((longlong)this + 0x1f0) = 0x3f80000000000000;
  *(undefined8 *)((longlong)this + 0x1f8) = 0;
  *(undefined8 *)((longlong)this + 0x200) = 0;
  *(undefined8 *)((longlong)this + 0x208) = 0x3f80000000000000;
  *(undefined8 *)((longlong)this + 0x210) = 0;
  *(undefined8 *)((longlong)this + 0x218) = 0;
  *(undefined4 *)((longlong)this + 0x220) = 0;
  *(undefined4 *)((longlong)this + 0x224) = 0x3f800000;
  *(undefined8 *)((longlong)this + 0x228) = 0;
  *(undefined8 *)((longlong)this + 0x230) = 0;
  *(undefined8 *)((longlong)this + 0x238) = 0x3f80000000000000;
  *(undefined8 *)((longlong)this + 0x240) = 0;
  *(undefined8 *)((longlong)this + 0x248) = 0;
  *(undefined8 *)((longlong)this + 0x250) = 0x3f80000000000000;
  *(undefined8 *)((longlong)this + 600) = 0;
  *(undefined8 *)((longlong)this + 0x260) = 0;
  *(undefined8 *)((longlong)this + 0x268) = 0x3f80000000000000;
  *(undefined8 *)((longlong)this + 0x270) = 0;
  *(undefined8 *)((longlong)this + 0x278) = 0;
  *(undefined8 *)((longlong)this + 0x280) = 0x3f80000000000000;
  *(undefined8 *)((longlong)this + 0x288) = 0;
  *(undefined8 *)((longlong)this + 0x290) = 0;
  *(undefined8 *)((longlong)this + 0x298) = 0x3f80000000000000;
  *(undefined8 *)((longlong)this + 0x2a0) = 0;
  *(undefined8 *)((longlong)this + 0x2a8) = 0;
  *(undefined8 *)((longlong)this + 0x2b0) = 0x3f80000000000000;
  *(undefined8 *)((longlong)this + 0x2b8) = 0;
  *(undefined8 *)((longlong)this + 0x2c0) = 0;
  *(undefined8 *)((longlong)this + 0x2c8) = 0x3f80000000000000;
  *(undefined8 *)((longlong)this + 0x2d0) = 0;
  *(undefined8 *)((longlong)this + 0x2d8) = 0;
  *(undefined8 *)((longlong)this + 0x2e0) = 0x3f80000000000000;
  memset((void *)((longlong)this + 0x2e8),0,0x125);
  memcpy((void *)((longlong)this + 0x40d),&local_270,0x1db);
  *(undefined8 *)((longlong)this + 0x5e8) = 0;
  *(longlong **)((longlong)this + 0x5f0) = local_88;
  *(undefined8 *)((longlong)this + 0x5f8) = uStack_80;
  *(undefined8 *)((longlong)this + 0x640) = 0;
  *(undefined8 *)((longlong)this + 0x648) = 0;
  *(undefined8 *)((longlong)this + 0x630) = 0;
  *(undefined8 *)((longlong)this + 0x638) = 0;
  *(undefined8 *)((longlong)this + 0x620) = 0;
  *(undefined8 *)((longlong)this + 0x628) = 0;
  *(undefined8 *)((longlong)this + 0x610) = 0;
  *(undefined8 *)((longlong)this + 0x618) = 0;
  *(undefined8 *)((longlong)this + 0x600) = 0;
  *(undefined8 *)((longlong)this + 0x608) = 0;
  *(undefined8 *)((longlong)this + 0x650) = 0;
  local_270._0_2_ = 0;
  local_270._2_1_ = 0;
  local_270._3_4_ = 0;
  local_270._7_1_ = 0;
  uStack_268 = 0;
  uStack_261 = 0;
  uStack_260 = 0;
  uStack_259 = 0;
  uStack_258 = 0;
  uStack_251 = 0;
  uStack_250 = 0;
  local_249 = 0;
  uStack_248 = 0;
  uStack_241 = 0;
  uStack_240 = 0;
  local_239 = 0;
  uStack_238 = 0;
  uStack_231 = 0;
  uStack_230 = 0;
  local_229 = 0;
  uStack_228 = 0;
  uStack_221 = 0;
  uStack_220 = 0;
  *(undefined8 *)((longlong)this + 0x668) = 0;
  *(undefined8 *)((longlong)this + 0x670) = 0;
  *(undefined8 *)((longlong)this + 0x658) = 0;
  *(undefined8 *)((longlong)this + 0x660) = 0;
  *(undefined8 *)((longlong)this + 0x678) = 0x3f80000000000000;
  *(undefined8 *)((longlong)this + 0x680) = 0;
  *(undefined8 *)((longlong)this + 0x688) = 0;
  *(undefined8 *)((longlong)this + 0x690) = 0x3f80000000000000;
  *(undefined8 *)((longlong)this + 0x698) = 0;
  *(undefined8 *)((longlong)this + 0x6a0) = 0;
  *(undefined8 *)((longlong)this + 0x6a8) = 0x3f80000000000000;
  *(undefined8 *)((longlong)this + 0x6b0) = 0;
  *(undefined8 *)((longlong)this + 0x6b8) = 0;
  *(undefined8 *)((longlong)this + 0x6c0) = 0x3f80000000000000;
  *(undefined8 *)((longlong)this + 0x6c8) = 0;
  *(undefined8 *)((longlong)this + 0x6d0) = 0;
  *(undefined8 *)((longlong)this + 0x6d8) = 0x3f80000000000000;
  *(undefined8 *)((longlong)this + 0x6e0) = 0;
  *(undefined8 *)((longlong)this + 0x6e8) = 0;
  *(undefined8 *)((longlong)this + 0x6f0) = 0x3f80000000000000;
  *(undefined8 *)((longlong)this + 0x6f8) = 0;
  *(undefined8 *)((longlong)this + 0x700) = 0;
  *(undefined8 *)((longlong)this + 0x708) = 0x3f80000000000000;
  *(undefined8 *)((longlong)this + 0x710) = 0;
  *(undefined8 *)((longlong)this + 0x718) = 0;
  *(undefined4 *)((longlong)this + 0x720) = 0;
  *(undefined4 *)((longlong)this + 0x724) = 0x3f800000;
  *(undefined8 *)((longlong)this + 0x728) = 0;
  *(undefined8 *)((longlong)this + 0x730) = 0;
  *(undefined8 *)((longlong)this + 0x738) = 0x3f80000000000000;
  *(undefined8 *)((longlong)this + 0x740) = 0;
  *(undefined8 *)((longlong)this + 0x748) = 0;
  *(undefined8 *)((longlong)this + 0x750) = 0x3f80000000000000;
  *(undefined8 *)((longlong)this + 0x758) = 0;
  *(undefined8 *)((longlong)this + 0x760) = 0;
  *(undefined8 *)((longlong)this + 0x768) = 0x3f80000000000000;
  *(undefined8 *)((longlong)this + 0x770) = 0;
  *(undefined8 *)((longlong)this + 0x778) = 0;
  *(undefined8 *)((longlong)this + 0x780) = 0x3f80000000000000;
  *(undefined8 *)((longlong)this + 0x788) = 0;
  *(undefined8 *)((longlong)this + 0x790) = 0;
  *(undefined8 *)((longlong)this + 0x798) = 0x3f80000000000000;
  *(undefined8 *)((longlong)this + 0x7a0) = 0;
  *(undefined8 *)((longlong)this + 0x7a8) = 0;
  *(undefined8 *)((longlong)this + 0x7b0) = 0x3f80000000000000;
  *(undefined8 *)((longlong)this + 0x7b8) = 0;
  *(undefined8 *)((longlong)this + 0x7c0) = 0;
  *(undefined8 *)((longlong)this + 0x7c8) = 0x3f80000000000000;
  *(undefined8 *)((longlong)this + 2000) = 0;
  *(undefined8 *)((longlong)this + 0x7d8) = 0;
  *(undefined8 *)((longlong)this + 0x7e0) = 0x3f80000000000000;
  memset((void *)((longlong)this + 0x7e8),0,0x121);
  *(ulonglong *)((longlong)this + 0x909) =
       CONCAT17(local_270._7_1_,
                CONCAT43(local_270._3_4_,CONCAT12(local_270._2_1_,(undefined2)local_270)));
  *(ulonglong *)((longlong)this + 0x911) = CONCAT17(uStack_261,uStack_268);
  *(ulonglong *)((longlong)this + 0x919) = CONCAT17(uStack_259,uStack_260);
  *(ulonglong *)((longlong)this + 0x921) = CONCAT17(uStack_251,uStack_258);
  *(ulonglong *)((longlong)this + 0x929) = CONCAT17(local_249,uStack_250);
  *(ulonglong *)((longlong)this + 0x931) = CONCAT17(uStack_241,uStack_248);
  *(ulonglong *)((longlong)this + 0x939) = CONCAT17(local_239,uStack_240);
  *(ulonglong *)((longlong)this + 0x941) = CONCAT17(uStack_231,uStack_238);
  *(ulonglong *)((longlong)this + 0x949) = CONCAT17(local_229,uStack_230);
  *(ulonglong *)((longlong)this + 0x951) = CONCAT17(uStack_221,uStack_228);
  *(ulonglong *)((longlong)this + 0x958) = CONCAT71(uStack_220,uStack_221);
  lVar19 = param_1[9];
  *(longlong *)((longlong)this + 0x9a0) = param_1[8];
  *(longlong *)((longlong)this + 0x9a8) = lVar19;
  lVar19 = *param_1;
  lVar13 = param_1[1];
  lVar5 = param_1[2];
  lVar6 = param_1[3];
  lVar7 = param_1[4];
  lVar8 = param_1[5];
  lVar9 = param_1[7];
  *(longlong *)((longlong)this + 0x990) = param_1[6];
  *(longlong *)((longlong)this + 0x998) = lVar9;
  *(longlong *)((longlong)this + 0x980) = lVar7;
  *(longlong *)((longlong)this + 0x988) = lVar8;
  *(longlong *)((longlong)this + 0x970) = lVar5;
  *(longlong *)((longlong)this + 0x978) = lVar6;
  *(longlong *)((longlong)this + 0x960) = lVar19;
  *(longlong *)((longlong)this + 0x968) = lVar13;
  *(undefined1 *)((longlong)this + 0x9b0) = 0;
  return;
}

