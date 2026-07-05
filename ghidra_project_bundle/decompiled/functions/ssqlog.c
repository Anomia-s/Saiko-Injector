/**
 * Function: ssqlog
 * Address:  140cc7a70
 * Signature: undefined ssqlog(void)
 * Body size: 968 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * ssqlog(byte *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  size_t _Size;
  size_t sVar8;
  undefined4 *_Dst;
  undefined4 *puVar9;
  char *pcVar10;
  undefined8 uVar11;
  longlong lVar12;
  ulonglong uVar13;
  bool bVar14;
  
  pcVar6 = (char *)uopenssl_win32_utf8("QLOGDIR");
  pcVar7 = (char *)uopenssl_win32_utf8("OSSL_QFILTER");
  if (param_1 == (byte *)0x0) {
    return (undefined4 *)0x0;
  }
  if (pcVar6 == (char *)0x0) {
    return (undefined4 *)0x0;
  }
  _Size = strlen(pcVar6);
  if (_Size == 0) {
    return (undefined4 *)0x0;
  }
  cVar4 = '\0';
  pcVar10 = pcVar6;
  if (*pcVar6 != '\0') {
    sVar8 = strlen(pcVar6);
    pcVar10 = pcVar6 + (sVar8 - 1);
    cVar4 = *pcVar10;
  }
  uVar13 = 0;
  if (cVar4 == '\\') {
    bVar14 = true;
  }
  else {
    bVar14 = *pcVar10 == '/';
  }
  lVar12 = (ulonglong)*param_1 * 2 + 0xf + _Size;
  _Dst = (undefined4 *)FUN_140b8d8d0(lVar12,"ssl\\quic\\qlog.c",0x7c);
  if (_Dst == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  memcpy(_Dst,pcVar6,_Size);
  if (!bVar14) {
    *(undefined1 *)(_Size + (longlong)_Dst) = 0x5c;
    _Size = _Size + 1;
  }
  if (*param_1 != 0) {
    do {
      iVar5 = FUN_140c07aa0(_Size + (longlong)_Dst,lVar12 - _Size,&DAT_1413a59b0,param_1[uVar13 + 1]
                           );
      uVar13 = uVar13 + 1;
      _Size = _Size + (longlong)iVar5;
    } while (uVar13 < *param_1);
  }
  pcVar6 = "client";
  if (*(int *)(param_1 + 0x30) != 0) {
    pcVar6 = "server";
  }
  FUN_140c07aa0(_Size + (longlong)_Dst,lVar12 - _Size,"_%s.sqlog",pcVar6);
  puVar9 = (undefined4 *)FUN_140b8da80(0xf8,"ssl\\quic\\qlog.c",0x39);
  if (puVar9 != (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)(param_1 + 4);
    uVar2 = *(undefined4 *)(param_1 + 8);
    uVar3 = *(undefined4 *)(param_1 + 0xc);
    *puVar9 = *(undefined4 *)param_1;
    puVar9[1] = uVar1;
    puVar9[2] = uVar2;
    puVar9[3] = uVar3;
    puVar9[4] = *(undefined4 *)(param_1 + 0x10);
    *(byte *)(puVar9 + 5) = param_1[0x14];
    puVar9[0xc] = *(undefined4 *)(param_1 + 0x30);
    *(undefined8 *)(puVar9 + 0xe) = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(puVar9 + 0x10) = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(puVar9 + 0x12) = *(undefined8 *)(param_1 + 0x48);
    if (*(longlong *)(param_1 + 0x18) == 0) {
LAB_140cc7c2b:
      if (*(longlong *)(param_1 + 0x20) != 0) {
        lVar12 = FUN_140b8c830(*(longlong *)(param_1 + 0x20),"ssl\\quic\\qlog.c",0x49);
        *(longlong *)(puVar9 + 8) = lVar12;
        if (lVar12 == 0) goto LAB_140cc7ca3;
      }
      if (*(longlong *)(param_1 + 0x28) != 0) {
        lVar12 = FUN_140b8c830(*(longlong *)(param_1 + 0x28),"ssl\\quic\\qlog.c",0x4d);
        *(longlong *)(puVar9 + 10) = lVar12;
        if (lVar12 == 0) goto LAB_140cc7ca3;
      }
      if (*(longlong *)(param_1 + 0x50) != 0) {
        lVar12 = FUN_140b8c830(*(longlong *)(param_1 + 0x50),"ssl\\quic\\qlog.c",0x52);
        *(longlong *)(puVar9 + 0x14) = lVar12;
        if (lVar12 == 0) goto LAB_140cc7ca3;
      }
      iVar5 = FUN_140d03d80(puVar9 + 0x26,0,5);
      if (iVar5 != 0) {
        if (*(longlong *)(puVar9 + 0xe) == 0) {
          *(code **)(puVar9 + 0xe) = FUN_140cc8930;
        }
        lVar12 = calling_fopens_s(_Dst,&DAT_1413a64e4);
        if (lVar12 != 0) {
          FUN_140d03e20(puVar9 + 0x26);
          FUN_140b745e0(*(undefined8 *)(puVar9 + 0x16));
          *(longlong *)(puVar9 + 0x16) = lVar12;
          FUN_140cebc90(puVar9 + 0x26,lVar12);
          if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
            pcVar7 = "*";
          }
          iVar5 = packet_received(puVar9,pcVar7);
          if (iVar5 != 0) {
            FUN_140b8d990(_Dst,"ssl\\quic\\qlog.c",0x97);
            return puVar9;
          }
        }
        FUN_140b8d990(_Dst,"ssl\\quic\\qlog.c",0x9b);
        FUN_140d03e40(puVar9 + 0x26);
        FUN_140b745e0(*(undefined8 *)(puVar9 + 0x16));
        FUN_140b8d990(*(undefined8 *)(puVar9 + 6),"ssl\\quic\\qlog.c",0xa7);
        FUN_140b8d990(*(undefined8 *)(puVar9 + 8),"ssl\\quic\\qlog.c",0xa8);
        FUN_140b8d990(*(undefined8 *)(puVar9 + 10),"ssl\\quic\\qlog.c",0xa9);
        FUN_140b8d990(*(undefined8 *)(puVar9 + 0x14),"ssl\\quic\\qlog.c",0xaa);
        uVar11 = 0xab;
        goto LAB_140cc7df8;
      }
    }
    else {
      lVar12 = FUN_140b8c830(*(longlong *)(param_1 + 0x18),"ssl\\quic\\qlog.c",0x45);
      *(longlong *)(puVar9 + 6) = lVar12;
      if (lVar12 != 0) goto LAB_140cc7c2b;
    }
LAB_140cc7ca3:
    FUN_140b8d990(*(undefined8 *)(puVar9 + 6),"ssl\\quic\\qlog.c",0x60);
    FUN_140b8d990(*(undefined8 *)(puVar9 + 8),"ssl\\quic\\qlog.c",0x61);
    FUN_140b8d990(*(undefined8 *)(puVar9 + 10),"ssl\\quic\\qlog.c",0x62);
    FUN_140b8d990(*(undefined8 *)(puVar9 + 0x14),"ssl\\quic\\qlog.c",99);
    FUN_140b8d990(puVar9,"ssl\\quic\\qlog.c",100);
  }
  uVar11 = 0x9b;
  puVar9 = _Dst;
LAB_140cc7df8:
  FUN_140b8d990(puVar9,"ssl\\quic\\qlog.c",uVar11);
  return (undefined4 *)0x0;
}

