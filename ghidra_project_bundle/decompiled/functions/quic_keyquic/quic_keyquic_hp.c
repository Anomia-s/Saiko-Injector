/**
 * Function: quic_keyquic_hp
 * Address:  140d05c20
 * Signature: undefined quic_keyquic_hp(void)
 * Body size: 926 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void quic_keyquic_hp(longlong param_1,uint param_2,char param_3,ulonglong param_4,undefined8 param_5
                    ,ulonglong param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined1 auStack_f8 [32];
  char *local_d8;
  ulonglong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  char *local_b8;
  ulonglong local_b0;
  undefined4 local_a8;
  undefined8 local_98;
  char local_88 [64];
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_f8;
  local_98 = param_5;
  if (param_2 < 4) {
    lVar6 = 0;
    lVar7 = 0;
    param_1 = (ulonglong)param_2 * 0xd0 + param_1;
    if ((param_1 != 0) && (param_4 < 2)) {
      if ((param_3 == '\x01') || (param_3 == '\x02')) {
        if ((param_2 == 3) || (param_4 == 0)) goto LAB_140d05cce;
      }
      else if ((param_3 == '\x03') && (param_4 == (*(uint *)(param_1 + 0x50) & 1))) {
LAB_140d05cce:
        lVar5 = FUN_140cc7860(*(undefined4 *)(param_1 + 0x60));
        uVar1 = FUN_140cc7930(*(undefined4 *)(param_1 + 0x60));
        uVar2 = FUN_140cc7900(*(undefined4 *)(param_1 + 0x60));
        if (lVar5 == 0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("ssl\\quic\\quic_record_shared.c",0x7e,"el_setup_keyslot");
          FUN_140b91cc0(0x14,0xc0103,0);
          goto LAB_140d05f16;
        }
        uVar3 = FUN_140cc78d0(*(undefined4 *)(param_1 + 0x60));
        if ((param_6 != uVar3) || (0x40 < param_6)) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("ssl\\quic\\quic_record_shared.c",0x84,"el_setup_keyslot");
          FUN_140b91cc0(0x14,0xc0103,0);
          goto LAB_140d05f16;
        }
        local_a8 = 1;
        pcVar9 = (char *)(param_4 * 0x10 + 0x6a + param_1);
        local_c0 = 0;
        local_c8 = 0;
        local_d0 = 7;
        local_d8 = "quic iv";
        local_b8 = pcVar9;
        local_b0 = (ulonglong)uVar1;
        iVar4 = FUN_140bbb470(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                              *(undefined8 *)(param_1 + 0x28),local_98);
        if (iVar4 != 0) {
          local_b8 = local_88;
          local_a8 = 1;
          local_c0 = 0;
          local_c8 = 0;
          local_d0 = 8;
          local_d8 = "quic keyquic hp";
          local_b0 = (ulonglong)uVar2;
          iVar4 = FUN_140bbb470(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                                *(undefined8 *)(param_1 + 0x28),local_98);
          if (iVar4 != 0) {
            lVar6 = FUN_140b84390(*(undefined8 *)(param_1 + 0x40),lVar5,
                                  *(undefined8 *)(param_1 + 0x48));
            if (lVar6 == 0) {
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              uVar8 = 0xa0;
LAB_140d05e46:
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("ssl\\quic\\quic_record_shared.c",uVar8,"el_setup_keyslot");
              uVar8 = 0x80006;
            }
            else {
              lVar7 = FUN_140b857c0();
              if (lVar7 == 0) {
                d_aplatformplatformopenssl_srccryptoerrerr_lo();
                uVar8 = 0xa5;
                goto LAB_140d05e46;
              }
              iVar4 = FUN_140b97eb0(lVar6);
              if (((ulonglong)uVar1 == (longlong)iVar4) &&
                 (iVar4 = FUN_140b97ea0(lVar6), (ulonglong)uVar2 == (longlong)iVar4)) {
                local_d0 = local_d0 & 0xffffffff00000000;
                local_d8 = pcVar9;
                iVar4 = FUN_140b85520(lVar7,lVar6,0,local_88);
                if (iVar4 != 0) {
                  *(longlong *)(param_1 + 0x30 + param_4 * 8) = lVar7;
                  FUN_14046e980(local_88,0x40);
                  FUN_140b843f0(lVar6);
                  goto LAB_140d05f16;
                }
                d_aplatformplatformopenssl_srccryptoerrerr_lo();
                uVar8 = 0xb1;
                goto LAB_140d05e46;
              }
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("ssl\\quic\\quic_record_shared.c",0xab,"el_setup_keyslot");
              uVar8 = 0xc0103;
            }
            FUN_140b91cc0(0x14,uVar8,0);
          }
        }
        FUN_140b858e0(lVar7);
        FUN_140b843f0(lVar6);
        FUN_14046e980(pcVar9,0x10);
        FUN_14046e980(local_88,0x40);
        goto LAB_140d05f16;
      }
    }
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo
            ("ssl\\quic\\quic_record_shared.c",0x76,"el_setup_keyslot");
  FUN_140b91cc0(0x14,0x80106,0);
LAB_140d05f16:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_f8);
}

