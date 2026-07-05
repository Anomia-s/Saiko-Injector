/**
 * Function: sju_s0xjx
 * Address:  140ba00f0
 * Signature: undefined sju_s0xjx(void)
 * Body size: 349 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int sju_s0xjx(undefined8 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  ulonglong uVar6;
  undefined1 *puVar7;
  longlong local_res10;
  ulonglong uVar5;
  
  if (*param_2 == 0) {
    iVar1 = FUN_140b73bf0(param_1," (Empty)");
  }
  else {
    FUN_140b932f0();
    iVar2 = FUN_140bd8560(&local_res10,param_2);
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    iVar1 = param_2[1];
    if (iVar2 == 0) {
      pcVar3 = "";
      if (iVar1 == 0x102) {
        pcVar3 = " (Negative)";
      }
      iVar1 = FUN_140c078a0(param_1,"\n%*s%s",param_3,&DAT_1413a2ad6,pcVar3);
      if (iVar1 < 1) {
        return -1;
      }
      uVar5 = 0;
      uVar4 = 0;
      uVar6 = uVar5;
      if (0 < *param_2 + -1) {
        do {
          iVar1 = FUN_140c078a0(param_1,"%02x%c",*(undefined1 *)(uVar6 + *(longlong *)(param_2 + 2))
                                ,0x3a,pcVar3);
          if (iVar1 < 1) {
            return -1;
          }
          uVar4 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar4;
          uVar6 = uVar6 + 1;
        } while ((int)uVar4 < *param_2 + -1);
      }
      iVar1 = FUN_140c078a0(param_1,&DAT_1413a59b0,
                            *(undefined1 *)((longlong)(int)uVar4 + *(longlong *)(param_2 + 2)));
      return (0 < iVar1) - 1;
    }
    if (iVar1 == 0x102) {
      local_res10 = -local_res10;
    }
    puVar7 = &DAT_1413a70b0;
    if (iVar1 != 0x102) {
      puVar7 = &DAT_1413a2ad6;
    }
    iVar1 = FUN_140c078a0(param_1," %s%ju (%s0x%jx)",puVar7,local_res10,puVar7,local_res10);
  }
  if (iVar1 < 1) {
    return -1;
  }
  return 0;
}

