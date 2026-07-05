/**
 * Function: pem_write_bio
 * Address:  140bf4180
 * Signature: undefined pem_write_bio(void)
 * Body size: 633 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int pem_write_bio(undefined8 param_1,char *param_2,char *param_3,undefined8 param_4,uint param_5)

{
  int iVar1;
  longlong lVar2;
  size_t sVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  int local_48 [2];
  size_t local_40;
  
  local_40 = 0x140bf41a4;
  iVar8 = 0;
  lVar4 = 0;
  lVar9 = 0;
  lVar2 = FUN_140c70350();
  if (lVar2 == 0) {
LAB_140bf41c3:
    uVar6 = 0x80006;
  }
  else {
    FUN_140c703b0(lVar2);
    sVar3 = strlen(param_2);
    local_40 = sVar3;
    iVar1 = FUN_140b73860(param_1,"-----BEGIN ",0xb);
    if (iVar1 == 0xb) {
      iVar1 = FUN_140b73860(param_1,param_2,sVar3 & 0xffffffff);
      if (iVar1 == (int)sVar3) {
        iVar1 = FUN_140b73860(param_1,"-----\n",6);
        lVar4 = lVar9;
        if (iVar1 == 6) {
          if (param_3 != (char *)0x0) {
            sVar3 = strlen(param_3);
            if (0 < (int)sVar3) {
              iVar1 = FUN_140b73860(param_1,param_3,sVar3 & 0xffffffff);
              if (iVar1 == (int)sVar3) {
                iVar1 = FUN_140b73860(param_1,&DAT_1413a7288,1);
                if (iVar1 == 1) goto LAB_140bf427f;
              }
              goto LAB_140bf438b;
            }
          }
LAB_140bf427f:
          lVar4 = FUN_140b8d8d0(0x2000,"crypto\\pem\\pem_lib.c",0x29a);
          if (lVar4 == 0) goto LAB_140bf43bc;
          iVar8 = 0;
          for (; 0 < (int)param_5; param_5 = param_5 - uVar7) {
            uVar7 = param_5;
            if (0x1400 < param_5) {
              uVar7 = 0x1400;
            }
            iVar1 = assertion_failed_ctx_length_intsizeofctx_enc();
            if (iVar1 == 0) goto LAB_140bf41c3;
            if (local_48[0] != 0) {
              iVar1 = FUN_140b73860(param_1,lVar4,local_48[0]);
              if (iVar1 != local_48[0]) goto LAB_140bf438b;
            }
            iVar8 = iVar8 + local_48[0];
          }
          FUN_140c70540(lVar2,lVar4,local_48);
          if (0 < local_48[0]) {
            iVar1 = FUN_140b73860(param_1,lVar4);
            if (iVar1 != local_48[0]) goto LAB_140bf438b;
          }
          iVar1 = FUN_140b73860(param_1,"-----END ",9);
          if (iVar1 == 9) {
            iVar5 = (int)local_40;
            iVar1 = FUN_140b73860(param_1,param_2,local_40 & 0xffffffff);
            if (iVar1 == iVar5) {
              iVar1 = FUN_140b73860(param_1,"-----\n",6);
              if (iVar1 == 6) {
                iVar8 = local_48[0] + iVar8;
                goto LAB_140bf43bc;
              }
            }
          }
        }
      }
    }
LAB_140bf438b:
    uVar6 = 0x80020;
  }
  d_aplatformplatformopenssl_srccryptoerrerr_lo();
  d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\pem\\pem_lib.c",700,"PEM_write_bio");
  FUN_140b91cc0(9,uVar6,0);
  iVar8 = 0;
LAB_140bf43bc:
  FUN_140c70380(lVar2);
  FUN_140b8db20(lVar4,0x2000,"crypto\\pem\\pem_lib.c",0x2be);
  return iVar8;
}

