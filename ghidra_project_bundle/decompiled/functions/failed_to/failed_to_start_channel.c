/**
 * Function: failed_to_start_channel
 * Address:  140bcb1a0
 * Signature: undefined failed_to_start_channel(void)
 * Body size: 1182 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 failed_to_start_channel(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  char *pcVar7;
  undefined8 uVar8;
  longlong local_res8;
  
  lVar1 = param_1[3];
  iVar2 = FUN_140c50550(*(undefined8 *)(lVar1 + 0xa0));
  if (iVar2 != 0) {
    return 1;
  }
  if (((*(byte *)(lVar1 + 0x100) & 0x20) != 0) ||
     (iVar2 = FUN_140c504f0(*(undefined8 *)(lVar1 + 0xa0)), iVar2 != 0)) {
    uVar8 = FUN_140bcba90(param_1,"ssl\\quic\\quic_impl.c",0x75d,"quic_do_handshake",0xcf,0);
    return uVar8;
  }
  if (((*(uint *)(lVar1 + 0x100) >> 1 ^ *(uint *)(lVar1 + 0x100)) & 2) != 0) {
    FUN_140bcba90(param_1,"ssl\\quic\\quic_impl.c",0x760,"quic_do_handshake",0x80106,0);
    return 0xffffffff;
  }
  uVar8 = *(undefined8 *)(*param_1 + 0x60);
  lVar5 = FUN_140b74cb0(uVar8);
  lVar6 = FUN_140b9f2c0(uVar8);
  if ((lVar5 == 0) || (lVar6 == 0)) {
    FUN_140bcba90(param_1,"ssl\\quic\\quic_impl.c",0x769,"quic_do_handshake",0x80,0);
    return 0xffffffff;
  }
  if ((*(byte *)(lVar1 + 0x100) & 1) == 0) {
    iVar2 = FUN_140c59350(uVar8);
    if ((iVar2 != 0) && (iVar2 = FUN_140bd79a0(lVar1 + 0xb8), iVar2 == 0)) {
      iVar2 = FUN_140b74190(lVar6,0x5d,0,lVar1 + 0xb8);
      if (iVar2 < 1) {
        FUN_140bd7990(lVar1 + 0xb8);
      }
      else {
        FUN_140c50450(*(undefined8 *)(lVar1 + 0xa0),lVar1 + 0xb8);
      }
    }
    if ((((*(byte *)(lVar1 + 0x100) & 1) == 0) && (iVar2 = FUN_140c59350(uVar8), iVar2 != 0)) &&
       (iVar2 = FUN_140bd79a0(lVar1 + 0xb8), iVar2 == 0)) {
      FUN_140bcba90(param_1,"ssl\\quic\\quic_impl.c",0x789,"quic_do_handshake",0x15a,0);
      return 0xffffffff;
    }
  }
  lVar5 = param_1[3];
  if ((*(byte *)(lVar5 + 0x100) & 1) == 0) {
    iVar2 = FUN_140c50450(*(undefined8 *)(lVar5 + 0xa0),lVar5 + 0xb8);
    if (iVar2 == 0) {
      uVar8 = 0x737;
      pcVar7 = "failed to configure channel";
LAB_140bcb3be:
      FUN_140bcba90(param_1,"ssl\\quic\\quic_impl.c",uVar8,"ensure_channel_started",0xc0103,pcVar7);
      return 0xffffffff;
    }
    iVar2 = FUN_140c4ee80(*(undefined8 *)(lVar5 + 0xa0));
    if (iVar2 == 0) {
      FUN_140c4f5a0(*(undefined8 *)(lVar5 + 0xa0));
      uVar8 = 0x73e;
      pcVar7 = "failed to start channel";
      goto LAB_140bcb3be;
    }
    if (((*(byte *)(lVar5 + 0x100) & 8) != 0) &&
       (iVar2 = FUN_140c589c0(lVar5 + 0xd8,*(undefined8 *)(lVar5 + 0xa0)), iVar2 == 0)) {
      uVar8 = 0x746;
      pcVar7 = "failed to start assist thread";
      goto LAB_140bcb3be;
    }
  }
  *(uint *)(lVar5 + 0x100) = *(uint *)(lVar5 + 0x100) | 1;
  iVar2 = FUN_140c50550(*(undefined8 *)(lVar1 + 0xa0));
  if (iVar2 != 0) {
    return 1;
  }
  iVar2 = FUN_140bc8b80(*param_1);
  if (iVar2 == 0) {
    FUN_140bcba00(param_1);
    iVar2 = FUN_140c50550(*(undefined8 *)(lVar1 + 0xa0));
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = FUN_140c504f0(*(undefined8 *)(lVar1 + 0xa0));
    if (iVar2 != 0) {
      uVar8 = 0x7a1;
      goto LAB_140bcb445;
    }
    iVar2 = FUN_140bc8b40(lVar1);
    if (iVar2 != 0) {
      FUN_140c4e160(*(undefined8 *)(lVar1 + 0x58),1);
    }
  }
  iVar2 = FUN_140bc8b80(*param_1);
  if (iVar2 == 0) {
    iVar2 = FUN_140bcc260(lVar1);
    if (iVar2 == 0) {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        if ((int)param_1[5] == 0) {
          if (param_1[3] != 0) {
            *(undefined4 *)(param_1[3] + 0x128) = 2;
          }
        }
        else if (param_1[4] != 0) {
          *(undefined4 *)(param_1[4] + 0xb8) = 2;
          return 0xffffffff;
        }
      }
      return 0xffffffff;
    }
  }
  else {
    uVar8 = *(undefined8 *)(*param_1 + 0x58);
    local_res8 = lVar1;
    FUN_140c4e130(uVar8,0);
    uVar8 = FUN_140c4e150(uVar8);
    iVar2 = FUN_140c4da80(uVar8,FUN_140bcc2a0,&local_res8,0);
    if ((((*(byte *)(lVar1 + 0x100) & 0x20) != 0) ||
        (iVar3 = FUN_140c504f0(*(undefined8 *)(lVar1 + 0xa0)), iVar3 != 0)) ||
       (iVar3 = FUN_140c50530(*(undefined8 *)(lVar1 + 0xa0)), iVar3 == 0)) {
      uVar8 = 0x7ba;
LAB_140bcb445:
      FUN_140bcba90(param_1,"ssl\\quic\\quic_impl.c",uVar8,"quic_do_handshake",0xcf,0);
      return 0;
    }
    if (iVar2 < 1) {
      FUN_140bcba90(param_1,"ssl\\quic\\quic_impl.c",0x7bd,"quic_do_handshake",0xc0103,0);
      return 0xffffffff;
    }
    iVar2 = FUN_140bcc260(lVar1);
    if (iVar2 == 0) {
      return 1;
    }
  }
  uVar4 = FUN_140b6b770(*(undefined8 *)(lVar1 + 0x78),0);
  FUN_140bcba60(param_1,uVar4);
  return 0xffffffff;
}

