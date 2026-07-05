/**
 * Function: s_slu_s0xlxn
 * Address:  140c7f620
 * Signature: undefined s_slu_s0xlxn(void)
 * Body size: 644 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong s_slu_s0xlxn(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                      int param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  char *pcVar10;
  undefined1 *puVar11;
  char *pcVar12;
  
  uVar4 = 0;
  if (param_3 == 0) {
LAB_140c7f6b5:
    uVar4 = 1;
  }
  else {
    iVar2 = FUN_140bfcde0(param_3);
    pcVar12 = "";
    if (iVar2 != 0) {
      pcVar12 = "-";
    }
    iVar2 = FUN_140b73ea0(param_1,param_5,0x80);
    if (iVar2 != 0) {
      iVar2 = FUN_140bfc7d0(param_3);
      if (iVar2 == 0) {
        iVar2 = FUN_140bfc870(param_3);
        if (iVar2 + 7 < 0x48) {
          puVar5 = (undefined4 *)FUN_140b8c100();
          uVar1 = *puVar5;
          puVar5 = (undefined4 *)FUN_140b8c100(param_3);
          iVar2 = FUN_140c078a0(param_1,"%s %s%lu (%s0x%lx)\n",param_2,pcVar12,*puVar5,pcVar12,uVar1
                               );
          return (ulonglong)(0 < iVar2);
        }
        iVar2 = FUN_140bfc870(param_3);
        lVar6 = (longlong)(((int)(iVar2 + 7 + (iVar2 + 7 >> 0x1f & 7U)) >> 3) + 1);
        puVar7 = (undefined1 *)FUN_140b8d8d0(lVar6,"crypto\\asn1\\t_pkey.c",0x49);
        uVar9 = uVar4;
        if (puVar7 != (undefined1 *)0x0) {
          *puVar7 = 0;
          pcVar10 = "";
          if (*pcVar12 == '-') {
            pcVar10 = " (Negative)";
          }
          iVar2 = FUN_140c078a0(param_1,"%s%s\n",param_2,pcVar10);
          if (0 < iVar2) {
            iVar2 = FUN_140bfcc70(param_3,puVar7 + 1);
            if ((char)puVar7[1] < '\0') {
              iVar2 = iVar2 + 1;
              puVar11 = puVar7;
            }
            else {
              puVar11 = puVar7 + 1;
            }
            uVar8 = uVar4;
            if (iVar2 != 0) {
              do {
                if ((uVar8 == (uVar8 / 0xf) * 0xf) &&
                   (((uVar8 != 0 &&
                     (iVar3 = FUN_140b73bf0(param_1,&DAT_1413a7288), uVar9 = uVar4, iVar3 < 1)) ||
                    (iVar3 = FUN_140b73ea0(param_1,param_5 + 4,0x80), uVar9 = 0, iVar3 == 0))))
                goto LAB_140c7f86f;
                pcVar12 = ":";
                if (uVar8 == (longlong)iVar2 - 1U) {
                  pcVar12 = "";
                }
                iVar3 = FUN_140c078a0(param_1,"%02x%s",puVar11[uVar8],pcVar12);
                uVar9 = 0;
                if (iVar3 < 1) goto LAB_140c7f86f;
                uVar8 = uVar8 + 1;
              } while (uVar8 < (ulonglong)(longlong)iVar2);
            }
            iVar2 = FUN_140b73860(param_1,&DAT_1413a7288,1);
            uVar9 = 0;
            if (0 < iVar2) {
              uVar9 = 1;
            }
          }
        }
LAB_140c7f86f:
        FUN_140b8db20(puVar7,lVar6,"crypto\\asn1\\t_pkey.c",0x5b);
        return uVar9;
      }
      iVar2 = FUN_140c078a0(param_1,"%s 0\n",param_2);
      if (0 < iVar2) goto LAB_140c7f6b5;
    }
    uVar4 = 0;
  }
  return uVar4;
}

