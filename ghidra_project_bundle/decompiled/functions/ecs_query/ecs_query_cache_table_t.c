/**
 * Function: ecs_query_cache_table_t
 * Address:  1403a3f20
 * Signature: undefined ecs_query_cache_table_t(void)
 * Body size: 490 bytes
 */


/* WARNING: Type propagation algorithm not settling */

void ecs_query_cache_table_t(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  Decoration<__int64> this;
  longlong *plVar8;
  int iVar9;
  undefined1 auStack_98 [40];
  undefined1 local_70 [24];
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_1414ef3c0 ^ (ulonglong)auStack_98;
  lVar7 = *(longlong *)(*param_1 + 0x80) + 0xcc0;
  uVar4 = FUN_1403955c0();
  this.vftablePtr = (Decoration<__int64>_vftable *)param_1[0xe];
  do {
    iVar5 = _anon_C953E3F2::Decoration<__int64>::vfunction3((Decoration<__int64> *)this.vftablePtr);
    if (0 < iVar5) {
      iVar9 = 0;
      do {
        uVar6 = FUN_1403b30a0(this.vftablePtr,uVar4,iVar9);
        FUN_1403d1960(param_1,uVar6);
        iVar9 = iVar9 + 1;
      } while (iVar5 != iVar9);
    }
    FUN_1403b2770(lVar7,this.vftablePtr,uVar4);
    this.vftablePtr = ((Decoration<__int64> *)&(this.vftablePtr)->vfunction6)->vftablePtr;
  } while (this.vftablePtr != (Decoration<__int64>_vftable *)0x0);
  FUN_1403b6ad0(local_70,param_1 + 2);
  cVar3 = FUN_1403b6b00(local_70);
  while (cVar3 != '\0') {
    lVar1 = *(longlong *)(local_58 + 8);
    if (lVar1 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_140391250(lVar7,0x10);
    }
    FUN_140391740(uVar6,lVar1,"ecs_query_cache_table_t");
    cVar3 = FUN_1403b6b00();
  }
  FUN_1403b69c0(param_1 + 2);
  if ((longlong *)param_1[0xe] != (longlong *)0x0) {
    plVar8 = (longlong *)param_1[0xe];
    do {
      plVar2 = (longlong *)plVar8[5];
      if (((code *)param_1[0x18] != (code *)0x0) && (*(int *)((longlong)plVar8 + 0x1c) != 0)) {
        (*(code *)param_1[0x18])(*(undefined8 *)(*param_1 + 0x88),plVar8[2],plVar8[4],param_1[0x19])
        ;
      }
      uVar4 = FUN_1403955c0(param_1);
      FUN_1403b2770(*(longlong *)(*param_1 + 0x80) + 0xcc0,plVar8,uVar4);
      plVar8[3] = 0;
      plVar8[4] = 0;
      if (plVar8 == param_1 + 8) {
        if (0x3ffffff < *(uint *)((longlong)param_1 + 0x34)) {
          FUN_1403b67c0(param_1 + 5,0);
        }
      }
      else {
        FUN_1403b68e0(param_1 + 5,plVar8[2]);
      }
      plVar8 = plVar2;
    } while (plVar2 != (longlong *)0x0);
  }
  param_1[0xe] = (longlong)(param_1 + 8);
  param_1[0xd] = 0;
  if (DAT_1414ef3c0 == (local_50 ^ (ulonglong)auStack_98)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_50 ^ (ulonglong)auStack_98);
}

