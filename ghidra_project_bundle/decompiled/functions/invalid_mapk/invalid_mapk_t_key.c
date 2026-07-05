/**
 * Function: invalid_mapk_t_key
 * Address:  1401e89e0
 * Signature: undefined invalid_mapk_t_key(void)
 * Body size: 270 bytes
 */


longlong invalid_mapk_t_key(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  bool bVar4;
  void *pvVar5;
  undefined8 *_Buf2;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  lVar6 = *param_1;
  lVar8 = *(longlong *)(lVar6 + 8);
  if (*(char *)(lVar8 + 0x19) == '\0') {
    _Buf2 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      _Buf2 = (undefined8 *)*param_2;
    }
    uVar1 = param_2[2];
    do {
      if (*(ulonglong *)(lVar8 + 0x38) < 0x10) {
        pvVar5 = (void *)(lVar8 + 0x20);
      }
      else {
        pvVar5 = *(void **)(lVar8 + 0x20);
      }
      uVar2 = *(ulonglong *)(lVar8 + 0x30);
      uVar7 = uVar2;
      if (uVar1 < uVar2) {
        uVar7 = uVar1;
      }
      iVar3 = memcmp(pvVar5,_Buf2,uVar7);
      bVar4 = uVar2 < uVar1;
      if (iVar3 != 0) {
        bVar4 = iVar3 < 0;
      }
      if (bVar4 == false) {
        lVar6 = lVar8;
      }
      lVar8 = *(longlong *)(lVar8 + (ulonglong)bVar4 * 0x10);
    } while (*(char *)(lVar8 + 0x19) == '\0');
  }
  if (*(char *)(lVar6 + 0x19) == '\0') {
    if (*(ulonglong *)(lVar6 + 0x38) < 0x10) {
      pvVar5 = (void *)(lVar6 + 0x20);
      uVar1 = *(ulonglong *)(lVar6 + 0x30);
      uVar2 = param_2[2];
      uVar7 = param_2[3];
    }
    else {
      pvVar5 = *(void **)(lVar6 + 0x20);
      uVar1 = *(ulonglong *)(lVar6 + 0x30);
      uVar2 = param_2[2];
      uVar7 = param_2[3];
    }
    if (0xf < uVar7) {
      param_2 = (undefined8 *)*param_2;
    }
    uVar7 = uVar2;
    if (uVar1 < uVar2) {
      uVar7 = uVar1;
    }
    iVar3 = memcmp(param_2,pvVar5,uVar7);
    bVar4 = uVar1 <= uVar2;
    if (iVar3 != 0) {
      bVar4 = -1 < iVar3;
    }
    if (bVar4) {
      return lVar6 + 0x40;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::_Xout_of_range("invalid map<K, T> key");
}

