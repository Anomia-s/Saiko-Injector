/**
 * Function: sorganization_sn
 * Address:  140c69b40
 * Signature: undefined sorganization_sn(void)
 * Body size: 596 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 sorganization_sn(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  
  iVar3 = FUN_140c078a0(param_3,"%*sUser Notices:\n",param_4,&DAT_1413a2ad6);
  if (iVar3 < 1) {
LAB_140c69d75:
    uVar6 = 0;
  }
  else {
    iVar8 = 0;
    iVar3 = FUN_140b77980(param_2);
    if (0 < iVar3) {
      param_4 = param_4 + 4;
      do {
        puVar4 = (undefined8 *)FUN_140b77990(param_2,iVar8);
        puVar1 = (undefined8 *)*puVar4;
        if (puVar1 != (undefined8 *)0x0) {
          uVar6 = *(undefined8 *)((undefined4 *)*puVar1 + 2);
          iVar3 = FUN_140c078a0(param_3,"%*sOrganization: %.*s\n",param_4,&DAT_1413a2ad6,
                                *(undefined4 *)*puVar1,uVar6);
          if (iVar3 < 1) goto LAB_140c69d75;
          iVar3 = FUN_140b77980(puVar1[1]);
          puVar7 = &DAT_1413a2ad6;
          if (1 < iVar3) {
            puVar7 = &DAT_1413a5d58;
          }
          iVar3 = FUN_140c078a0(param_3,"%*sNumber%s: ",param_4,&DAT_1413a2ad6,puVar7,uVar6);
          if (iVar3 < 1) goto LAB_140c69d75;
          iVar9 = 0;
          iVar3 = FUN_140b77980(puVar1[1]);
          if (0 < iVar3) {
            do {
              lVar5 = FUN_140b77990(puVar1[1],iVar9);
              if ((((iVar9 != 0) && (iVar3 = FUN_140b73bf0(param_3,&DAT_1413a7198), iVar3 < 1)) ||
                  ((lVar5 == 0 && (iVar3 = FUN_140b73bf0(param_3,"(null)"), iVar3 < 1)))) ||
                 (lVar5 = FUN_140bc6890(0,lVar5), lVar5 == 0)) goto LAB_140c69d75;
              iVar3 = FUN_140b73bf0(param_3,lVar5);
              if (iVar3 < 1) {
                FUN_140b8d990(lVar5,"crypto\\x509\\v3_usernotice.c",0x2f);
                goto LAB_140c69d75;
              }
              FUN_140b8d990(lVar5,"crypto\\x509\\v3_usernotice.c",0x32);
              iVar9 = iVar9 + 1;
              iVar3 = FUN_140b77980(puVar1[1]);
            } while (iVar9 < iVar3);
          }
          if ((puVar4[1] != 0) && (iVar3 = FUN_140b73bf0(param_3,&DAT_1413a7288), iVar3 < 1))
          goto LAB_140c69d75;
        }
        puVar2 = (undefined4 *)puVar4[1];
        if (puVar2 != (undefined4 *)0x0) {
          iVar3 = FUN_140c078a0(param_3,"%*sExplicit Text: %.*s",param_4,&DAT_1413a2ad6,*puVar2,
                                *(undefined8 *)(puVar2 + 2));
          if (iVar3 < 0) goto LAB_140c69d75;
        }
        iVar3 = FUN_140b73bf0(param_3,&DAT_1413a7284);
        if (iVar3 < 1) goto LAB_140c69d75;
        iVar8 = iVar8 + 1;
        iVar3 = FUN_140b77980(param_2);
      } while (iVar8 < iVar3);
    }
    uVar6 = 1;
  }
  return uVar6;
}

