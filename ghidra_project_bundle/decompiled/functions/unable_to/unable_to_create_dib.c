/**
 * Function: unable_to_create_dib
 * Address:  140462610
 * Signature: undefined unable_to_create_dib(void)
 * Body size: 659 bytes
 */


undefined8
unable_to_create_dib(undefined8 param_1,longlong param_2,uint *param_3,void **param_4,uint *param_5)

{
  longlong lVar1;
  uint uVar2;
  BITMAPINFO *lpbmi;
  HBITMAP pHVar3;
  ulonglong uVar4;
  HDC pHVar5;
  undefined8 uVar6;
  uint uVar7;
  LONG *_Dst;
  undefined1 auStackY_88 [32];
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_1414ef3c0 ^ (ulonglong)auStackY_88;
  lVar1 = *(longlong *)(param_2 + 0x180);
  video_subsystem_has_not_been_initialized(param_2,&local_44,&local_48);
  if (*(HDC *)(lVar1 + 0x20) != (HDC)0x0) {
    DeleteDC(*(HDC *)(lVar1 + 0x20));
  }
  if (*(HGDIOBJ *)(lVar1 + 0x30) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(lVar1 + 0x30));
  }
  lpbmi = (BITMAPINFO *)FUN_140160c40(0x428);
  if (lpbmi == (BITMAPINFO *)0x0) {
    uVar6 = 0;
    goto LAB_140462872;
  }
  _Dst = &(lpbmi->bmiHeader).biWidth;
  memset(_Dst,0,0x424);
  (lpbmi->bmiHeader).biSize = 0x28;
  pHVar3 = CreateCompatibleBitmap(*(HDC *)(lVar1 + 0x18),1,1);
  GetDIBits(*(HDC *)(lVar1 + 0x18),pHVar3,0,0,(LPVOID)0x0,lpbmi,0);
  GetDIBits(*(HDC *)(lVar1 + 0x18),pHVar3,0,0,(LPVOID)0x0,lpbmi,0);
  DeleteObject(pHVar3);
  *param_3 = 0;
  if ((lpbmi->bmiHeader).biCompression == 3) {
    uVar4 = (ulonglong)(lpbmi->bmiHeader).biSize;
    uVar2 = FUN_140155c70((uint)(lpbmi->bmiHeader).biBitCount * (uint)(lpbmi->bmiHeader).biPlanes,
                          *(undefined4 *)
                           ((longlong)&(((BITMAPINFO *)(lpbmi->bmiColors + -10))->bmiHeader).biSize
                           + uVar4),*(undefined4 *)((longlong)(lpbmi->bmiColors + -9) + uVar4),
                          *(undefined4 *)((longlong)(lpbmi->bmiColors + -8) + uVar4));
    *param_3 = uVar2;
    if (uVar2 == 0) goto LAB_140462750;
  }
  else {
LAB_140462750:
    *param_3 = 0x16161804;
    memset(_Dst,0,0x424);
    (lpbmi->bmiHeader).biSize = 0x28;
    (lpbmi->bmiHeader).biPlanes = 1;
    (lpbmi->bmiHeader).biBitCount = 0x20;
    uVar2 = *param_3;
  }
  if ((uVar2 & 0xf0000000) == 0x10000000 || uVar2 == 0) {
    uVar7 = uVar2 & 0xff;
  }
  else {
    uVar7 = 2;
    if (((uVar2 != 0x32595559) && (uVar2 != 0x55595659)) && (uVar2 != 0x59565955)) {
      uVar7 = (uVar2 == 0x30313050) + 1;
    }
  }
  *param_5 = uVar7 * local_44 + 3 & 0xfffffffc;
  (lpbmi->bmiHeader).biWidth = local_44;
  (lpbmi->bmiHeader).biHeight = -local_48;
  (lpbmi->bmiHeader).biSizeImage = local_48 * *param_5;
  pHVar5 = CreateCompatibleDC(*(HDC *)(lVar1 + 0x18));
  *(HDC *)(lVar1 + 0x20) = pHVar5;
  pHVar3 = CreateDIBSection(*(HDC *)(lVar1 + 0x18),lpbmi,0,param_4,(HANDLE)0x0,0);
  *(HBITMAP *)(lVar1 + 0x30) = pHVar3;
  FUN_140160cf0(lpbmi);
  if (*(HGDIOBJ *)(lVar1 + 0x30) == (HGDIOBJ)0x0) {
    uVar6 = FUN_1403d7710("Unable to create DIB");
  }
  else {
    SelectObject(*(HDC *)(lVar1 + 0x20),*(HGDIOBJ *)(lVar1 + 0x30));
    uVar6 = 1;
  }
LAB_140462872:
  if (DAT_1414ef3c0 == (local_40 ^ (ulonglong)auStackY_88)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_40 ^ (ulonglong)auStackY_88);
}

