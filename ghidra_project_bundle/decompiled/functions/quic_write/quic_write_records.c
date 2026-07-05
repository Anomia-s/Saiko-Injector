/**
 * Function: quic_write_records
 * Address:  140bad1d0
 * Signature: undefined quic_write_records(void)
 * Body size: 834 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void quic_write_records(longlong *param_1,char *param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  longlong local_28;
  char local_20;
  char local_1f;
  char local_1e;
  char local_1d;
  char local_1c;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x140bad1e0;
  local_18 = DAT_1414ef3c0 ^ (ulonglong)auStack_58;
  if (param_3 == 1) {
    FUN_140b73030(param_1[2],0xf);
    if ((code *)param_1[10] != (code *)0x0) {
      if ((int)param_1[1] == 0) {
        local_20 = *param_2;
      }
      else {
        local_20 = '\x17';
      }
      local_1f = param_2[5];
      local_1e = param_2[4];
      local_1d = param_2[0x11];
      local_1c = param_2[0x10];
      local_30 = param_1[0xb];
      local_38 = 5;
      (*(code *)param_1[10])(1,0x304,0x100,&local_20);
      if ((int)param_1[1] != 0) {
        local_30 = param_1[0xb];
        local_38 = 1;
        (*(code *)param_1[10])(1,0x304,0x101,param_2);
      }
    }
    if (*param_2 == '\x15') {
      if (*(longlong *)(param_2 + 0x10) == 2) {
        iVar4 = (**(code **)(*param_1 + 0x68))
                          (*(undefined8 *)(*param_1 + 0x70),
                           *(undefined1 *)(*(longlong *)(param_2 + 8) + 1));
        if (iVar4 == 0) {
          *(undefined4 *)(param_1 + 7) = 0x50;
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("ssl\\quic\\quic_tls.c",0x132,"quic_write_records");
          FUN_140b91cc0(0x14,0xc0103,0);
          *(uint *)(*param_1 + 0xa8) = *(uint *)(*param_1 + 0xa8) | 2;
        }
      }
      else {
        *(undefined4 *)(param_1 + 7) = 0x50;
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\quic\\quic_tls.c",0x128,"quic_write_records");
        FUN_140b91cc0(0x14,0x180,0);
        *(uint *)(*param_1 + 0xa8) = *(uint *)(*param_1 + 0xa8) | 2;
      }
    }
    else if (*param_2 == '\x16') {
      iVar4 = (**(code **)(*param_1 + 8))
                        (param_1[3] + *(longlong *)(param_2 + 8),
                         *(longlong *)(param_2 + 0x10) - param_1[3],&local_28,
                         *(undefined8 *)(*param_1 + 0x10));
      if (iVar4 == 0) {
        *(undefined4 *)(param_1 + 7) = 0x50;
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\quic\\quic_tls.c",0x140,"quic_write_records");
        FUN_140b91cc0(0x14,0xc0103,0);
        *(uint *)(*param_1 + 0xa8) = *(uint *)(*param_1 + 0xa8) | 2;
      }
      else {
        uVar5 = param_1[3] + local_28;
        if (uVar5 == *(ulonglong *)(param_2 + 0x10)) {
          param_1[3] = 0;
        }
        else if (uVar5 < *(ulonglong *)(param_2 + 0x10)) {
          param_1[3] = uVar5;
          uVar1 = *(undefined4 *)(param_2 + 4);
          uVar2 = *(undefined4 *)(param_2 + 8);
          uVar3 = *(undefined4 *)(param_2 + 0xc);
          *(undefined4 *)(param_1 + 4) = *(undefined4 *)param_2;
          *(undefined4 *)((longlong)param_1 + 0x24) = uVar1;
          *(undefined4 *)(param_1 + 5) = uVar2;
          *(undefined4 *)((longlong)param_1 + 0x2c) = uVar3;
          param_1[6] = *(longlong *)(param_2 + 0x10);
          FUN_140b73010(param_1[2],10);
        }
        else {
          *(undefined4 *)(param_1 + 7) = 0x50;
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("ssl\\quic\\quic_tls.c",0x149,"quic_write_records");
          FUN_140b91cc0(0x14,0xc0103,0);
          *(uint *)(*param_1 + 0xa8) = *(uint *)(*param_1 + 0xa8) | 2;
        }
      }
    }
    else {
      *(undefined4 *)(param_1 + 7) = 0x50;
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("ssl\\quic\\quic_tls.c",0x15e,"quic_write_records");
      FUN_140b91cc0(0x14,0xc0103,0);
      *(uint *)(*param_1 + 0xa8) = *(uint *)(*param_1 + 0xa8) | 2;
    }
  }
  else {
    if (param_1 != (longlong *)0x0) {
      *(undefined4 *)(param_1 + 7) = 0x50;
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\quic\\quic_tls.c",0xfc,"quic_write_records")
    ;
    FUN_140b91cc0(0x14,0xc0103,0);
    if (param_1 != (longlong *)0x0) {
      *(uint *)(*param_1 + 0xa8) = *(uint *)(*param_1 + 0xa8) | 2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_18 ^ (ulonglong)auStack_58);
}

