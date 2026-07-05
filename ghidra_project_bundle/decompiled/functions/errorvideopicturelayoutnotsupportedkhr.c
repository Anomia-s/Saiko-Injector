/**
 * Function: errorvideopicturelayoutnotsupportedkhr
 * Address:  140538c50
 * Signature: undefined8 * __thiscall errorvideopicturelayoutnotsupportedkhr(void * this, undefined8 * param_1, uint param_2)
 * Body size: 2000 bytes
 */


undefined8 * __thiscall
errorvideopicturelayoutnotsupportedkhr(void *this,undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 local_138 [16];
  basic_ostream<char,std::char_traits<char>_> local_128;
  uint auStack_110 [52];
  undefined1 local_40 [32];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  if (-0xe < (int)param_2) {
    if ((int)param_2 < 0x3b9ee0e0) {
      switch(param_2) {
      case 0:
        pcVar2 = "Success";
        break;
      case 1:
        pcVar2 = "NotReady";
        break;
      case 2:
        pcVar2 = "Timeout";
        break;
      case 3:
        pcVar2 = "EventSet";
        break;
      case 4:
        pcVar2 = "EventReset";
        break;
      case 5:
        pcVar2 = "Incomplete";
        break;
      case 0xfffffff3:
        pcVar2 = "ErrorUnknown";
        break;
      case 0xfffffff4:
        pcVar2 = "ErrorFragmentedPool";
        break;
      case 0xfffffff5:
        pcVar2 = "ErrorFormatNotSupported";
        break;
      case 0xfffffff6:
        param_1[2] = 0;
        param_1[3] = 0;
        *param_1 = 0;
        param_1[1] = 0;
        pcVar2 = (char *)FUN_140b65d30(0x20);
        *param_1 = pcVar2;
        param_1[2] = 0x13;
        param_1[3] = 0x1f;
        builtin_strncpy(pcVar2,"ErrorTooManyObjects",0x14);
        return param_1;
      case 0xfffffff7:
        pcVar2 = "ErrorIncompatibleDriver";
        break;
      case 0xfffffff8:
        param_1[2] = 0;
        param_1[3] = 0;
        *param_1 = 0;
        param_1[1] = 0;
        pcVar2 = (char *)FUN_140b65d30(0x20);
        *param_1 = pcVar2;
        param_1[2] = 0x16;
        param_1[3] = 0x1f;
        builtin_strncpy(pcVar2,"ErrorFeatureNotP",0x10);
        uVar1 = 0x746e657365725074;
LAB_1405393a0:
        *(undefined8 *)(pcVar2 + 0xe) = uVar1;
        pcVar2[0x16] = '\0';
        return param_1;
      case 0xfffffff9:
        pcVar2 = "ErrorExtensionNotPresent";
        break;
      case 0xfffffffa:
        pcVar2 = "ErrorLayerNotPresent";
        break;
      case 0xfffffffb:
        param_1[2] = 0;
        param_1[3] = 0;
        *param_1 = 0;
        param_1[1] = 0;
        pcVar2 = (char *)FUN_140b65d30(0x20);
        *param_1 = pcVar2;
        param_1[2] = 0x14;
        param_1[3] = 0x1f;
        builtin_strncpy(pcVar2,"ErrorMemoryMapFailed",0x14);
LAB_14053941a:
        pcVar2[0x14] = '\0';
        return param_1;
      case 0xfffffffc:
        pcVar2 = "ErrorDeviceLost";
        break;
      case 0xfffffffd:
        pcVar2 = "ErrorInitializationFailed";
        break;
      case 0xfffffffe:
        pcVar2 = "ErrorOutOfDeviceMemory";
        break;
      case 0xffffffff:
        pcVar2 = "ErrorOutOfHostMemory";
        break;
      default:
        if (param_2 != 0x3b9acdeb) goto switchD_140538d5d_default;
        pcVar2 = "SuboptimalKHR";
      }
    }
    else if ((int)param_2 < 0x3b9f5228) {
      switch(param_2) {
      case 0x3b9ee0e0:
        pcVar2 = "ThreadIdleKHR";
        break;
      case 0x3b9ee0e1:
        pcVar2 = "ThreadDoneKHR";
        break;
      case 0x3b9ee0e2:
        param_1[2] = 0;
        param_1[3] = 0;
        *param_1 = 0;
        param_1[1] = 0;
        pcVar2 = (char *)FUN_140b65d30(0x20);
        *param_1 = pcVar2;
        param_1[2] = 0x14;
        param_1[3] = 0x1f;
        builtin_strncpy(pcVar2,"OperationDeferredKHR",0x14);
        goto LAB_14053941a;
      case 0x3b9ee0e3:
        param_1[2] = 0;
        param_1[3] = 0;
        *param_1 = 0;
        param_1[1] = 0;
        pcVar2 = (char *)FUN_140b65d30(0x20);
        *param_1 = pcVar2;
        param_1[2] = 0x17;
        param_1[3] = 0x1f;
        builtin_strncpy(pcVar2,"OperationNotDeferredKHR",0x18);
        return param_1;
      default:
switchD_140538d5d_default:
        FUN_1401e87c0(local_138,1);
        *(uint *)((longlong)auStack_110 +
                 (longlong)(local_128.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
             *(uint *)((longlong)auStack_110 +
                      (longlong)
                      (local_128.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) &
             0xfffff1ff | 0x800;
        std::basic_ostream<char,std::char_traits<char>_>::operator<<(&local_128,param_2);
        FUN_140514890(local_138,local_40);
        FUN_1401e8970(local_138);
        FUN_1400089f0(local_138,"invalid ( ",local_40);
        FUN_140008840(param_1,local_138," )");
        FUN_140004b30(local_138);
        FUN_140004b30(local_40);
        return param_1;
      }
    }
    else {
      if (param_2 != 0x3b9f5228) {
        if (param_2 == 0x3ba224d0) {
          param_1[2] = 0;
          param_1[3] = 0;
          *param_1 = 0;
          param_1[1] = 0;
          pcVar2 = (char *)FUN_140b65d30(0x20);
          *param_1 = pcVar2;
          param_1[2] = 0x1b;
          param_1[3] = 0x1f;
          builtin_strncpy(pcVar2,"IncompatibleShaderBinaryEXT",0x1c);
          return param_1;
        }
        if (param_2 == 0x3ba228b8) {
          param_1[2] = 0;
          param_1[3] = 0;
          *param_1 = 0;
          param_1[1] = 0;
          pcVar2 = (char *)FUN_140b65d30(0x20);
          *param_1 = pcVar2;
          param_1[2] = 0x18;
          param_1[3] = 0x1f;
          builtin_strncpy(pcVar2,"PipelineBinaryMissingKHR",0x19);
          return param_1;
        }
        goto switchD_140538d5d_default;
      }
      pcVar2 = "PipelineCompileRequired";
    }
LAB_1405393cc:
    FUN_140004940(param_1,pcVar2);
    return param_1;
  }
  if ((int)param_2 < -0x3b9b23dd) {
    if ((int)param_2 < -0x3b9d71b1) {
      if ((int)param_2 < -0x3b9f59f8) {
        if (param_2 == 0xc45dd748) {
          param_1[2] = 0;
          param_1[3] = 0;
          *param_1 = 0;
          param_1[1] = 0;
          pcVar2 = (char *)FUN_140b65d30(0x20);
          *param_1 = pcVar2;
          param_1[2] = 0x16;
          param_1[3] = 0x1f;
          builtin_strncpy(pcVar2,"ErrorNotEnoughSp",0x10);
          uVar1 = 0x52484b6563617053;
          goto LAB_1405393a0;
        }
        if (param_2 != 0xc4600db0) goto switchD_140538d5d_default;
        pcVar2 = "ErrorCompressionExhaustedEXT";
      }
      else if (param_2 == 0xc460a608) {
        pcVar2 = "ErrorInvalidVideoStdParametersKHR";
      }
      else if (param_2 == 0xc4614a18) {
        pcVar2 = "ErrorInvalidOpaqueCaptureAddress";
      }
      else {
        if (param_2 != 0xc46151e8) goto switchD_140538d5d_default;
        pcVar2 = "ErrorFullScreenExclusiveModeLostEXT";
      }
    }
    else if ((int)param_2 < -0x3b9d3330) {
      if (param_2 == 0xc4628e4f) {
        pcVar2 = "ErrorNotPermitted";
      }
      else {
        if (param_2 != 0xc462c118) goto switchD_140538d5d_default;
        pcVar2 = "ErrorFragmentation";
      }
    }
    else if (param_2 == 0xc462ccd0) {
      pcVar2 = "ErrorInvalidDrmFormatModifierPlaneLayoutEXT";
    }
    else if (param_2 == 0xc4641cbd) {
      pcVar2 = "ErrorInvalidExternalHandle";
    }
    else {
      if (param_2 != 0xc4642878) goto switchD_140538d5d_default;
      pcVar2 = "ErrorOutOfPoolMemory";
    }
    goto LAB_1405393cc;
  }
  if (-0x3b9af8e1 < (int)param_2) {
    if ((int)param_2 < -0x3b9acdec) {
      if (param_2 == 0xc4650720) {
        pcVar2 = "ErrorInvalidShaderNV";
      }
      else if (param_2 == 0xc4650b07) {
        pcVar2 = "ErrorValidationFailed";
      }
      else {
        if (param_2 != 0xc4652a47) goto switchD_140538d5d_default;
        pcVar2 = "ErrorIncompatibleDisplayKHR";
      }
    }
    else if (param_2 == 0xc4653214) {
      pcVar2 = "ErrorOutOfDateKHR";
    }
    else {
      if (param_2 != 0xc46535ff) {
        if (param_2 == 0xc4653600) {
          param_1[2] = 0;
          param_1[3] = 0;
          *param_1 = 0;
          param_1[1] = 0;
          pcVar2 = (char *)FUN_140b65d30(0x20);
          *param_1 = pcVar2;
          param_1[2] = 0x13;
          param_1[3] = 0x1f;
          builtin_strncpy(pcVar2,"ErrorSurfaceLostKHR",0x14);
          return param_1;
        }
        goto switchD_140538d5d_default;
      }
      pcVar2 = "ErrorNativeWindowInUseKHR";
    }
    goto LAB_1405393cc;
  }
  switch(param_2) {
  case 0xc464dc23:
    pcVar2 = "ErrorVideoStdVersionNotSupportedKHR";
    goto LAB_1405393cc;
  case 0xc464dc24:
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    pcVar2 = (char *)FUN_140b65d30(0x30);
    *param_1 = pcVar2;
    param_1[2] = 0x25;
    param_1[3] = 0x2f;
    builtin_strncpy(pcVar2,"ErrorVideoProfileCodecNotSupportedKHR",0x26);
    break;
  case 0xc464dc25:
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    pcVar2 = (char *)FUN_140b65d30(0x30);
    *param_1 = pcVar2;
    param_1[2] = 0x26;
    param_1[3] = 0x2f;
    builtin_strncpy(pcVar2,"ErrorVideoProfil",0x10);
    uVar3._0_1_ = 'e';
    uVar3._1_1_ = 'F';
    uVar3._2_1_ = 'o';
    uVar3._3_1_ = 'r';
    uVar4._0_1_ = 'm';
    uVar4._1_1_ = 'a';
    uVar4._2_1_ = 't';
    uVar4._3_1_ = 'N';
    goto LAB_1405391a6;
  case 0xc464dc26:
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    pcVar2 = (char *)FUN_140b65d30(0x30);
    *param_1 = pcVar2;
    param_1[2] = 0x29;
    param_1[3] = 0x2f;
    builtin_strncpy(pcVar2,"ErrorVideoProfileOperationNotSupportedKHR",0x2a);
    break;
  case 0xc464dc27:
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    pcVar2 = (char *)FUN_140b65d30(0x30);
    *param_1 = pcVar2;
    param_1[2] = 0x26;
    param_1[3] = 0x2f;
    builtin_strncpy(pcVar2,"ErrorVideoPictur",0x10);
    uVar3._0_1_ = 'e';
    uVar3._1_1_ = 'L';
    uVar3._2_1_ = 'a';
    uVar3._3_1_ = 'y';
    uVar4._0_1_ = 'o';
    uVar4._1_1_ = 'u';
    uVar4._2_1_ = 't';
    uVar4._3_1_ = 'N';
LAB_1405391a6:
    *(undefined4 *)(pcVar2 + 0x10) = uVar3;
    *(undefined4 *)(pcVar2 + 0x14) = uVar4;
    pcVar2[0x18] = 'o';
    pcVar2[0x19] = 't';
    pcVar2[0x1a] = 'S';
    pcVar2[0x1b] = 'u';
    pcVar2[0x1c] = 'p';
    pcVar2[0x1d] = 'p';
    pcVar2[0x1e] = 'o';
    pcVar2[0x1f] = 'r';
    pcVar2[0x1e] = 'o';
    pcVar2[0x1f] = 'r';
    pcVar2[0x20] = 't';
    pcVar2[0x21] = 'e';
    pcVar2[0x22] = 'd';
    pcVar2[0x23] = 'K';
    pcVar2[0x24] = 'H';
    pcVar2[0x25] = 'R';
    pcVar2[0x26] = '\0';
    break;
  case 0xc464dc28:
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    pcVar2 = (char *)FUN_140b65d30(0x20);
    *param_1 = pcVar2;
    param_1[2] = 0x1e;
    param_1[3] = 0x1f;
    builtin_strncpy(pcVar2,"ErrorImageUsageNotSupportedKHR",0x1f);
    break;
  default:
    goto switchD_140538d5d_default;
  }
  return param_1;
}

