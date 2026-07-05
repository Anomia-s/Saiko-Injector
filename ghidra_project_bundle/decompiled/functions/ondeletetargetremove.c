/**
 * Function: ondeletetargetremove
 * Address:  1403cfa70
 * Signature: undefined ondeletetargetremove(void)
 * Body size: 2790 bytes
 */


/* WARNING: Type propagation algorithm not settling */

void ondeletetargetremove(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  longlong local_88;
  undefined1 local_80 [24];
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined8 uStack_54;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_b8;
  FUN_1403b8d70(param_3);
  FUN_1403b7a10(param_3,"\n",1);
  FUN_1403b8a80(param_3,"{",&DAT_1413944a3);
  FUN_1403b9160(param_3,"\"name\":",7);
  uVar7 = FUN_1403b36e0(param_1,*(undefined8 *)(param_2 + 0x30));
  FUN_1405fc3c0(param_3,uVar7);
  (*DAT_1415033b0)(uVar7);
  FUN_1403b9160(param_3,"\"tables\":",9);
  FUN_1403b8a80(param_3,&DAT_141360dfd,&DAT_1413944a3);
  FUN_1403d11b0(param_2,local_80);
  lVar8 = FUN_1403d1210(local_80);
  iVar11 = 0;
  if (lVar8 == 0) {
    iVar10 = 0;
    lVar8 = 0;
  }
  else {
    iVar9 = 0;
    iVar10 = 0;
    do {
      FUN_1403b8d70(param_3);
      FUN_1403b7b70(param_3,**(undefined8 **)(lVar8 + 8));
      iVar5 = FUN_1403a04c0(*(undefined8 *)(lVar8 + 8));
      iVar9 = iVar9 + iVar5;
      iVar5 = FUN_1403a2a80(*(undefined8 *)(lVar8 + 8));
      iVar10 = iVar10 + iVar5;
      lVar8 = FUN_1403d1210(local_80);
    } while (lVar8 != 0);
    lVar8 = (longlong)iVar9;
  }
  FUN_1403b8c10(param_3,"]");
  FUN_1403b9160(param_3,"\"entity_count\":",0xf);
  FUN_1403b7b70(param_3,lVar8);
  FUN_1403b9160(param_3,"\"entity_size\":",0xe);
  FUN_1403b7b70(param_3,(longlong)iVar10);
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1403b9160(param_3,"\"type\":",7);
    FUN_1403b8a80(param_3,"{",&DAT_1413944a3);
    FUN_1403b9160(param_3,"\"size\":",7);
    FUN_1403b7b70(param_3,(longlong)**(int **)(param_2 + 0x40));
    FUN_1403b9160(param_3,"\"alignment\":",0xc);
    FUN_1403b7b70(param_3,(longlong)*(int *)(*(longlong *)(param_2 + 0x40) + 4));
    lVar8 = *(longlong *)(param_2 + 0x40);
    lVar1 = *(longlong *)(lVar8 + 8);
    lVar2 = *(longlong *)(lVar8 + 0x10);
    lVar3 = *(longlong *)(lVar8 + 0x18);
    local_98 = *(longlong *)(lVar8 + 0x20);
    local_88 = *(longlong *)(lVar8 + 0x28);
    local_90 = *(longlong *)(lVar8 + 0x30);
    uVar6 = *(uint *)(lVar8 + 0x58);
    FUN_1403b9160(param_3,&DAT_14139efde,1);
    FUN_1403b8780(param_3,"ctor");
    FUN_1403b7a10(param_3,&DAT_14136c70f,2);
    if ((uVar6 & 0x400) == 0) {
      FUN_1403b8630(param_3,lVar1 != 0);
    }
    else {
      FUN_1403b7a10(param_3,"null",4);
    }
    FUN_1403b9160(param_3,&DAT_14139efde,1);
    FUN_1403b8780(param_3,&DAT_14133a763);
    FUN_1403b7a10(param_3,&DAT_14136c70f,2);
    if ((uVar6 & 0x1000) == 0) {
      FUN_1403b8630(param_3,lVar2 != 0);
    }
    else {
      FUN_1403b7a10(param_3,"null",4);
    }
    FUN_1403b9160(param_3,&DAT_14139efde,1);
    FUN_1403b8780(param_3,"copy");
    FUN_1403b7a10(param_3,&DAT_14136c70f,2);
    if ((uVar6 & 0x2000) == 0) {
      FUN_1403b8630(param_3,lVar3 != 0);
    }
    else {
      FUN_1403b7a10(param_3,"null",4);
    }
    FUN_1403b9160(param_3,&DAT_14139efde,1);
    FUN_1403b8780(param_3,"move");
    FUN_1403b7a10(param_3,&DAT_14136c70f,2);
    if ((uVar6 & 0x4000) == 0) {
      FUN_1403b8630(param_3,local_98 != 0);
    }
    else {
      FUN_1403b7a10(param_3,"null",4);
    }
    FUN_1403b9160(param_3,&DAT_14139efde,1);
    FUN_1403b8780(param_3,"move_ctor");
    FUN_1403b7a10(param_3,&DAT_14136c70f,2);
    if ((uVar6 & 0x10000) == 0) {
      FUN_1403b8630(param_3,local_90 != 0);
    }
    else {
      FUN_1403b7a10(param_3,"null",4);
    }
    FUN_1403b9160(param_3,&DAT_14139efde,1);
    FUN_1403b8780(param_3,"copy_ctor");
    FUN_1403b7a10(param_3,&DAT_14136c70f,2);
    if ((short)uVar6 < 0) {
      FUN_1403b7a10(param_3,"null",4);
    }
    else {
      FUN_1403b8630(param_3,local_88 != 0);
    }
    FUN_1403b9160(param_3,&DAT_14136c708,9);
    FUN_1403b8630(param_3,*(longlong *)(*(longlong *)(param_2 + 0x40) + 0x60) != 0);
    FUN_1403b9160(param_3,"\"on_set\":",9);
    FUN_1403b8630(param_3,*(longlong *)(*(longlong *)(param_2 + 0x40) + 0x68) != 0);
    FUN_1403b9160(param_3,"\"on_remove\":",0xc);
    FUN_1403b8630(param_3,*(longlong *)(*(longlong *)(param_2 + 0x40) + 0x70) != 0);
    FUN_1403b9160(param_3,"\"on_replace\":",0xd);
    FUN_1403b8630(param_3,*(longlong *)(*(longlong *)(param_2 + 0x40) + 0x78) != 0);
    FUN_1403b8c10(param_3,"}");
    iVar11 = iVar10 * **(int **)(param_2 + 0x40);
  }
  if (*(longlong *)(param_2 + 0x48) != 0) {
    uVar6 = FUN_1403b5840();
    FUN_1403b9160(param_3,"\"sparse\":",9);
    FUN_1403b8a80(param_3,"{",&DAT_1413944a3);
    FUN_1403b9160(param_3,"\"count\":",8);
    FUN_1403b7b70(param_3,(longlong)(int)uVar6);
    FUN_1403b9160(param_3,"\"entities\":",0xb);
    FUN_1403b8a80(param_3,&DAT_141360dfd,&DAT_1413944a3);
    if (0 < (int)uVar6) {
      uVar12 = 0;
      do {
        FUN_1403b8d70(param_3);
        lVar8 = FUN_1403b5860(*(undefined8 *)(param_2 + 0x48));
        FUN_1403b7b70(param_3,*(undefined8 *)(lVar8 + uVar12 * 8));
        uVar12 = uVar12 + 1;
      } while (uVar6 != uVar12);
    }
    FUN_1403b8c10(param_3,"]");
    FUN_1403b8c10(param_3,"}");
    if (*(int **)(param_2 + 0x40) != (int *)0x0) {
      iVar11 = uVar6 * **(int **)(param_2 + 0x40) + iVar11;
    }
  }
  if (DAT_1416fde38 != 0) {
    uStack_58 = 0;
    uStack_54 = 0;
    local_68 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    FUN_1405fcb90(param_2,&local_68);
    FUN_1403b9160(param_3,"\"memory\":",9);
    FUN_1403b8a80(param_3,"{",&DAT_1413944a3);
    FUN_1403b9160(param_3,"\"component_index\":",0x12);
    FUN_1405fb600(param_1,DAT_1416fde38,&local_68,param_3);
    cVar4 = FUN_1403b31e0(*(undefined8 *)(param_2 + 0x30));
    if (cVar4 != '\0') {
      iVar11 = 0;
    }
    FUN_1403b9160(param_3,"\"storage\":",10);
    FUN_1403b79b0(param_3,"%d",iVar11);
    FUN_1403b8c10(param_3,"}");
  }
  uVar6 = *(uint *)(param_2 + 0x38);
  FUN_1403b9160(param_3,"\"traits\":",9);
  FUN_1403b8a80(param_3,&DAT_141360dfd,&DAT_1413944a3);
  if ((uVar6 & 1) != 0) {
    FUN_1403b9160(param_3,"\"(OnDelete,Remove)\"",0x13);
  }
  if ((uVar6 & 2) != 0) {
    FUN_1403b9160(param_3,"\"(OnDelete,Delete)\"",0x13);
  }
  if ((uVar6 & 4) != 0) {
    FUN_1403b9160(param_3,"\"(OnDelete,Panic)\"",0x12);
  }
  if ((uVar6 & 8) != 0) {
    FUN_1403b9160(param_3,"\"(OnDeleteTarget,Remove)\"",0x19);
  }
  if ((uVar6 & 0x10) != 0) {
    FUN_1403b9160(param_3,"\"(OnDeleteTarget,Delete)\"",0x19);
  }
  if ((uVar6 & 0x20) != 0) {
    FUN_1403b9160(param_3,"\"(OnDeleteTarget,Panic)\"",0x18);
  }
  if ((uVar6 & 0x40) != 0) {
    FUN_1403b9160(param_3,"\"(OnInstantiate,Override)\"",0x1a);
  }
  if ((char)uVar6 < '\0') {
    FUN_1403b9160(param_3,"\"(OnInstantiate,Inherit)\"",0x19);
  }
  if ((uVar6 & 0x100) != 0) {
    FUN_1403b9160(param_3,"\"(OnInstantiate,DontInherit)\"",0x1d);
  }
  if ((uVar6 & 0x200) != 0) {
    FUN_1403b9160(param_3,"\"Exclusive\"",0xb);
  }
  if ((uVar6 & 0x400) != 0) {
    FUN_1403b9160(param_3,"\"Traversable\"",0xd);
  }
  if ((uVar6 & 0x11c) != 0) {
    FUN_1403b9160(param_3,"\"PairIsTag\"",0xb);
  }
  if ((uVar6 & 0x1000) != 0) {
    FUN_1403b9160(param_3,"\"With\"",6);
  }
  if ((uVar6 & 0x2000) != 0) {
    FUN_1403b9160(param_3,"\"CanToggle\"",0xb);
  }
  if ((uVar6 & 0x4000) != 0) {
    FUN_1403b9160(param_3,"\"IsTransitive\"",0xe);
  }
  if ((short)uVar6 < 0) {
    FUN_1403b9160(param_3,"\"Inheritable\"",0xd);
  }
  if ((uVar6 & 0x200000) != 0) {
    FUN_1403b9160(param_3,"\"Sparse\"",8);
  }
  if ((uVar6 & 0x400000) != 0) {
    FUN_1403b9160(param_3,"\"DontFragment\"",0xe);
  }
  if ((uVar6 & 0x1000000) != 0) {
    FUN_1403b9160(param_3,"\"OrderedChildren\"",0x11);
  }
  if ((uVar6 & 0x2000000) != 0) {
    FUN_1403b9160(param_3,"\"Singleton\"",0xb);
  }
  FUN_1403b8c10(param_3,"]");
  FUN_1403b8c10(param_3,"}");
  if (DAT_1414ef3c0 != (local_48 ^ (ulonglong)auStack_b8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_48 ^ (ulonglong)auStack_b8);
  }
  return;
}

