/**
 * Function: quic_write_nonblocking_epw
 * Address:  140bc98a0
 * Signature: undefined quic_write_nonblocking_epw(void)
 * Body size: 1125 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
quic_write_nonblocking_epw
          (undefined8 param_1,longlong param_2,longlong *param_3,ulonglong param_4,longlong *param_5
          )

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  char *pcVar8;
  uint uVar9;
  undefined8 in_stack_ffffffffffffff58;
  undefined8 uVar10;
  undefined4 uVar11;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  undefined4 local_78;
  ulonglong local_70;
  longlong local_68 [3];
  longlong local_50;
  longlong local_48;
  int local_40;
  int local_34;
  undefined8 uStack_30;
  
  plVar3 = param_5;
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
  uStack_30 = 0x140bc98c7;
  uVar7 = 0;
  *param_5 = 0;
  uVar9 = 0;
  if (param_3 == (longlong *)0x0) {
    iVar4 = qc_try_create_default_xso_for_write(param_1,local_68,3);
    if (iVar4 == 0) {
      return 0;
    }
    uVar6 = FUN_140b77290(*(undefined8 *)(local_68[0] + 0x58));
    FUN_140c20b60(uVar6);
    local_34 = 1;
    if (local_40 == 0) {
      if (local_50 != 0) {
        *(undefined4 *)(local_50 + 0x128) = 0;
      }
      goto LAB_140bc9925;
    }
    if (local_48 != 0) {
      *(undefined4 *)(local_48 + 0xb8) = 0;
      goto LAB_140bc9925;
    }
  }
  else {
    iVar4 = qc_try_create_default_xso_for_write(param_1,local_68,0x6a);
    if (iVar4 == 0) {
      return 0;
    }
LAB_140bc9925:
    if (local_48 != 0) {
      uVar9 = *(uint *)(local_48 + 0xa8) & 1;
    }
  }
  if ((param_4 & 0xfffffffe) == 0) {
    if (((*(byte *)(local_50 + 0x100) & 0x20) != 0) ||
       (iVar4 = FUN_140c504f0(*(undefined8 *)(local_50 + 0xa0)), iVar4 != 0)) {
      uVar6 = 0xb14;
      uVar10 = CONCAT44(uVar11,0xcf);
      goto LAB_140bc9cb4;
    }
    iVar4 = failed_to_start_channel(local_68);
    uVar5 = 0;
    if (iVar4 < 1) goto LAB_140bc9ccd;
    if (param_3 == (longlong *)0x0) {
      if ((param_4 & 1) != 0) {
        uVar9 = *(uint *)(local_68[0] + 0x70);
        lVar1 = local_68[0];
        while ((uVar9 = uVar9 >> 5 & 3, uVar9 == 0 &&
               (lVar1 = *(longlong *)(lVar1 + 0x40), lVar1 != 0))) {
          uVar9 = *(uint *)(lVar1 + 0x70);
        }
        FUN_140c56d60(*(undefined8 *)(*(longlong *)(local_48 + 0x80) + 0x70));
        if (uVar9 != 2) {
          uVar6 = FUN_140c50410(*(undefined8 *)(*(longlong *)(local_48 + 0x78) + 0xa0));
          FUN_140c4d9c0(uVar6,0);
        }
      }
LAB_140bc9c9d:
      uVar5 = 1;
      goto LAB_140bc9ccd;
    }
    iVar4 = FUN_140bcb8f0(local_48,&param_5);
    if (iVar4 == 0) {
      uVar6 = 0xb23;
      uVar10 = CONCAT44(uVar11,param_5._0_4_);
      goto LAB_140bc9cb4;
    }
    iVar4 = FUN_140bc8b80(local_68[0]);
    lVar1 = local_48;
    if (iVar4 != 0) {
      param_5 = (longlong *)0x0;
      iVar4 = FUN_140bcc570(local_48,param_2,param_3,&param_5);
      if (iVar4 == 0) {
        uVar6 = 0xa15;
        uVar10 = CONCAT44(uVar11,0xc0103);
        *plVar3 = 0;
LAB_140bc9a32:
        uVar5 = FUN_140bcba90(local_68,"ssl\\quic\\quic_impl.c",uVar6,"quic_write_blocking",uVar10,0
                             );
      }
      else {
        uVar6 = CONCAT44(uVar11,1);
        FUN_140bcc4c0(local_48,param_5 != (longlong *)0x0,param_5 == param_3,param_4,uVar6);
        uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
        *plVar3 = (longlong)param_5;
        if (param_5 != param_3) {
          local_90 = (longlong)param_5 + param_2;
          local_98 = local_48;
          local_88 = (longlong)param_3 - (longlong)param_5;
          local_80 = 0;
          local_78 = 0xc0103;
          uVar6 = *(undefined8 *)(local_68[0] + 0x58);
          local_70 = param_4;
          FUN_140c4e130(uVar6,0);
          uVar6 = FUN_140c4e150(uVar6);
          iVar4 = FUN_140c4da80(uVar6,FUN_140bcc640,&local_98,0);
          if (iVar4 < 1) {
            lVar1 = *(longlong *)(local_48 + 0x78);
            if ((((*(byte *)(lVar1 + 0x100) & 0x20) == 0) &&
                (iVar4 = FUN_140c504f0(*(undefined8 *)(lVar1 + 0xa0)), iVar4 == 0)) &&
               (iVar4 = FUN_140c50530(*(undefined8 *)(lVar1 + 0xa0)), iVar4 != 0)) {
              uVar6 = 0xa35;
              uVar10 = CONCAT44(uVar7,local_78);
            }
            else {
              uVar6 = 0xa33;
              uVar10 = CONCAT44(uVar7,0xcf);
            }
            goto LAB_140bc9a32;
          }
          *plVar3 = *plVar3 + local_80;
        }
        uVar5 = 1;
      }
      goto LAB_140bc9ccd;
    }
    if (uVar9 == 0) {
      uVar5 = quic_write_nonblocking_aon(local_68,param_2,param_3,param_4,plVar3);
      goto LAB_140bc9ccd;
    }
    iVar4 = FUN_140bcc570(local_48,param_2,param_3,plVar3);
    if (iVar4 != 0) {
      uVar9 = *(uint *)(local_68[0] + 0x70);
      lVar2 = local_68[0];
      while ((uVar9 = uVar9 >> 5 & 3, uVar9 == 0 &&
             (lVar2 = *(longlong *)(lVar2 + 0x40), lVar2 != 0))) {
        uVar9 = *(uint *)(lVar2 + 0x70);
      }
      FUN_140bcc4c0(lVar1,(longlong *)*plVar3 != (longlong *)0x0,(longlong *)*plVar3 == param_3,
                    param_4,CONCAT44(uVar11,(uint)(uVar9 != 2)));
      if (*plVar3 == 0) {
        uVar5 = uVar7;
        if (local_34 != 0) {
          if (local_40 == 0) {
            if (local_50 != 0) {
              *(undefined4 *)(local_50 + 0x128) = 3;
            }
          }
          else if (local_48 != 0) {
            *(undefined4 *)(local_48 + 0xb8) = 3;
          }
        }
        goto LAB_140bc9ccd;
      }
      goto LAB_140bc9c9d;
    }
    pcVar8 = "quic_write_nonblocking_epw";
    uVar10 = CONCAT44(uVar11,0xc0103);
    uVar6 = 0xabd;
    *plVar3 = 0;
  }
  else {
    uVar6 = 0xb0f;
    uVar10 = CONCAT44(uVar11,0x19c);
LAB_140bc9cb4:
    pcVar8 = "ossl_quic_write_flags";
  }
  uVar5 = FUN_140bcba90(local_68,"ssl\\quic\\quic_impl.c",uVar6,pcVar8,uVar10,0);
LAB_140bc9ccd:
  uVar6 = FUN_140b77290(*(undefined8 *)(local_68[0] + 0x58));
  FUN_140c20b80(uVar6);
  return uVar5;
}

