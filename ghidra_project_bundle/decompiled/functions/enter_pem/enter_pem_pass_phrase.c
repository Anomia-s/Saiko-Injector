/**
 * Function: enter_pem_pass_phrase
 * Address:  140bf4530
 * Signature: undefined enter_pem_pass_phrase(void)
 * Body size: 222 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong enter_pem_pass_phrase(char *param_1,uint param_2,int param_3,char *param_4)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  ulonglong uVar4;
  uint uVar5;
  char *pcVar6;
  undefined8 uVar7;
  
  uVar7 = 0x140bf454a;
  if (param_4 == (char *)0x0) {
    pcVar3 = (char *)FUN_140c70090();
    pcVar6 = "Enter PEM pass phrase:";
    if (pcVar3 != (char *)0x0) {
      pcVar6 = pcVar3;
    }
    iVar1 = FUN_140c6ff90(param_1,-(param_3 != 0) & 4,(ulonglong)param_2,pcVar6,param_3,uVar7);
    if (iVar1 == 0) {
      uVar4 = strlen(param_1);
    }
    else {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\pem\\pem_lib.c",0x3e,"PEM_def_callback");
      FUN_140b91cc0(9,0x6d,0);
      memset(param_1,0,(ulonglong)param_2);
      uVar4 = 0xffffffff;
    }
  }
  else {
    sVar2 = strlen(param_4);
    uVar5 = (uint)sVar2;
    if ((int)param_2 < (int)(uint)sVar2) {
      uVar5 = param_2;
    }
    memcpy(param_1,param_4,(longlong)(int)uVar5);
    uVar4 = (ulonglong)uVar5;
  }
  return uVar4;
}

