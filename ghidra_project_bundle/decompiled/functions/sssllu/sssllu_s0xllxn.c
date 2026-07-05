/**
 * Function: sssllu_s0xllxn
 * Address:  140c11a60
 * Signature: undefined sssllu_s0xllxn(void)
 * Body size: 618 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void sssllu_s0xllxn(undefined8 param_1,undefined1 *param_2,longlong param_3)

{
  byte bVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  char *pcVar11;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined8 local_60;
  undefined1 *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_1414ef3c0 ^ (ulonglong)auStack_88;
  local_48 = 0x20202020;
  local_44 = 0;
  if (param_3 != 0) {
    puVar9 = &DAT_1413a2ad6;
    puVar2 = &DAT_1413a2ad6;
    if (param_2 != (undefined1 *)0x0) {
      puVar9 = &DAT_1413a71f4;
      puVar2 = param_2;
    }
    iVar3 = FUN_140bfc7d0(param_3);
    if (iVar3 == 0) {
      iVar3 = FUN_140bfc870(param_3);
      if (iVar3 + 7 < 0x48) {
        puVar7 = (undefined8 *)FUN_140b8c100();
        iVar3 = FUN_140bfcde0(param_3);
        local_68 = &DAT_1413a70b0;
        if (iVar3 == 0) {
          local_68 = &DAT_1413a2ad6;
        }
        local_60 = *puVar7;
        local_58 = local_68;
        local_50 = local_60;
        FUN_140c078a0(param_1,"%s%s%s%llu (%s0x%llx)\n",puVar2,puVar9);
      }
      else {
        pbVar8 = (byte *)FUN_140c238e0(param_3);
        if (pbVar8 != (byte *)0x0) {
          pcVar11 = " (Negative)";
          pbVar10 = pbVar8 + 1;
          if (*pbVar8 != 0x2d) {
            pcVar11 = "";
            pbVar10 = pbVar8;
          }
          iVar3 = FUN_140c078a0(param_1,"%s%s\n",puVar2,pcVar11);
          if (((0 < iVar3) && (iVar3 = FUN_140c078a0(param_1,&DAT_1413a5d54,&local_48), 0 < iVar3))
             && ((iVar3 = 0, (char)*pbVar10 < '8' ||
                 (iVar4 = FUN_140c078a0(param_1,&DAT_1413a59b0,0), iVar3 = 1, 0 < iVar4)))) {
            bVar1 = *pbVar10;
            iVar4 = iVar3;
            while (bVar1 != 0) {
              if ((iVar3 == (iVar3 / 0xf) * 0xf) && (0 < iVar3)) {
                iVar4 = FUN_140c078a0(param_1,&DAT_1413a5d4c,&local_48);
                if (iVar4 < 1) goto LAB_140c11ca1;
                iVar4 = 0;
              }
              iVar5 = tolower((uint)pbVar10[1]);
              iVar6 = tolower((uint)*pbVar10);
              local_68 = (undefined1 *)CONCAT44(local_68._4_4_,iVar5);
              pcVar11 = "";
              if (iVar4 != 0) {
                pcVar11 = ":";
              }
              iVar4 = FUN_140c078a0(param_1,"%s%c%c",pcVar11,iVar6);
              if (iVar4 < 1) goto LAB_140c11ca1;
              pbVar10 = pbVar10 + 2;
              iVar3 = iVar3 + 1;
              iVar4 = 1;
              bVar1 = *pbVar10;
            }
            FUN_140c078a0(param_1,&DAT_1413a7288);
          }
LAB_140c11ca1:
          FUN_140b8d990(pbVar8,"crypto\\encode_decode\\encoder_lib.c",0x308);
        }
      }
    }
    else {
      FUN_140c078a0(param_1,"%s%s0\n",puVar2,puVar9);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_40 ^ (ulonglong)auStack_88);
}

