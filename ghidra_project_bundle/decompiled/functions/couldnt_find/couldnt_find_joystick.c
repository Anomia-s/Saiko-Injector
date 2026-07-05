/**
 * Function: couldnt_find_joystick
 * Address:  140637810
 * Signature: undefined couldnt_find_joystick(void)
 * Body size: 222 bytes
 */


undefined8 couldnt_find_joystick(longlong param_1,int *param_2,short param_3,short param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  char *pcVar5;
  
  pcVar5 = *(char **)(param_1 + 0x70);
  httplib::ClientImpl::vfunction4();
  if (*pcVar5 == '\0') {
    iVar1 = *param_2;
    if (iVar1 == *(int *)(pcVar5 + 4)) {
      lVar2 = 0;
    }
    else {
      lVar2 = 1;
      if (((iVar1 != *(int *)(pcVar5 + 8)) && (lVar2 = 2, iVar1 != *(int *)(pcVar5 + 0xc))) &&
         (lVar2 = 3, iVar1 != *(int *)(pcVar5 + 0x10))) {
        pcVar5 = "Couldn\'t find joystick";
        goto LAB_140637876;
      }
    }
    if (pcVar5[lVar2 + 0x14] == '\0') {
      if (pcVar5[lVar2 + 0x48] != '\0') {
        if (pcVar5[0x52] == '\x01') {
          if (param_3 == 0 && param_4 != 0) {
            cVar4 = '\0';
            if (pcVar5[lVar2 + 0x4d] == '\0') {
              return 1;
            }
          }
          else {
            cVar4 = (param_4 == 0 && param_3 == 0) + '\x01';
            if (cVar4 == pcVar5[lVar2 + 0x4d]) {
              return 1;
            }
          }
        }
        else {
          cVar4 = param_4 != 0 || param_3 != 0;
          if (cVar4 == pcVar5[lVar2 + 0x4d]) {
            return 1;
          }
        }
        pcVar5[lVar2 + 0x4d] = cVar4;
        pcVar5[0x51] = '\x01';
        return 1;
      }
      pcVar5 = "Second USB cable for WUP-028 not connected";
    }
    else {
      pcVar5 = "Nintendo GameCube WaveBird controllers do not support rumble";
    }
  }
  else {
    pcVar5 = "That operation is not supported";
  }
LAB_140637876:
  uVar3 = FUN_1400fbed0(pcVar5);
  return uVar3;
}

