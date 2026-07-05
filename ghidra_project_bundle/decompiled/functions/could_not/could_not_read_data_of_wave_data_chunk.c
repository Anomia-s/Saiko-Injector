/**
 * Function: could_not_read_data_of_wave_data_chunk
 * Address:  1401657a0
 * Signature: undefined could_not_read_data_of_wave_data_chunk(void)
 * Body size: 2941 bytes
 */


ulonglong could_not_read_data_of_wave_data_chunk
                    (longlong param_1,char param_2,undefined8 *param_3,undefined8 *param_4,
                    undefined4 *param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  char *pcVar10;
  ulonglong uVar11;
  undefined7 uVar12;
  undefined8 uVar13;
  bool bVar14;
  undefined1 auStack_168 [36];
  int local_144;
  int local_140;
  uint local_13c;
  undefined8 *local_138;
  undefined4 local_12c;
  undefined8 *local_128;
  ulonglong local_120;
  ulonglong local_118;
  longlong lStack_110;
  ulonglong local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  ulonglong uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  ulonglong uStack_64;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1414ef3c0 ^ (ulonglong)auStack_168;
  if (param_3 != (undefined8 *)0x0) {
    *(undefined4 *)(param_3 + 1) = 0;
    *param_3 = 0;
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = 0;
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  if (param_1 == 0) {
    FUN_1400fbed0("Parameter \'%s\' is invalid","src");
    uVar6 = 0;
    goto LAB_140165c1d;
  }
  if (param_3 == (undefined8 *)0x0) {
    FUN_1400fbed0("Parameter \'%s\' is invalid",&DAT_14135dd34);
    uVar6 = 0;
  }
  else {
    if (param_4 == (undefined8 *)0x0) {
      FUN_1400fbed0("Parameter \'%s\' is invalid","audio_buf");
joined_r0x00014016593a:
      uVar6 = 0;
      goto joined_r0x00014016593a;
    }
    if (param_5 == (undefined4 *)0x0) {
      FUN_1400fbed0("Parameter \'%s\' is invalid","audio_len");
      goto joined_r0x00014016593a;
    }
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_88 = 0;
    local_138 = param_4;
    local_128 = param_3;
    lVar5 = FUN_140110550("SDL_WAVE_RIFF_CHUNK_SIZE");
    if (lVar5 == 0) {
LAB_1401658e0:
      uVar3 = 0;
    }
    else {
      iVar2 = FUN_1400fd200(lVar5,"force");
      if (iVar2 == 0) {
        uVar3 = 1;
      }
      else {
        iVar2 = FUN_1400fd200(lVar5,"ignore");
        if (iVar2 == 0) {
          uVar3 = 3;
        }
        else {
          iVar2 = FUN_1400fd200(lVar5,"ignorezero");
          if (iVar2 == 0) {
            uVar3 = 2;
          }
          else {
            iVar2 = FUN_1400fd200(lVar5,"maximum");
            if (iVar2 != 0) goto LAB_1401658e0;
            uVar3 = 4;
          }
        }
      }
    }
    uStack_90 = CONCAT44(uStack_90._4_4_,uVar3);
    lVar5 = FUN_140110550("SDL_WAVE_TRUNCATION");
    if (lVar5 == 0) {
LAB_1401659e8:
      uVar3 = 0;
    }
    else {
      iVar2 = FUN_1400fd200(lVar5,"verystrict");
      if (iVar2 == 0) {
        uVar3 = 1;
      }
      else {
        iVar2 = FUN_1400fd200(lVar5,"strict");
        if (iVar2 == 0) {
          uVar3 = 2;
        }
        else {
          iVar2 = FUN_1400fd200(lVar5,"dropframe");
          if (iVar2 == 0) {
            uVar3 = 3;
          }
          else {
            iVar2 = FUN_1400fd200(lVar5,"dropblock");
            if (iVar2 != 0) goto LAB_1401659e8;
            uVar3 = 4;
          }
        }
      }
    }
    uStack_90 = CONCAT44(uVar3,(int)uStack_90);
    lVar5 = FUN_140110550("SDL_WAVE_FACT_CHUNK");
    if (lVar5 == 0) {
LAB_140165a6d:
      uVar3 = 0;
    }
    else {
      iVar2 = FUN_1400fd200(lVar5,"truncate");
      if (iVar2 == 0) {
        uVar3 = 1;
      }
      else {
        iVar2 = FUN_1400fd200(lVar5,"strict");
        if (iVar2 == 0) {
          uVar3 = 2;
        }
        else {
          iVar2 = FUN_1400fd200(lVar5,"ignorezero");
          if (iVar2 == 0) {
            uVar3 = 3;
          }
          else {
            iVar2 = FUN_1400fd200(lVar5,"ignore");
            if (iVar2 != 0) goto LAB_140165a6d;
            uVar3 = 4;
          }
        }
      }
    }
    local_88 = CONCAT44(local_88._4_4_,uVar3);
    local_78 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    uStack_68 = 0;
    uStack_64 = 0;
    local_118 = 0;
    lStack_110 = 0;
    local_108 = 0;
    lVar5 = FUN_140110550("SDL_WAVE_CHUNK_LIMIT");
    if (lVar5 != 0) {
      iVar2 = FUN_1400fd340(lVar5,"%u",&local_50);
      uVar11 = 10000;
      if (iVar2 == 1) {
        uVar11 = (ulonglong)local_50;
      }
      uVar6 = parameter_s_is_invalid(param_1);
      if (-1 < (longlong)uVar6) goto LAB_140165b01;
LAB_140165bbb:
      pcVar10 = "Could not seek in file";
      goto LAB_140165bc2;
    }
    uVar11 = 10000;
    uVar6 = parameter_s_is_invalid(param_1);
    if ((longlong)uVar6 < 0) goto LAB_140165bbb;
LAB_140165b01:
    if ((uVar6 < 0x7ffffffffffffff8) &&
       (uVar7 = parameter_s_is_invalid(param_1,uVar6,0), uVar7 == uVar6)) {
      uVar13 = 0;
      lVar5 = parameter_s_is_invalid(param_1,&local_50);
      uVar4 = local_4c;
      if (lVar5 != 8) goto LAB_140165b9c;
      if (local_50 != 0x45564157) {
        if (local_50 == 0x46464952) {
          cVar1 = parameter_s_is_invalid(param_1,&local_50);
          if (cVar1 == '\0') {
            pcVar10 = "Could not read RIFF form type";
          }
          else {
            if (local_50 == 0x45564157) {
              lVar5 = uVar6 + 8;
              goto LAB_140165c53;
            }
            pcVar10 = "RIFF form type is not WAVE (not a Waveform file)";
          }
        }
        else {
          pcVar10 = "Could not find RIFF or WAVE identifiers (not a Waveform file)";
        }
        goto LAB_140165bc2;
      }
      uVar4 = 0;
      lVar5 = 0;
LAB_140165c53:
      uStack_f0 = lVar5 + 4;
      if ((int)uStack_90 == 1) {
LAB_140165c76:
        uVar6 = lVar5 + (ulonglong)uVar4;
        uVar3 = (undefined4)CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
      }
      else {
        if ((int)uStack_90 == 4) {
          uVar6 = 0x7fffffffffffffff;
        }
        else {
          if (((int)uStack_90 != 3) && (uVar4 != 0)) goto LAB_140165c76;
          uVar6 = lVar5 + 0xffffffff;
        }
        uVar3 = 0;
      }
      uVar7 = (ulonglong)local_f8._4_4_;
      lVar5 = uStack_f0 + uVar7;
      if (uVar6 <= (ulonglong)(local_f8._4_4_ & 1) + lVar5) {
LAB_14016607f:
        pcVar10 = "Missing fmt chunk in WAVE file";
        goto LAB_140165bc2;
      }
      local_13c = 0;
      iVar2 = -1;
      local_120 = 0x7fffffffffffffff;
      local_144 = 0;
      local_140 = 0;
      local_12c = uVar3;
      do {
        iVar2 = iVar2 + 1;
        if ((int)uVar11 == iVar2) {
          cVar1 = FUN_1400fbed0("Chunk count in WAVE file exceeds limit of %u",uVar11);
          goto LAB_140165bc7;
        }
        uVar4 = local_f8._4_4_;
        if (local_e8 != 0) {
          FUN_140160cf0();
          local_e8 = 0;
          uVar7 = (ulonglong)local_f8._4_4_;
          uVar4 = local_f8._4_4_;
        }
        uStack_e0 = 0;
        if ((0x7ffffffffffffff7 < lVar5) || ((longlong)(uVar7 ^ local_120) < (longlong)uStack_f0)) {
LAB_140165f30:
          if (uStack_90._4_4_ == 1) {
            pcVar10 = "Unexpected end of WAVE file";
            goto LAB_140165bc2;
          }
          bVar14 = false;
          goto LAB_140165f6f;
        }
        lVar5 = lVar5 + (ulonglong)(uVar4 & 1);
        lVar8 = parameter_s_is_invalid(param_1,lVar5,0);
        if ((lVar8 != lVar5) || (lVar8 = parameter_s_is_invalid(param_1,&local_50,8), lVar8 != 8))
        goto LAB_140165f30;
        local_f8 = CONCAT44(local_4c,local_50);
        uVar7 = lVar5 + 8;
        uStack_f0 = uVar7;
        if (local_50 == 0x74636166) {
          if ((int)local_a8 == 0) {
            if (local_4c < 4) {
              local_a8 = CONCAT44(local_a8._4_4_,0xffffffff);
            }
            else {
              uVar7 = parameter_s_is_invalid(param_1,uVar7,0);
              if (uVar7 == uStack_f0) {
                cVar1 = parameter_s_is_invalid(param_1,(longlong)&local_a8 + 4);
                uVar3 = 1;
                if (cVar1 == '\0') goto LAB_140165ecf;
              }
              else {
LAB_140165ecf:
                uVar3 = 0xffffffff;
              }
              local_a8 = CONCAT44(local_a8._4_4_,uVar3);
              uVar7 = uStack_f0;
            }
          }
        }
        else {
          uStack_f0._0_4_ = (undefined4)uVar7;
          uStack_f0._4_4_ = (undefined4)(uVar7 >> 0x20);
          if (local_50 == 0x61746164) {
            if (local_144 == 0x61746164) {
              local_144 = 0x61746164;
            }
            else {
              local_108 = uStack_e0;
              lStack_110 = local_e8;
              local_144 = 0x61746164;
              local_13c = local_4c;
              local_118 = uVar7;
            }
          }
          else if (local_50 == 0x20746d66) {
            if (local_140 == 0x20746d66) {
              local_140 = 0x20746d66;
            }
            else {
              if (local_144 == 0x61746164) {
                pcVar10 = "fmt chunk after data chunk in WAVE file";
                goto LAB_140165bc2;
              }
              uStack_64 = uStack_e0;
              local_78 = CONCAT44((undefined4)uStack_f0,local_4c);
              uStack_70 = uStack_f0._4_4_;
              uStack_6c = (undefined4)local_e8;
              local_140 = 0x20746d66;
              uStack_68 = local_e8._4_4_;
            }
          }
        }
        uStack_f0 = uVar7;
        if (uStack_90._4_4_ == 1) {
          if (uVar6 < local_f8._4_4_ + uStack_f0) {
            pcVar10 = "RIFF size truncates chunk";
            goto LAB_140165bc2;
          }
        }
        else if ((local_144 == 0x61746164 && local_140 == 0x20746d66) &&
                (((int)local_a8 == 1 || ((local_88 & 0xfffffffb) == 0)))) {
          uVar7 = local_f8._4_4_ + uStack_f0;
          goto LAB_140165fb3;
        }
        uVar7 = (ulonglong)local_f8._4_4_;
        lVar5 = uStack_f0 + uVar7;
      } while ((ulonglong)(local_f8._4_4_ & 1) + lVar5 < uVar6);
      bVar14 = uStack_90._4_4_ == 1;
LAB_140165f6f:
      if (local_140 != 0x20746d66) goto LAB_14016607f;
      if (local_144 != 0x61746164) {
        pcVar10 = "Missing data chunk in WAVE file";
        goto LAB_140165bc2;
      }
      uVar7 = uStack_f0 + local_f8._4_4_;
      if ((bVar14) && (local_f8._4_4_ != 0 && (int)local_f8 != 0x61746164)) {
        uVar11 = uVar7 - 1;
        pcVar10 = "Could not seek to WAVE chunk data";
        if ((-1 < (longlong)uVar11) &&
           (uVar9 = parameter_s_is_invalid(param_1,uVar11,0), uVar9 == uVar11)) {
          cVar1 = parameter_s_is_invalid(param_1,&local_50);
          if (cVar1 != '\0') goto LAB_140165fb3;
          pcVar10 = "RIFF size truncates chunk";
        }
        goto LAB_140165bc2;
      }
LAB_140165fb3:
      uStack_e0 = uStack_64;
      local_f8 = CONCAT44((undefined4)local_78,0x20746d66);
      uStack_f0 = CONCAT44(uStack_70,local_78._4_4_);
      local_e8 = CONCAT44(uStack_68,uStack_6c);
      if (local_e8 != 0) {
        FUN_140160cf0();
        local_e8 = 0;
      }
      uStack_e0 = 0;
      uVar4 = 0x416;
      if (local_f8._4_4_ < 0x416) {
        uVar4 = local_f8._4_4_;
      }
      if (local_f8._4_4_ == 0) {
LAB_140166073:
        pcVar10 = "Invalid WAVE fmt chunk length (too small)";
        goto LAB_140165bc2;
      }
      local_e8 = FUN_140160c40(uVar4);
      if ((local_e8 == 0) ||
         (uVar9 = parameter_s_is_invalid(param_1,uStack_f0,0), uVar9 != uStack_f0)) {
LAB_1401660fe:
        pcVar10 = "Could not read data of WAVE fmt chunk";
        goto LAB_140165bc2;
      }
      uStack_e0 = parameter_s_is_invalid(param_1,local_e8,uVar4);
      if (local_f8._4_4_ < 0xe) goto LAB_140166073;
      if (uStack_e0 < 0xe) goto LAB_1401660fe;
      cVar1 = extensible_wave_header_too_small(&local_f8);
      if ((cVar1 != '\0') &&
         (cVar1 = unknown_wave_format_tag_0x04x(&local_f8,local_13c), cVar1 != '\0')) {
        if (local_e8 != 0) {
          FUN_140160cf0();
        }
        local_f8 = CONCAT44(local_13c,0x61746164);
        uStack_e0 = local_108;
        uStack_f0 = local_118;
        local_e8 = lStack_110;
        if (local_13c == 0) {
          uVar9 = 0;
        }
        else {
          iVar2 = FUN_140166700(param_1,&local_f8);
          if (iVar2 < 0) goto LAB_14016628e;
          uVar9 = local_f8 >> 0x20;
        }
        if ((uStack_e0 != uVar9) && (uStack_90._4_4_ - 1U < 2)) {
          pcVar10 = "Could not read data of WAVE data chunk";
          goto LAB_140165bc2;
        }
        switch(local_d8._2_2_) {
        case 1:
        case 3:
          cVar1 = wave_file_too_big(&local_f8,local_138,param_5);
          break;
        case 2:
          cVar1 = unexpected_overflow_in_ms_adpcm_decoder(&local_f8,local_138,param_5);
          break;
        default:
          goto switchD_1401661cc_caseD_4;
        case 6:
        case 7:
          cVar1 = unknown_companded_encoding(&local_f8,local_138,param_5);
          break;
        case 0x11:
          cVar1 = unexpected_overflow_in_ima_adpcm_decoder(&local_f8,local_138,param_5);
        }
        if (cVar1 != '\0') {
switchD_1401661cc_caseD_4:
          *(undefined4 *)(local_128 + 1) = (undefined4)uStack_d0;
          *(uint *)((longlong)local_128 + 4) = (uint)local_d8._4_1_;
          *(undefined4 *)local_128 = 0;
          if (0x11 < local_d8._2_2_) {
LAB_1401662dc:
            pcVar10 = "Unexpected data format";
            goto LAB_140165bc2;
          }
          uVar3 = 0x8010;
          if ((0x200c4U >> (local_d8._2_2_ & 0x1f) & 1) == 0) {
            if (local_d8._2_2_ == 1) {
              uVar4 = (uint)local_c8._2_2_ << 0x1d | local_c8._2_2_ - 8 >> 3;
              if (3 < uVar4) {
                cVar1 = FUN_1400fbed0("Unexpected %u-bit PCM data format");
                goto LAB_140165bc7;
              }
              uVar3 = *(undefined4 *)(&DAT_140dece04 + (ulonglong)uVar4 * 4);
            }
            else {
              if (local_d8._2_2_ != 3) goto LAB_1401662dc;
              uVar3 = 0x8120;
            }
          }
          *(undefined4 *)local_128 = uVar3;
          uStack_f0 = uVar7;
          if ((char)local_12c != '\0') {
            uStack_f0 = uVar6;
          }
          uVar12 = (undefined7)(uVar11 >> 8);
          goto joined_r0x000140165bd4;
        }
      }
LAB_14016628e:
      FUN_140160cf0(*local_138);
      uVar6 = 0;
    }
    else {
LAB_140165b9c:
      pcVar10 = "Could not read RIFF header";
LAB_140165bc2:
      cVar1 = FUN_1400fbed0(pcVar10);
LAB_140165bc7:
      uVar12 = (undefined7)(uVar11 >> 8);
      if (cVar1 == '\0') goto LAB_14016628e;
joined_r0x000140165bd4:
      uVar6 = CONCAT71(uVar12,1);
    }
    if (param_2 == '\0') {
      parameter_s_is_invalid(param_1,uStack_f0,0);
    }
    if (local_e8 != 0) {
      FUN_140160cf0();
      local_e8 = 0;
    }
    uStack_e0 = 0;
    FUN_140160cf0(local_98);
  }
joined_r0x00014016593a:
  if (param_2 != '\0') {
    FUN_1400f9140(param_1);
  }
LAB_140165c1d:
  if (DAT_1414ef3c0 == (local_48 ^ (ulonglong)auStack_168)) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_48 ^ (ulonglong)auStack_168);
}

