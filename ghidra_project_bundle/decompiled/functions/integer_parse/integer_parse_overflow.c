/**
 * Function: integer_parse_overflow
 * Address:  1404994c0
 * Signature: undefined integer_parse_overflow(void)
 * Body size: 304 bytes
 */


int integer_parse_overflow(longlong param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  
  pbVar1 = (byte *)(param_1 + 0x38);
  iVar6 = 0;
  do {
    if (*(longlong *)(param_1 + 0x10) == 0) {
LAB_1404994fc:
      if (*(ulonglong *)(param_1 + 200) <= *(ulonglong *)(param_1 + 0xc0)) {
        return iVar6;
      }
    }
    else {
      iVar4 = (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x28));
      if (iVar4 != 0) {
        if (*(int *)(param_1 + 0x30) == 0) {
          return iVar6;
        }
        goto LAB_1404994fc;
      }
    }
    bVar2 = *param_2;
    if ((byte)(bVar2 - 0x3a) < 0xf6) {
      return iVar6;
    }
    pbVar5 = *(byte **)(param_1 + 0xc0);
    if (pbVar5 < *(byte **)(param_1 + 200)) {
      *(byte **)(param_1 + 0xc0) = pbVar5 + 1;
      bVar3 = *pbVar5;
    }
    else if (*(int *)(param_1 + 0x30) == 0) {
      bVar3 = 0;
    }
    else {
      iVar4 = (**(code **)(param_1 + 0x10))
                        (*(undefined8 *)(param_1 + 0x28),pbVar1,*(undefined4 *)(param_1 + 0x34));
      *(int *)(param_1 + 0xb8) =
           *(int *)(param_1 + 0xb8) + (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xd0));
      if (iVar4 == 0) {
        *(undefined4 *)(param_1 + 0x30) = 0;
        *(undefined1 *)(param_1 + 0x38) = 0;
        bVar3 = 0;
        pbVar5 = (byte *)(param_1 + 0x39);
      }
      else {
        bVar3 = *pbVar1;
        pbVar5 = pbVar1 + iVar4;
      }
      *(byte **)(param_1 + 200) = pbVar5;
      *(byte **)(param_1 + 0xc0) = (byte *)(param_1 + 0x39);
    }
    iVar6 = (uint)bVar2 + iVar6 * 10 + -0x30;
    *param_2 = bVar3;
    if ((0xccccccc < iVar6) || ('7' < (char)bVar3 && iVar6 == 0xccccccc)) {
      *(char **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x220) = "integer parse overflow";
      return 0;
    }
  } while( true );
}

