/**
 * Function: flow_control_violation
 * Address:  140ccc9f0
 * Signature: undefined flow_control_violation(void)
 * Body size: 772 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
flow_control_violation
          (undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,longlong *param_6)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  char *pcVar6;
  undefined8 in_stack_ffffffffffffff90;
  undefined4 uVar7;
  int local_58 [2];
  undefined1 local_50 [8];
  undefined8 local_48;
  longlong local_40;
  longlong local_38;
  undefined8 local_30;
  uint local_28;
  undefined8 uStack_20;
  
  plVar1 = param_6;
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff90 >> 0x20);
  uStack_20 = 0x140ccca05;
  local_58[0] = 0;
  *param_6 = 0;
  iVar3 = FUN_140ccb7f0(param_1,0,&local_48);
  if (iVar3 == 0) {
    quic_error_code_0xllxsss_reason_s
              (param_2,7,param_5,"decode error",0,"ssl\\quic\\quic_rx_depack.c",0x203,
               "depack_do_frame_stream");
    return 0;
  }
  uVar4 = exceeded_maximum_allowed_streams(param_2,local_48,param_5,&param_6);
  plVar2 = param_6;
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  if (param_6 == (longlong *)0x0) {
    return 1;
  }
  if (*(char *)((longlong)param_6 + 0x102) == '\0') {
    lVar5 = 5;
    pcVar6 = "STREAM frame for TX only stream";
    uVar7 = 0x217;
    goto LAB_140cccc83;
  }
  iVar3 = FUN_140c561d0(param_6 + 0x14,local_38 + local_40,local_28 >> 1 & 1);
  if (iVar3 != 0) {
    iVar3 = FUN_140c56320(plVar2 + 0x14,0);
    lVar5 = (longlong)iVar3;
    if (iVar3 != 0) {
      pcVar6 = "flow control violation";
      uVar7 = 0x22c;
      goto LAB_140cccc83;
    }
    switch(*(undefined1 *)((longlong)plVar2 + 0x102)) {
    case 1:
    case 2:
      goto switchD_140cccb94_caseD_1;
    default:
      goto LAB_140ccccde;
    }
  }
  pcVar6 = "internal error (flow control)";
  uVar7 = 0x222;
  goto LAB_140cccc7e;
switchD_140cccb94_caseD_1:
  if ((local_28 & 2) != 0) {
    switch(*(undefined1 *)((longlong)plVar2 + 0x102)) {
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      iVar3 = FUN_140c56330(plVar2 + 0x14,0);
      if (iVar3 != 0) goto LAB_140cccbde;
    }
    FUN_140c58440(param_2 + 0x300,plVar2,local_38 + local_40);
  }
LAB_140cccbde:
  if ((*(uint *)(plVar2 + 0x20) & 0x4000000) != 0) {
LAB_140ccccde:
    return 1;
  }
  if (((local_38 == 0) && ((local_28 & 2) == 0)) ||
     (iVar3 = ossl_quic_rstream_queue_data
                        (plVar2[0xf],param_3,local_40,local_30,local_38,
                         CONCAT44(uVar7,local_28 >> 1) & 0xffffffff00000001), iVar3 != 0)) {
    if ((*(char *)((longlong)plVar2 + 0x102) != '\x02') ||
       (iVar3 = FUN_140c573e0(plVar2[0xf],local_50,local_58), iVar3 != 0)) {
      if (local_58[0] != 0) {
        FUN_140c58460(param_2 + 0x300,plVar2);
      }
      *plVar1 = local_38;
      return 1;
    }
    pcVar6 = "internal error (rstream available)";
    uVar7 = 0x279;
  }
  else {
    pcVar6 = "internal error (rstream queue)";
    uVar7 = 0x26a;
  }
LAB_140cccc7e:
  lVar5 = 1;
LAB_140cccc83:
  quic_error_code_0xllxsss_reason_s
            (param_2,lVar5,param_5,pcVar6,0,"ssl\\quic\\quic_rx_depack.c",uVar7,
             "depack_do_frame_stream");
  return 0;
}

