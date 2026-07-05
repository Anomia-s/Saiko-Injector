/**
 * Function: pcounter_dn
 * Address:  140c11e10
 * Signature: undefined pcounter_dn(void)
 * Body size: 574 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool pcounter_dn(undefined8 param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  char *pcVar6;
  
  if (*(int *)((longlong)param_2 + 0x34) == 0) {
    iVar2 = sssllu_s0xllxn(param_1,"P:   ",*param_2);
    if ((iVar2 != 0) &&
       ((((param_2[1] == 0 || (iVar2 = sssllu_s0xllxn(param_1,"Q:   "), iVar2 != 0)) &&
         (iVar2 = sssllu_s0xllxn(param_1,"G:   ",param_2[2]), iVar2 != 0)) &&
        ((param_2[3] == 0 || (iVar2 = sssllu_s0xllxn(param_1,"J:   "), iVar2 != 0)))))) {
      lVar4 = param_2[4];
      uVar5 = 0;
      if (lVar4 != 0) {
        uVar1 = param_2[5];
        iVar2 = FUN_140c078a0(param_1,&DAT_1413a722c,"SEED:");
        if (iVar2 < 1) {
          return false;
        }
        if (uVar1 != 0) {
          do {
            if (uVar5 == (uVar5 / 0xf) * 0xf) {
              if ((uVar5 != 0) && (iVar2 = FUN_140c078a0(param_1,&DAT_1413a7288), iVar2 < 1)) {
                return false;
              }
              iVar2 = FUN_140c078a0(param_1,&DAT_1413a71e8);
              if (iVar2 < 1) {
                return false;
              }
            }
            pcVar6 = ":";
            if (uVar5 == uVar1 - 1) {
              pcVar6 = "";
            }
            iVar2 = FUN_140c078a0(param_1,"%02x%s",*(undefined1 *)(lVar4 + uVar5),pcVar6);
            if (iVar2 < 1) {
              return false;
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar1);
        }
        iVar2 = FUN_140c078a0(param_1,&DAT_1413a7288);
        if (iVar2 < 1) {
          return false;
        }
      }
      if (((*(int *)(param_2 + 7) == -1) ||
          (iVar2 = FUN_140c078a0(param_1,"gindex: %d\n"), 0 < iVar2)) &&
         ((*(int *)(param_2 + 6) == -1 ||
          (iVar2 = FUN_140c078a0(param_1,"pcounter: %d\n"), 0 < iVar2)))) {
        if (*(int *)((longlong)param_2 + 0x3c) == 0) {
          return true;
        }
        iVar2 = FUN_140c078a0(param_1,"h: %d\n");
        return 0 < iVar2;
      }
    }
  }
  else {
    uVar3 = FUN_140c945f0();
    lVar4 = FUN_140b76060(uVar3);
    if (lVar4 != 0) {
      iVar2 = FUN_140c078a0(param_1,"GROUP: %s\n",lVar4);
      return 0 < iVar2;
    }
  }
  return false;
}

