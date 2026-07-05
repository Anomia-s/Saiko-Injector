/**
 * Function: d3d11_renderreadpixels
 * Address:  14041a7b0
 * Signature: undefined d3d11_renderreadpixels(void)
 * Body size: 759 bytes
 */


undefined8 d3d11_renderreadpixels(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined1 auStack_e8 [32];
  ulonglong local_c8;
  ulonglong *local_c0;
  longlong *local_b8;
  undefined4 local_b0;
  undefined8 *local_a8;
  ulonglong local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68 [2];
  int local_58;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_1414ef3c0 ^ (ulonglong)auStack_e8;
  lVar1 = *(longlong *)(param_1 + 0x2c0);
  local_30 = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  local_78 = 0;
  uStack_70 = 0;
  plVar4 = *(longlong **)(lVar1 + 0x58);
  if ((plVar4 == (longlong *)0x0) &&
     (plVar4 = *(longlong **)(lVar1 + 0x50), plVar4 == (longlong *)0x0)) {
    pcVar5 = "%s, ID3D11DeviceContext::OMGetRenderTargets failed";
  }
  else {
    (**(code **)(*plVar4 + 0x38))(0,&local_30);
    if (local_30 != (longlong *)0x0) {
      (**(code **)(*local_30 + 0x50))(local_30,local_68);
      local_68[0] = *(undefined8 *)(param_2 + 8);
      local_4c = 3;
      uStack_48 = 0;
      uStack_44 = 0x20000;
      uStack_40 = 0;
      iVar3 = (**(code **)(**(longlong **)(lVar1 + 0x28) + 0x28))
                        (*(longlong **)(lVar1 + 0x28),local_68,0,&local_38);
      if (iVar3 < 0) {
        pcVar5 = "__FUNCTION__, ID3D11Device1::CreateTexture2D [create staging texture]";
LAB_14041a9d6:
        FUN_1403d7600(pcVar5,iVar3);
      }
      else {
        cVar2 = the_physical_display_is_in_an_unknown_or_unsu
                          (*(undefined8 *)(param_1 + 0x2c0),param_2,&local_78,0);
        if (cVar2 != '\0') {
          local_90 = local_78;
          local_84 = uStack_70;
          local_88 = 0;
          local_7c = 1;
          local_a8 = &local_90;
          local_b8 = local_30;
          local_b0 = 0;
          local_c0 = (ulonglong *)((ulonglong)local_c0 & 0xffffffff00000000);
          local_c8 = local_c8 & 0xffffffff00000000;
          (**(code **)(**(longlong **)(lVar1 + 0x30) + 0x170))
                    (*(longlong **)(lVar1 + 0x30),local_38,0,0);
          local_c0 = &local_a0;
          local_c8 = local_c8 & 0xffffffff00000000;
          iVar3 = (**(code **)(**(longlong **)(lVar1 + 0x30) + 0x70))
                            (*(longlong **)(lVar1 + 0x30),local_38,0,1);
          if (-1 < iVar3) {
            puVar6 = (undefined4 *)(param_1 + 0x1f0);
            if (*(longlong *)(param_1 + 0x1e0) != 0) {
              puVar6 = (undefined4 *)(*(longlong *)(param_1 + 0x1e0) + 0x10);
            }
            uVar7 = 0x16362004;
            switch(local_58) {
            case 0x57:
            case 0x5b:
              break;
            case 0x58:
            case 0x5d:
              uVar7 = 0x16161804;
              break;
            case 0x59:
            case 0x5a:
            case 0x5c:
switchD_14041a98c_caseD_59:
              uVar7 = 0;
              break;
            default:
              if (local_58 == 10) {
                uVar7 = 0x1a204008;
              }
              else {
                if (local_58 != 0x18) goto switchD_14041a98c_caseD_59;
                uVar7 = 0x16572004;
              }
            }
            local_c0 = (ulonglong *)CONCAT44(local_c0._4_4_,local_98);
            local_c8 = local_a0;
            uVar7 = parameter_s_is_invalid
                              (*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),uVar7,
                               *puVar6);
            (**(code **)(**(longlong **)(lVar1 + 0x30) + 0x78))
                      (*(longlong **)(lVar1 + 0x30),local_38,0);
            goto joined_r0x00014041a9ea;
          }
          pcVar5 = "__FUNCTION__, ID3D11DeviceContext1::Map [map staging texture]";
          goto LAB_14041a9d6;
        }
      }
      uVar7 = 0;
      goto joined_r0x00014041a9ea;
    }
    pcVar5 = "%s, ID3D11View::GetResource failed";
  }
  FUN_1400fbed0(pcVar5,"D3D11_RenderReadPixels");
  uVar7 = 0;
joined_r0x00014041a9ea:
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x10))();
    local_30 = (longlong *)0x0;
  }
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x10))();
  }
  if (DAT_1414ef3c0 == (local_28 ^ (ulonglong)auStack_e8)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_28 ^ (ulonglong)auStack_e8);
}

