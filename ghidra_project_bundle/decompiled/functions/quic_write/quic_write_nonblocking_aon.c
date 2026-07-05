/**
 * Function: quic_write_nonblocking_aon
 * Address:  140bcc740
 * Signature: undefined quic_write_nonblocking_aon(void)
 * Body size: 551 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
quic_write_nonblocking_aon
          (longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4,longlong *param_5)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_res8;
  undefined8 uVar6;
  
  uVar6 = 0x140bcc75c;
  lVar1 = param_1[4];
  local_res8 = 0;
  lVar4 = param_2;
  lVar5 = param_3;
  if ((*(byte *)(lVar1 + 0x88) & 4) != 0) {
    if ((((*(uint *)(lVar1 + 0xa8) & 2) == 0) && (*(longlong *)(lVar1 + 0x90) != param_2)) ||
       (param_3 != *(longlong *)(lVar1 + 0x98))) {
      uVar6 = FUN_140bcba90(param_1,"ssl\\quic\\quic_impl.c",0xa71,"quic_write_nonblocking_aon",0x7f
                            ,0);
      return uVar6;
    }
    lVar4 = param_2 + *(longlong *)(lVar1 + 0xa0);
    lVar5 = param_3 - *(longlong *)(lVar1 + 0xa0);
  }
  iVar2 = FUN_140bcc570(lVar1,lVar4,lVar5,&local_res8);
  if (iVar2 == 0) {
    *param_5 = 0;
    uVar6 = FUN_140bcba90(param_1,"ssl\\quic\\quic_impl.c",0xa7f,"quic_write_nonblocking_aon",
                          0xc0103,0);
  }
  else {
    lVar4 = *param_1;
    uVar3 = *(uint *)(lVar4 + 0x70);
    while ((uVar3 = uVar3 >> 5 & 3, uVar3 == 0 && (lVar4 = *(longlong *)(lVar4 + 0x40), lVar4 != 0))
          ) {
      uVar3 = *(uint *)(lVar4 + 0x70);
    }
    FUN_140bcc4c0(lVar1,local_res8 != 0,local_res8 == lVar5,param_4,uVar3 != 2,uVar6);
    uVar3 = *(uint *)(lVar1 + 0x88) & 4;
    if (local_res8 == lVar5) {
      if (uVar3 == 0) {
        *param_5 = local_res8;
        uVar6 = 1;
      }
      else {
        *param_5 = *(longlong *)(lVar1 + 0x98);
        uVar6 = 1;
        *(uint *)(lVar1 + 0x88) = *(uint *)(lVar1 + 0x88) & 0xfffffffb;
        *(undefined8 *)(lVar1 + 0x90) = 0;
        *(undefined8 *)(lVar1 + 0xa0) = 0;
        *(undefined8 *)(lVar1 + 0x98) = 0;
      }
    }
    else {
      if (uVar3 == 0) {
        if (local_res8 != 0) {
          *(longlong *)(lVar1 + 0x90) = param_2;
          *(uint *)(lVar1 + 0x88) = *(uint *)(lVar1 + 0x88) | 4;
          *(longlong *)(lVar1 + 0xa0) = local_res8;
          *(longlong *)(lVar1 + 0x98) = param_3;
        }
        *param_5 = 0;
      }
      else {
        *(longlong *)(lVar1 + 0xa0) = *(longlong *)(lVar1 + 0xa0) + local_res8;
      }
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        if ((int)param_1[5] == 0) {
          if (param_1[3] != 0) {
            *(undefined4 *)(param_1[3] + 0x128) = 3;
          }
        }
        else if (param_1[4] != 0) {
          *(undefined4 *)(param_1[4] + 0xb8) = 3;
        }
      }
      uVar6 = 0;
    }
  }
  return uVar6;
}

