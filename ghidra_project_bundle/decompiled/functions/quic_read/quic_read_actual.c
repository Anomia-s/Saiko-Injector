/**
 * Function: quic_read_actual
 * Address:  140bcc970
 * Signature: undefined quic_read_actual(void)
 * Body size: 587 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void quic_read_actual(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                     longlong *param_5,int param_6)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 auStack_98 [32];
  int *local_78;
  undefined8 local_70;
  int local_68 [2];
  undefined8 local_60 [4];
  ulonglong local_40;
  undefined8 uStack_38;
  
  uStack_38 = 0x140bcc983;
  local_40 = DAT_1414ef3c0 ^ (ulonglong)auStack_98;
  lVar2 = *(longlong *)(param_1 + 0x20);
  lVar3 = *(longlong *)(param_1 + 0x18);
  local_68[0] = 0;
  if ((lVar2 == 0) || (*(longlong *)(lVar2 + 0x80) == 0)) {
    uVar5 = 0xc0103;
    goto LAB_140bccb89;
  }
  switch(*(undefined1 *)(*(longlong *)(lVar2 + 0x80) + 0x102)) {
  default:
    uVar5 = 0x17b;
    break;
  case 1:
  case 2:
  case 3:
    local_78 = local_68;
    if (param_6 == 0) {
      iVar4 = FUN_140c572d0(*(undefined8 *)(param_2 + 0x78),param_3,param_4,param_5);
      if (iVar4 != 0) {
        if (*param_5 != 0) {
          uVar6 = FUN_140c50440(*(undefined8 *)(lVar3 + 0xa0));
          FUN_140c4eb50(uVar6,local_60);
          iVar4 = FUN_140c56280(param_2 + 0xa0,*param_5,local_60[0]);
          if (iVar4 == 0) {
            uVar6 = 0xba1;
            local_78 = (int *)CONCAT44(local_78._4_4_,0xc0103);
            goto LAB_140bccb98;
          }
        }
        if (local_68[0] != 0) {
          uVar6 = FUN_140c50430(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0xa0));
          FUN_140c58490(uVar6,*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x80));
        }
        lVar2 = 0;
        if (*param_5 != 0) {
          uVar6 = FUN_140c50430(*(undefined8 *)(lVar3 + 0xa0));
          FUN_140c57f60(uVar6,param_2);
          goto LAB_140bccb25;
        }
        goto LAB_140bccb28;
      }
      uVar6 = 0xb90;
      local_78 = (int *)CONCAT44(local_78._4_4_,0xc0103);
    }
    else {
      iVar4 = FUN_140c573b0();
      if (iVar4 != 0) {
LAB_140bccb25:
        lVar2 = *param_5;
LAB_140bccb28:
        if ((lVar2 != 0) || (local_68[0] == 0)) goto LAB_140bccbae;
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x20) + 0x88);
        *puVar1 = *puVar1 | 1;
        goto LAB_140bccb3c;
      }
      uVar6 = 0xb8b;
      local_78 = (int *)CONCAT44(local_78._4_4_,0xc0103);
    }
    goto LAB_140bccb98;
  case 4:
    *(uint *)(lVar2 + 0x88) = *(uint *)(lVar2 + 0x88) | 1;
LAB_140bccb3c:
    if (*(int *)(param_1 + 0x34) != 0) {
      if (*(int *)(param_1 + 0x28) == 0) {
        if (*(longlong *)(param_1 + 0x18) != 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x128) = 6;
        }
      }
      else if (*(longlong *)(param_1 + 0x20) != 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0xb8) = 6;
      }
    }
    goto LAB_140bccbae;
  case 5:
    uVar6 = FUN_140c50430(*(undefined8 *)(*(longlong *)(lVar2 + 0x78) + 0xa0));
    FUN_140c585e0(uVar6,*(undefined8 *)(lVar2 + 0x80));
  case 6:
    uVar5 = 0x177;
  }
LAB_140bccb89:
  uVar6 = 0xb84;
  local_78 = (int *)CONCAT44(local_78._4_4_,uVar5);
LAB_140bccb98:
  local_70 = 0;
  FUN_140bcba90(param_1,"ssl\\quic\\quic_impl.c",uVar6,"quic_read_actual");
LAB_140bccbae:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_40 ^ (ulonglong)auStack_98);
}

