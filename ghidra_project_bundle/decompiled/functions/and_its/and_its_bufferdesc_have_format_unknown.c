/**
 * Function: and_its_bufferdesc_have_format_unknown
 * Address:  14051f260
 * Signature: undefined and_its_bufferdesc_have_format_unknown(void)
 * Body size: 2645 bytes
 */


ulonglong and_its_bufferdesc_have_format_unknown
                    (longlong *param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  char cVar1;
  int iVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  basic_ostream<char,std::char_traits<char>_> *pbVar7;
  undefined8 uVar8;
  byte bVar9;
  char *pcVar10;
  __uint64 _Var11;
  undefined8 unaff_RBX;
  ulonglong uVar12;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar13;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  int iStack_3c;
  undefined4 local_38;
  int iStack_34;
  ulonglong local_30;
  
  local_30 = DAT_1414ef3c0 ^ (ulonglong)auStack_68;
  if (((param_3 != (longlong *)0x0) &&
      (plVar4 = (longlong *)(**(code **)(*param_3 + 0x30))(param_3), plVar4 != (longlong *)0x0)) &&
     (lVar5 = (**(code **)(*plVar4 + 0x30))(plVar4), lVar5 != 0)) {
    iVar2 = *(int *)(lVar5 + 0x98);
    if (iVar2 == 3) {
      if ((char)param_2[2] != '\v') {
        pbVar13 = (basic_ostream<char,struct_std::char_traits<char>_> *)(param_4 + 0x10);
        pcVar10 = 
        "Only ResourceType::Sampler can be used for bindless layouts with LayoutType::MutableSampler."
        ;
        goto LAB_14051f84b;
      }
      goto switchD_14051f2da_default;
    }
    if (iVar2 == 2) {
      if ((char)param_2[2] != '\x06') {
        pbVar13 = (basic_ostream<char,struct_std::char_traits<char>_> *)(param_4 + 0x10);
        pcVar10 = 
        "Only ResourceType::StructuredBuffer_UAV can be used for bindless layouts with LayoutType::MutableCounters."
        ;
        goto LAB_14051f84b;
      }
      goto switchD_14051f2da_default;
    }
    if (iVar2 != 1) goto switchD_14051f2da_default;
    switch((char)param_2[2]) {
    case '\n':
      pbVar13 = (basic_ostream<char,struct_std::char_traits<char>_> *)(param_4 + 0x10);
      pcVar10 = 
      "ResourceType::VolatileConstantBuffer is not allowed for bindless layouts with LayoutType::MutableSrvUavCbv."
      ;
      break;
    case '\v':
      pbVar13 = (basic_ostream<char,struct_std::char_traits<char>_> *)(param_4 + 0x10);
      pcVar10 = 
      "ResourceType::Sampler is not allowed for BindlessLayoutDesc::LayoutType::MutableSrvUavCbv.";
      break;
    case '\f':
      pbVar13 = (basic_ostream<char,struct_std::char_traits<char>_> *)(param_4 + 0x10);
      pcVar10 = 
      "ResourceType::RayTracingAccelStruct is not allowed for bindless layouts with LayoutType::MutableSrvUavCbv."
      ;
      break;
    case '\r':
      pbVar13 = (basic_ostream<char,struct_std::char_traits<char>_> *)(param_4 + 0x10);
      pcVar10 = 
      "ResourceType::PushConstants is not allowed for bindless layouts with LayoutType::MutableSrvUavCbv."
      ;
      break;
    case '\x0e':
      pbVar13 = (basic_ostream<char,struct_std::char_traits<char>_> *)(param_4 + 0x10);
      pcVar10 = 
      "ResourceType::SamplerFeedbackTexture_UAV is not allowed for bindless layouts with LayoutType::MutableSrvUavCbv."
      ;
      break;
    default:
      goto switchD_14051f2da_default;
    }
    goto LAB_14051f84b;
  }
switchD_14051f2da_default:
  bVar9 = *(byte *)(param_2 + 2);
  if (bVar9 < 0xf) {
    uVar12 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    switch(bVar9) {
    case 0:
      if (param_3 != (longlong *)0x0) goto switchD_14051f330_caseD_e;
      pcVar10 = "ResourceType::None bindings are not allowed in binding sets.";
      break;
    case 1:
    case 2:
      if ((longlong *)*param_2 == (longlong *)0x0) {
        pbVar13 = (basic_ostream<char,struct_std::char_traits<char>_> *)(param_4 + 0x10);
        pcVar10 = "Null resource bindings are not allowed for textures.";
      }
      else {
        lVar5 = (**(code **)(*(longlong *)*param_2 + 0x28))();
        FUN_1406dfba0(param_2 + 3,&local_40,lVar5,0);
        if ((iStack_34 != 0) && (iStack_3c != 0)) {
          if (((char)param_2[2] == '\x02') && (*(char *)(lVar5 + 0x42) == '\0')) {
            uVar8 = FUN_1400e5ec0(param_4 + 0x10,"Texture ");
            uVar6 = FUN_140527b30(lVar5 + 0x20);
            param_4 = FUN_1400e5ec0(uVar8,uVar6);
            pcVar10 = " cannot be used as a UAV because it does not have the isUAV flag set.";
          }
          else {
            cVar3 = *(char *)((longlong)param_2 + 0x11);
            if ((cVar3 == '\0') || (cVar1 = *(char *)(lVar5 + 0x1d), cVar1 == cVar3))
            goto switchD_14051f330_caseD_e;
            if (cVar1 == '\t') {
              if (cVar3 == '\x04') goto switchD_14051f330_caseD_e;
            }
            else if ((cVar3 == '\x04') && ((byte)(cVar1 - 5U) < 2)) goto switchD_14051f330_caseD_e;
            uVar8 = FUN_1400e5ec0(param_4 + 0x10,"Requested binding dimension (");
            uVar6 = FUN_140527b10(*(undefined1 *)((longlong)param_2 + 0x11));
            uVar8 = FUN_1400e5ec0(uVar8,uVar6);
            uVar8 = FUN_1400e5ec0(uVar8,") is incompatible with the dimension (");
            uVar6 = FUN_140527b10(*(undefined1 *)(lVar5 + 0x1d));
            uVar8 = FUN_1400e5ec0(uVar8,uVar6);
            param_4 = FUN_1400e5ec0(uVar8,") of texture ");
            pcVar10 = (char *)FUN_140527b30(lVar5 + 0x20);
          }
          goto LAB_14051f7dc;
        }
        pbVar7 = (basic_ostream<char,std::char_traits<char>_> *)
                 FUN_1400e5ec0(param_4 + 0x10,"The specified subresource set (BaseMipLevel = ");
        pbVar13 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                            (pbVar7,*(uint *)(param_2 + 3));
        pbVar7 = (basic_ostream<char,std::char_traits<char>_> *)
                 FUN_1400e5ec0(pbVar13,", NumMipLevels = ");
        pbVar13 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                            (pbVar7,*(uint *)((longlong)param_2 + 0x1c));
        pbVar7 = (basic_ostream<char,std::char_traits<char>_> *)
                 FUN_1400e5ec0(pbVar13,", BaseArraySlice = ");
        pbVar13 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                            (pbVar7,*(uint *)(param_2 + 4));
        pbVar7 = (basic_ostream<char,std::char_traits<char>_> *)
                 FUN_1400e5ec0(pbVar13,", NumArraySlices = ");
        pbVar13 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                            (pbVar7,*(uint *)((longlong)param_2 + 0x24));
        uVar8 = FUN_1400e5ec0(pbVar13,") does not intersect with the texture being bound (");
        uVar6 = FUN_140527b30(lVar5 + 0x20);
        uVar8 = FUN_1400e5ec0(uVar8,uVar6);
        pbVar7 = (basic_ostream<char,std::char_traits<char>_> *)
                 FUN_1400e5ec0(uVar8,", MipLevels = ");
        pbVar13 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                            (pbVar7,*(uint *)(lVar5 + 0x10));
        pbVar7 = (basic_ostream<char,std::char_traits<char>_> *)
                 FUN_1400e5ec0(pbVar13,", ArraySize = ");
        pbVar13 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                            (pbVar7,*(uint *)(lVar5 + 0xc));
        pcVar10 = ")";
      }
LAB_14051f84b:
      pbVar7 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1400e5ec0(pbVar13,pcVar10);
      goto LAB_14051f850;
    default:
      if ((longlong *)*param_2 == (longlong *)0x0) {
        if (((byte)(bVar9 - 3) < 2) ||
           (cVar3 = (**(code **)(*(longlong *)param_1[2] + 0x128))(), cVar3 == '\x02'))
        goto switchD_14051f330_caseD_e;
        pbVar13 = (basic_ostream<char,struct_std::char_traits<char>_> *)(param_4 + 0x10);
        pcVar10 = 
        "Null resource bindings are not allowed for buffers, unless it\'s a TypedBuffer_SRV or TypedBuffer_UAV type binding on DX11 or DX12."
        ;
        goto LAB_14051f84b;
      }
      plVar4 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x28))();
      bVar9 = *(byte *)(param_2 + 2);
      if ((byte)(bVar9 - 3) < 2) {
        if (*(char *)((longlong)plVar4 + 0x32) != '\0') goto LAB_14051f50d;
        uVar8 = FUN_1400e5ec0(param_4 + 0x10,"Cannot bind buffer ");
        uVar6 = FUN_140527b30(plVar4 + 2);
        uVar8 = FUN_1400e5ec0(uVar8,uVar6);
        uVar8 = FUN_1400e5ec0(uVar8,&DAT_1413a065d);
        uVar6 = FUN_140527c80((char)param_2[2]);
        pbVar13 = (basic_ostream<char,struct_std::char_traits<char>_> *)FUN_1400e5ec0(uVar8,uVar6);
        pcVar10 = " because it doesn\'t support typed views (BufferDesc::canHaveTypedViews).";
        goto LAB_14051f84b;
      }
      if (1 < (byte)(bVar9 - 5)) {
        if ((1 < (byte)(bVar9 - 7)) || (*(char *)((longlong)plVar4 + 0x33) != '\0'))
        goto LAB_14051f50d;
        uVar8 = FUN_1400e5ec0(param_4 + 0x10,"Cannot bind buffer ");
        uVar6 = FUN_140527b30(plVar4 + 2);
        uVar8 = FUN_1400e5ec0(uVar8,uVar6);
        uVar8 = FUN_1400e5ec0(uVar8,&DAT_1413a065d);
        uVar6 = FUN_140527c80((char)param_2[2]);
        pbVar13 = (basic_ostream<char,struct_std::char_traits<char>_> *)FUN_1400e5ec0(uVar8,uVar6);
        pcVar10 = " because it doesn\'t support raw views (BufferDesc::canHaveRawViews).";
        goto LAB_14051f84b;
      }
      if ((int)plVar4[1] == 0) {
        uVar8 = FUN_1400e5ec0(param_4 + 0x10,"Cannot bind buffer ");
        uVar6 = FUN_140527b30(plVar4 + 2);
        uVar8 = FUN_1400e5ec0(uVar8,uVar6);
        uVar8 = FUN_1400e5ec0(uVar8,&DAT_1413a065d);
        uVar6 = FUN_140527c80((char)param_2[2]);
        pbVar13 = (basic_ostream<char,struct_std::char_traits<char>_> *)FUN_1400e5ec0(uVar8,uVar6);
        pcVar10 = " because it doesn\'t have structStride specified at creation.";
        goto LAB_14051f84b;
      }
LAB_14051f50d:
      if (((bVar9 < 9 & (byte)(0x150 >> (bVar9 & 0x1f))) != 0) &&
         (*(char *)((longlong)plVar4 + 0x31) == '\0')) {
        uVar8 = FUN_1400e5ec0(param_4 + 0x10,"Cannot bind buffer ");
        uVar6 = FUN_140527b30(plVar4 + 2);
        uVar8 = FUN_1400e5ec0(uVar8,uVar6);
        uVar8 = FUN_1400e5ec0(uVar8,&DAT_1413a065d);
        uVar6 = FUN_140527c80((char)param_2[2]);
        pbVar13 = (basic_ostream<char,struct_std::char_traits<char>_> *)FUN_1400e5ec0(uVar8,uVar6);
        pcVar10 = " because it doesn\'t support unordeded access views (BufferDesc::canHaveUAVs).";
        goto LAB_14051f84b;
      }
      if (1 < (byte)(bVar9 - 9)) {
LAB_14051f8a9:
        if (((byte)(bVar9 - 3) < 2) && (*(char *)((longlong)param_2 + 0x12) == '\0')) {
          if ((char)plVar4[6] != '\0') goto switchD_14051f330_caseD_e;
          uVar8 = FUN_1400e5ec0(param_4 + 0x10,"Both binding for typed buffer ");
          uVar6 = FUN_140527b30(plVar4 + 2);
          param_4 = FUN_1400e5ec0(uVar8,uVar6);
          pcVar10 = " and its BufferDesc have format == UNKNOWN.";
          goto LAB_14051f7dc;
        }
LAB_14051fb7e:
        if ((bVar9 != 10) || ((param_2[3] == 0 && ((param_2[4] == -1 || (param_2[4] == *plVar4))))))
        goto switchD_14051f330_caseD_e;
        FUN_1406dfc50(param_2 + 3,&local_40,plVar4);
        uVar8 = FUN_1400e5ec0(param_4 + 0x10,
                              "Volatile constant buffers cannot be partially bound. Buffer ");
        uVar6 = FUN_140527b30(plVar4 + 2);
        uVar8 = FUN_1400e5ec0(uVar8,uVar6);
        pbVar7 = (basic_ostream<char,std::char_traits<char>_> *)
                 FUN_1400e5ec0(uVar8," is bound with effective byteOffset = ");
        pbVar13 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                            (pbVar7,CONCAT44(iStack_3c,local_40));
        pbVar7 = (basic_ostream<char,std::char_traits<char>_> *)
                 FUN_1400e5ec0(pbVar13,", byteSize = ");
        pbVar13 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                            (pbVar7,CONCAT44(iStack_34,local_38));
LAB_14051fc0c:
        pcVar10 = "Keypad .";
LAB_14051fc13:
        FUN_1400e5ec0(pbVar13,pcVar10 + 7);
        goto LAB_14051f879;
      }
      if (*(char *)((longlong)plVar4 + 0x36) == '\0') {
        uVar8 = FUN_1400e5ec0(param_4 + 0x10,"Cannot bind buffer ");
        uVar6 = FUN_140527b30(plVar4 + 2);
        uVar8 = FUN_1400e5ec0(uVar8,uVar6);
        uVar8 = FUN_1400e5ec0(uVar8,&DAT_1413a065d);
        uVar6 = FUN_140527c80((char)param_2[2]);
        pbVar13 = (basic_ostream<char,struct_std::char_traits<char>_> *)FUN_1400e5ec0(uVar8,uVar6);
        pcVar10 = 
        " because it doesn\'t support constant buffer views (BufferDesc::isConstantBuffer).";
        goto LAB_14051f84b;
      }
      if (bVar9 == 9) {
        if (*(char *)((longlong)plVar4 + 0x3b) == '\0') {
          if ((param_2[3] == 0) && ((param_2[4] == -1 || (param_2[4] == *plVar4))))
          goto switchD_14051f330_caseD_e;
          cVar3 = (**(code **)(*param_1 + 0x1e8))(param_1,2,0,0);
          if (cVar3 != '\0') {
            FUN_1406dfc50(param_2 + 3,&local_40,plVar4);
            if ((char)local_40 == '\0') {
              if (CONCAT44(iStack_34,local_38) != 0 && (char)local_38 == '\0') {
                bVar9 = *(byte *)(param_2 + 2);
                goto LAB_14051fb7e;
              }
              pbVar7 = (basic_ostream<char,std::char_traits<char>_> *)
                       FUN_1400e5ec0(param_4 + 0x10,
                                     "Constant buffer bindings must have nonzero byteSize that is a multiple of "
                                    );
              pbVar13 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar7,0x100);
              uVar8 = FUN_1400e5ec0(pbVar13," bytes. Buffer ");
              uVar6 = FUN_140527b30(plVar4 + 2);
              uVar8 = FUN_1400e5ec0(uVar8,uVar6);
              pbVar7 = (basic_ostream<char,std::char_traits<char>_> *)
                       FUN_1400e5ec0(uVar8," is bound with effective byteSize = ");
              _Var11 = CONCAT44(iStack_34,local_38);
            }
            else {
              pbVar7 = (basic_ostream<char,std::char_traits<char>_> *)
                       FUN_1400e5ec0(param_4 + 0x10,"Constant buffer offsets must be a multiple of "
                                    );
              pbVar13 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar7,0x100);
              uVar8 = FUN_1400e5ec0(pbVar13," bytes. Buffer ");
              uVar6 = FUN_140527b30(plVar4 + 2);
              uVar8 = FUN_1400e5ec0(uVar8,uVar6);
              pbVar7 = (basic_ostream<char,std::char_traits<char>_> *)
                       FUN_1400e5ec0(uVar8," is bound with effective byteOffset = ");
              _Var11 = CONCAT44(iStack_3c,local_40);
            }
            pbVar13 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar7,_Var11);
            goto LAB_14051fc0c;
          }
          uVar8 = FUN_1400e5ec0(param_4 + 0x10,
                                "Partial binding of constant buffers is not supported by the device (used for "
                               );
          uVar6 = FUN_140527b30(plVar4 + 2);
          pbVar13 = (basic_ostream<char,struct_std::char_traits<char>_> *)FUN_1400e5ec0(uVar8,uVar6)
          ;
          pcVar10 = "Keypad )";
          goto LAB_14051fc13;
        }
        uVar8 = FUN_1400e5ec0(param_4 + 0x10,"Cannot bind buffer ");
        uVar6 = FUN_140527b30(plVar4 + 2);
        param_4 = FUN_1400e5ec0(uVar8,uVar6);
        pcVar10 = " as a regular ConstantBuffer because it\'s a VolatileConstantBuffer.";
      }
      else {
        if (*(char *)((longlong)plVar4 + 0x3b) != '\0') goto LAB_14051f8a9;
        uVar8 = FUN_1400e5ec0(param_4 + 0x10,"Cannot bind buffer ");
        uVar6 = FUN_140527b30(plVar4 + 2);
        param_4 = FUN_1400e5ec0(uVar8,uVar6);
        pcVar10 = " as a VolatileConstantBuffer because it\'s a regular ConstantBuffer.";
      }
      goto LAB_14051f7dc;
    case 0xb:
      if (*param_2 != 0) goto switchD_14051f330_caseD_e;
      pcVar10 = "Null resource bindings are not allowed for samplers.";
      break;
    case 0xc:
      if (*param_2 != 0) goto switchD_14051f330_caseD_e;
      pcVar10 = "Null resource bindings are not allowed for ray tracing acceleration structures.";
      break;
    case 0xd:
      if (param_3 != (longlong *)0x0) {
        pbVar13 = (basic_ostream<char,struct_std::char_traits<char>_> *)(param_4 + 0x10);
        pcVar10 = "Push constants cannot be used in a descriptor table.";
        goto LAB_14051f84b;
      }
      if (*param_2 == 0) {
        if (param_2[4] != 0) goto switchD_14051f330_caseD_e;
        pcVar10 = "Push constants must have nonzero size specified.";
      }
      else {
        pcVar10 = "Push constants cannot have a resource specified.";
      }
      break;
    case 0xe:
      goto switchD_14051f330_caseD_e;
    }
    param_4 = param_4 + 0x10;
LAB_14051f7dc:
    uVar8 = FUN_1400e5ec0(param_4,pcVar10);
    FUN_140516fa0(uVar8);
  }
  else {
    pbVar7 = (basic_ostream<char,std::char_traits<char>_> *)
             FUN_1400e5ec0(param_4 + 0x10,"Unrecognized resourceType = ");
    pbVar7 = (basic_ostream<char,std::char_traits<char>_> *)
             std::basic_ostream<char,std::char_traits<char>_>::operator<<
                       (pbVar7,(uint)*(byte *)(param_2 + 2));
LAB_14051f850:
    cVar3 = std::basic_ios<char,std::char_traits<char>_>::widen
                      ((basic_ios<char,std::char_traits<char>_> *)
                       ((longlong)&pbVar7->vbtablePtr +
                       (longlong)pbVar7->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset)
                       ,'\n');
    std::basic_ostream<char,std::char_traits<char>_>::put(pbVar7,cVar3);
    std::basic_ostream<char,std::char_traits<char>_>::flush(pbVar7);
  }
LAB_14051f879:
  uVar12 = 0;
switchD_14051f330_caseD_e:
  if (DAT_1414ef3c0 != (local_30 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_30 ^ (ulonglong)auStack_68);
  }
  return uVar12 & 0xffffffff;
}

