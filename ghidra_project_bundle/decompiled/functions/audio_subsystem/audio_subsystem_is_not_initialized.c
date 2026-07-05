/**
 * Function: audio_subsystem_is_not_initialized
 * Address:  140131d60
 * Signature: undefined audio_subsystem_is_not_initialized(void)
 * Body size: 474 bytes
 */


int audio_subsystem_is_not_initialized(ulonglong param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  int iVar7;
  char cVar8;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1414ef3c0 ^ (ulonglong)auStack_68;
  if (DAT_1415256a0 == 0) {
    FUN_1400fbed0("Audio subsystem is not initialized");
    iVar3 = 0;
  }
  else {
    cVar8 = 0xfffffffd < (uint)param_1;
    local_40 = 0;
    if ((param_1 & 2) == 0) {
      lVar4 = audio_subsystem_is_not_initialized(param_1,&local_40);
      lVar5 = local_40;
      if (lVar4 != 0) {
        cVar8 = *(char *)(lVar4 + 0x20);
      }
    }
    else {
      lVar5 = no_default_audio_device_available();
    }
    iVar3 = 0;
    if (lVar5 != 0) {
      if ((cVar8 == '\0') && (iVar3 = FUN_140106170(lVar5 + 0x90), iVar3 != 0)) {
        FUN_1400fbed0("Device was already lost and can\'t accept new opens");
      }
      else {
        piVar6 = (int *)FUN_140160c70(1,0x48);
        if (piVar6 != (int *)0x0) {
          cVar2 = couldnt_create_audio_thread(lVar5,param_2);
          if (cVar2 != '\0') {
            FUN_140106160(lVar5 + 0x10,1);
            FUN_140106140(piVar6 + 4,0);
            bVar1 = *(byte *)(lVar5 + 0x94);
            iVar3 = FUN_140106160(&DAT_141525770,1);
            iVar7 = (bVar1 ^ 1) + iVar3 * 4 + 4;
            *piVar6 = iVar7;
            *(longlong *)(piVar6 + 2) = lVar5;
            piVar6[5] = 0x3f800000;
            *(char *)(piVar6 + 8) = cVar8;
            lVar4 = *(longlong *)(lVar5 + 0xd0);
            *(longlong *)(piVar6 + 0xe) = lVar4;
            if (lVar4 != 0) {
              *(int **)(lVar4 + 0x40) = piVar6;
            }
            *(int **)(lVar5 + 0xd0) = piVar6;
            FUN_140132430(lVar5);
            FUN_14012fb40(lVar5);
            iVar3 = 0;
            if (iVar7 != 0) {
              FUN_140158010(DAT_141525728);
              cVar8 = FUN_1403d8280(DAT_141525730,iVar7,piVar6);
              FUN_140158040(DAT_141525728);
              iVar3 = iVar7;
              if (cVar8 == '\0') {
                FUN_140131820(iVar7);
                iVar3 = 0;
              }
            }
            goto LAB_140131f01;
          }
          FUN_140160cf0(piVar6);
        }
      }
      FUN_14012fb40(lVar5);
      iVar3 = 0;
    }
  }
LAB_140131f01:
  if (DAT_1414ef3c0 != (local_38 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_38 ^ (ulonglong)auStack_68);
  }
  return iVar3;
}

