/**
 * Function: graphics_api
 * Address:  140185a00
 * Signature: undefined graphics_api(void)
 * Body size: 1720 bytes
 */


void graphics_api(longlong param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  FILE *_File;
  char *pcVar4;
  size_t sVar5;
  longlong lVar6;
  uint uVar7;
  char *pcVar8;
  longlong lVar9;
  uint uVar10;
  char *_Str;
  char *pcVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  undefined1 auStack_158 [40];
  longlong local_130;
  char local_128 [136];
  ulonglong local_a0;
  
  local_a0 = DAT_1414ef3c0 ^ (ulonglong)auStack_158;
  local_130 = param_1;
  _File = fopen(param_2,"r");
  if (_File != (FILE *)0x0) {
    pcVar4 = fgets(local_128,0x80,_File);
    while (pcVar4 != (char *)0x0) {
      pcVar4 = strchr(local_128,0x3d);
      if (pcVar4 != (char *)0x0) {
        *pcVar4 = '\0';
        for (_Str = local_128; (*_Str == ' ' || (*_Str == '\t')); _Str = _Str + 1) {
        }
        sVar5 = strlen(_Str);
        pcVar8 = _Str + sVar5;
        if (sVar5 != 0) {
          do {
            if ((0x20 < (ulonglong)(byte)pcVar8[-1]) ||
               ((0x100002600U >> ((ulonglong)(byte)pcVar8[-1] & 0x3f) & 1) == 0)) break;
            pcVar8 = pcVar8 + -1;
          } while (_Str < pcVar8);
        }
        *pcVar8 = '\0';
        pcVar8 = pcVar4;
        do {
          do {
            pcVar11 = pcVar8;
            pcVar4 = pcVar4 + 1;
            pcVar8 = pcVar11 + 1;
          } while (pcVar11[1] == ' ');
        } while (pcVar11[1] == '\t');
        sVar5 = strlen(pcVar8);
        if (sVar5 == 0) {
          pcVar11[1] = '\0';
          cVar1 = *_Str;
        }
        else {
          lVar9 = sVar5 + 1;
          if (1 < lVar9) {
            lVar9 = 2;
          }
          pcVar4 = pcVar4 + sVar5;
          lVar6 = sVar5 + 2;
          do {
            if ((0x20 < (ulonglong)(byte)pcVar4[-1]) ||
               ((0x100002600U >> ((ulonglong)(byte)pcVar4[-1] & 0x3f) & 1) == 0))
            goto LAB_140185c05;
            pcVar4 = pcVar4 + -1;
            lVar6 = lVar6 + -1;
          } while (2 < lVar6);
          pcVar4 = pcVar11 + lVar9 + -1;
LAB_140185c05:
          *pcVar4 = '\0';
          cVar1 = *_Str;
        }
        if ((cVar1 != '\0') && (*pcVar8 != '\0')) {
          iVar3 = strcmp(_Str,"quality");
          if (iVar3 == 0) {
            iVar3 = atoi(pcVar8);
            if (iVar3 < 1) {
              iVar3 = 0;
            }
            if (1 < iVar3) {
              iVar3 = 2;
            }
            *(int *)(local_130 + 0x270) = iVar3;
          }
          else {
            iVar3 = strcmp(_Str,"graphics_api");
            if (iVar3 == 0) {
              iVar3 = strcmp(pcVar8,"d3d12");
              if ((((iVar3 == 0) || (iVar3 = strcmp(pcVar8,"dx12"), iVar3 == 0)) ||
                  (iVar3 = strcmp(pcVar8,"D3D12"), iVar3 == 0)) ||
                 (iVar3 = strcmp(pcVar8,"DX12"), iVar3 == 0)) {
                *(undefined4 *)(local_130 + 0x274) = 1;
              }
              else {
                iVar3 = strcmp(pcVar8,"vulkan");
                if ((iVar3 == 0) || (iVar3 = strcmp(pcVar8,"Vulkan"), iVar3 == 0)) {
                  *(undefined4 *)(local_130 + 0x274) = 0;
                }
                else {
                  iVar3 = atoi(pcVar8);
                  *(uint *)(local_130 + 0x274) = (uint)(0 < iVar3);
                }
              }
            }
            else {
              iVar3 = strcmp(_Str,"aa_method");
              if (iVar3 == 0) {
                iVar3 = atoi(pcVar8);
                if (iVar3 < 1) {
                  iVar3 = 0;
                }
                if (1 < iVar3) {
                  iVar3 = 2;
                }
                *(int *)(local_130 + 0x278) = iVar3;
              }
              else {
                iVar3 = strcmp(_Str,"aa_quality");
                if (iVar3 == 0) {
                  iVar3 = atoi(pcVar8);
                  if (iVar3 < 1) {
                    iVar3 = 0;
                  }
                  if (2 < iVar3) {
                    iVar3 = 3;
                  }
                  *(int *)(local_130 + 0x27c) = iVar3;
                }
                else {
                  iVar3 = strcmp(_Str,"bloom");
                  if (iVar3 == 0) {
                    iVar3 = atoi(pcVar8);
                    *(bool *)(local_130 + 0x280) = iVar3 != 0;
                  }
                  else {
                    iVar3 = strcmp(_Str,"saturation");
                    if (iVar3 == 0) {
                      dVar13 = atof(pcVar8);
                      fVar12 = (float)dVar13;
                      fVar14 = 0.5;
                      if (0.5 <= fVar12) {
                        fVar14 = fVar12;
                      }
                      *(uint *)(local_130 + 0x284) =
                           -(uint)(1.5 < fVar12) & 0x3fc00000 |
                           ~-(uint)(1.5 < fVar12) & (uint)fVar14;
                    }
                    else {
                      iVar3 = strcmp(_Str,"fov");
                      if (iVar3 == 0) {
                        dVar13 = atof(pcVar8);
                        fVar12 = (float)dVar13;
                        fVar14 = 60.0;
                        if (60.0 <= fVar12) {
                          fVar14 = fVar12;
                        }
                        *(uint *)(local_130 + 0x288) =
                             -(uint)(120.0 < fVar12) & 0x42f00000 |
                             ~-(uint)(120.0 < fVar12) & (uint)fVar14;
                      }
                      else {
                        iVar3 = strcmp(_Str,"sensitivity");
                        if (iVar3 == 0) {
                          iVar3 = atoi(pcVar8);
                          if (iVar3 < 2) {
                            iVar3 = 1;
                          }
                          if (9 < iVar3) {
                            iVar3 = 10;
                          }
                          *(int *)(local_130 + 0x28c) = iVar3;
                        }
                        else {
                          iVar3 = strcmp(_Str,"volume");
                          if (iVar3 == 0) {
                            iVar3 = atoi(pcVar8);
                            if (iVar3 < 2) {
                              iVar3 = 1;
                            }
                            if (9 < iVar3) {
                              iVar3 = 10;
                            }
                            *(int *)(local_130 + 0x290) = iVar3;
                          }
                          else {
                            iVar3 = strcmp(_Str,"fullscreen");
                            if (iVar3 == 0) {
                              iVar3 = atoi(pcVar8);
                              *(bool *)(local_130 + 0x294) = iVar3 != 0;
                            }
                            else {
                              iVar3 = strcmp(_Str,"vsync");
                              if (iVar3 == 0) {
                                iVar3 = atoi(pcVar8);
                                *(bool *)(local_130 + 0x295) = iVar3 != 0;
                              }
                              else {
                                iVar3 = strcmp(_Str,"ui_scale");
                                if (iVar3 == 0) {
                                  dVar13 = atof(pcVar8);
                                  fVar12 = (float)dVar13;
                                  fVar14 = 0.5;
                                  if (0.5 <= fVar12) {
                                    fVar14 = fVar12;
                                  }
                                  *(uint *)(local_130 + 0x298) =
                                       -(uint)(2.0 < fVar12) & 0x40000000 |
                                       ~-(uint)(2.0 < fVar12) & (uint)fVar14;
                                }
                                else {
                                  iVar3 = strcmp(_Str,"show_fps");
                                  if (iVar3 == 0) {
                                    iVar3 = atoi(pcVar8);
                                    *(bool *)(local_130 + 0x29c) = iVar3 != 0;
                                  }
                                  else {
                                    iVar3 = strcmp(_Str,"shift_lock");
                                    if (iVar3 == 0) {
                                      iVar3 = atoi(pcVar8);
                                      *(bool *)(local_130 + 0x29d) = iVar3 != 0;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      pcVar4 = fgets(local_128,0x80,_File);
    }
    fclose(_File);
    uVar2 = *(uint *)(local_130 + 0x27c);
    uVar7 = *(int *)(local_130 + 0x278) == 2 ^ 3;
    uVar10 = 0;
    if (0 < (int)uVar2) {
      uVar10 = uVar2;
    }
    if ((int)uVar7 < (int)uVar2) {
      uVar10 = uVar7;
    }
    *(uint *)(local_130 + 0x27c) = uVar10;
  }
  if (DAT_1414ef3c0 == (local_a0 ^ (ulonglong)auStack_158)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_a0 ^ (ulonglong)auStack_158);
}

