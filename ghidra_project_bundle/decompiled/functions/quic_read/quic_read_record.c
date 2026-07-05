/**
 * Function: quic_read_record
 * Address:  140bad540
 * Signature: undefined quic_read_record(void)
 * Body size: 380 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void quic_read_record(longlong *param_1,undefined8 *param_2,undefined4 *param_3,undefined1 *param_4,
                     undefined8 param_5,longlong *param_6)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  char local_48 [4];
  undefined1 local_44;
  ulonglong local_40;
  undefined8 uStack_38;
  
  uStack_38 = 0x140bad553;
  local_40 = DAT_1414ef3c0 ^ (ulonglong)auStack_78;
  if ((param_1[8] == 0) && (param_1[9] == 0)) {
    FUN_140b73030(param_1[2],0xf);
    iVar2 = (**(code **)(*param_1 + 0x18))(param_5,param_6,*(undefined8 *)(*param_1 + 0x20));
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 7) = 0x50;
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\quic\\quic_tls.c",0x176,"quic_read_record");
      FUN_140b91cc0(0x14,0xc0103,0);
      *(uint *)(*param_1 + 0xa8) = *(uint *)(*param_1 + 0xa8) | 2;
    }
    else if (*param_6 == 0) {
      FUN_140b73010(param_1[2],9);
    }
    else {
      *param_2 = param_1;
      *param_3 = 0x304;
      *param_4 = 0x16;
      lVar1 = *param_6;
      param_1[9] = lVar1;
      param_1[8] = lVar1;
      if ((code *)param_1[10] != (code *)0x0) {
        local_48[1] = '\x03';
        local_48[2] = '\x03';
        local_48[0] = ((int)param_1[1] != 0) + '\x16';
        local_48[3] = *(undefined1 *)((longlong)param_6 + 1);
        local_44 = (undefined1)*param_6;
        local_50 = param_1[0xb];
        local_58 = 5;
        (*(code *)param_1[10])(0,0x304,0x100,local_48);
        local_50 = param_1[0xb];
        local_58 = 1;
        (*(code *)param_1[10])(0,0x304,0x101,param_4);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_40 ^ (ulonglong)auStack_78);
}

