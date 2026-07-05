/**
 * Function: public_key_d_bitn
 * Address:  140c97370
 * Signature: undefined public_key_d_bitn(void)
 * Body size: 326 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong public_key_d_bitn(undefined8 param_1,longlong param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  char *pcVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  
  uVar8 = 0x140c97392;
  uVar3 = 0;
  uVar4 = uVar3;
  if (*(longlong *)(param_2 + 8) != 0) {
    uVar1 = FUN_140c0aa20(param_2);
    uVar4 = (ulonglong)uVar1;
  }
  if (param_4 == 2) {
    uVar7 = *(ulonglong *)(param_2 + 0x70);
LAB_140c973cd:
    uVar6 = *(ulonglong *)(param_2 + 0x68);
    if (param_4 == 2) {
      pcVar5 = "Private-Key";
      goto LAB_140c973f7;
    }
    if (param_4 == 1) {
      pcVar5 = "Public-Key";
      goto LAB_140c973f7;
    }
  }
  else {
    uVar6 = uVar3;
    uVar7 = uVar3;
    if (0 < param_4) goto LAB_140c973cd;
  }
  pcVar5 = "DSA-Parameters";
LAB_140c973f7:
  if (uVar7 == 0) {
    iVar2 = FUN_140c078a0(param_1,"Public-Key: (%d bit)\n",uVar4);
  }
  else {
    iVar2 = FUN_140b73ea0(param_1,param_3,0x80);
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = FUN_140c078a0(param_1,"%s: (%d bit)\n",pcVar5,uVar4);
  }
  uVar4 = 0;
  if (((0 < iVar2) &&
      (iVar2 = s_slu_s0xlxn(param_1,"priv:",uVar7,0,param_3,uVar8), uVar4 = uVar3, iVar2 != 0)) &&
     (iVar2 = s_slu_s0xlxn(param_1,"pub: ",uVar6,0,param_3,uVar8), uVar4 = 0, iVar2 != 0)) {
    iVar2 = subgroup_factor(param_1,(longlong *)(param_2 + 8),param_3);
    uVar4 = 0;
    if (iVar2 != 0) {
      uVar4 = 1;
    }
  }
  return uVar4;
}

