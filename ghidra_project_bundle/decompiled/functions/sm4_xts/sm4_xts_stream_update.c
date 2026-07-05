/**
 * Function: sm4_xts_stream_update
 * Address:  140d148b0
 * Signature: undefined sm4_xts_stream_update(void)
 * Body size: 428 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
sm4_xts_stream_update
          (longlong param_1,longlong param_2,ulonglong *param_3,ulonglong param_4,longlong param_5,
          ulonglong param_6)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 in_stack_ffffffffffffffe0;
  undefined4 uVar6;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffe0 >> 0x20);
  if (param_4 < param_6) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\ciphers\\cipher_sm4_xts.c",0xab,"sm4_xts_stream_update")
    ;
    uVar4 = 0x6a;
  }
  else {
    iVar2 = FUN_140b69250();
    if ((((iVar2 != 0) && (*(longlong *)(param_1 + 0x1c8) != 0)) &&
        (*(longlong *)(param_1 + 0x1d0) != 0)) &&
       ((((*(uint *)(param_1 + 0x6c) & 4) != 0 && (param_2 != 0)) &&
        ((param_5 != 0 && (0xf < param_6)))))) {
      if (param_6 < 0x1000001) {
        uVar3 = *(uint *)(param_1 + 0x6c) >> 1;
        lVar1 = param_1 + 0x20;
        if (*(int *)(param_1 + 0x1c0) == 0) {
          pcVar5 = *(code **)(param_1 + 0x1e8);
          if (pcVar5 != (code *)0x0) goto LAB_140d14a0b;
          iVar2 = FUN_140d9a760(param_1 + 0x1c8,lVar1,param_5,param_2,param_6,
                                CONCAT44(uVar6,uVar3) & 0xffffffff00000001);
        }
        else {
          pcVar5 = *(code **)(param_1 + 0x1f0);
          if (pcVar5 != (code *)0x0) {
LAB_140d14a0b:
            (*pcVar5)(param_5,param_2,param_6,*(longlong *)(param_1 + 0x1c8),
                      *(longlong *)(param_1 + 0x1d0),lVar1,uVar3 & 1);
            *param_3 = param_6;
            return 1;
          }
          iVar2 = FUN_140c1f0f0(param_1 + 0x1c8,lVar1,param_5,param_2,param_6,
                                CONCAT44(uVar6,uVar3) & 0xffffffff00000001);
        }
        if (iVar2 == 0) {
          *param_3 = param_6;
          return 1;
        }
      }
      else {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("providers\\implementations\\ciphers\\cipher_sm4_xts.c",0x8e,"sm4_xts_cipher");
        FUN_140b91cc0(0x39,0x94,0);
      }
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("providers\\implementations\\ciphers\\cipher_sm4_xts.c",0xb0,"sm4_xts_stream_update")
    ;
    uVar4 = 0x66;
  }
  FUN_140b91cc0(0x39,uVar4,0);
  return 0;
}

