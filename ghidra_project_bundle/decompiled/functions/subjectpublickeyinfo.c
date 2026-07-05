/**
 * Function: subjectpublickeyinfo
 * Address:  140d6ee10
 * Signature: undefined subjectpublickeyinfo(void)
 * Body size: 586 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void subjectpublickeyinfo
               (undefined8 param_1,int param_2,undefined8 param_3,code *param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_1e8 [32];
  longlong local_1c8;
  undefined4 local_1b8 [2];
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined1 local_198 [48];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined4 local_78 [14];
  ulonglong local_40;
  
  local_40 = DAT_1414ef3c0 ^ (ulonglong)auStack_1e8;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1b8[0] = 2;
  local_1a0 = param_1;
  lVar2 = cryptox509x_pubkeyc(&local_1a0,param_2,param_8,param_9);
  if ((lVar2 != 0) && (local_1c8 = lVar2, iVar1 = FUN_140b9df40(0,0,0,&local_1b0), iVar1 != 0)) {
    FUN_140bdf8f0(&local_1a8,0,0,local_1b0);
    iVar1 = FUN_140b964c0(local_1a8);
    if ((iVar1 == 0x198) && (iVar1 = FUN_140c14990(local_1b0), iVar1 != 0)) {
      local_78[0] = 0x324d53;
    }
    else {
      iVar1 = FUN_140b96640(local_78,0x32,local_1a8,0);
      if (iVar1 < 1) goto LAB_140d6f041;
    }
    FUN_140b9e020(lVar2);
    lVar2 = 0;
    puVar3 = (undefined8 *)FUN_140b93780(local_198,"data-type",local_78,0);
    local_168 = *puVar3;
    uStack_160 = puVar3[1];
    local_158 = *(undefined4 *)(puVar3 + 2);
    uStack_154 = *(undefined4 *)((longlong)puVar3 + 0x14);
    uStack_150 = *(undefined4 *)(puVar3 + 3);
    uStack_14c = *(undefined4 *)((longlong)puVar3 + 0x1c);
    local_148 = puVar3[4];
    puVar3 = (undefined8 *)FUN_140b93780(local_198,"input-type",&DAT_1413a67ac,0);
    local_140 = *puVar3;
    uStack_138 = puVar3[1];
    local_130 = *(undefined4 *)(puVar3 + 2);
    uStack_12c = *(undefined4 *)((longlong)puVar3 + 0x14);
    uStack_128 = *(undefined4 *)(puVar3 + 3);
    uStack_124 = *(undefined4 *)((longlong)puVar3 + 0x1c);
    local_120 = puVar3[4];
    puVar3 = (undefined8 *)FUN_140b93780(local_198,"data-structure","SubjectPublicKeyInfo",0);
    local_118 = *puVar3;
    uStack_110 = puVar3[1];
    local_108 = *(undefined4 *)(puVar3 + 2);
    uStack_104 = *(undefined4 *)((longlong)puVar3 + 0x14);
    uStack_100 = *(undefined4 *)(puVar3 + 3);
    uStack_fc = *(undefined4 *)((longlong)puVar3 + 0x1c);
    local_f8 = puVar3[4];
    puVar3 = (undefined8 *)FUN_140b93860(local_198,&DAT_1413a6588,param_1,(longlong)param_2);
    local_f0 = *puVar3;
    uStack_e8 = puVar3[1];
    local_e0 = *(undefined4 *)(puVar3 + 2);
    uStack_dc = *(undefined4 *)((longlong)puVar3 + 0x14);
    uStack_d8 = *(undefined4 *)(puVar3 + 3);
    uStack_d4 = *(undefined4 *)((longlong)puVar3 + 0x1c);
    local_d0 = puVar3[4];
    puVar3 = (undefined8 *)FUN_140b935b0(local_198,&DAT_1413a6260,local_1b8);
    local_c8 = *puVar3;
    uStack_c0 = puVar3[1];
    local_b8 = *(undefined4 *)(puVar3 + 2);
    uStack_b4 = *(undefined4 *)((longlong)puVar3 + 0x14);
    uStack_b0 = *(undefined4 *)(puVar3 + 3);
    uStack_ac = *(undefined4 *)((longlong)puVar3 + 0x1c);
    local_a8 = puVar3[4];
    puVar3 = (undefined8 *)FUN_140b93900(local_198);
    local_a0 = *puVar3;
    uStack_98 = puVar3[1];
    local_90 = *(undefined4 *)(puVar3 + 2);
    uStack_8c = *(undefined4 *)((longlong)puVar3 + 0x14);
    uStack_88 = *(undefined4 *)(puVar3 + 3);
    uStack_84 = *(undefined4 *)((longlong)puVar3 + 0x1c);
    local_80 = puVar3[4];
    (*param_4)(&local_168,param_5);
  }
LAB_140d6f041:
  FUN_140b9e020(lVar2);
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_40 ^ (ulonglong)auStack_1e8);
}

