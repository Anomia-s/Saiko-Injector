/**
 * Function: imfattributes_setstringsymlink_failed
 * Address:  1403da280
 * Signature: undefined imfattributes_setstringsymlink_failed(void)
 * Body size: 1202 bytes
 */


ulonglong imfattributes_setstringsymlink_failed(longlong param_1,int *param_2)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  undefined **ppuVar5;
  ulonglong uVar6;
  undefined *puVar7;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_1414ef3c0 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  local_28 = (longlong *)0x0;
  local_30 = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  local_40 = (longlong *)0x0;
  local_44 = 0;
  lVar3 = FUN_1400fc570(uVar1);
  lVar3 = FUN_14017b9c0("UTF-16LE","UTF-8",uVar1,lVar3 + 1);
  if (lVar3 == 0) {
LAB_1403da710:
    lVar3 = 0;
  }
  else {
    iVar2 = (*DAT_1416f13d0)(&local_28,1);
    if (iVar2 < 0) {
      pcVar4 = "MFCreateAttributes failed";
    }
    else {
      iVar2 = (**(code **)(*local_28 + 0xc0))(local_28,&DAT_140e0c450,&DAT_140e0c440);
      if (iVar2 < 0) {
        pcVar4 = "IMFAttributes_SetGUID(srctype) failed";
      }
      else {
        iVar2 = (**(code **)(*local_28 + 200))(local_28,&DAT_140e0c460,lVar3);
        if (iVar2 < 0) {
          pcVar4 = "IMFAttributes_SetString(symlink) failed";
        }
        else {
          iVar2 = (*DAT_1416f13b8)(local_28,&local_30);
          if (-1 < iVar2) {
            (**(code **)(*local_28 + 0x10))();
            FUN_140160cf0(lVar3);
            local_28 = (longlong *)0x0;
            iVar2 = (*DAT_1416f13e8)(local_30,0,&local_40);
            if (iVar2 < 0) {
              pcVar4 = "MFCreateSourceReaderFromMediaSource failed";
            }
            else {
              iVar2 = (*DAT_1416f13d8)(&local_38);
              if (iVar2 < 0) {
                pcVar4 = "MFCreateMediaType failed";
              }
              else {
                iVar2 = (**(code **)(*local_38 + 0xc0))(local_38,&DAT_140e0c490,&DAT_140e0c4a0);
                if (iVar2 < 0) {
                  pcVar4 = "IMFMediaType_SetGUID(major_type) failed";
                }
                else {
                  iVar2 = *param_2;
                  puVar7 = (undefined *)0x0;
                  if (iVar2 < 0x3132564e) {
                    if (iVar2 < 0x16362004) {
                      if (iVar2 == 0x15130f02) {
                        ppuVar5 = &PTR_DAT_140e0c4e0;
                      }
                      else if (iVar2 == 0x15151002) {
                        ppuVar5 = &PTR_DAT_140e0c4f0;
                      }
                      else {
                        if (iVar2 != 0x16161804) goto LAB_1403da5de;
                        ppuVar5 = &PTR_DAT_140e0c510;
                      }
                    }
                    else if (iVar2 == 0x16362004) {
                      ppuVar5 = &PTR_DAT_140e0c520;
                    }
                    else if (iVar2 == 0x16372004) {
                      ppuVar5 = &PTR_DAT_140e0c530;
                    }
                    else {
                      if (iVar2 != 0x17101803) goto LAB_1403da5de;
                      ppuVar5 = &PTR_DAT_140e0c500;
                    }
LAB_1403da5db:
                    puVar7 = *ppuVar5;
                  }
                  else {
                    if (iVar2 < 0x32595559) {
                      if (iVar2 == 0x3132564e) {
                        ppuVar5 = &PTR_DAT_140e0c5a0;
                      }
                      else if (iVar2 == 0x3231564e) {
                        ppuVar5 = &PTR_DAT_140e0c590;
                      }
                      else {
                        if (iVar2 != 0x32315659) goto LAB_1403da5de;
                        ppuVar5 = &PTR_DAT_140e0c540;
                      }
                      goto LAB_1403da5db;
                    }
                    puVar7 = (undefined *)0x0;
                    if (0x56555948 < iVar2) {
                      if (iVar2 == 0x56555949) {
                        ppuVar5 = &PTR_DAT_140e0c550;
                      }
                      else {
                        if (iVar2 != 0x59565955) goto LAB_1403da5de;
                        ppuVar5 = &PTR_DAT_140e0c570;
                      }
                      goto LAB_1403da5db;
                    }
                    if (iVar2 == 0x32595559) {
                      ppuVar5 = &PTR_DAT_140e0c560;
                      goto LAB_1403da5db;
                    }
                    if (iVar2 == 0x55595659) {
                      ppuVar5 = &PTR_DAT_140e0c580;
                      goto LAB_1403da5db;
                    }
                  }
LAB_1403da5de:
                  iVar2 = (**(code **)(*local_38 + 0xc0))(local_38,&DAT_140e0c4d0,puVar7);
                  if (iVar2 < 0) {
                    pcVar4 = "IMFMediaType_SetGUID(subtype) failed";
                  }
                  else {
                    iVar2 = (**(code **)(*local_38 + 0xb0))
                                      (local_38,&DAT_140e0c4b0,
                                       (longlong)param_2[3] | (ulonglong)(uint)param_2[2] << 0x20);
                    if (iVar2 < 0) {
                      pcVar4 = "MFSetAttributeSize(frame_size) failed";
                    }
                    else {
                      iVar2 = (**(code **)(*local_38 + 0xb0))
                                        (local_38,&DAT_140e0c4c0,
                                         (longlong)param_2[5] | (ulonglong)(uint)param_2[4] << 0x20)
                      ;
                      if (iVar2 < 0) {
                        pcVar4 = "MFSetAttributeRatio(frame_rate) failed";
                      }
                      else {
                        iVar2 = (**(code **)(*local_40 + 0x38))(local_40,0xfffffffc,0,local_38);
                        if (iVar2 < 0) {
                          pcVar4 = "IMFSourceReader_SetCurrentMediaType failed";
                        }
                        else {
                          iVar2 = FUN_1403dacf0(local_38,&local_44);
                          if (-1 < iVar2) {
                            (**(code **)(*local_38 + 0x10))();
                            local_38 = (longlong *)0x0;
                            lVar3 = FUN_140160c70(1,0x18);
                            *(longlong *)(param_1 + 0x1d0) = lVar3;
                            if (lVar3 != 0) {
                              *(undefined4 *)(lVar3 + 0x10) = local_44;
                              **(undefined8 **)(param_1 + 0x1d0) = local_40;
                              (**(code **)(*local_30 + 0x10))();
                              uVar6 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
                              FUN_1400fe340(param_1,1);
                              goto LAB_1403da4b5;
                            }
                            goto LAB_1403da710;
                          }
                          pcVar4 = "GetDefaultStride failed";
                        }
                      }
                    }
                  }
                }
              }
            }
            FUN_1403d7600(pcVar4,iVar2);
            goto LAB_1403da710;
          }
          pcVar4 = "MFCreateDeviceSource failed";
        }
      }
    }
    FUN_1403d7600(pcVar4,iVar2);
  }
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 0x10))();
  }
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x60))();
    (**(code **)(*local_30 + 0x10))();
  }
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x10))();
  }
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x10))();
  }
  FUN_140160cf0(lVar3);
  uVar6 = 0;
LAB_1403da4b5:
  if (DAT_1414ef3c0 == (local_20 ^ (ulonglong)auStack_68)) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_20 ^ (ulonglong)auStack_68);
}

