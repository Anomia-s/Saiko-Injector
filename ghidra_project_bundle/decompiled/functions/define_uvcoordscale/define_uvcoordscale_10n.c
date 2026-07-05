/**
 * Function: define_uvcoordscale_10n
 * Address:  140635570
 * Signature: undefined define_uvcoordscale_10n(void)
 * Body size: 462 bytes
 */


bool define_uvcoordscale_10n(undefined8 *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  bool bVar6;
  undefined1 auStack_68 [46];
  undefined1 local_3a [10];
  ulonglong local_30;
  
  local_30 = DAT_1414ef3c0 ^ (ulonglong)auStack_68;
  if (param_2 == 0) {
    bVar6 = true;
  }
  else {
    (*(code *)*param_1)();
    cVar2 = *(char *)(param_1 + 0xf);
    uVar3 = (*(code *)param_1[3])();
    *param_3 = uVar3;
    uVar3 = (*(code *)param_1[4])(0x8b31);
    param_3[1] = uVar3;
    cVar1 = failed_to_compile_shader
                      (param_1,uVar3,&DAT_1413a2ad6,
                       *(undefined8 *)(&DAT_1412039b0 + (longlong)param_2 * 0x10));
    if (cVar1 != '\0') {
      pcVar5 = "#define UVCoordScale 1.0\n";
      if (cVar2 != '\0') {
        pcVar5 = 
        "#define sampler2D sampler2DRect\n#define texture2D texture2DRect\n#define UVCoordScale 0.5\n"
        ;
      }
      uVar3 = (*(code *)param_1[4])(0x8b30);
      param_3[2] = uVar3;
      cVar2 = failed_to_compile_shader
                        (param_1,uVar3,pcVar5,
                         *(undefined8 *)(&DAT_1412039b8 + (longlong)param_2 * 0x10));
      if (cVar2 != '\0') {
        (*(code *)param_1[1])(*param_3,param_3[1]);
        (*(code *)param_1[1])(*param_3,param_3[2]);
        (*(code *)param_1[9])(*param_3);
        (*(code *)param_1[0xe])(*param_3);
        FUN_1400fd420(local_3a,10,"tex%d",0);
        iVar4 = (*(code *)param_1[8])(*param_3,local_3a);
        if (-1 < iVar4) {
          (*(code *)param_1[0xb])(iVar4,0);
        }
        FUN_1400fd420(local_3a,10,"tex%d",1);
        iVar4 = (*(code *)param_1[8])(*param_3,local_3a);
        if (-1 < iVar4) {
          (*(code *)param_1[0xb])(iVar4,1);
        }
        FUN_1400fd420(local_3a,10,"tex%d",2);
        iVar4 = (*(code *)param_1[8])(*param_3,local_3a);
        if (-1 < iVar4) {
          (*(code *)param_1[0xb])(iVar4,2);
        }
        FUN_1400fd420(local_3a,10,"tex%d",3);
        iVar4 = (*(code *)param_1[8])(*param_3,local_3a);
        if (-1 < iVar4) {
          (*(code *)param_1[0xb])(iVar4,3);
        }
        (*(code *)param_1[0xe])(0);
        iVar4 = (*(code *)*param_1)();
        bVar6 = iVar4 == 0;
        goto LAB_140635712;
      }
    }
    bVar6 = false;
  }
LAB_140635712:
  if (DAT_1414ef3c0 == (local_30 ^ (ulonglong)auStack_68)) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_30 ^ (ulonglong)auStack_68);
}

