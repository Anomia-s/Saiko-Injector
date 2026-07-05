/**
 * Function: invalid_lengthd
 * Address:  140bc62f0
 * Signature: undefined invalid_lengthd(void)
 * Body size: 261 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void invalid_lengthd(undefined1 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined *puVar5;
  undefined1 auStack_88 [32];
  uint local_68;
  uint local_60;
  uint local_58;
  undefined1 local_48 [40];
  ulonglong local_20;
  
  local_20 = DAT_1414ef3c0 ^ (ulonglong)auStack_88;
  iVar1 = 0;
  if (param_2 == 4) {
    local_58 = (uint)(byte)param_1[3];
    local_60 = (uint)(byte)param_1[2];
    local_68 = (uint)(byte)param_1[1];
    FUN_140c07aa0(local_48,0x28,"%d.%d.%d.%d",*param_1);
  }
  else if (param_2 == 0x10) {
    puVar3 = local_48;
    iVar2 = 8;
    iVar4 = 0x28;
    do {
      iVar2 = iVar2 + -1;
      if (iVar1 < 0) break;
      puVar5 = &DAT_1413a665c;
      if (0 < iVar2) {
        puVar5 = &DAT_1413a6c4c;
      }
      iVar1 = FUN_140c07aa0(puVar3,(longlong)iVar4,puVar5,CONCAT11(*param_1,param_1[1]));
      param_1 = param_1 + 2;
      puVar3 = puVar3 + iVar1;
      iVar4 = iVar4 - iVar1;
    } while (0 < iVar2);
  }
  else {
    FUN_140c07aa0(local_48,0x28,"<invalid length=%d>",param_2);
  }
  FUN_140b8c830(local_48,"crypto\\x509\\v3_utl.c",0x445);
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_20 ^ (ulonglong)auStack_88);
}

