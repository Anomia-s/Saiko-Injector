/**
 * Function: bio_callback_ctrl
 * Address:  140b74330
 * Signature: undefined bio_callback_ctrl(void)
 * Body size: 399 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 bio_callback_ctrl(longlong param_1,int param_2,undefined8 param_3)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 local_res18;
  
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  local_res18 = param_3;
  if (((*(longlong *)(param_1 + 8) == 0) || (*(longlong *)(*(longlong *)(param_1 + 8) + 0x58) == 0))
     || (param_2 != 0xe)) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\bio\\bio_lib.c",0x2b6,"BIO_callback_ctrl");
    FUN_140b91cc0(0x20,0x79,0);
    return 0xfffffffe;
  }
  plVar1 = (longlong *)(param_1 + 0x18);
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    if (*plVar1 == 0) goto LAB_140b743fb;
    pcVar2 = (code *)*plVar1;
LAB_140b743a9:
    uVar3 = (*pcVar2)(param_1,6,&local_res18,0,0xe,0,1,0);
  }
  else {
    pcVar2 = *(code **)(param_1 + 0x18);
    if (pcVar2 != (code *)0x0) goto LAB_140b743a9;
    uVar3 = (**(code **)(param_1 + 0x10))(param_1,6,&local_res18,0xe,0,1);
  }
  if ((int)uVar3 < 1) {
    return uVar3;
  }
LAB_140b743fb:
  uVar3 = (**(code **)(*(longlong *)(param_1 + 8) + 0x58))(param_1,0xe,local_res18);
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    if (*plVar1 == 0) {
      return uVar3;
    }
    pcVar2 = (code *)*plVar1;
  }
  else {
    pcVar2 = (code *)*plVar1;
    if (pcVar2 == (code *)0x0) {
      uVar3 = (**(code **)(param_1 + 0x10))(param_1,0x86,&local_res18,0xe,0,(int)uVar3);
      return uVar3;
    }
  }
  uVar3 = (*pcVar2)(param_1,0x86,&local_res18,0,0xe,0,(int)uVar3,0);
  return uVar3;
}

