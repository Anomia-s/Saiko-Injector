/**
 * Function: invalid_ball_index
 * Address:  14044a3e0
 * Signature: undefined invalid_ball_index(void)
 * Body size: 230 bytes
 */


undefined8 invalid_ball_index(longlong param_1,uint param_2,short param_3,short param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  char *pcVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  
  httplib::ClientImpl::vfunction4();
  if ((param_1 == 0) || (lVar2 = *(longlong *)(param_1 + 0x140), lVar2 == 0)) {
    pcVar4 = "Invalid joystick";
  }
  else {
    if ((-1 < (int)param_2) && (param_2 < *(ushort *)(lVar2 + 0x38))) {
      uVar6 = (ulonglong)param_2;
      piVar1 = (int *)(*(longlong *)(lVar2 + 0xd0) + uVar6 * 8);
      *piVar1 = *piVar1 + (int)param_3;
      iVar5 = *(int *)(*(longlong *)(lVar2 + 0xd0) + uVar6 * 8);
      if (iVar5 < -0x7fff) {
        iVar5 = -0x8000;
      }
      if (0x7ffe < iVar5) {
        iVar5 = 0x7fff;
      }
      *(int *)(*(longlong *)(lVar2 + 0xd0) + uVar6 * 8) = iVar5;
      piVar1 = (int *)(*(longlong *)(lVar2 + 0xd0) + 4 + uVar6 * 8);
      *piVar1 = *piVar1 + (int)param_4;
      iVar5 = *(int *)(*(longlong *)(lVar2 + 0xd0) + 4 + uVar6 * 8);
      iVar7 = -0x8000;
      if (-0x8000 < iVar5) {
        iVar7 = iVar5;
      }
      if (0x7ffe < iVar7) {
        iVar7 = 0x7fff;
      }
      *(int *)(*(longlong *)(lVar2 + 0xd0) + 4 + uVar6 * 8) = iVar7;
      *(byte *)(lVar2 + 0xb0) = *(byte *)(lVar2 + 0xb0) | 2;
      return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
    }
    pcVar4 = "Invalid ball index";
  }
  uVar3 = FUN_1400fbed0(pcVar4);
  return uVar3;
}

