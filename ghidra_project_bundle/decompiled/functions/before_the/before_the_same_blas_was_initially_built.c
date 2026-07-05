/**
 * Function: before_the_same_blas_was_initially_built
 * Address:  1406e6c00
 * Signature: void __thiscall before_the_same_blas_was_initially_built(void * this, longlong * param_1, void * param_2, ulonglong param_3, byte param_4)
 * Body size: 7832 bytes
 */


void __thiscall
before_the_same_blas_was_initially_built
          (void *this,longlong *param_1,void *param_2,ulonglong param_3,byte param_4)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  char *pcVar5;
  ulonglong *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  basic_ostream<char,std::char_traits<char>_> *pbVar9;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar10;
  undefined8 *******pppppppuVar11;
  void *pvVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  void *pvVar16;
  size_t _Size;
  __uint64 _Var17;
  uint uVar18;
  ulonglong uVar19;
  longlong *plVar20;
  longlong lVar21;
  undefined8 in_stack_fffffffffffffe58;
  undefined8 local_190;
  char *local_188 [3];
  basic_streambuf<char,std::char_traits<char>_> local_170 [3];
  undefined8 local_158;
  undefined8 local_150 [3];
  longlong *local_138;
  ulonglong *local_130;
  int *local_120;
  ulonglong local_108;
  uint local_100;
  ios_base local_f0 [6];
  longlong *local_90;
  undefined8 ******local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  ulonglong local_70;
  undefined8 local_60;
  
  uVar13 = (uint)((ulonglong)in_stack_fffffffffffffe58 >> 0x20);
  local_60 = 0xfffffffffffffffe;
  cVar3 = a_command_list_must_be_opened_before_any_rend();
  if (cVar3 == '\0') {
    return;
  }
  cVar3 = operation_requires_at_least(this,1,"buildBottomLevelAccelStruct");
  if (cVar3 == '\0') {
    return;
  }
  lVar4 = __RTDynamicCast(param_1,0,&nvrhi::rt::IAccelStruct::RTTI_Type_Descriptor,
                          &nvrhi::validation::AccelStructWrapper::RTTI_Type_Descriptor,
                          (ulonglong)uVar13 << 0x20);
  if (lVar4 == 0) {
LAB_1406e6d15:
    (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x128))
              (*(longlong **)((longlong)this + 0x10),param_1,param_2,param_3,param_4);
  }
  else {
    if (*(char *)(lVar4 + 0x10) != '\0') {
      local_188[1] = (char *)0x0;
      pcVar5 = (char *)FUN_140b65d30(0x40);
      local_188[2] = (char *)0x3c;
      local_170[0] = (basic_streambuf<char,std::char_traits<char>_>)0x3f;
      builtin_strncpy(pcVar5,"Cannot perform buildBottomLevelAccelStruct on a top-level AS",0x3d);
      local_188[0] = pcVar5;
      (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                (*(longlong **)((longlong)this + 0x20),2,pcVar5);
      thunk_FUN_140b68ba8(pcVar5,0x40);
      return;
    }
    plVar2 = *(longlong **)(lVar4 + 0x40);
    local_190 = lVar4;
    local_90 = param_1;
    for (uVar14 = 0; lVar4 = local_190, uVar14 < param_3; uVar14 = uVar14 + 1) {
      bVar1 = *(byte *)((longlong)param_2 + uVar14 * 0xa0 + 0x9d);
      if (bVar1 < 4) {
        plVar20 = (longlong *)(uVar14 * 0xa0 + (longlong)param_2);
        switch(bVar1) {
        case 0:
          switch((char)plVar20[2]) {
          case '\0':
            if (((int)plVar20[5] == 0) && (*plVar20 == 0)) goto LAB_1406e6fb4;
            FUN_1401e87c0(local_188,1);
            uVar7 = FUN_1400e5ec0(local_188 + 2,"BLAS ");
            lVar4 = (**(code **)(*local_90 + 0x28))();
            uVar8 = FUN_140527b30(lVar4 + 0x28);
            uVar7 = FUN_1400e5ec0(uVar7,uVar8);
            pbVar9 = (basic_ostream<char,std::char_traits<char>_> *)
                     FUN_1400e5ec0(uVar7," build geometry ");
            pbVar10 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar9,uVar14);
            pbVar9 = (basic_ostream<char,std::char_traits<char>_> *)
                     FUN_1400e5ec0(pbVar10," has indexFormat = UNKNOWN but nonzero indexCount = ");
            std::basic_ostream<char,std::char_traits<char>_>::operator<<
                      (pbVar9,*(uint *)(plVar20 + 5));
            FUN_140514890(local_188,&local_88);
            pppppppuVar11 = &local_88;
            if (0xf < local_70) {
              pppppppuVar11 = (undefined8 *******)local_88;
            }
            (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                      (*(longlong **)((longlong)this + 0x20),2,pppppppuVar11);
            goto LAB_1406e8a4f;
          case '\x01':
            cVar3 = (**(code **)(**(longlong **)((longlong)this + 0x18) + 0x128))();
            if (cVar3 != '\x02') {
              FUN_1401e87c0(local_188,1);
              uVar7 = FUN_1400e5ec0(local_188 + 2,"BLAS ");
              lVar4 = (**(code **)(*local_90 + 0x28))();
              uVar8 = FUN_140527b30(lVar4 + 0x28);
              uVar7 = FUN_1400e5ec0(uVar7,uVar8);
              pbVar9 = (basic_ostream<char,std::char_traits<char>_> *)
                       FUN_1400e5ec0(uVar7," build geometry ");
              pbVar10 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar9,uVar14);
              FUN_1400e5ec0(pbVar10," has index format R8_UINT which is only supported on Vulkan");
              FUN_140514890(local_188,&local_88);
              pppppppuVar11 = &local_88;
              if (0xf < local_70) {
                pppppppuVar11 = (undefined8 *******)local_88;
              }
              (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                        (*(longlong **)((longlong)this + 0x20),2,pppppppuVar11);
              goto LAB_1406e8a4f;
            }
switchD_1406e6dae_caseD_9:
            if ((longlong *)*plVar20 == (longlong *)0x0) {
              FUN_1401e87c0(local_188,1);
              uVar7 = FUN_1400e5ec0(local_188 + 2,"BLAS ");
              lVar4 = (**(code **)(*local_90 + 0x28))();
              uVar8 = FUN_140527b30(lVar4 + 0x28);
              uVar7 = FUN_1400e5ec0(uVar7,uVar8);
              pbVar9 = (basic_ostream<char,std::char_traits<char>_> *)
                       FUN_1400e5ec0(uVar7," build geometry ");
              pbVar10 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar9,uVar14);
              uVar7 = FUN_1400e5ec0(pbVar10," has a NULL index buffer but indexFormat is ");
              uVar8 = FUN_140527ca0((char)plVar20[2]);
              FUN_1400e5ec0(uVar7,uVar8);
              FUN_140514890(local_188,&local_88);
              pppppppuVar11 = &local_88;
              if (0xf < local_70) {
                pppppppuVar11 = (undefined8 *******)local_88;
              }
              (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                        (*(longlong **)((longlong)this + 0x20),2,pppppppuVar11);
              goto LAB_1406e8a4f;
            }
            puVar6 = (ulonglong *)(**(code **)(*(longlong *)*plVar20 + 0x28))();
            if ((char)puVar6[7] == '\0') {
              FUN_1401e87c0(local_188,1);
              uVar7 = FUN_1400e5ec0(local_188 + 2,"BLAS ");
              lVar4 = (**(code **)(*local_90 + 0x28))();
              uVar8 = FUN_140527b30(lVar4 + 0x28);
              uVar7 = FUN_1400e5ec0(uVar7,uVar8);
              pbVar9 = (basic_ostream<char,std::char_traits<char>_> *)
                       FUN_1400e5ec0(uVar7," build geometry ");
              pbVar10 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar9,uVar14);
              uVar7 = FUN_1400e5ec0(pbVar10," has index buffer = ");
              uVar8 = FUN_140527b30(puVar6 + 2);
              uVar7 = FUN_1400e5ec0(uVar7,uVar8);
              FUN_1400e5ec0(uVar7," which does not have the isAccelStructBuildInput flag set");
              FUN_140514890(local_188,&local_88);
              pppppppuVar11 = &local_88;
              if (0xf < local_70) {
                pppppppuVar11 = (undefined8 *******)local_88;
              }
              (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                        (*(longlong **)((longlong)this + 0x20),2,pppppppuVar11);
              goto LAB_1406e8a4f;
            }
            lVar4 = plVar20[5];
            lVar21 = FUN_1406e0030((char)plVar20[2]);
            uVar19 = (ulonglong)((uint)*(byte *)(lVar21 + 0x10) * (int)lVar4);
            if (*puVar6 < plVar20[3] + uVar19) {
              FUN_1401e87c0(local_188,1);
              uVar7 = FUN_1400e5ec0(local_188 + 2,"BLAS ");
              lVar4 = (**(code **)(*local_90 + 0x28))();
              uVar8 = FUN_140527b30(lVar4 + 0x28);
              uVar7 = FUN_1400e5ec0(uVar7,uVar8);
              pbVar9 = (basic_ostream<char,std::char_traits<char>_> *)
                       FUN_1400e5ec0(uVar7," build geometry ");
              pbVar10 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar9,uVar14);
              pbVar9 = (basic_ostream<char,std::char_traits<char>_> *)
                       FUN_1400e5ec0(pbVar10," points at ");
              pbVar10 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar9,uVar19);
              pbVar9 = (basic_ostream<char,std::char_traits<char>_> *)
                       FUN_1400e5ec0(pbVar10," bytes of index data at offset ");
              pbVar10 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                                  (pbVar9,plVar20[3]);
              uVar7 = FUN_1400e5ec0(pbVar10," in buffer ");
              uVar8 = FUN_140527b30(puVar6 + 2);
              uVar7 = FUN_1400e5ec0(uVar7,uVar8);
              pbVar9 = (basic_ostream<char,std::char_traits<char>_> *)
                       FUN_1400e5ec0(uVar7," whose size is ");
              pbVar10 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar9,*puVar6)
              ;
              FUN_1400e5ec0(pbVar10,", which will result in a buffer overrun");
              FUN_140514890(local_188,&local_88);
              pppppppuVar11 = &local_88;
              if (0xf < local_70) {
                pppppppuVar11 = (undefined8 *******)local_88;
              }
              (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                        (*(longlong **)((longlong)this + 0x20),2,pppppppuVar11);
              goto LAB_1406e8a4f;
            }
            if (0x55555555 < (uint)((int)plVar20[5] * -0x55555555)) {
              FUN_1401e87c0(local_188,1);
              uVar7 = FUN_1400e5ec0(local_188 + 2,"BLAS ");
              lVar4 = (**(code **)(*local_90 + 0x28))();
              uVar8 = FUN_140527b30(lVar4 + 0x28);
              uVar7 = FUN_1400e5ec0(uVar7,uVar8);
              pbVar9 = (basic_ostream<char,std::char_traits<char>_> *)
                       FUN_1400e5ec0(uVar7," build geometry ");
              pbVar10 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar9,uVar14);
              pbVar9 = (basic_ostream<char,std::char_traits<char>_> *)
                       FUN_1400e5ec0(pbVar10," has indexCount = ");
              pbVar10 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                                  (pbVar9,*(uint *)(plVar20 + 5));
              FUN_1400e5ec0(pbVar10,", which is not a multiple of 3");
              FUN_140514890(local_188,&local_88);
              pppppppuVar11 = &local_88;
              if (0xf < local_70) {
                pppppppuVar11 = (undefined8 *******)local_88;
              }
              (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                        (*(longlong **)((longlong)this + 0x20),2,pppppppuVar11);
              goto LAB_1406e8a4f;
            }
LAB_1406e6fb4:
            if ((0x31 < (ulonglong)*(byte *)((longlong)plVar20 + 0x11)) ||
               ((0x249c1c4180180U >> ((ulonglong)*(byte *)((longlong)plVar20 + 0x11) & 0x3f) & 1) ==
                0)) {
              FUN_1401e87c0(local_188,1);
              uVar7 = FUN_1400e5ec0(local_188 + 2,"BLAS ");
              lVar4 = (**(code **)(*local_90 + 0x28))();
              uVar8 = FUN_140527b30(lVar4 + 0x28);
              uVar7 = FUN_1400e5ec0(uVar7,uVar8);
              pbVar9 = (basic_ostream<char,std::char_traits<char>_> *)
                       FUN_1400e5ec0(uVar7," build geometry ");
              pbVar10 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar9,uVar14);
              uVar7 = FUN_1400e5ec0(pbVar10," has unsupported vertex format: ");
              uVar8 = FUN_140527ca0(*(undefined1 *)((longlong)plVar20 + 0x11));
              FUN_1400e5ec0(uVar7,uVar8);
              FUN_140514890(local_188,&local_88);
              pppppppuVar11 = &local_88;
              if (0xf < local_70) {
                pppppppuVar11 = (undefined8 *******)local_88;
              }
              (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                        (*(longlong **)((longlong)this + 0x20),2,pppppppuVar11);
              goto LAB_1406e8a4f;
            }
            if ((longlong *)plVar20[1] == (longlong *)0x0) {
              FUN_1401e87c0(local_188,1);
              uVar7 = FUN_1400e5ec0(local_188 + 2,"BLAS ");
              lVar4 = (**(code **)(*local_90 + 0x28))();
              uVar8 = FUN_140527b30(lVar4 + 0x28);
              uVar7 = FUN_1400e5ec0(uVar7,uVar8);
              pbVar9 = (basic_ostream<char,std::char_traits<char>_> *)
                       FUN_1400e5ec0(uVar7," build geometry ");
              pbVar10 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar9,uVar14);
              FUN_1400e5ec0(pbVar10," has NULL vertex buffer");
              FUN_140514890(local_188,&local_88);
              pppppppuVar11 = &local_88;
              if (0xf < local_70) {
                pppppppuVar11 = (undefined8 *******)local_88;
              }
              (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                        (*(longlong **)((longlong)this + 0x20),2,pppppppuVar11);
              goto LAB_1406e8a4f;
            }
            if ((int)plVar20[6] == 0) {
              FUN_1401e87c0(local_188,1);
              uVar7 = FUN_1400e5ec0(local_188 + 2,"BLAS ");
              lVar4 = (**(code **)(*local_90 + 0x28))();
              uVar8 = FUN_140527b30(lVar4 + 0x28);
              uVar7 = FUN_1400e5ec0(uVar7,uVar8);
              pbVar9 = (basic_ostream<char,std::char_traits<char>_> *)
                       FUN_1400e5ec0(uVar7," build geometry ");
              pbVar10 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar9,uVar14);
              FUN_1400e5ec0(pbVar10," has vertexStride = 0");
              FUN_140514890(local_188,&local_88);
              pppppppuVar11 = &local_88;
              if (0xf < local_70) {
                pppppppuVar11 = (undefined8 *******)local_88;
              }
              (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                        (*(longlong **)((longlong)this + 0x20),2,pppppppuVar11);
              goto LAB_1406e8a4f;
            }
            if (((char)plVar20[2] == '\0') &&
               (0x55555555 < (uint)(*(int *)((longlong)plVar20 + 0x2c) * -0x55555555))) {
              FUN_1401e87c0(local_188,1);
              uVar7 = FUN_1400e5ec0(local_188 + 2,"BLAS ");
              lVar4 = (**(code **)(*local_90 + 0x28))();
              uVar8 = FUN_140527b30(lVar4 + 0x28);
              uVar7 = FUN_1400e5ec0(uVar7,uVar8);
              pbVar9 = (basic_ostream<char,std::char_traits<char>_> *)
                       FUN_1400e5ec0(uVar7," build geometry ");
              pbVar10 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar9,uVar14);
              pbVar9 = (basic_ostream<char,std::char_traits<char>_> *)
                       FUN_1400e5ec0(pbVar10," has indexFormat = UNKNOWN and vertexCount = ");
              pbVar10 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                                  (pbVar9,*(uint *)((longlong)plVar20 + 0x2c));
              FUN_1400e5ec0(pbVar10,", which is not a multiple of 3");
              FUN_140514890(local_188,&local_88);
              pppppppuVar11 = &local_88;
              if (0xf < local_70) {
                pppppppuVar11 = (undefined8 *******)local_88;
              }
              (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                        (*(longlong **)((longlong)this + 0x20),2,pppppppuVar11);
              goto LAB_1406e8a4f;
            }
            puVar6 = (ulonglong *)(**(code **)(*(longlong *)plVar20[1] + 0x28))();
            if ((char)puVar6[7] == '\0') {
              FUN_1401e87c0(local_188,1);
              uVar7 = FUN_1400e5ec0(local_188 + 2,"BLAS ");
              lVar4 = (**(code **)(*local_90 + 0x28))();
              uVar8 = FUN_140527b30(lVar4 + 0x28);
              uVar7 = FUN_1400e5ec0(uVar7,uVar8);
              pbVar9 = (basic_ostream<char,std::char_traits<char>_> *)
                       FUN_1400e5ec0(uVar7," build geometry ");
              pbVar10 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar9,uVar14);
              uVar7 = FUN_1400e5ec0(pbVar10," has vertex buffer = ");
              uVar8 = FUN_140527b30(puVar6 + 2);
              uVar7 = FUN_1400e5ec0(uVar7,uVar8);
              FUN_1400e5ec0(uVar7," which does not have the isAccelStructBuildInput flag set");
              FUN_140514890(local_188,&local_88);
              pppppppuVar11 = &local_88;
              if (0xf < local_70) {
                pppppppuVar11 = (undefined8 *******)local_88;
              }
              (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                        (*(longlong **)((longlong)this + 0x20),2,pppppppuVar11);
              goto LAB_1406e8a4f;
            }
            uVar19 = (ulonglong)(uint)((int)plVar20[6] * *(int *)((longlong)plVar20 + 0x2c));
            if (plVar20[4] + uVar19 <= *puVar6) goto LAB_1406e6d5b;
            FUN_1401e87c0(local_188,1);
            uVar7 = FUN_1400e5ec0(local_188 + 2,"BLAS ");
            lVar4 = (**(code **)(*local_90 + 0x28))();
            uVar8 = FUN_140527b30(lVar4 + 0x28);
            uVar7 = FUN_1400e5ec0(uVar7,uVar8);
            pbVar9 = (basic_ostream<char,std::char_traits<char>_> *)
                     FUN_1400e5ec0(uVar7," build geometry ");
            pbVar10 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar9,uVar14);
            pbVar9 = (basic_ostream<char,std::char_traits<char>_> *)
                     FUN_1400e5ec0(pbVar10," points at ");
            pbVar10 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar9,uVar19);
            pbVar9 = (basic_ostream<char,std::char_traits<char>_> *)
                     FUN_1400e5ec0(pbVar10," bytes of vertex data at offset ");
            pbVar10 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                                (pbVar9,plVar20[4]);
            uVar7 = FUN_1400e5ec0(pbVar10," in buffer ");
            uVar8 = FUN_140527b30(puVar6 + 2);
            uVar7 = FUN_1400e5ec0(uVar7,uVar8);
            pbVar9 = (basic_ostream<char,std::char_traits<char>_> *)
                     FUN_1400e5ec0(uVar7," whose size is ");
            pbVar10 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar9,*puVar6);
            FUN_1400e5ec0(pbVar10,", which will result in a buffer overrun");
            local_88 = (undefined8 *******)0x0;
            uStack_80 = 0;
            local_78 = 0;
            local_70 = 0xf;
            if (((local_100 & 0x22) == 2) || (uVar14 = *local_130, uVar14 == 0)) {
              if (((local_100 & 4) == 0) && (*local_138 != 0)) {
                puVar15 = &local_158;
                uVar14 = *local_138 + (longlong)*local_120;
                goto LAB_1406e8259;
              }
            }
            else {
              puVar15 = local_150;
              if (uVar14 < local_108) {
                uVar14 = local_108;
              }
LAB_1406e8259:
              pvVar12 = *(void **)*puVar15;
              if (pvVar12 != (void *)0x0) {
                uVar14 = uVar14 - (longlong)pvVar12;
                if (uVar14 < 0x10) {
                  local_78 = uVar14;
                  memmove(&local_88,pvVar12,uVar14);
                  *(undefined1 *)((longlong)&local_88 + uVar14) = 0;
                }
                else {
                  FUN_1400069b0(&local_88,uVar14);
                }
              }
            }
            pppppppuVar11 = (undefined8 *******)local_88;
            if (local_70 < 0x10) {
              pppppppuVar11 = &local_88;
            }
            (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                      (*(longlong **)((longlong)this + 0x20),2,pppppppuVar11);
            break;
          default:
            FUN_1401e87c0(local_188,1);
            uVar7 = FUN_1400e5ec0(local_188 + 2,"BLAS ");
            lVar4 = (**(code **)(*local_90 + 0x28))();
            uVar8 = FUN_140527b30(lVar4 + 0x28);
            uVar7 = FUN_1400e5ec0(uVar7,uVar8);
            pbVar9 = (basic_ostream<char,std::char_traits<char>_> *)
                     FUN_1400e5ec0(uVar7," build geometry ");
            pbVar10 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar9,uVar14);
            uVar7 = FUN_1400e5ec0(pbVar10," has unsupported index format: ");
            uVar8 = FUN_140527ca0((char)plVar20[2]);
            FUN_1400e5ec0(uVar7,uVar8);
            FUN_140514890(local_188,&local_88);
            pppppppuVar11 = &local_88;
            if (0xf < local_70) {
              pppppppuVar11 = (undefined8 *******)local_88;
            }
            (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                      (*(longlong **)((longlong)this + 0x20),2,pppppppuVar11);
            goto LAB_1406e8a4f;
          case '\t':
          case '!':
            goto switchD_1406e6dae_caseD_9;
          }
          break;
        case 1:
          if ((longlong *)*plVar20 == (longlong *)0x0) {
            FUN_1401e87c0(local_188,1);
            uVar7 = FUN_1400e5ec0(local_188 + 2,"BLAS ");
            lVar4 = (**(code **)(*local_90 + 0x28))();
            uVar8 = FUN_140527b30(lVar4 + 0x28);
            uVar7 = FUN_1400e5ec0(uVar7,uVar8);
            pbVar9 = (basic_ostream<char,std::char_traits<char>_> *)
                     FUN_1400e5ec0(uVar7," build geometry ");
            pbVar10 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar9,uVar14);
            FUN_1400e5ec0(pbVar10," has NULL AABB data buffer");
            FUN_140514890(local_188,&local_88);
            pppppppuVar11 = &local_88;
            if (0xf < local_70) {
              pppppppuVar11 = (undefined8 *******)local_88;
            }
            (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                      (*(longlong **)((longlong)this + 0x20),2,pppppppuVar11);
            goto LAB_1406e8a4f;
          }
          puVar6 = (ulonglong *)(**(code **)(*(longlong *)*plVar20 + 0x28))();
          if ((char)puVar6[7] == '\0') {
            FUN_1401e87c0(local_188,1);
            uVar7 = FUN_1400e5ec0(local_188 + 2,"BLAS ");
            lVar4 = (**(code **)(*local_90 + 0x28))();
            uVar8 = FUN_140527b30(lVar4 + 0x28);
            uVar7 = FUN_1400e5ec0(uVar7,uVar8);
            pbVar9 = (basic_ostream<char,std::char_traits<char>_> *)
                     FUN_1400e5ec0(uVar7," build geometry ");
            pbVar10 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar9,uVar14);
            uVar7 = FUN_1400e5ec0(pbVar10," has AABB data buffer = ");
            uVar8 = FUN_140527b30(puVar6 + 2);
            uVar7 = FUN_1400e5ec0(uVar7,uVar8);
            FUN_1400e5ec0(uVar7," which does not have the isAccelStructBuildInput flag set");
            FUN_140514890(local_188,&local_88);
            pppppppuVar11 = &local_88;
            if (0xf < local_70) {
              pppppppuVar11 = (undefined8 *******)local_88;
            }
            (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                      (*(longlong **)((longlong)this + 0x20),2,pppppppuVar11);
            goto LAB_1406e8a4f;
          }
          if (*(uint *)((longlong)plVar20 + 0x1c) < 0x18 && 1 < *(uint *)(plVar20 + 3)) {
            FUN_1401e87c0(local_188,1);
            uVar7 = FUN_1400e5ec0(local_188 + 2,"BLAS ");
            lVar4 = (**(code **)(*local_90 + 0x28))();
            uVar8 = FUN_140527b30(lVar4 + 0x28);
            uVar7 = FUN_1400e5ec0(uVar7,uVar8);
            pbVar9 = (basic_ostream<char,std::char_traits<char>_> *)
                     FUN_1400e5ec0(uVar7," build geometry ");
            pbVar10 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar9,uVar14);
            pbVar9 = (basic_ostream<char,std::char_traits<char>_> *)
                     FUN_1400e5ec0(pbVar10," has AABB stride = ");
            pbVar10 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                                (pbVar9,*(uint *)((longlong)plVar20 + 0x1c));
            pbVar9 = (basic_ostream<char,std::char_traits<char>_> *)
                     FUN_1400e5ec0(pbVar10," which is less than the size of one AABB (");
            pbVar10 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar9,0x18);
            FUN_1400e5ec0(pbVar10," bytes)");
            FUN_140514890(local_188,&local_88);
            pppppppuVar11 = &local_88;
            if (0xf < local_70) {
              pppppppuVar11 = (undefined8 *******)local_88;
            }
            (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                      (*(longlong **)((longlong)this + 0x20),2,pppppppuVar11);
            goto LAB_1406e8a4f;
          }
          uVar19 = (ulonglong)(*(uint *)((longlong)plVar20 + 0x1c) * *(uint *)(plVar20 + 3));
          if (plVar20[2] + uVar19 <= *puVar6) {
            if ((char)plVar20[0xd] != '\x01') goto LAB_1406e6d5b;
            FUN_1401e87c0(local_188,1);
            uVar7 = FUN_1400e5ec0(local_188 + 2,"BLAS ");
            lVar4 = (**(code **)(*local_90 + 0x28))();
            uVar8 = FUN_140527b30(lVar4 + 0x28);
            uVar7 = FUN_1400e5ec0(uVar7,uVar8);
            pbVar9 = (basic_ostream<char,std::char_traits<char>_> *)
                     FUN_1400e5ec0(uVar7," build geometry ");
            pbVar10 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar9,uVar14);
            FUN_1400e5ec0(pbVar10,
                          " is of type AABB but has useTransform = true, which is unsupported, and the transform will be ignored"
                         );
            plVar20 = *(longlong **)((longlong)this + 0x20);
            local_88 = (undefined8 *******)0x0;
            uStack_80 = 0;
            local_78 = 0;
            local_70 = 0xf;
            if (((local_100 & 0x22) == 2) || (uVar19 = *local_130, uVar19 == 0)) {
              if (((local_100 & 4) == 0) && (*local_138 != 0)) {
                uVar19 = *local_138 + (longlong)*local_120;
                puVar15 = &local_158;
                goto LAB_1406e6f13;
              }
            }
            else {
              if (uVar19 < local_108) {
                uVar19 = local_108;
              }
              puVar15 = local_150;
LAB_1406e6f13:
              pvVar12 = *(void **)*puVar15;
              if (pvVar12 != (void *)0x0) {
                uVar19 = uVar19 - (longlong)pvVar12;
                if (uVar19 < 0x10) {
                  local_78 = uVar19;
                  memmove(&local_88,pvVar12,uVar19);
                  *(undefined1 *)((longlong)&local_88 + uVar19) = 0;
                }
                else {
                  FUN_1400069b0(&local_88,uVar19);
                }
              }
            }
            pppppppuVar11 = &local_88;
            if (0xf < local_70) {
              pppppppuVar11 = (undefined8 *******)local_88;
            }
            (**(code **)(*plVar20 + 8))(plVar20,1,pppppppuVar11);
            if (0xf < local_70) {
              uVar19 = local_70 + 1;
              pppppppuVar11 = (undefined8 *******)local_88;
              if (0xfff < uVar19) {
                pppppppuVar11 = (undefined8 *******)local_88[-1];
                if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)pppppppuVar11)))
                goto LAB_1406e8a7f;
                uVar19 = local_70 + 0x28;
              }
              thunk_FUN_140b68ba8(pppppppuVar11,uVar19);
            }
            *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
             ((longlong)local_188 + (longlong)*(int *)(local_188[0] + 4)) =
                 &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::
                  vftable;
            *(int *)((longlong)&local_190 + (longlong)*(int *)(local_188[0] + 4) + 4) =
                 *(int *)(local_188[0] + 4) + -0x98;
            local_170[0] = (basic_streambuf<char,std::char_traits<char>_>)
                           &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>
                            ::vftable;
            FUN_1401da8b0(local_170);
            std::basic_streambuf<char,std::char_traits<char>_>::
            ~basic_streambuf<char,std::char_traits<char>_>(local_170);
            std::ios_base::~ios_base(local_f0);
            goto LAB_1406e6d5b;
          }
          FUN_1401e87c0(local_188,1);
          uVar7 = FUN_1400e5ec0(local_188 + 2,"BLAS ");
          lVar4 = (**(code **)(*local_90 + 0x28))();
          uVar8 = FUN_140527b30(lVar4 + 0x28);
          uVar7 = FUN_1400e5ec0(uVar7,uVar8);
          pbVar9 = (basic_ostream<char,std::char_traits<char>_> *)
                   FUN_1400e5ec0(uVar7," build geometry ");
          pbVar10 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar9,uVar14);
          pbVar9 = (basic_ostream<char,std::char_traits<char>_> *)
                   FUN_1400e5ec0(pbVar10," points at ");
          pbVar10 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar9,uVar19);
          pbVar9 = (basic_ostream<char,std::char_traits<char>_> *)
                   FUN_1400e5ec0(pbVar10," bytes of AABB data at offset ");
          pbVar10 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar9,plVar20[2]);
          uVar7 = FUN_1400e5ec0(pbVar10," in buffer ");
          uVar8 = FUN_140527b30(puVar6 + 2);
          uVar7 = FUN_1400e5ec0(uVar7,uVar8);
          pbVar9 = (basic_ostream<char,std::char_traits<char>_> *)
                   FUN_1400e5ec0(uVar7," whose size is ");
          pbVar10 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar9,*puVar6);
          FUN_1400e5ec0(pbVar10,", which will result in a buffer overrun");
          local_88 = (undefined8 *******)0x0;
          uStack_80 = 0;
          local_78 = 0;
          local_70 = 0xf;
          if (((local_100 & 0x22) == 2) || (uVar14 = *local_130, uVar14 == 0)) {
            if (((local_100 & 4) == 0) && (*local_138 != 0)) {
              puVar15 = &local_158;
              uVar14 = *local_138 + (longlong)*local_120;
              goto LAB_1406e8203;
            }
          }
          else {
            puVar15 = local_150;
            if (uVar14 < local_108) {
              uVar14 = local_108;
            }
LAB_1406e8203:
            pvVar12 = *(void **)*puVar15;
            if (pvVar12 != (void *)0x0) {
              uVar14 = uVar14 - (longlong)pvVar12;
              if (uVar14 < 0x10) {
                local_78 = uVar14;
                memmove(&local_88,pvVar12,uVar14);
                *(undefined1 *)((longlong)&local_88 + uVar14) = 0;
              }
              else {
                FUN_1400069b0(&local_88,uVar14);
              }
            }
          }
          pppppppuVar11 = (undefined8 *******)local_88;
          if (local_70 < 0x10) {
            pppppppuVar11 = &local_88;
          }
          (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                    (*(longlong **)((longlong)this + 0x20),2,pppppppuVar11);
          break;
        case 2:
          if (plVar20[1] != 0) goto LAB_1406e6d5b;
          FUN_1401e87c0(local_188,1);
          uVar7 = FUN_1400e5ec0(local_188 + 2,"BLAS ");
          lVar4 = (**(code **)(*local_90 + 0x28))();
          uVar8 = FUN_140527b30(lVar4 + 0x28);
          uVar7 = FUN_1400e5ec0(uVar7,uVar8);
          pbVar9 = (basic_ostream<char,std::char_traits<char>_> *)
                   FUN_1400e5ec0(uVar7," build geometry ");
          pbVar10 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar9,uVar14);
          FUN_1400e5ec0(pbVar10," has NULL vertex buffer");
          local_88 = (undefined8 *******)0x0;
          uStack_80 = 0;
          local_78 = 0;
          local_70 = 0xf;
          if (((local_100 & 0x22) == 2) || (uVar14 = *local_130, uVar14 == 0)) {
            if (((local_100 & 4) == 0) && (*local_138 != 0)) {
              puVar15 = &local_158;
              uVar14 = *local_138 + (longlong)*local_120;
              goto LAB_1406e8008;
            }
          }
          else {
            puVar15 = local_150;
            if (uVar14 < local_108) {
              uVar14 = local_108;
            }
LAB_1406e8008:
            pvVar12 = *(void **)*puVar15;
            if (pvVar12 != (void *)0x0) {
              uVar14 = uVar14 - (longlong)pvVar12;
              if (uVar14 < 0x10) {
                local_78 = uVar14;
                memmove(&local_88,pvVar12,uVar14);
                *(undefined1 *)((longlong)&local_88 + uVar14) = 0;
              }
              else {
                FUN_1400069b0(&local_88,uVar14);
              }
            }
          }
          pppppppuVar11 = (undefined8 *******)local_88;
          if (local_70 < 0x10) {
            pppppppuVar11 = &local_88;
          }
          (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                    (*(longlong **)((longlong)this + 0x20),2,pppppppuVar11);
          break;
        case 3:
          if (plVar20[1] != 0) goto LAB_1406e6d5b;
          FUN_1401e87c0(local_188,1);
          uVar7 = FUN_1400e5ec0(local_188 + 2,"BLAS ");
          lVar4 = (**(code **)(*local_90 + 0x28))();
          uVar8 = FUN_140527b30(lVar4 + 0x28);
          uVar7 = FUN_1400e5ec0(uVar7,uVar8);
          pbVar9 = (basic_ostream<char,std::char_traits<char>_> *)
                   FUN_1400e5ec0(uVar7," build geometry ");
          pbVar10 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar9,uVar14);
          FUN_1400e5ec0(pbVar10," has NULL vertex buffer");
          local_88 = (undefined8 *******)0x0;
          uStack_80 = 0;
          local_78 = 0;
          local_70 = 0xf;
          if (((local_100 & 0x22) == 2) || (uVar14 = *local_130, uVar14 == 0)) {
            if (((local_100 & 4) == 0) && (*local_138 != 0)) {
              puVar15 = &local_158;
              uVar14 = *local_138 + (longlong)*local_120;
              goto LAB_1406e805e;
            }
          }
          else {
            puVar15 = local_150;
            if (uVar14 < local_108) {
              uVar14 = local_108;
            }
LAB_1406e805e:
            pvVar12 = *(void **)*puVar15;
            if (pvVar12 != (void *)0x0) {
              uVar14 = uVar14 - (longlong)pvVar12;
              if (uVar14 < 0x10) {
                local_78 = uVar14;
                memmove(&local_88,pvVar12,uVar14);
                *(undefined1 *)((longlong)&local_88 + uVar14) = 0;
              }
              else {
                FUN_1400069b0(&local_88,uVar14);
              }
            }
          }
          pppppppuVar11 = (undefined8 *******)local_88;
          if (local_70 < 0x10) {
            pppppppuVar11 = &local_88;
          }
          (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                    (*(longlong **)((longlong)this + 0x20),2,pppppppuVar11);
        }
        if (0xf < local_70) {
          uVar14 = local_70 + 1;
          pppppppuVar11 = (undefined8 *******)local_88;
          if (0xfff < uVar14) {
            pppppppuVar11 = (undefined8 *******)local_88[-1];
            if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)pppppppuVar11))) {
LAB_1406e8a7f:
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
            uVar14 = local_70 + 0x28;
          }
          thunk_FUN_140b68ba8(pppppppuVar11,uVar14);
        }
        *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
         ((longlong)local_188 + (longlong)*(int *)(local_188[0] + 4)) =
             &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
        *(int *)((longlong)&local_190 + (longlong)*(int *)(local_188[0] + 4) + 4) =
             *(int *)(local_188[0] + 4) + -0x98;
        local_170[0] = (basic_streambuf<char,std::char_traits<char>_>)
                       &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
                        vftable;
        FUN_1401da8b0(local_170);
        std::basic_streambuf<char,std::char_traits<char>_>::
        ~basic_streambuf<char,std::char_traits<char>_>(local_170);
        std::ios_base::~ios_base(local_f0);
        return;
      }
LAB_1406e6d5b:
    }
    if ((param_4 & 0x20) == 0) {
LAB_1406e7127:
      if ((*(char *)(local_190 + 0x11) != '\x01') || (*(char *)(local_190 + 0x13) != '\x01')) {
        *(undefined1 *)(local_190 + 0x13) = 1;
        uVar14 = param_3 * 0xa0;
        pvVar12 = *(void **)(local_190 + 0x18);
        if ((ulonglong)(*(longlong *)(local_190 + 0x28) - (longlong)pvVar12) < uVar14) {
          puVar15 = (undefined8 *)(local_190 + 0x18);
          FUN_1406eca80(puVar15,param_3);
          pvVar16 = (void *)*puVar15;
          memmove(pvVar16,param_2,uVar14);
          pvVar16 = (void *)((longlong)pvVar16 + uVar14);
        }
        else {
          _Size = *(longlong *)(local_190 + 0x20) - (longlong)pvVar12;
          lVar21 = param_3 + ((longlong)_Size >> 5) * 0x3333333333333333;
          if (param_3 < (ulonglong)(((longlong)_Size >> 5) * -0x3333333333333333) || lVar21 == 0) {
            pvVar16 = (void *)((longlong)pvVar12 + uVar14);
            memmove(pvVar12,param_2,uVar14);
          }
          else {
            memmove(pvVar12,param_2,_Size);
            pvVar16 = *(void **)(lVar4 + 0x20);
            memmove(pvVar16,(void *)((longlong)param_2 + _Size),uVar14 - _Size);
            pvVar16 = (void *)(lVar21 * 0xa0 + (longlong)pvVar16);
          }
        }
        *(void **)(lVar4 + 0x20) = pvVar16;
        param_1 = plVar2;
        goto LAB_1406e6d15;
      }
      FUN_1401e87c0(local_188,1);
      uVar7 = FUN_1400e5ec0(local_188 + 2,"Cannot rebuild BLAS ");
      lVar4 = (**(code **)(*local_90 + 0x28))();
      uVar8 = FUN_140527b30(lVar4 + 0x28);
      uVar7 = FUN_1400e5ec0(uVar7,uVar8);
      FUN_1400e5ec0(uVar7," that has the AllowCompaction flag set");
      FUN_140514890(local_188,&local_88);
      pppppppuVar11 = &local_88;
      if (0xf < local_70) {
        pppppppuVar11 = (undefined8 *******)local_88;
      }
      (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                (*(longlong **)((longlong)this + 0x20),2,pppppppuVar11);
    }
    else if (*(char *)(local_190 + 0x12) == '\0') {
      FUN_1401e87c0(local_188,1);
      uVar7 = FUN_1400e5ec0(local_188 + 2,"Cannot perform an update on BLAS ");
      lVar4 = (**(code **)(*local_90 + 0x28))();
      uVar8 = FUN_140527b30(lVar4 + 0x28);
      uVar7 = FUN_1400e5ec0(uVar7,uVar8);
      FUN_1400e5ec0(uVar7," that was not created with the AllowUpdate flag");
      FUN_140514890(local_188,&local_88);
      pppppppuVar11 = &local_88;
      if (0xf < local_70) {
        pppppppuVar11 = (undefined8 *******)local_88;
      }
      (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                (*(longlong **)((longlong)this + 0x20),2,pppppppuVar11);
    }
    else if (*(char *)(local_190 + 0x13) == '\0') {
      FUN_1401e87c0(local_188,1);
      uVar7 = FUN_1400e5ec0(local_188 + 2,"Cannot perform an update on BLAS ");
      lVar4 = (**(code **)(*local_90 + 0x28))();
      uVar8 = FUN_140527b30(lVar4 + 0x28);
      uVar7 = FUN_1400e5ec0(uVar7,uVar8);
      FUN_1400e5ec0(uVar7," before the same BLAS was initially built");
      FUN_140514890(local_188,&local_88);
      pppppppuVar11 = &local_88;
      if (0xf < local_70) {
        pppppppuVar11 = (undefined8 *******)local_88;
      }
      (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                (*(longlong **)((longlong)this + 0x20),2,pppppppuVar11);
    }
    else {
      lVar21 = *(longlong *)(local_190 + 0x18);
      if (param_3 == (*(longlong *)(local_190 + 0x20) - lVar21 >> 5) * -0x3333333333333333) {
        if (param_3 != 0) {
          _Var17 = 0;
          pvVar12 = param_2;
          do {
            if (*(char *)(lVar21 + 0x9d) != *(char *)((longlong)pvVar12 + 0x9d)) {
              FUN_1401e87c0(local_188,1);
              uVar7 = FUN_1400e5ec0(local_188 + 2,"Cannot perform an update on BLAS ");
              lVar4 = (**(code **)(*local_90 + 0x28))();
              uVar8 = FUN_140527b30(lVar4 + 0x28);
              uVar7 = FUN_1400e5ec0(uVar7,uVar8);
              pbVar9 = (basic_ostream<char,std::char_traits<char>_> *)
                       FUN_1400e5ec0(uVar7," with mismatching geometry types in slot ");
              std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar9,_Var17);
              FUN_140514890(local_188,&local_88);
              pppppppuVar11 = &local_88;
              if (0xf < local_70) {
                pppppppuVar11 = (undefined8 *******)local_88;
              }
              (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                        (*(longlong **)((longlong)this + 0x20),2,pppppppuVar11);
              goto LAB_1406e8a4f;
            }
            if (*(char *)(lVar21 + 0x9d) == '\0') {
              uVar13 = *(uint *)(lVar21 + 0x28 + (ulonglong)(*(char *)(lVar21 + 0x11) == '\0') * 4)
                       / 3;
              uVar18 = *(uint *)((longlong)pvVar12 +
                                (ulonglong)(*(char *)((longlong)pvVar12 + 0x11) == '\0') * 4 + 0x28)
                       / 3;
              if (uVar13 != uVar18) {
                FUN_1401e87c0(local_188,1);
                uVar7 = FUN_1400e5ec0(local_188 + 2,"Cannot perform an update on BLAS ");
                lVar4 = (**(code **)(*local_90 + 0x28))();
                uVar8 = FUN_140527b30(lVar4 + 0x28);
                uVar7 = FUN_1400e5ec0(uVar7,uVar8);
                pbVar9 = (basic_ostream<char,std::char_traits<char>_> *)
                         FUN_1400e5ec0(uVar7," with mismatching triangle counts in geometry slot ");
                pbVar10 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                                    (pbVar9,_Var17);
                pbVar9 = (basic_ostream<char,std::char_traits<char>_> *)
                         FUN_1400e5ec0(pbVar10,": built with ");
                pbVar10 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                                    (pbVar9,uVar13);
                pbVar9 = (basic_ostream<char,std::char_traits<char>_> *)
                         FUN_1400e5ec0(pbVar10," triangles, updating with ");
                pbVar10 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                                    (pbVar9,uVar18);
                FUN_1400e5ec0(pbVar10," triangles");
                FUN_140514890(local_188,&local_88);
                pppppppuVar11 = &local_88;
                if (0xf < local_70) {
                  pppppppuVar11 = (undefined8 *******)local_88;
                }
                (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                          (*(longlong **)((longlong)this + 0x20),2,pppppppuVar11);
                goto LAB_1406e8a4f;
              }
            }
            else {
              uVar13 = *(uint *)(lVar21 + 0x18);
              uVar18 = *(uint *)((longlong)pvVar12 + 0x18);
              if (uVar13 != uVar18) {
                FUN_1401e87c0(local_188,1);
                uVar7 = FUN_1400e5ec0(local_188 + 2,"Cannot perform an update on BLAS ");
                lVar4 = (**(code **)(*local_90 + 0x28))();
                uVar8 = FUN_140527b30(lVar4 + 0x28);
                uVar7 = FUN_1400e5ec0(uVar7,uVar8);
                pbVar9 = (basic_ostream<char,std::char_traits<char>_> *)
                         FUN_1400e5ec0(uVar7," with mismatching AABB counts in geometry slot ");
                pbVar10 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                                    (pbVar9,_Var17);
                pbVar9 = (basic_ostream<char,std::char_traits<char>_> *)
                         FUN_1400e5ec0(pbVar10,": built with ");
                pbVar10 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                                    (pbVar9,uVar13);
                pbVar9 = (basic_ostream<char,std::char_traits<char>_> *)
                         FUN_1400e5ec0(pbVar10," AABBs, updating with ");
                pbVar10 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                                    (pbVar9,uVar18);
                FUN_1400e5ec0(pbVar10," AABBs");
                FUN_140514890(local_188,&local_88);
                pppppppuVar11 = &local_88;
                if (0xf < local_70) {
                  pppppppuVar11 = (undefined8 *******)local_88;
                }
                (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                          (*(longlong **)((longlong)this + 0x20),2,pppppppuVar11);
                goto LAB_1406e8a4f;
              }
            }
            _Var17 = _Var17 + 1;
            pvVar12 = (void *)((longlong)pvVar12 + 0xa0);
            lVar21 = lVar21 + 0xa0;
          } while (param_3 != _Var17);
        }
        goto LAB_1406e7127;
      }
      FUN_1401e87c0(local_188,1);
      uVar7 = FUN_1400e5ec0(local_188 + 2,"Cannot perform an update on BLAS ");
      lVar4 = (**(code **)(*local_90 + 0x28))();
      uVar8 = FUN_140527b30(lVar4 + 0x28);
      uVar7 = FUN_1400e5ec0(uVar7,uVar8);
      pbVar9 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1400e5ec0(uVar7," with ");
      pbVar10 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar9,param_3);
      pbVar9 = (basic_ostream<char,std::char_traits<char>_> *)
               FUN_1400e5ec0(pbVar10," geometries when this BLAS was built with ");
      pbVar10 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                          (pbVar9,(*(longlong *)(local_190 + 0x20) - *(longlong *)(local_190 + 0x18)
                                  >> 5) * -0x3333333333333333);
      FUN_1400e5ec0(pbVar10," geometries");
      FUN_140514890(local_188,&local_88);
      pppppppuVar11 = &local_88;
      if (0xf < local_70) {
        pppppppuVar11 = (undefined8 *******)local_88;
      }
      (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                (*(longlong **)((longlong)this + 0x20),2,pppppppuVar11);
    }
LAB_1406e8a4f:
    FUN_140004b30(&local_88);
    FUN_1401e8970(local_188);
  }
  return;
}

