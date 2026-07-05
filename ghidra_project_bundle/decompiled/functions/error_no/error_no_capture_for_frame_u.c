/**
 * Function: error_no_capture_for_frame_u
 * Address:  1403ced70
 * Signature: undefined error_no_capture_for_frame_u(void)
 * Body size: 288 bytes
 */


void error_no_capture_for_frame_u
               (longlong param_1,longlong param_2,longlong param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  Decoration<__int64> *this;
  longlong lVar4;
  longlong lVar5;
  
  iVar2 = atoi((char *)(param_3 + 0xf));
  FUN_1403b6350(param_2 + 0x18,param_1 + 0xcc0);
  this = (Decoration<__int64> *)FUN_1403b6510(param_2 + 0x18,(longlong)iVar2);
  puVar1 = param_4 + 2;
  FUN_1403b8780(puVar1,"{");
  if (this != (Decoration<__int64> *)0x0) {
    FUN_1403b9020(puVar1,"\"syncs\":");
    FUN_1403b8a80(puVar1,&DAT_141360dfd,&DAT_1413944a3);
    uVar3 = _anon_C953E3F2::Decoration<__int64>::vfunction3(this);
    lVar4 = FUN_140106180(this);
    if (0 < (int)uVar3) {
      lVar5 = 0;
      do {
        FUN_1403b9090(puVar1,*(undefined8 *)(lVar4 + lVar5));
        lVar5 = lVar5 + 0x428;
      } while ((ulonglong)uVar3 * 0x428 - lVar5 != 0);
    }
    FUN_1403b8c10(puVar1,"]");
    FUN_1403b8780(puVar1,"}");
    return;
  }
  FUN_1403b79b0(puVar1,"\"error\": \"no capture for frame %u\"",iVar2);
  FUN_1403b8780(puVar1,"}");
  *param_4 = 0x194;
  return;
}

