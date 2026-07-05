/**
 * Function: active_connection_id_limit
 * Address:  140c52200
 * Signature: undefined active_connection_id_limit(void)
 * Body size: 1215 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong active_connection_id_limit(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 local_res8;
  undefined1 local_58 [56];
  undefined8 uStack_20;
  
  uStack_20 = 0x140c52212;
  cVar1 = *(char *)(param_1 + 0x43d);
  lVar7 = 0;
  local_res8 = 0;
  lVar3 = lVar7;
  lVar4 = lVar7;
  if ((((*(longlong *)(param_1 + 0x50) != 0) ||
       (lVar3 = 0, (*(uint *)(param_1 + 0x5d0) & 0x100) != 0)) ||
      (lVar3 = FUN_140b8eea0(), lVar3 == 0)) ||
     (iVar2 = FUN_140c21ba0(local_58,lVar3), lVar4 = 0, iVar2 == 0)) goto LAB_140c526a5;
  lVar4 = FUN_140ccae10(local_58,0xc,0,0);
  if (lVar4 != 0) {
    if ((*(uint *)(param_1 + 0x5d0) & 0x2000000) == 0) {
      lVar4 = param_1 + 0x452;
      uVar6 = 0xf;
LAB_140c52314:
      iVar2 = FUN_140ccaf70(local_58,uVar6,lVar4);
      if (iVar2 != 0) {
LAB_140c52321:
        iVar2 = FUN_140ccaec0(local_58,1,*(undefined8 *)(param_1 + 0x518));
        if (((iVar2 != 0) && (iVar2 = FUN_140ccaec0(local_58,3,0x4b0), iVar2 != 0)) &&
           ((iVar2 = FUN_140ccaec0(local_58,0xe,2), iVar2 != 0 &&
            ((*(longlong *)(param_1 + 0x4d0) == 0x19 ||
             (iVar2 = FUN_140ccaec0(local_58,0xb), iVar2 != 0)))))) {
          uVar6 = FUN_140b8c100(param_1 + 0xc0);
          iVar2 = FUN_140ccaec0(local_58,4,uVar6);
          if ((iVar2 != 0) &&
             (((iVar2 = FUN_140ccaec0(local_58,5,*(undefined8 *)(param_1 + 0x4b8)), iVar2 != 0 &&
               (iVar2 = FUN_140ccaec0(local_58,6,*(undefined8 *)(param_1 + 0x4c0)), iVar2 != 0)) &&
              (iVar2 = FUN_140ccaec0(local_58,7,*(undefined8 *)(param_1 + 0x4c8)), iVar2 != 0)))) {
            uVar6 = FUN_140b8c100(param_1 + 0x240);
            iVar2 = FUN_140ccaec0(local_58,8,uVar6);
            if (iVar2 != 0) {
              uVar6 = FUN_140b8c100(param_1 + 0x2a0);
              iVar2 = FUN_140ccaec0(local_58,9,uVar6);
              if ((iVar2 != 0) && (iVar2 = FUN_140c21e60(local_58), iVar2 != 0)) {
                iVar2 = FUN_140c22710(local_58,&local_res8);
                lVar4 = lVar7;
                if (iVar2 != 0) {
                  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(lVar3 + 8);
                  *(undefined8 *)(lVar3 + 8) = 0;
                  iVar2 = FUN_140badff0(*(undefined8 *)(param_1 + 0x28),
                                        *(undefined8 *)(param_1 + 0x50),local_res8);
                  if (iVar2 != 0) {
                    uVar6 = FUN_140c54cc0(param_1);
                    iVar2 = FUN_140cc8560(uVar6,4,"transport","parameters_set",
                                          "transport:parameters_set");
                    if (iVar2 != 0) {
                      FUN_140cc87d0(uVar6,"owner","local");
                      FUN_140cc88a0(uVar6,"disable_active_migration",1);
                      if ((*(uint *)(param_1 + 0x5d0) & 0x2000000) == 0) {
                        FUN_140cc87d0(uVar6,"initial_source_connection_id",&DAT_1413a2ad6);
                      }
                      else {
                        FUN_140cc88e0(uVar6,"original_destination_connection_id",param_1 + 0x429,
                                      *(undefined1 *)(param_1 + 0x428));
                        FUN_140cc88e0(uVar6,"initial_source_connection_id",param_1 + 0x47d,
                                      *(undefined1 *)(param_1 + 0x47c));
                      }
                      FUN_140cc8860(uVar6,"max_idle_timeout",*(undefined8 *)(param_1 + 0x528));
                      FUN_140cc8860(uVar6,"max_udp_payload_size",0x4b0);
                      FUN_140cc8860(uVar6,"active_connection_id_limit",2);
                      FUN_140cc8860(uVar6,"max_ack_delay",*(undefined8 *)(param_1 + 0x4d0));
                      uVar5 = FUN_140b8c100(param_1 + 0xc0);
                      FUN_140cc8860(uVar6,"initial_max_data",uVar5);
                      FUN_140cc8860(uVar6,"initial_max_stream_data_bidi_local",
                                    *(undefined8 *)(param_1 + 0x4b8));
                      FUN_140cc8860(uVar6,"initial_max_stream_data_bidi_remote",
                                    *(undefined8 *)(param_1 + 0x4c0));
                      FUN_140cc8860(uVar6,"initial_max_stream_data_uni",
                                    *(undefined8 *)(param_1 + 0x4c8));
                      uVar5 = FUN_140b8c100(param_1 + 0x240);
                      FUN_140cc8860(uVar6,"initial_max_streams_bidi",uVar5);
                      uVar5 = FUN_140b8c100(param_1 + 0x2a0);
                      FUN_140cc8860(uVar6,"initial_max_streams_uni",uVar5);
                      FUN_140cc8640(uVar6);
                    }
                    *(uint *)(param_1 + 0x5d0) = *(uint *)(param_1 + 0x5d0) | 0x100;
                    lVar4 = 1;
                  }
                }
                goto LAB_140c526a5;
              }
            }
          }
        }
      }
    }
    else {
      lVar4 = 0x428;
      if (cVar1 != '\0') {
        lVar4 = 0x43d;
      }
      iVar2 = FUN_140ccaf70(local_58,0,lVar4 + param_1);
      if ((iVar2 != 0) && (iVar2 = FUN_140ccaf70(local_58,0xf,param_1 + 0x47c), iVar2 != 0)) {
        if (*(char *)(param_1 + 0x43d) != '\0') {
          lVar4 = param_1 + 0x428;
          uVar6 = 0x10;
          goto LAB_140c52314;
        }
        goto LAB_140c52321;
      }
    }
  }
  FUN_140c227c0(local_58);
  lVar4 = lVar7;
LAB_140c526a5:
  FUN_140b8ef10(lVar3);
  return lVar4;
}

