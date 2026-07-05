/**
 * Function: connection_failed_s
 * Address:  14017f7a0
 * Signature: undefined connection_failed_s(void)
 * Body size: 1534 bytes
 */


void connection_failed_s(longlong *param_1,char param_2,float param_3,char *param_4,uint param_5,
                        uint param_6)

{
  undefined4 *puVar1;
  char cVar2;
  char cVar3;
  undefined8 *puVar4;
  size_t _Size;
  longlong lVar5;
  longlong lVar6;
  char *pcVar7;
  undefined8 *_Dst;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  uint uVar13;
  float fVar14;
  undefined1 auStack_178 [32];
  uint local_158;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  char local_118 [200];
  ulonglong local_50;
  
  local_50 = DAT_1414ef3c0 ^ (ulonglong)auStack_178;
  cVar3 = *(char *)((longlong)param_1 + 0x274);
  if (*(char *)((longlong)param_1 + 0x275) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x275) = 0;
    if (((*(char *)((longlong)param_1 + 0x276) != '\0') &&
        (cVar2 = FUN_14005c380(param_1,*(undefined2 *)((longlong)param_1 + 0x266)), cVar2 != '\0'))
       && (puVar4 = (undefined8 *)FUN_14005c560(param_1,*(undefined2 *)((longlong)param_1 + 0x266)),
          puVar4 != (undefined8 *)0x0)) {
      _Size = strlen((char *)((longlong)param_1 + 0x276));
      if ((ulonglong)puVar4[3] < _Size) {
        FUN_1400069b0(puVar4,_Size);
      }
      else {
        _Dst = puVar4;
        if (0xf < (ulonglong)puVar4[3]) {
          _Dst = (undefined8 *)*puVar4;
        }
        puVar4[2] = _Size;
        memmove(_Dst,(char *)((longlong)param_1 + 0x276),_Size);
        *(undefined1 *)((longlong)_Dst + _Size) = 0;
      }
      *(undefined1 *)((longlong)puVar4 + 0x4b) = 1;
    }
    if ((byte)(*(char *)((longlong)param_1 + 0x274) - 5U) < 2) {
      local_128 = *(undefined4 *)((longlong)param_1 + 0x23c);
      uStack_124 = (undefined4)param_1[0x48];
      uStack_120 = *(undefined4 *)((longlong)param_1 + 0x244);
      uStack_11c = (undefined4)param_1[0x49];
      cVar2 = FUN_14005c380(param_1,*(undefined2 *)((longlong)param_1 + 0x26a));
      if (cVar2 != '\0') {
        puVar4 = (undefined8 *)
                 (*param_1 + 0x2c +
                 (ulonglong)*(ushort *)((longlong)param_1 + 0x26a) * 0x80 +
                 (ulonglong)*(ushort *)((longlong)param_1 + 0x26a) * 4);
        *puVar4 = CONCAT44(uStack_124,local_128);
        puVar4[1] = CONCAT44(uStack_11c,uStack_120);
      }
    }
  }
  *(char *)((longlong)param_1 + 0x274) = param_2;
  switch(param_2) {
  case '\x01':
    *(undefined1 *)(param_1 + 0x4c) = 1;
    if (param_2 != cVar3) {
      FUN_14017f6e0(param_1,"Connecting...");
    }
    fVar14 = *(float *)((longlong)param_1 + 0x26c);
    fVar12 = (0.25 - fVar14) + (0.25 - fVar14);
    goto LAB_14017f964;
  case '\x02':
    *(undefined1 *)(param_1 + 0x4c) = 1;
    if (param_2 != cVar3) {
      FUN_14017f6e0(param_1,"Authenticating...");
    }
    fVar14 = *(float *)((longlong)param_1 + 0x26c);
    fVar12 = (0.45 - fVar14) * 3.0;
LAB_14017f964:
    fVar14 = fVar12 * param_3 + fVar14;
    fVar12 = 0.0;
    if (0.0 <= fVar14) {
      fVar12 = fVar14;
    }
    uVar13 = -(uint)(1.0 < fVar14) & 0x3f800000 | ~-(uint)(1.0 < fVar14) & (uint)fVar12;
LAB_14017fbdb:
    *(uint *)((longlong)param_1 + 0x26c) = uVar13;
    cVar3 = FUN_14005c380(param_1,*(undefined2 *)((longlong)param_1 + 0x26a));
    if (cVar3 != '\0') {
      *(undefined4 *)
       (*param_1 + 0x10 +
       (ulonglong)*(ushort *)((longlong)param_1 + 0x26a) * 0x80 +
       (ulonglong)*(ushort *)((longlong)param_1 + 0x26a) * 4) =
           *(undefined4 *)((longlong)param_1 + 0x26c);
    }
    break;
  case '\x03':
    *(undefined1 *)(param_1 + 0x4c) = 1;
    if (param_5 == 0) {
      if (param_2 != cVar3) {
        pcVar7 = "Loading world...";
        goto LAB_14017fbab;
      }
    }
    else {
      *(float *)((longlong)param_1 + 0x26c) = ((float)param_6 / (float)param_5) * 0.55 + 0.45;
      local_158 = param_5;
      pcVar7 = local_118;
      FUN_1400a3c00(pcVar7,0x80,"Loading world... (%u / %u)");
LAB_14017fbab:
      FUN_14017f6e0(param_1,pcVar7);
    }
    fVar14 = *(float *)((longlong)param_1 + 0x26c);
    fVar12 = 0.0;
    if (0.0 <= fVar14) {
      fVar12 = fVar14;
    }
    uVar13 = -(uint)(1.0 < fVar14) & 0x3f800000 | ~-(uint)(1.0 < fVar14) & (uint)fVar12;
    goto LAB_14017fbdb;
  case '\x04':
    if (param_2 == cVar3) {
      fVar14 = *(float *)(param_1 + 0x4e);
    }
    else {
      *(undefined4 *)((longlong)param_1 + 0x26c) = 0x3f800000;
      cVar3 = FUN_14005c380(param_1,*(undefined2 *)((longlong)param_1 + 0x26a));
      if (cVar3 != '\0') {
        *(undefined4 *)
         (*param_1 + 0x10 +
         (ulonglong)*(ushort *)((longlong)param_1 + 0x26a) * 0x80 +
         (ulonglong)*(ushort *)((longlong)param_1 + 0x26a) * 4) =
             *(undefined4 *)((longlong)param_1 + 0x26c);
      }
      FUN_14017f6e0(param_1,"Joining...");
      fVar14 = 0.4;
    }
    *(float *)(param_1 + 0x4e) = fVar14 - param_3;
    if (0.0 < fVar14 - param_3) {
      cVar3 = FUN_14005c380(param_1,*(undefined2 *)((longlong)param_1 + 0x262));
      if (cVar3 != '\0') {
        fVar14 = *(float *)(param_1 + 0x4e) / 0.4;
        *(float *)(*param_1 + 0x38 +
                  (ulonglong)*(ushort *)((longlong)param_1 + 0x262) * 0x80 +
                  (ulonglong)*(ushort *)((longlong)param_1 + 0x262) * 4) = fVar14 * 0.55;
        *(float *)(*param_1 + 0x38 +
                  (ulonglong)*(ushort *)((longlong)param_1 + 0x264) * 0x80 +
                  (ulonglong)*(ushort *)((longlong)param_1 + 0x264) * 4) =
             *(float *)(param_1 + 0x37) * fVar14;
        lVar5 = FUN_14005c560(param_1,*(undefined2 *)((longlong)param_1 + 0x266));
        if (lVar5 != 0) {
          *(float *)(lVar5 + 0x30) = fVar14 * *(float *)(param_1 + 0x41);
        }
      }
      break;
    }
  case '\0':
    *(undefined1 *)(param_1 + 0x4c) = 0;
    break;
  case '\x05':
    *(undefined1 *)(param_1 + 0x4c) = 1;
    if (param_2 == cVar3) break;
    if ((param_4 == (char *)0x0) || (*param_4 == '\0')) {
      builtin_strncpy(local_118,"Connection failed",0x12);
    }
    else {
      FUN_1400a3c00(local_118,0xc0,"Connection failed: %s",param_4);
    }
    FUN_14017f6e0(param_1,local_118);
    *(undefined4 *)((longlong)param_1 + 0x26c) = 0x3f800000;
    cVar3 = FUN_14005c380(param_1,*(undefined2 *)((longlong)param_1 + 0x26a));
    if (cVar3 != '\0') {
      *(undefined4 *)
       (*param_1 + 0x10 +
       (ulonglong)*(ushort *)((longlong)param_1 + 0x26a) * 0x80 +
       (ulonglong)*(ushort *)((longlong)param_1 + 0x26a) * 4) =
           *(undefined4 *)((longlong)param_1 + 0x26c);
    }
    local_138 = *(undefined4 *)((longlong)param_1 + 0x23c);
    uStack_134 = (undefined4)param_1[0x48];
    uStack_130 = *(undefined4 *)((longlong)param_1 + 0x244);
    uStack_12c = (undefined4)param_1[0x49];
    cVar3 = FUN_14005c380(param_1,*(undefined2 *)((longlong)param_1 + 0x26a));
    if (cVar3 == '\0') break;
    lVar6 = *param_1;
    lVar5 = (ulonglong)*(ushort *)((longlong)param_1 + 0x26a) * 0x80 +
            (ulonglong)*(ushort *)((longlong)param_1 + 0x26a) * 4;
    uVar8 = local_138;
    uVar9 = uStack_134;
    uVar10 = uStack_130;
    uVar11 = uStack_12c;
    goto LAB_14017fd58;
  case '\x06':
    *(undefined1 *)(param_1 + 0x4c) = 1;
    if (param_2 == cVar3) break;
    if ((param_4 == (char *)0x0) || (*param_4 == '\0')) {
      builtin_strncpy(local_118,"Disconnected from server",0x19);
    }
    else {
      FUN_1400a3c00(local_118,0xc0,"Disconnected: %s",param_4);
    }
    FUN_14017f6e0(param_1,local_118);
    *(undefined4 *)((longlong)param_1 + 0x26c) = 0x3f800000;
    cVar3 = FUN_14005c380(param_1,*(undefined2 *)((longlong)param_1 + 0x26a));
    if (cVar3 != '\0') {
      *(undefined4 *)
       (*param_1 + 0x10 +
       (ulonglong)*(ushort *)((longlong)param_1 + 0x26a) * 0x80 +
       (ulonglong)*(ushort *)((longlong)param_1 + 0x26a) * 4) =
           *(undefined4 *)((longlong)param_1 + 0x26c);
    }
    local_148 = *(undefined4 *)((longlong)param_1 + 0x23c);
    uStack_144 = (undefined4)param_1[0x48];
    uStack_140 = *(undefined4 *)((longlong)param_1 + 0x244);
    uStack_13c = (undefined4)param_1[0x49];
    cVar3 = FUN_14005c380(param_1,*(undefined2 *)((longlong)param_1 + 0x26a));
    if (cVar3 == '\0') break;
    lVar6 = *param_1;
    lVar5 = (ulonglong)*(ushort *)((longlong)param_1 + 0x26a) * 0x80 +
            (ulonglong)*(ushort *)((longlong)param_1 + 0x26a) * 4;
    uVar8 = local_148;
    uVar9 = uStack_144;
    uVar10 = uStack_140;
    uVar11 = uStack_13c;
LAB_14017fd58:
    puVar1 = (undefined4 *)(lVar6 + 0x2c + lVar5);
    *puVar1 = uVar8;
    puVar1[1] = uVar9;
    puVar1[2] = uVar10;
    puVar1[3] = uVar11;
  default:
    break;
  }
  if (DAT_1414ef3c0 != (local_50 ^ (ulonglong)auStack_178)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_50 ^ (ulonglong)auStack_178);
  }
  return;
}

