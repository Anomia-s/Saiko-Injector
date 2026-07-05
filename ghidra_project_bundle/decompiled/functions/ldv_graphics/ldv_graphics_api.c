/**
 * Function: ldv_graphics_api
 * Address:  1400688e0
 * Signature: undefined ldv_graphics_api(void)
 * Body size: 1861 bytes
 */


/* WARNING: Type propagation algorithm not settling */

ulonglong ldv_graphics_api(undefined8 *param_1)

{
  char *_Str;
  char cVar1;
  int iVar2;
  char *pcVar3;
  size_t sVar4;
  ulonglong uVar5;
  longlong ******pppppplVar6;
  undefined8 ******ppppppuVar7;
  undefined8 *******pppppppuVar8;
  FILE *_File;
  longlong lVar9;
  VulkanBackend *this;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 *******pppppppuVar12;
  ulonglong unaff_RSI;
  char *pcVar13;
  longlong *******ppppppplVar14;
  VulkanBackend local_168 [4];
  undefined8 *******local_148;
  undefined8 uStack_140;
  size_t local_138;
  ulonglong uStack_130;
  undefined8 *local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_90;
  undefined4 local_8c;
  longlong *******local_88;
  undefined8 uStack_80;
  size_t local_78;
  ulonglong uStack_70;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  cVar1 = FUN_140190440();
  if (cVar1 == '\0') {
    uVar5 = 0;
    goto LAB_140068ffb;
  }
  thunk_FUN_1400518b0(*param_1,&local_90,&local_8c);
  FUN_140221640(FUN_140069160);
  FUN_140221720(local_168,*param_1);
  pcVar3 = getenv("LDV_GRAPHICS_API");
  if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
    local_88 = (longlong *******)0x0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0xf;
    pcVar3 = (char *)thunk_FUN_1400505b0("Luduvo");
    if (pcVar3 != (char *)0x0) {
      local_138 = 0;
      uStack_130 = 0;
      local_148 = (undefined8 *******)0x0;
      uStack_140 = 0;
      sVar4 = strlen(pcVar3);
      if ((longlong)sVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        string_too_long();
      }
      if (sVar4 < 0x10) {
        uStack_130 = 0xf;
        local_138 = sVar4;
        memcpy(&local_148,pcVar3,sVar4);
        *(undefined1 *)((longlong)&local_148 + sVar4) = 0;
      }
      else {
        uVar11 = sVar4 | 0xf;
        uVar5 = 0x16;
        if (0x16 < uVar11) {
          uVar5 = uVar11;
        }
        if (uVar11 < 0xfff) {
          pppppppuVar8 = (undefined8 *******)FUN_140b65d30(uVar5 + 1);
        }
        else {
          ppppppuVar7 = (undefined8 ******)FUN_140b65d30(uVar5 + 0x28);
          pppppppuVar8 = (undefined8 *******)((longlong)ppppppuVar7 + 0x27U & 0xffffffffffffffe0);
          pppppppuVar8[-1] = ppppppuVar7;
        }
        local_148 = pppppppuVar8;
        local_138 = sVar4;
        uStack_130 = uVar5;
        memcpy(pppppppuVar8,pcVar3,sVar4);
        *(undefined1 *)((longlong)pppppppuVar8 + sVar4) = 0;
      }
      sVar4 = local_138;
      if (uStack_130 - local_138 < 0xc) {
        pppppppuVar8 = (undefined8 *******)FUN_140006210(&local_148,0xc);
      }
      else {
        local_138 = local_138 + 0xc;
        pppppppuVar8 = &local_148;
        pppppppuVar12 = pppppppuVar8;
        if (0xf < uStack_130) {
          pppppppuVar12 = local_148;
        }
        *(undefined8 *)((longlong)pppppppuVar12 + sVar4) = 0x73676e6974746573;
        *(undefined4 *)((longlong)pppppppuVar12 + sVar4 + 8) = 0x6766632e;
        *(undefined1 *)((longlong)pppppppuVar12 + sVar4 + 0xc) = 0;
      }
      local_b8 = *(undefined4 *)pppppppuVar8;
      uStack_b4 = *(undefined4 *)((longlong)pppppppuVar8 + 4);
      uStack_b0 = *(undefined4 *)(pppppppuVar8 + 1);
      uStack_ac = *(undefined4 *)((longlong)pppppppuVar8 + 0xc);
      local_a8 = *(undefined4 *)(pppppppuVar8 + 2);
      uStack_a4 = *(undefined4 *)((longlong)pppppppuVar8 + 0x14);
      uStack_a0 = *(undefined4 *)(pppppppuVar8 + 3);
      uStack_9c = *(undefined4 *)((longlong)pppppppuVar8 + 0x1c);
      pppppppuVar8[2] = (undefined8 ******)0x0;
      pppppppuVar8[3] = (undefined8 ******)0xf;
      *(undefined1 *)pppppppuVar8 = 0;
      if (0xf < uStack_130) {
        uVar5 = uStack_130 + 1;
        pppppppuVar8 = local_148;
        if (0xfff < uVar5) {
          pppppppuVar8 = (undefined8 *******)local_148[-1];
          if ((undefined1 *)0x1f <
              (undefined1 *)((longlong)local_148 + (-8 - (longlong)pppppppuVar8)))
          goto LAB_140069018;
          uVar5 = uStack_130 + 0x28;
        }
        thunk_FUN_140b68ba8(pppppppuVar8,uVar5);
      }
      thunk_FUN_140056d90(pcVar3);
      unaff_RSI = CONCAT44(uStack_9c,uStack_a0);
      if (unaff_RSI < 0x10) {
        _File = fopen((char *)&local_b8,"r");
      }
      else {
        _File = fopen((char *)CONCAT44(uStack_b4,local_b8),"r");
      }
      if (_File != (FILE *)0x0) {
        local_c0 = param_1;
        pcVar3 = fgets((char *)&local_148,0x80,_File);
        while (pcVar3 != (char *)0x0) {
          pcVar3 = strchr((char *)&local_148,0x3d);
          if (pcVar3 != (char *)0x0) {
            *pcVar3 = '\0';
            for (pppppppuVar8 = &local_148;
                (*(char *)pppppppuVar8 == ' ' || (*(char *)pppppppuVar8 == '\t'));
                pppppppuVar8 = (undefined8 *******)((longlong)pppppppuVar8 + 1)) {
            }
            sVar4 = strlen((char *)pppppppuVar8);
            pppppppuVar12 = (undefined8 *******)((longlong)pppppppuVar8 + sVar4);
            if (sVar4 != 0) {
              do {
                if ((0x20 < (ulonglong)*(byte *)((longlong)pppppppuVar12 + -1)) ||
                   ((0x100002600U >> ((ulonglong)*(byte *)((longlong)pppppppuVar12 + -1) & 0x3f) & 1
                    ) == 0)) break;
                pppppppuVar12 = (undefined8 *******)((longlong)pppppppuVar12 + -1);
              } while (pppppppuVar8 < pppppppuVar12);
            }
            *(undefined1 *)pppppppuVar12 = 0;
            _Str = pcVar3;
            do {
              do {
                pcVar13 = _Str;
                pcVar3 = pcVar3 + 1;
                _Str = pcVar13 + 1;
              } while (pcVar13[1] == ' ');
            } while (pcVar13[1] == '\t');
            sVar4 = strlen(_Str);
            if (sVar4 == 0) {
              pcVar3 = pcVar13 + 1;
            }
            else {
              lVar10 = sVar4 + 1;
              if (1 < lVar10) {
                lVar10 = 2;
              }
              pcVar3 = pcVar3 + sVar4;
              lVar9 = sVar4 + 2;
              do {
                if ((0x20 < (ulonglong)(byte)pcVar3[-1]) ||
                   ((0x100002600U >> ((ulonglong)(byte)pcVar3[-1] & 0x3f) & 1) == 0))
                goto LAB_140068d37;
                pcVar3 = pcVar3 + -1;
                lVar9 = lVar9 + -1;
              } while (2 < lVar9);
              pcVar3 = pcVar13 + lVar10 + -1;
            }
LAB_140068d37:
            *pcVar3 = '\0';
            iVar2 = strcmp((char *)pppppppuVar8,"graphics_api");
            if (iVar2 == 0) {
              sVar4 = strlen(_Str);
              if (sVar4 < 0x10) {
                local_78 = sVar4;
                memmove(&local_88,_Str,sVar4);
                *(undefined1 *)((longlong)&local_88 + sVar4) = 0;
              }
              else {
                FUN_1400069b0(&local_88);
              }
              break;
            }
          }
          pcVar3 = fgets((char *)&local_148,0x80,_File);
        }
        fclose(_File);
        unaff_RSI = CONCAT44(uStack_9c,uStack_a0);
        param_1 = local_c0;
      }
      if (0xf < unaff_RSI) {
        lVar9 = CONCAT44(uStack_b4,local_b8);
        lVar10 = lVar9;
        if (0xfff < unaff_RSI + 1) {
          lVar10 = *(longlong *)(lVar9 + -8);
          if (0x1f < (ulonglong)((lVar9 + -8) - lVar10)) goto LAB_140069018;
          unaff_RSI = unaff_RSI + 0x28;
        }
        thunk_FUN_140b68ba8(lVar10);
      }
    }
joined_r0x000140068c61:
    if (0xf < uStack_70) goto LAB_140068c67;
LAB_140068f1d:
    ppppppplVar14 = (longlong *******)&local_88;
    if (local_78 == 4) goto LAB_140068f2e;
LAB_140068c78:
    if (local_78 == 0xb) {
      if (*(longlong *)((longlong)ppppppplVar14 + 3) != 0x3231204433746365 ||
          *ppppppplVar14 != (longlong ******)0x4433746365726944) goto LAB_140068f3e;
      goto LAB_140068f4b;
    }
    if ((local_78 == 5) &&
       ((*(char *)((longlong)ppppppplVar14 + 4) == '2' && *(int *)ppppppplVar14 == 0x31643364 ||
        (*(char *)((longlong)ppppppplVar14 + 4) == '2' && *(int *)ppppppplVar14 == 0x31443344))))
    goto LAB_140068f4b;
LAB_140068f3e:
    this = VulkanBackend::VulkanBackend(local_168,0);
  }
  else {
    local_78 = 0;
    uStack_70 = 0;
    local_88 = (longlong *******)0x0;
    uStack_80 = 0;
    sVar4 = strlen(pcVar3);
    if ((longlong)sVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      string_too_long();
    }
    if (0xf < sVar4) {
      uVar5 = sVar4 | 0xf;
      unaff_RSI = 0x16;
      if (0x16 < uVar5) {
        unaff_RSI = uVar5;
      }
      if (uVar5 < 0xfff) {
        ppppppplVar14 = (longlong *******)FUN_140b65d30(unaff_RSI + 1);
      }
      else {
        pppppplVar6 = (longlong ******)FUN_140b65d30(unaff_RSI + 0x28);
        ppppppplVar14 = (longlong *******)((longlong)pppppplVar6 + 0x27U & 0xffffffffffffffe0);
        ppppppplVar14[-1] = pppppplVar6;
      }
      local_88 = ppppppplVar14;
      local_78 = sVar4;
      uStack_70 = unaff_RSI;
      memcpy(ppppppplVar14,pcVar3,sVar4);
      *(undefined1 *)((longlong)ppppppplVar14 + sVar4) = 0;
      goto joined_r0x000140068c61;
    }
    uStack_70 = 0xf;
    local_78 = sVar4;
    memcpy(&local_88,pcVar3,sVar4);
    *(undefined1 *)((longlong)&local_88 + sVar4) = 0;
    if (uStack_70 < 0x10) goto LAB_140068f1d;
LAB_140068c67:
    ppppppplVar14 = local_88;
    if (local_78 != 4) goto LAB_140068c78;
LAB_140068f2e:
    if ((*(int *)ppppppplVar14 != 0x32317864) && (*(int *)ppppppplVar14 != 0x32315844))
    goto LAB_140068f3e;
LAB_140068f4b:
    this = (VulkanBackend *)D3D12Backend::D3D12Backend((D3D12Backend *)local_168,0);
  }
  if (this == (VulkanBackend *)0x0) {
    thunk_FUN_140055720(0x10,"Luduvo",
                        "No compatible GPU found.\n\nLuduvo requires a compatible Vulkan 1.3 or D3D12 GPU/driver.\nSee launcher.log for details."
                       );
LAB_140068fb8:
    uVar5 = 0;
  }
  else {
    lVar10 = FUN_14021a850(this,local_90,local_8c);
    param_1[2] = lVar10;
    uVar5 = CONCAT71((int7)(unaff_RSI >> 8),1);
    if (lVar10 == 0) {
      (*this->vftablePtr->vfunction1)(this,1);
      goto LAB_140068fb8;
    }
  }
  if (0xf < uStack_70) {
    uVar11 = uStack_70 + 1;
    ppppppplVar14 = local_88;
    if (0xfff < uVar11) {
      ppppppplVar14 = (longlong *******)local_88[-1];
      if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)ppppppplVar14))) {
LAB_140069018:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar11 = uStack_70 + 0x28;
    }
    thunk_FUN_140b68ba8(ppppppplVar14,uVar11);
  }
LAB_140068ffb:
  return uVar5 & 0xffffffff;
}

