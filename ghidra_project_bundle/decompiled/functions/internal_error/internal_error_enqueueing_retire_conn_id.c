/**
 * Function: internal_error_enqueueing_retire_conn_id
 * Address:  140c559c0
 * Signature: undefined internal_error_enqueueing_retire_conn_id(void)
 * Body size: 719 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 internal_error_enqueueing_retire_conn_id(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 local_res8;
  ulonglong in_stack_ffffffffffffff38;
  undefined8 local_88;
  undefined8 uStack_80;
  char *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 local_60 [56];
  
  FUN_140ccef60(*(undefined8 *)(param_1 + 0x40),param_1,param_2);
  lVar2 = FUN_140b8eea0();
  if (lVar2 != 0) {
    iVar1 = FUN_140c21ba0(local_60,lVar2);
    if (iVar1 != 0) {
      iVar1 = FUN_140ccac90(local_60,param_2);
      if (iVar1 == 0) {
        FUN_140c227c0();
      }
      else {
        FUN_140c21e60(local_60);
        iVar1 = FUN_140c22710(local_60,&local_res8);
        if (iVar1 != 0) {
          lVar5 = FUN_140ccf4d0(*(undefined8 *)(param_1 + 0x98),1,2,0x19,
                                in_stack_ffffffffffffff38 & 0xffffffff00000000,
                                *(undefined8 *)(lVar2 + 8),local_res8,FUN_140c55990,0);
          if (lVar5 != 0) {
            *(undefined8 *)(lVar2 + 8) = 0;
            FUN_140b8ef10(lVar2);
            return 1;
          }
        }
      }
    }
  }
  local_88 = 0;
  uStack_80 = 0;
  local_68 = 0;
  local_78 = (char *)0x0;
  uStack_70 = 0;
  puVar3 = (undefined1 *)stream_limit_error(1);
  puVar8 = &DAT_1413a70e4;
  puVar9 = &DAT_1413a70e0;
  puVar6 = &DAT_1413a70e4;
  puVar7 = &DAT_1413a70e0;
  if ((*(byte *)(param_1 + 0x5d4) & 0x40) != 0) goto LAB_140c55bc1;
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_1413a2ad6;
    puVar8 = &DAT_1413a2ad6;
    puVar9 = &DAT_1413a2ad6;
  }
  puVar4 = (undefined1 *)conn_close_transport(0x18);
  if (puVar4 == (undefined1 *)0x0) {
    puVar4 = &DAT_1413a2ad6;
    puVar6 = &DAT_1413a2ad6;
    puVar7 = &DAT_1413a2ad6;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("ssl\\quic\\quic_channel.c",0xde1,"ossl_quic_channel_raise_protocol_error_loc");
  FUN_140b91cc0(0x14,0xc0103,
                "QUIC error code: 0x%llx%s%s%s (triggered by frame type: 0x%llx%s%s%s), reason: \"%s\""
                ,1,puVar8,puVar3,puVar9,0x18,puVar6,puVar4,puVar7,
                "internal error enqueueing retire conn id");
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("ssl\\quic\\quic_channel.c",0xd02,"ch_enqueue_retire_conn_id");
  lVar5 = *(longlong *)(param_1 + 0x5d8);
  if (lVar5 == 0) {
    lVar5 = FUN_140c212b0();
    *(longlong *)(param_1 + 0x5d8) = lVar5;
    if (lVar5 != 0) goto LAB_140c55b7b;
  }
  else {
LAB_140c55b7b:
    d_aplatformplatformopenssl_srccryptoerrerr_lo(lVar5);
  }
  *(uint *)(param_1 + 0x5d4) = *(uint *)(param_1 + 0x5d4) | 0x40;
  local_78 = "internal error enqueueing retire conn id";
  local_88 = 1;
  uStack_80 = 0x18;
  uStack_70 = 0x28;
  FUN_140c54a70(param_1,&local_88,0);
LAB_140c55bc1:
  FUN_140b8ef10(lVar2);
  return 0;
}

