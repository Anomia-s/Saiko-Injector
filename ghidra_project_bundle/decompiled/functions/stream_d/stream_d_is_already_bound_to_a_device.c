/**
 * Function: stream_d_is_already_bound_to_a_device
 * Address:  1401329d0
 * Signature: undefined stream_d_is_already_bound_to_a_device(void)
 * Body size: 552 bytes
 */


ulonglong stream_d_is_already_bound_to_a_device(ulonglong param_1,longlong param_2,uint param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  char *pcVar6;
  ulonglong uVar7;
  undefined8 unaff_RSI;
  ulonglong uVar8;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_78;
  local_50 = 0;
  if (param_3 == 0) {
    uVar8 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
LAB_140132bd9:
    if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_78)) {
      return uVar8 & 0xffffffff;
    }
    goto LAB_140132c00;
  }
  if ((int)param_3 < 0) {
    pcVar6 = "num_streams";
LAB_140132ae2:
    uVar8 = FUN_1400fbed0("Parameter \'%s\' is invalid",pcVar6);
  }
  else {
    if (param_2 == 0) {
      pcVar6 = "streams";
      goto LAB_140132ae2;
    }
    if ((param_1 & 2) == 0) {
      lVar5 = audio_subsystem_is_not_initialized(param_1,&local_50);
      if (lVar5 == 0) {
LAB_140132bc2:
        uVar8 = 0;
      }
      else {
        if (*(char *)(lVar5 + 0x21) == '\0') {
          uVar8 = 0;
          do {
            puVar1 = *(undefined8 **)(param_2 + uVar8 * 8);
            if (puVar1 == (undefined8 *)0x0) {
              FUN_1400fbed0("Stream #%d is NULL",uVar8 & 0xffffffff);
LAB_140132b93:
              if ((int)uVar8 != 0) {
                uVar7 = 0;
                do {
                  FUN_1401552c0(**(undefined8 **)(param_2 + uVar7 * 8));
                  uVar7 = uVar7 + 1;
                } while ((uVar8 & 0xffffffff) != uVar7);
              }
              if (puVar1 != (undefined8 *)0x0) {
                FUN_1401552c0(*puVar1);
              }
              goto LAB_140132bc2;
            }
            FUN_1401552a0(*puVar1);
            if (puVar1[0x18] == 0) {
              if (*(char *)(puVar1 + 0x17) == '\x01') {
                cVar4 = FUN_1400fbed0(
                                     "Cannot change binding on a stream created with SDL_OpenAudioDeviceStream"
                                     );
                goto joined_r0x000140132b3d;
              }
            }
            else {
              cVar4 = FUN_1400fbed0("Stream #%d is already bound to a device",uVar8 & 0xffffffff);
joined_r0x000140132b3d:
              if (cVar4 == '\0') goto LAB_140132b93;
            }
            uVar8 = uVar8 + 1;
          } while (param_3 != uVar8);
        }
        else {
          cVar4 = FUN_1400fbed0(
                               "Cannot change stream bindings on device opened with SDL_OpenAudioDeviceStream"
                               );
          if (cVar4 == '\0') goto LAB_140132bc2;
        }
        uVar8 = 1;
        if (1 < (int)param_3) {
          uVar8 = (ulonglong)param_3;
        }
        uVar7 = 0;
        do {
          puVar1 = *(undefined8 **)(param_2 + uVar7 * 8);
          if (puVar1 != (undefined8 *)0x0) {
            puVar1[0x18] = lVar5;
            puVar1[0x1a] = 0;
            lVar2 = *(longlong *)(lVar5 + 0x18);
            puVar1[0x19] = lVar2;
            if (lVar2 != 0) {
              *(undefined8 **)(lVar2 + 0xd0) = puVar1;
            }
            *(undefined8 **)(lVar5 + 0x18) = puVar1;
            FUN_1401552c0(*puVar1);
          }
          uVar7 = uVar7 + 1;
        } while (uVar8 != uVar7);
        uVar8 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
      }
      uVar3 = local_50;
      FUN_140132430(local_50);
      FUN_14012fb40(uVar3);
      goto LAB_140132bd9;
    }
    uVar8 = FUN_1400fbed0(
                         "Audio streams are bound to device ids from SDL_OpenAudioDevice, not raw physical devices"
                         );
  }
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_78)) {
    return uVar8;
  }
LAB_140132c00:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_78);
}

