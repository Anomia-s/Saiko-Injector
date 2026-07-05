/**
 * Function: expressions
 * Address:  1405f6c60
 * Signature: undefined expressions(void)
 * Body size: 3994 bytes
 */


undefined8 expressions(undefined8 *param_1,uint *param_2)

{
  char cVar1;
  ulonglong uVar2;
  size_t sVar3;
  undefined8 uVar4;
  longlong lVar5;
  char *pcVar6;
  int iVar7;
  undefined *puVar8;
  
  uVar2 = (ulonglong)*param_2;
  switch(uVar2) {
  case 0:
    iVar7 = FUN_1405f7cf0(param_1,param_2);
    if (iVar7 == 0) {
      return 0;
    }
    return 0xffffffff;
  case 1:
  case 6:
    if (*(char *)((longlong)param_1 + 0x455) == '\x01') {
      FUN_1403b8780(param_1[0x89],&DAT_141342762);
      uVar2 = (ulonglong)*param_2;
    }
    if ((uint)uVar2 < 0x14) {
      puVar8 = (&PTR_s_scope_14134d8ea_0x12_1411f6950)[uVar2];
    }
    else {
      puVar8 = &DAT_14136baf3;
    }
    FUN_1405f7f20(param_1,&DAT_1413a176c,puVar8);
    if (*(char *)((longlong)param_1 + 0x455) == '\x01') {
      FUN_1403b8780(param_1[0x89],&DAT_141342730);
    }
    auto_override(param_1,param_2 + 4);
    break;
  case 2:
  case 7:
    if (*(char *)((longlong)param_1 + 0x455) == '\x01') {
      FUN_1403b8780(param_1[0x89],&DAT_141342762);
      uVar2 = (ulonglong)*param_2;
    }
    if ((uint)uVar2 < 0x14) {
      puVar8 = (&PTR_s_scope_14134d8ea_0x12_1411f6950)[uVar2];
    }
    else {
      puVar8 = &DAT_14136baf3;
    }
    FUN_1405f7f20(param_1,&DAT_1413a176c,puVar8);
    if (*(char *)((longlong)param_1 + 0x455) == '\x01') {
      FUN_1403b8780(param_1[0x89],&DAT_141342730);
    }
    auto_override(param_1,param_2 + 4);
    if (*(longlong *)(param_2 + 0x14) != 0) {
      if (*(char *)((longlong)param_1 + 0x454) == '\x01') {
        FUN_1403b79b0(param_1[0x89],&DAT_141338b7a,*(int *)(param_1 + 0x8a) * 2,&DAT_1413a2ad6);
        *(undefined1 *)((longlong)param_1 + 0x454) = 0;
      }
      FUN_1403b8780(param_1[0x89],&DAT_1413a1c17);
      lVar5 = *(longlong *)(param_2 + 0x14);
      goto joined_r0x0001405f6dc2;
    }
    break;
  case 3:
    if (*(char *)((longlong)param_1 + 0x455) == '\x01') {
      FUN_1403b8780(param_1[0x89],&DAT_141342762);
      if ((ulonglong)*param_2 < 0x14) {
        pcVar6 = (&PTR_s_scope_14134d8ea_0x12_1411f6950)[*param_2];
      }
      else {
        pcVar6 = "???";
      }
    }
    else {
      pcVar6 = "default_component";
    }
    FUN_1405f7f20(param_1,&DAT_1413a176c,pcVar6);
    if (*(char *)((longlong)param_1 + 0x455) == '\x01') {
      FUN_1403b8780(param_1[0x89],&DAT_141342730);
    }
    lVar5 = *(longlong *)(param_2 + 4);
    if (lVar5 != 0) goto LAB_1405f7558;
    break;
  case 4:
  case 5:
    if (*(char *)((longlong)param_1 + 0x455) == '\x01') {
      FUN_1403b8780(param_1[0x89],&DAT_141342762);
      uVar2 = (ulonglong)*param_2;
    }
    if ((uint)uVar2 < 0x14) {
      puVar8 = (&PTR_s_scope_14134d8ea_0x12_1411f6950)[uVar2];
    }
    else {
      puVar8 = &DAT_14136baf3;
    }
    FUN_1405f7f20(param_1,&DAT_1413a176c,puVar8);
    if (*(char *)((longlong)param_1 + 0x455) == '\x01') {
      FUN_1403b8780(param_1[0x89],&DAT_141342730);
    }
    FUN_1405f7f20(param_1,&DAT_1413a0662,*(undefined8 *)(param_2 + 4));
    break;
  case 8:
    if (*(char *)((longlong)param_1 + 0x455) == '\x01') {
      FUN_1403b8780(param_1[0x89],&DAT_141342762);
      if ((ulonglong)*param_2 < 0x14) {
        pcVar6 = (&PTR_s_scope_14134d8ea_0x12_1411f6950)[*param_2];
      }
      else {
        pcVar6 = "???";
      }
    }
    else {
      pcVar6 = "with";
    }
    FUN_1405f7f20(param_1,&DAT_1413a176c,pcVar6);
    if (*(char *)((longlong)param_1 + 0x455) == '\x01') {
      FUN_1403b8780(param_1[0x89],&DAT_141342730);
    }
    if (*(char *)((longlong)param_1 + 0x454) == '\x01') {
      FUN_1403b79b0(param_1[0x89],&DAT_141338b7a,*(int *)(param_1 + 0x8a) * 2,&DAT_1413a2ad6);
      *(undefined1 *)((longlong)param_1 + 0x454) = 0;
    }
    FUN_1403b8780(param_1[0x89],&DAT_1413a21e5);
    *(undefined1 *)((longlong)param_1 + 0x454) = 1;
    iVar7 = *(int *)(param_1 + 0x8a) + 1;
    *(int *)(param_1 + 0x8a) = iVar7;
    if (*(char *)((longlong)param_1 + 0x455) == '\x01') {
      FUN_1403b8780(param_1[0x89],&DAT_14134274c);
      if (*(char *)((longlong)param_1 + 0x454) == '\x01') {
        iVar7 = *(int *)(param_1 + 0x8a);
        goto LAB_1405f76fd;
      }
    }
    else {
LAB_1405f76fd:
      FUN_1403b79b0(param_1[0x89],&DAT_141338b7a,iVar7 * 2,&DAT_1413a2ad6);
      *(undefined1 *)((longlong)param_1 + 0x454) = 0;
    }
    FUN_1403b8780(param_1[0x89],"expressions: ");
    if (*(char *)((longlong)param_1 + 0x455) == '\x01') {
      FUN_1403b8780(param_1[0x89],&DAT_141342730);
    }
    FUN_1405f7cf0(param_1,*(undefined8 *)(param_2 + 4));
    if (*(char *)((longlong)param_1 + 0x455) == '\x01') {
      FUN_1403b8780(param_1[0x89],&DAT_14134274c);
    }
    FUN_1405f7f20(param_1,"scope: ");
    cVar1 = *(char *)((longlong)param_1 + 0x455);
    goto joined_r0x0001405f74a6;
  case 9:
    if (*(char *)((longlong)param_1 + 0x455) != '\x01') {
      pcVar6 = "using";
      goto LAB_1405f71ef;
    }
    goto LAB_1405f7060;
  case 10:
    if (*(char *)((longlong)param_1 + 0x455) != '\x01') {
      pcVar6 = "module";
      goto LAB_1405f71ef;
    }
LAB_1405f7060:
    FUN_1403b8780(param_1[0x89],&DAT_141342762);
    if ((ulonglong)*param_2 < 0x14) {
      pcVar6 = (&PTR_s_scope_14134d8ea_0x12_1411f6950)[*param_2];
    }
    else {
      pcVar6 = "???";
    }
LAB_1405f71ef:
    FUN_1405f7f20(param_1,&DAT_1413a176c,pcVar6);
    if (*(char *)((longlong)param_1 + 0x455) == '\x01') {
      FUN_1403b8780(param_1[0x89],&DAT_141342730);
    }
    FUN_1405f7f20(param_1,"%s\n",*(undefined8 *)(param_2 + 4));
    return 0;
  case 0xb:
    if (*(char *)((longlong)param_1 + 0x455) == '\x01') {
      FUN_1403b8780(param_1[0x89],&DAT_141342762);
      if ((ulonglong)*param_2 < 0x14) {
        pcVar6 = (&PTR_s_scope_14134d8ea_0x12_1411f6950)[*param_2];
      }
      else {
        pcVar6 = "???";
      }
    }
    else {
      pcVar6 = "annot";
    }
    FUN_1405f7f20(param_1,&DAT_1413a176c,pcVar6);
    if ((*(char *)((longlong)param_1 + 0x455) == '\x01') &&
       (FUN_1403b8780(param_1[0x89],&DAT_141342730), *(char *)((longlong)param_1 + 0x455) == '\x01')
       ) {
      FUN_1403b8780(param_1[0x89],&DAT_141342778);
    }
    FUN_1405f7f20(param_1,"%s = \"%s\"",*(undefined8 *)(param_2 + 4),*(undefined8 *)(param_2 + 6));
    if (*(char *)((longlong)param_1 + 0x455) == '\x01') {
      FUN_1403b8780(param_1[0x89],&DAT_141342730);
    }
    break;
  case 0xc:
    if (*(char *)((longlong)param_1 + 0x455) == '\x01') {
      FUN_1403b8780(param_1[0x89],&DAT_141342762);
      if ((ulonglong)*param_2 < 0x14) {
        pcVar6 = (&PTR_s_scope_14134d8ea_0x12_1411f6950)[*param_2];
      }
      else {
        pcVar6 = "???";
      }
    }
    else {
      pcVar6 = "template";
    }
    FUN_1405f7f20(param_1,&DAT_1413a176c,pcVar6);
    if (*(char *)((longlong)param_1 + 0x455) == '\x01') {
      FUN_1403b8780(param_1[0x89],&DAT_141342730);
    }
    FUN_1405f7f20(param_1,&DAT_1413a0662,*(undefined8 *)(param_2 + 4));
    uVar4 = *(undefined8 *)(param_2 + 6);
    goto LAB_1405f7bed;
  case 0xd:
  case 0xe:
  case 0xf:
    if (*(char *)((longlong)param_1 + 0x455) == '\x01') {
      FUN_1403b8780(param_1[0x89],&DAT_141342762);
      uVar2 = (ulonglong)*param_2;
    }
    if ((uint)uVar2 < 0x14) {
      puVar8 = (&PTR_s_scope_14134d8ea_0x12_1411f6950)[uVar2];
    }
    else {
      puVar8 = &DAT_14136baf3;
    }
    FUN_1405f7f20(param_1,&DAT_1413a176c,puVar8);
    if (*(char *)((longlong)param_1 + 0x455) == '\x01') {
      FUN_1403b8780(param_1[0x89],&DAT_141342730);
    }
    if (*(longlong *)(param_2 + 6) == 0) {
      FUN_1405f7f20(param_1,"%s = ",*(undefined8 *)(param_2 + 4));
      lVar5 = *(longlong *)(param_2 + 8);
    }
    else {
      FUN_1405f7f20(param_1,"%s : %s = ",*(undefined8 *)(param_2 + 4));
      lVar5 = *(longlong *)(param_2 + 8);
    }
joined_r0x0001405f6dc2:
    if (lVar5 == 0) {
      if (*(char *)((longlong)param_1 + 0x454) == '\x01') {
        FUN_1403b79b0(param_1[0x89],&DAT_141338b7a,*(int *)(param_1 + 0x8a) * 2,&DAT_1413a2ad6);
        *(undefined1 *)((longlong)param_1 + 0x454) = 0;
      }
      FUN_1403b8780(param_1[0x89],"{}");
    }
    else {
LAB_1405f7558:
      FUN_14076b1d0(*param_1,lVar5,param_1[0x89],*(undefined1 *)((longlong)param_1 + 0x455));
    }
    break;
  case 0x10:
    if (*(char *)((longlong)param_1 + 0x455) == '\x01') {
      FUN_1403b8780(param_1[0x89],&DAT_141342762);
      if ((ulonglong)*param_2 < 0x14) {
        pcVar6 = (&PTR_s_scope_14134d8ea_0x12_1411f6950)[*param_2];
      }
      else {
        pcVar6 = "???";
      }
    }
    else {
      pcVar6 = "entity";
    }
    FUN_1405f7f20(param_1,&DAT_1413a176c,pcVar6);
    if (*(char *)((longlong)param_1 + 0x455) == '\x01') {
      FUN_1403b8780(param_1[0x89],&DAT_141342730);
    }
    if (*(longlong *)(param_2 + 4) != 0) {
      FUN_1405f7f20(param_1,&DAT_1413a0662);
    }
    if (*(longlong *)(param_2 + 6) == 0) {
      if (*(char *)((longlong)param_1 + 0x454) == '\x01') {
        FUN_1403b79b0(param_1[0x89],&DAT_141338b7a,*(int *)(param_1 + 0x8a) * 2,&DAT_1413a2ad6);
        *(undefined1 *)((longlong)param_1 + 0x454) = 0;
      }
      FUN_1403b8780(param_1[0x89],"<anon> ");
      cVar1 = FUN_1405eb960(*(undefined8 *)(param_2 + 10));
    }
    else {
      FUN_1405f7f20(param_1,&DAT_1413a0662);
      cVar1 = FUN_1405eb960(*(undefined8 *)(param_2 + 10));
    }
    if (cVar1 == '\0') {
      uVar4 = *(undefined8 *)(param_2 + 10);
      goto LAB_1405f7bed;
    }
    break;
  case 0x11:
    if (*(char *)((longlong)param_1 + 0x455) == '\x01') {
      FUN_1403b8780(param_1[0x89],&DAT_141342762);
      if ((ulonglong)*param_2 < 0x14) {
        pcVar6 = (&PTR_s_scope_14134d8ea_0x12_1411f6950)[*param_2];
      }
      else {
        pcVar6 = "???";
      }
    }
    else {
      pcVar6 = "pair_scope";
    }
    FUN_1405f7f20(param_1,&DAT_1413a176c,pcVar6);
    if (*(char *)((longlong)param_1 + 0x455) == '\x01') {
      FUN_1403b8780(param_1[0x89],&DAT_141342730);
    }
    auto_override(param_1,param_2 + 4);
    if (*(char *)((longlong)param_1 + 0x454) == '\x01') {
      FUN_1403b79b0(param_1[0x89],&DAT_141338b7a,*(int *)(param_1 + 0x8a) * 2,&DAT_1413a2ad6);
      *(undefined1 *)((longlong)param_1 + 0x454) = 0;
    }
    FUN_1403b8780(param_1[0x89],&DAT_1413a21db);
    uVar4 = *(undefined8 *)(param_2 + 0x14);
LAB_1405f7bed:
    FUN_1405f7cf0(param_1,uVar4);
    return 0;
  case 0x12:
    if (*(char *)((longlong)param_1 + 0x455) == '\x01') {
      FUN_1403b8780(param_1[0x89],&DAT_141342762);
      if ((ulonglong)*param_2 < 0x14) {
        puVar8 = (&PTR_s_scope_14134d8ea_0x12_1411f6950)[*param_2];
      }
      else {
        puVar8 = &DAT_14136baf3;
      }
    }
    else {
      puVar8 = &DAT_14134921c;
    }
    FUN_1405f7f20(param_1,&DAT_1413a176c,puVar8);
    if (*(char *)((longlong)param_1 + 0x455) == '\x01') {
      FUN_1403b8780(param_1[0x89],&DAT_141342730);
    }
    if (*(longlong *)(param_2 + 8) == 0) {
      if (*(char *)((longlong)param_1 + 0x454) == '\x01') {
        FUN_1403b79b0(param_1[0x89],&DAT_141338b7a,*(int *)(param_1 + 0x8a) * 2,&DAT_1413a2ad6);
        *(undefined1 *)((longlong)param_1 + 0x454) = 0;
      }
      FUN_1403b8780(param_1[0x89],"{}");
      cVar1 = *(char *)((longlong)param_1 + 0x454);
    }
    else {
      FUN_14076b1d0(*param_1,*(longlong *)(param_2 + 8),param_1[0x89],
                    *(undefined1 *)((longlong)param_1 + 0x455));
      cVar1 = *(char *)((longlong)param_1 + 0x454);
    }
    if (cVar1 == '\x01') {
      FUN_1403b79b0(param_1[0x89],&DAT_141338b7a,*(int *)(param_1 + 0x8a) * 2,&DAT_1413a2ad6);
      *(undefined1 *)((longlong)param_1 + 0x454) = 0;
    }
    FUN_1403b8780(param_1[0x89],&DAT_1413a21e4);
    *(undefined1 *)((longlong)param_1 + 0x454) = 1;
    iVar7 = *(int *)(param_1 + 0x8a) + 1;
    *(int *)(param_1 + 0x8a) = iVar7;
    if (*(char *)((longlong)param_1 + 0x455) == '\x01') {
      FUN_1403b8780(param_1[0x89],&DAT_14134274c);
      if (*(char *)((longlong)param_1 + 0x454) == '\x01') {
        iVar7 = *(int *)(param_1 + 0x8a);
        goto LAB_1405f73dd;
      }
    }
    else {
LAB_1405f73dd:
      FUN_1403b79b0(param_1[0x89],&DAT_141338b7a,iVar7 * 2,&DAT_1413a2ad6);
      *(undefined1 *)((longlong)param_1 + 0x454) = 0;
    }
    FUN_1403b8780(param_1[0x89],"true: ");
    if (*(char *)((longlong)param_1 + 0x455) == '\x01') {
      FUN_1403b8780(param_1[0x89],&DAT_141342730);
    }
    FUN_1405f7cf0(param_1,*(undefined8 *)(param_2 + 4));
    if (*(char *)((longlong)param_1 + 0x455) == '\x01') {
      FUN_1403b8780(param_1[0x89],&DAT_14134274c);
    }
    if (*(char *)((longlong)param_1 + 0x454) == '\x01') {
      FUN_1403b79b0(param_1[0x89],&DAT_141338b7a,*(int *)(param_1 + 0x8a) * 2,&DAT_1413a2ad6);
      *(undefined1 *)((longlong)param_1 + 0x454) = 0;
    }
    FUN_1403b8780(param_1[0x89],"false: ");
    cVar1 = *(char *)((longlong)param_1 + 0x455);
joined_r0x0001405f74a6:
    if (cVar1 == '\x01') {
      FUN_1403b8780(param_1[0x89],&DAT_141342730);
    }
    uVar4 = *(undefined8 *)(param_2 + 6);
LAB_1405f7983:
    FUN_1405f7cf0(param_1,uVar4);
    iVar7 = *(int *)(param_1 + 0x8a);
    *(int *)(param_1 + 0x8a) = iVar7 + -1;
    if (*(char *)((longlong)param_1 + 0x454) == '\x01') {
      FUN_1403b79b0(param_1[0x89],&DAT_141338b7a,(iVar7 + -1) * 2,&DAT_1413a2ad6);
      *(undefined1 *)((longlong)param_1 + 0x454) = 0;
    }
    uVar4 = param_1[0x89];
    pcVar6 = "}\n";
    goto LAB_1405f79d7;
  case 0x13:
    if (*(char *)((longlong)param_1 + 0x455) == '\x01') {
      FUN_1403b8780(param_1[0x89],&DAT_141342762);
      if ((ulonglong)*param_2 < 0x14) {
        pcVar6 = (&PTR_s_scope_14134d8ea_0x12_1411f6950)[*param_2];
      }
      else {
        pcVar6 = "???";
      }
    }
    else {
      pcVar6 = "for";
    }
    FUN_1405f7f20(param_1,&DAT_1413a176c,pcVar6);
    if (*(char *)((longlong)param_1 + 0x455) == '\x01') {
      FUN_1403b8780(param_1[0x89],&DAT_141342730);
    }
    pcVar6 = *(char **)(param_2 + 4);
    if (*(char *)((longlong)param_1 + 0x454) == '\x01') {
      FUN_1403b79b0(param_1[0x89],&DAT_141338b7a,*(int *)(param_1 + 0x8a) * 2,&DAT_1413a2ad6);
      *(undefined1 *)((longlong)param_1 + 0x454) = 0;
    }
    FUN_1403b8780(param_1[0x89],pcVar6);
    sVar3 = strlen(pcVar6);
    if (pcVar6[sVar3 - 1] == '\n') {
      *(undefined1 *)((longlong)param_1 + 0x454) = 1;
      if (*(char *)((longlong)param_1 + 0x455) == '\x01') goto LAB_1405f79fa;
LAB_1405f7839:
      cVar1 = *(char *)((longlong)param_1 + 0x454);
    }
    else {
      if (*(char *)((longlong)param_1 + 0x455) != '\x01') goto LAB_1405f7839;
LAB_1405f79fa:
      FUN_1403b8780(param_1[0x89],&DAT_141342762);
      cVar1 = *(char *)((longlong)param_1 + 0x454);
    }
    if (cVar1 == '\x01') {
      FUN_1403b79b0(param_1[0x89],&DAT_141338b7a,*(int *)(param_1 + 0x8a) * 2,&DAT_1413a2ad6);
      *(undefined1 *)((longlong)param_1 + 0x454) = 0;
    }
    FUN_1403b8780(param_1[0x89]," in ");
    if (*(char *)((longlong)param_1 + 0x455) == '\x01') {
      FUN_1403b8780(param_1[0x89],&DAT_141342730);
    }
    if (*(longlong *)(param_2 + 6) == 0) {
      if (*(char *)((longlong)param_1 + 0x454) == '\x01') {
        FUN_1403b79b0(param_1[0x89],&DAT_141338b7a,*(int *)(param_1 + 0x8a) * 2,&DAT_1413a2ad6);
        *(undefined1 *)((longlong)param_1 + 0x454) = 0;
      }
      FUN_1403b8780(param_1[0x89],"{}");
      cVar1 = *(char *)((longlong)param_1 + 0x454);
    }
    else {
      FUN_14076b1d0(*param_1,*(longlong *)(param_2 + 6),param_1[0x89],
                    *(undefined1 *)((longlong)param_1 + 0x455));
      cVar1 = *(char *)((longlong)param_1 + 0x454);
    }
    if (cVar1 == '\x01') {
      FUN_1403b79b0(param_1[0x89],&DAT_141338b7a,*(int *)(param_1 + 0x8a) * 2,&DAT_1413a2ad6);
      *(undefined1 *)((longlong)param_1 + 0x454) = 0;
    }
    FUN_1403b8780(param_1[0x89],&DAT_1413a1c8d);
    if (*(longlong *)(param_2 + 8) == 0) {
      if (*(char *)((longlong)param_1 + 0x454) == '\x01') {
        FUN_1403b79b0(param_1[0x89],&DAT_141338b7a,*(int *)(param_1 + 0x8a) * 2,&DAT_1413a2ad6);
        *(undefined1 *)((longlong)param_1 + 0x454) = 0;
      }
      FUN_1403b8780(param_1[0x89],"{}");
      cVar1 = *(char *)((longlong)param_1 + 0x454);
    }
    else {
      FUN_14076b1d0(*param_1,*(longlong *)(param_2 + 8),param_1[0x89],
                    *(undefined1 *)((longlong)param_1 + 0x455));
      cVar1 = *(char *)((longlong)param_1 + 0x454);
    }
    if (cVar1 == '\x01') {
      FUN_1403b79b0(param_1[0x89],&DAT_141338b7a,*(int *)(param_1 + 0x8a) * 2,&DAT_1413a2ad6);
      *(undefined1 *)((longlong)param_1 + 0x454) = 0;
    }
    FUN_1403b8780(param_1[0x89],&DAT_1413a21e4);
    *(undefined1 *)((longlong)param_1 + 0x454) = 1;
    *(int *)(param_1 + 0x8a) = *(int *)(param_1 + 0x8a) + 1;
    uVar4 = *(undefined8 *)(param_2 + 10);
    goto LAB_1405f7983;
  default:
    goto LAB_1405f79e5;
  }
  if (*(char *)((longlong)param_1 + 0x454) == '\x01') {
    FUN_1403b79b0(param_1[0x89],&DAT_141338b7a,*(int *)(param_1 + 0x8a) * 2,&DAT_1413a2ad6);
    *(undefined1 *)((longlong)param_1 + 0x454) = 0;
  }
  uVar4 = param_1[0x89];
  pcVar6 = "\n";
LAB_1405f79d7:
  FUN_1403b8780(uVar4,pcVar6);
  *(undefined1 *)((longlong)param_1 + 0x454) = 1;
LAB_1405f79e5:
  return 0;
}

