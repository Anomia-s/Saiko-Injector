/**
 * Function: time_spent_on_running_systems_in_frame
 * Address:  1403cd480
 * Signature: undefined time_spent_on_running_systems_in_frame(void)
 * Body size: 4636 bytes
 */


undefined8
time_spent_on_running_systems_in_frame(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  char *pcVar11;
  undefined4 *puVar12;
  longlong lVar13;
  int *piVar14;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  char *local_a0;
  undefined4 local_98;
  longlong local_90;
  longlong local_88;
  ulonglong local_80;
  longlong local_78;
  longlong local_70;
  undefined1 local_68 [24];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_c8;
  lVar5 = FUN_1405f7fe0(param_2,"period");
  lVar8 = *(longlong *)(param_2 + 0x10);
  if (lVar5 != 0) {
    uVar6 = FUN_1403d2690("Period%s",lVar5);
    uVar7 = FUN_1403ae3f0(param_1,DAT_1416fde00,uVar6);
    (*DAT_1415033b0)(uVar6);
    if (uVar7 != 0) goto LAB_1403cd50a;
    pcVar11 = "bad request (invalid period string)";
LAB_1403cd53f:
    error(param_3,pcVar11);
    *param_3 = 400;
    uVar6 = 0;
    goto LAB_1403ce643;
  }
  uVar7 = (ulonglong)DAT_1416fddd8;
LAB_1403cd50a:
  pcVar11 = (char *)(lVar8 + 6);
  iVar3 = strcmp(pcVar11,"world");
  if (iVar3 == 0) {
    lVar8 = FUN_1400ba4f0(param_1,0x103,
                          uVar7 & 0xffffffff | DAT_1416fde08 << 0x20 | 0x8000000000000000);
    puVar12 = param_3 + 2;
    lVar8 = *(longlong *)(lVar8 + 8);
    FUN_1403b8a80(puVar12,"{",&DAT_1413944a3);
    local_a8 = *(undefined4 *)(lVar8 + 0x11e00);
    local_a0 = "Alive entity ids in the world";
    local_98 = 0x1d;
    FUN_1403cf710(puVar12,lVar8 + 8,"entities.count",0xe);
    local_a8 = *(undefined4 *)(lVar8 + 0x11e00);
    local_a0 = "Not alive entity ids in the world";
    local_98 = 0x21;
    FUN_1403cf710(puVar12,lVar8 + 0x4b8,"entities.not_alive_count",0x18);
    local_a8 = *(undefined4 *)(lVar8 + 0x11e00);
    local_a0 = "Frames per second";
    local_98 = 0x11;
    FUN_1403cf710(puVar12,lVar8 + 0xbb88,"performance.fps",0xf);
    local_a8 = *(undefined4 *)(lVar8 + 0x11e00);
    local_a0 = "Time spent in frame";
    local_98 = 0x13;
    FUN_1403cf710(puVar12,lVar8 + 0xa418,"performance.frame_time",0x16);
    local_a8 = *(undefined4 *)(lVar8 + 0x11e00);
    local_a0 = "Time spent on running systems in frame";
    local_98 = 0x26;
    FUN_1403cf710(puVar12,lVar8 + 0xa8c8,"performance.system_time",0x17);
    local_a8 = *(undefined4 *)(lVar8 + 0x11e00);
    local_a0 = "Time spent on notifying observers in frame";
    local_98 = 0x2a;
    FUN_1403cf710(puVar12,lVar8 + 0xad78,"performance.emit_time",0x15);
    local_a8 = *(undefined4 *)(lVar8 + 0x11e00);
    local_a0 = "Time spent on merging commands in frame";
    local_98 = 0x27;
    FUN_1403cf710(puVar12,lVar8 + 0xb228,"performance.merge_time",0x16);
    local_a8 = *(undefined4 *)(lVar8 + 0x11e00);
    local_a0 = "Time spent on revalidating query caches in frame";
    local_98 = 0x30;
    FUN_1403cf710(puVar12,lVar8 + 0xb6d8,"performance.rematch_time",0x18);
    local_a8 = *(undefined4 *)(lVar8 + 0x11e00);
    local_a0 = "Add commands executed";
    local_98 = 0x15;
    FUN_1403cf710(puVar12,lVar8 + 0x4658,"commands.add_count",0x12);
    local_a8 = *(undefined4 *)(lVar8 + 0x11e00);
    local_a0 = "Remove commands executed";
    local_98 = 0x18;
    FUN_1403cf710(puVar12,lVar8 + 0x4b08,"commands.remove_count",0x15);
    local_a8 = *(undefined4 *)(lVar8 + 0x11e00);
    local_a0 = "Delete commands executed";
    local_98 = 0x18;
    FUN_1403cf710(puVar12,lVar8 + 0x4fb8,"commands.delete_count",0x15);
    local_a8 = *(undefined4 *)(lVar8 + 0x11e00);
    local_a0 = "Clear commands executed";
    local_98 = 0x17;
    FUN_1403cf710(puVar12,lVar8 + 0x5468,"commands.clear_count",0x14);
    local_a8 = *(undefined4 *)(lVar8 + 0x11e00);
    local_a0 = "Set commands executed";
    local_98 = 0x15;
    FUN_1403cf710(puVar12,lVar8 + 0x5918,"commands.set_count",0x12);
    local_a8 = *(undefined4 *)(lVar8 + 0x11e00);
    local_a0 = "Get_mut commands executed";
    local_98 = 0x19;
    FUN_1403cf710(puVar12,lVar8 + 0x5dc8,"commands.ensure_count",0x15);
    local_a8 = *(undefined4 *)(lVar8 + 0x11e00);
    local_a0 = "Modified commands executed";
    local_98 = 0x1a;
    FUN_1403cf710(puVar12,lVar8 + 0x6278,"commands.modified_count",0x17);
    local_a8 = *(undefined4 *)(lVar8 + 0x11e00);
    local_a0 = "Misc commands executed";
    local_98 = 0x16;
    FUN_1403cf710(puVar12,lVar8 + 0x6728,"commands.other_count",0x14);
    local_a8 = *(undefined4 *)(lVar8 + 0x11e00);
    local_a0 = "Commands for already deleted entities";
    local_98 = 0x25;
    FUN_1403cf710(puVar12,lVar8 + 0x6bd8,"commands.discard_count",0x16);
    local_a8 = *(undefined4 *)(lVar8 + 0x11e00);
    local_a0 = "Entities with batched commands";
    local_98 = 0x1e;
    FUN_1403cf710(puVar12,lVar8 + 0x7088,"commands.batched_entity_count",0x1d);
    local_a8 = *(undefined4 *)(lVar8 + 0x11e00);
    local_a0 = "Number of commands batched";
    local_98 = 0x1a;
    FUN_1403cf710(puVar12,lVar8 + 0x7538,"commands.batched_count",0x16);
    local_a8 = *(undefined4 *)(lVar8 + 0x11e00);
    local_a0 = "Number of merges (sync points)";
    local_98 = 0x1e;
    FUN_1403cf710(puVar12,lVar8 + 0x7e98,"frame.merge_count",0x11);
    local_a8 = *(undefined4 *)(lVar8 + 0x11e00);
    local_a0 = "Pipeline rebuilds (happen when systems become active/enabled)";
    local_98 = 0x3d;
    FUN_1403cf710(puVar12,lVar8 + 0x87f8,"frame.pipeline_build_count",0x1a);
    local_a8 = *(undefined4 *)(lVar8 + 0x11e00);
    local_a0 = "Systems ran in frame";
    local_98 = 0x14;
    FUN_1403cf710(puVar12,lVar8 + 0x8ca8,"frame.systems_ran",0x11);
    local_a8 = *(undefined4 *)(lVar8 + 0x11e00);
    local_a0 = "Number of times an observer was invoked in frame";
    local_98 = 0x30;
    FUN_1403cf710(puVar12,lVar8 + 0x9158,"frame.observers_ran",0x13);
    local_a8 = *(undefined4 *)(lVar8 + 0x11e00);
    local_a0 = "Events emitted in frame";
    local_98 = 0x17;
    FUN_1403cf710(puVar12,lVar8 + 0x9608,"frame.event_emit_count",0x16);
    local_a8 = *(undefined4 *)(lVar8 + 0x11e00);
    local_a0 = "Number of query cache revalidations";
    local_98 = 0x23;
    FUN_1403cf710(puVar12,lVar8 + 0x8348,"frame.rematch_count",0x13);
    local_a8 = *(undefined4 *)(lVar8 + 0x11e00);
    local_a0 = "Tables in the world (including empty)";
    local_98 = 0x25;
    FUN_1403cf710(puVar12,lVar8 + 0x2588,"tables.count",0xc);
    local_a8 = *(undefined4 *)(lVar8 + 0x11e00);
    local_a0 = "Empty tables in the world";
    local_98 = 0x19;
    FUN_1403cf710(puVar12,lVar8 + 0x2a38,"tables.empty_count",0x12);
    local_a8 = *(undefined4 *)(lVar8 + 0x11e00);
    local_a0 = "Number of new tables created";
    local_98 = 0x1c;
    FUN_1403cf710(puVar12,lVar8 + 0x2ee8,"tables.create_count",0x13);
    local_a8 = *(undefined4 *)(lVar8 + 0x11e00);
    local_a0 = "Number of tables deleted";
    local_98 = 0x18;
    FUN_1403cf710(puVar12,lVar8 + 0x3398,"tables.delete_count",0x13);
    local_a8 = *(undefined4 *)(lVar8 + 0x11e00);
    local_a0 = "Tag ids in use";
    local_98 = 0xe;
    FUN_1403cf710(puVar12,lVar8 + 0x968,"components.tag_count",0x14);
    local_a8 = *(undefined4 *)(lVar8 + 0x11e00);
    local_a0 = "Component ids in use";
    local_98 = 0x14;
    FUN_1403cf710(puVar12,lVar8 + 0xe18,"components.component_count",0x1a);
    local_a8 = *(undefined4 *)(lVar8 + 0x11e00);
    local_a0 = "Pair ids in use";
    local_98 = 0xf;
    FUN_1403cf710(puVar12,lVar8 + 0x12c8,"components.pair_count",0x15);
    local_a8 = *(undefined4 *)(lVar8 + 0x11e00);
    local_a0 = "Registered component types";
    local_98 = 0x1a;
    FUN_1403cf710(puVar12,lVar8 + 0x1778,"components.type_count",0x15);
    local_a8 = *(undefined4 *)(lVar8 + 0x11e00);
    local_a0 = "Number of new component, tag and pair ids created";
    local_98 = 0x31;
    FUN_1403cf710(puVar12,lVar8 + 0x1c28,"components.create_count",0x17);
    local_a8 = *(undefined4 *)(lVar8 + 0x11e00);
    local_a0 = "Number of component, pair and tag ids deleted";
    local_98 = 0x2d;
    FUN_1403cf710(puVar12,lVar8 + 0x20d8,"components.delete_count",0x17);
    local_a8 = *(undefined4 *)(lVar8 + 0x11e00);
    local_a0 = "Queries in the world";
    local_98 = 0x14;
    FUN_1403cf710(puVar12,lVar8 + 0x3848,"queries.query_count",0x13);
    local_a8 = *(undefined4 *)(lVar8 + 0x11e00);
    local_a0 = "Observers in the world";
    local_98 = 0x16;
    FUN_1403cf710(puVar12,lVar8 + 0x3cf8,"queries.observer_count",0x16);
    local_a8 = *(undefined4 *)(lVar8 + 0x11e00);
    local_a0 = "Systems in the world";
    local_98 = 0x14;
    FUN_1403cf710(puVar12,lVar8 + 0x41a8,"queries.system_count",0x14);
    local_a8 = *(undefined4 *)(lVar8 + 0x11e00);
    local_a0 = "Allocations by OS API";
    local_98 = 0x15;
    FUN_1403cf710(puVar12,lVar8 + 0xc4e8,"memory.alloc_count",0x12);
    local_a8 = *(undefined4 *)(lVar8 + 0x11e00);
    local_a0 = "Reallocs by OS API";
    local_98 = 0x12;
    FUN_1403cf710(puVar12,lVar8 + 0xc998,"memory.realloc_count",0x14);
    local_a8 = *(undefined4 *)(lVar8 + 0x11e00);
    local_a0 = "Frees by OS API";
    local_98 = 0xf;
    FUN_1403cf710(puVar12,lVar8 + 0xce48,"memory.free_count",0x11);
    local_a8 = *(undefined4 *)(lVar8 + 0x11e00);
    local_a0 = "Outstanding allocations by OS API";
    local_98 = 0x21;
    FUN_1403cf710(puVar12,lVar8 + 0xd2f8,"memory.outstanding_alloc_count",0x1e);
    local_a8 = *(undefined4 *)(lVar8 + 0x11e00);
    local_a0 = "Blocks allocated by block allocators";
    local_98 = 0x24;
    FUN_1403cf710(puVar12,lVar8 + 0xd7a8,"memory.block_alloc_count",0x18);
    local_a8 = *(undefined4 *)(lVar8 + 0x11e00);
    local_a0 = "Blocks freed by block allocators";
    local_98 = 0x20;
    FUN_1403cf710(puVar12,lVar8 + 0xdc58,"memory.block_free_count",0x17);
    local_a8 = *(undefined4 *)(lVar8 + 0x11e00);
    local_a0 = "Outstanding block allocations";
    local_98 = 0x1d;
    FUN_1403cf710(puVar12,lVar8 + 0xe108,"memory.block_outstanding_alloc_count",0x24);
    local_a8 = *(undefined4 *)(lVar8 + 0x11e00);
    local_a0 = "Pages allocated by stack allocators";
    local_98 = 0x23;
    FUN_1403cf710(puVar12,lVar8 + 0xe5b8,"memory.stack_alloc_count",0x18);
    local_a8 = *(undefined4 *)(lVar8 + 0x11e00);
    local_a0 = "Pages freed by stack allocators";
    local_98 = 0x1f;
    FUN_1403cf710(puVar12,lVar8 + 0xea68,"memory.stack_free_count",0x17);
    local_a8 = *(undefined4 *)(lVar8 + 0x11e00);
    local_a0 = "Outstanding page allocations";
    local_98 = 0x1c;
    FUN_1403cf710(puVar12,lVar8 + 0xef18,"memory.stack_outstanding_alloc_count",0x24);
    local_a8 = *(undefined4 *)(lVar8 + 0x11e00);
    local_a0 = "Received requests";
    local_98 = 0x11;
    FUN_1403cf710(puVar12,lVar8 + 0xf3c8,"http.request_received_count",0x1b);
    local_a8 = *(undefined4 *)(lVar8 + 0x11e00);
    local_a0 = "Received invalid requests";
    local_98 = 0x19;
    FUN_1403cf710(puVar12,lVar8 + 0xf878,"http.request_invalid_count",0x1a);
    local_a8 = *(undefined4 *)(lVar8 + 0x11e00);
    local_a0 = "Requests handled successfully";
    local_98 = 0x1d;
    FUN_1403cf710(puVar12,lVar8 + 0xfd28,"http.request_handled_ok_count",0x1d);
    local_a8 = *(undefined4 *)(lVar8 + 0x11e00);
    local_a0 = "Requests handled with error code";
    local_98 = 0x20;
    FUN_1403cf710(puVar12,lVar8 + 0x101d8,"http.request_handled_error_count",0x20);
    local_a8 = *(undefined4 *)(lVar8 + 0x11e00);
    local_a0 = "Requests not handled (unknown endpoint)";
    local_98 = 0x27;
    FUN_1403cf710(puVar12,lVar8 + 0x10688,"http.request_not_handled_count",0x1e);
    local_a8 = *(undefined4 *)(lVar8 + 0x11e00);
    local_a0 = "Preflight requests received";
    local_98 = 0x1b;
    FUN_1403cf710(puVar12,lVar8 + 0x10b38,"http.request_preflight_count",0x1c);
    local_a8 = *(undefined4 *)(lVar8 + 0x11e00);
    local_a0 = "Successful replies";
    local_98 = 0x12;
    FUN_1403cf710(puVar12,lVar8 + 0x10fe8,"http.send_ok_count",0x12);
    local_a8 = *(undefined4 *)(lVar8 + 0x11e00);
    local_a0 = "Unsuccessful replies";
    local_98 = 0x14;
    FUN_1403cf710(puVar12,lVar8 + 0x11498,"http.send_error_count",0x15);
    local_a8 = *(undefined4 *)(lVar8 + 0x11e00);
    local_a0 = "Dropped requests due to full send queue (503)";
    local_98 = 0x2d;
    FUN_1403cf710(puVar12,lVar8 + 0x11948,"http.busy_count",0xf);
    pcVar11 = "}";
LAB_1403ce639:
    FUN_1403b8c10(param_3 + 2,pcVar11);
  }
  else {
    iVar3 = strcmp(pcVar11,"pipeline");
    if (iVar3 != 0) {
      pcVar11 = "bad request (unsupported category)";
      goto LAB_1403cd53f;
    }
    pcVar11 = (char *)FUN_1405f7fe0(param_2,"name");
    if (pcVar11 == (char *)0x0) {
LAB_1403ce57c:
      lVar8 = FUN_1400ba4f0(param_1,0x103,
                            uVar7 & 0xffffffff | DAT_1416fde18 << 0x20 | 0x8000000000000000);
      puVar12 = param_3 + 2;
      FUN_1403b8a80(puVar12,&DAT_141360dfd,&DAT_1413944a3);
      if (lVar8 != 0) {
        FUN_1403b6ad0(local_68,lVar8 + 8);
        cVar2 = FUN_1403b6b00(local_68);
        if (cVar2 != '\0') {
          do {
            uVar6 = *local_50;
            uVar10 = local_50[1];
            cVar2 = FUN_1400b8670(param_1,uVar6);
            if (cVar2 != '\0') {
              FUN_1403b8d70(puVar12);
              FUN_1403cf8f0(param_1,puVar12,uVar6,uVar10);
            }
            cVar2 = FUN_1403b6b00(local_68);
          } while (cVar2 != '\0');
        }
      }
LAB_1403ce632:
      pcVar11 = "]";
      goto LAB_1403ce639;
    }
    iVar3 = strcmp(pcVar11,"all");
    if (iVar3 == 0) goto LAB_1403ce57c;
    lVar8 = FUN_1403ae4f0(param_1,pcVar11);
    if (lVar8 != 0) {
      lVar5 = FUN_1400ba4f0(param_1,0x103,
                            DAT_1416fde10 << 0x20 | uVar7 & 0xffffffff | 0x8000000000000000);
      local_90 = FUN_1400ba4f0(param_1,0x103,
                               DAT_1416fde18 << 0x20 | uVar7 & 0xffffffff | 0x8000000000000000);
      if ((lVar5 == 0) || (local_90 == 0)) {
LAB_1403ce66e:
        FUN_1403b7a10(param_3 + 2,&DAT_1413608c8,2);
        goto LAB_1403ce641;
      }
      lVar5 = FUN_1403b6510(lVar5 + 8,lVar8);
      if (lVar5 == 0) goto LAB_1403ce66e;
      plVar9 = (longlong *)FUN_1400ba4f0(param_1,lVar8,0x144);
      puVar12 = param_3 + 2;
      FUN_1403b8a80(puVar12,&DAT_141360dfd,&DAT_1413944a3);
      local_88 = FUN_140106180(*plVar9 + 8);
      lVar8 = FUN_140106180(*plVar9 + 0x18);
      local_70 = FUN_140106180(lVar5 + 0x18);
      uVar4 = _anon_C953E3F2::Decoration<__int64>::vfunction3((Decoration<__int64> *)(*plVar9 + 8));
      if (0 < (int)uVar4) {
        local_90 = local_90 + 8;
        local_80 = (ulonglong)uVar4;
        uVar7 = 0;
        local_78 = lVar5;
        do {
          if (0 < *(int *)(local_88 + 4 + uVar7 * 0x20)) {
            piVar14 = (int *)(uVar7 * 0x20 + local_88);
            lVar5 = (longlong)*piVar14;
            do {
              uVar6 = *(undefined8 *)(*(longlong *)(*(longlong *)(lVar8 + lVar5 * 8) + 0x20) + 0x78)
              ;
              cVar2 = FUN_1400b8670(param_1,uVar6);
              if (cVar2 != '\0') {
                uVar10 = FUN_1403b6510(local_90,uVar6);
                FUN_1403b8d70(puVar12);
                FUN_1403cf8f0(param_1,puVar12,uVar6,uVar10);
              }
              lVar5 = lVar5 + 1;
            } while (lVar5 < (longlong)piVar14[1] + (longlong)*piVar14);
          }
          FUN_1403b8d70(puVar12);
          lVar13 = uVar7 * 0x978;
          FUN_1403b8a80(puVar12,"{",&DAT_1413944a3);
          FUN_1403b9160(puVar12,"\"multi_threaded\":",0x11);
          lVar1 = local_70;
          FUN_1403b8630(puVar12,*(undefined1 *)(local_70 + 0x974 + lVar13));
          FUN_1403b9160(puVar12,"\"immediate\":",0xc);
          FUN_1403b8630(puVar12,*(undefined1 *)(lVar1 + 0x975 + lVar13));
          lVar5 = local_78;
          local_a8 = *(undefined4 *)(local_78 + 0x28);
          local_a0 = "";
          local_98 = 0;
          FUN_1403cf710(puVar12,lVar1 + lVar13 + 8,"time_spent",10);
          local_a8 = *(undefined4 *)(lVar5 + 0x28);
          local_a0 = "";
          local_98 = 0;
          FUN_1403cf710(puVar12,lVar1 + lVar13 + 0x4b8,"commands_enqueued",0x11);
          FUN_1403b8c10(puVar12,"}");
          uVar7 = uVar7 + 1;
        } while (uVar7 != local_80);
      }
      goto LAB_1403ce632;
    }
    error(param_3,"pipeline \'%s\' not found",pcVar11);
    *param_3 = 0x194;
  }
LAB_1403ce641:
  uVar6 = 1;
LAB_1403ce643:
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_c8)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_c8);
}

