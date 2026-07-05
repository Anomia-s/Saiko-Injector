/**
 * Function: s_namingauthoritytext
 * Address:  140c68a70
 * Signature: undefined s_namingauthoritytext(void)
 * Body size: 484 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void s_namingauthoritytext
               (undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  bool bVar6;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x140c68a7e;
  local_28 = DAT_1414ef3c0 ^ (ulonglong)auStack_d8;
  if ((param_2 == (longlong *)0x0) ||
     ((((*param_2 == 0 && (param_2[2] == 0)) && (param_2[1] == 0)) ||
      (iVar1 = FUN_140c078a0(param_3,"%*snamingAuthority:\n",param_4,&DAT_1413a2ad6), iVar1 < 1))))
  goto LAB_140c68c35;
  if (*param_2 != 0) {
    uVar2 = FUN_140b964c0();
    puVar3 = (undefined1 *)FUN_140b96460(uVar2);
    iVar1 = FUN_140c078a0(param_3,"%*s  namingAuthorityId: ",param_4,&DAT_1413a2ad6);
    if (iVar1 < 1) goto LAB_140c68c35;
    FUN_140b96640(local_a8,0x80,*param_2,1);
    bVar6 = puVar3 != (undefined1 *)0x0;
    local_b0 = &DAT_1413a2ad6;
    if (bVar6) {
      local_b0 = &DAT_1413a70e0;
    }
    puVar5 = &DAT_1413a2ad6;
    if (bVar6) {
      puVar5 = &DAT_1413a70e4;
    }
    local_b8 = local_a8;
    puVar4 = &DAT_1413a2ad6;
    if (bVar6) {
      puVar4 = puVar3;
    }
    iVar1 = FUN_140c078a0(param_3,"%s%s%s%s\n",puVar4,puVar5);
    if (iVar1 < 1) goto LAB_140c68c35;
  }
  if (((param_2[2] == 0) ||
      (((iVar1 = FUN_140c078a0(param_3,"%*s  namingAuthorityText: ",param_4,&DAT_1413a2ad6),
        0 < iVar1 && (iVar1 = FUN_140bdf280(param_3,param_2[2]), 0 < iVar1)) &&
       (iVar1 = FUN_140c078a0(param_3,&DAT_1413a7288), 0 < iVar1)))) &&
     (((param_2[1] != 0 &&
       (iVar1 = FUN_140c078a0(param_3,"%*s  namingAuthorityUrl: ",param_4,&DAT_1413a2ad6), 0 < iVar1
       )) && (iVar1 = FUN_140bdf280(param_3,param_2[1]), 0 < iVar1)))) {
    FUN_140c078a0(param_3,&DAT_1413a7288);
  }
LAB_140c68c35:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_28 ^ (ulonglong)auStack_d8);
}

