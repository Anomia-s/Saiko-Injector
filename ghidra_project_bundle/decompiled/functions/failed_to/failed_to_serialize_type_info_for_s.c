/**
 * Function: failed_to_serialize_type_info_for_s
 * Address:  1403cb990
 * Signature: undefined failed_to_serialize_type_info_for_s(void)
 * Body size: 2853 bytes
 */


undefined8
failed_to_serialize_type_info_for_s(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  int *piVar4;
  longlong lVar5;
  char *pcVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  char *pcVar11;
  char *pcVar12;
  undefined8 unaff_RBP;
  undefined7 uVar13;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  char *pcStack_80;
  undefined *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1414ef3c0 ^ (ulonglong)auStack_c8;
  pcVar12 = *(char **)(param_1 + 0x10);
  if (pcVar12 == (char *)0x0) {
    error(param_2,"bad request (missing path)");
    *param_2 = 400;
    uVar9 = 0;
  }
  else {
    uVar9 = *param_3;
    iVar2 = *(int *)(param_1 + 8);
    if (iVar2 == 3) {
      iVar2 = strncmp(pcVar12,"entity/",7);
      if (iVar2 == 0) {
        pcVar12 = pcVar12 + 7;
        local_a0 = 0;
        local_a8 = 0;
        lVar8 = FUN_1403ae520(uVar9,0,pcVar12,&DAT_14137ac84);
        if (lVar8 != 0) {
          FUN_1400ba990(uVar9,lVar8);
          goto LAB_1403cc47a;
        }
      }
      else {
        iVar2 = strncmp(pcVar12,"component/",10);
        if (iVar2 != 0) goto LAB_1403cbc38;
        pcVar12 = pcVar12 + 10;
        local_a0 = 0;
        local_a8 = 0;
        lVar8 = FUN_1403ae520(uVar9,0,pcVar12,&DAT_14137ac84);
        if (lVar8 != 0) {
          pcVar6 = (char *)FUN_1405f7fe0(param_1,"component");
          if (pcVar6 != (char *)0x0) {
            lVar7 = invalid_operator_for_add_expression(uVar9,pcVar12,pcVar6,&local_98);
            if (lVar7 == 0) {
              pcVar12 = "unresolved component \'%s\'";
              goto LAB_1403cc46f;
            }
            thunk_FUN_1400b7f20(uVar9,lVar8,local_98);
            goto LAB_1403cc47a;
          }
LAB_1403cc160:
          error(param_2,"missing component for remove endpoint");
LAB_1403cc474:
          *param_2 = 400;
          goto LAB_1403cc47a;
        }
      }
      goto LAB_1403cc237;
    }
    if (iVar2 == 2) {
      iVar2 = strncmp(pcVar12,"entity/",7);
      if (iVar2 == 0) {
        pcVar12 = pcVar12 + 7;
        local_88 = 0;
        uStack_70 = 0;
        local_58 = 0;
        uStack_50 = 0;
        local_68 = 0;
        uStack_60 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_48 = 0;
        local_78 = &DAT_14137ac84;
        pcStack_80 = pcVar12;
        uVar3 = s_is_invalid_for_ecs_entity_desc_t_add_expr(uVar9,&local_98);
        if (uVar3 == 0) {
          pcVar11 = "failed to create entity \'%s\'";
LAB_1403cc261:
          error(param_2,pcVar11,pcVar12);
          *param_2 = 500;
        }
        else {
          param_2 = param_2 + 2;
          FUN_1403b7a10(param_2,&DAT_14139dfa2,7);
          FUN_1403b7b70(param_2,uVar3 & 0xffffffff);
          FUN_1403b7a10(param_2,&DAT_141323196,2);
        }
      }
      else {
        iVar2 = strncmp(pcVar12,"component/",10);
        if (iVar2 == 0) {
          pcVar12 = pcVar12 + 10;
          local_a0 = 0;
          local_a8 = 0;
          lVar8 = FUN_1403ae520(uVar9,0,pcVar12,&DAT_14137ac84);
          if (lVar8 != 0) {
            pcVar6 = (char *)FUN_1405f7fe0(param_1,"component");
            if (pcVar6 == (char *)0x0) goto LAB_1403cc160;
            lVar7 = invalid_operator_for_add_expression(uVar9,pcVar12,pcVar6,&local_98);
            if (lVar7 == 0) {
              pcVar12 = "unresolved component \'%s\'";
            }
            else {
              lVar7 = FUN_1405f7fe0(param_1,"value");
              if (lVar7 == 0) {
                thunk_FUN_1400b7e20(uVar9,lVar8);
                goto LAB_1403cc47a;
              }
              piVar4 = (int *)FUN_1403a5610(uVar9,local_98);
              if (piVar4 == (int *)0x0) {
                pcVar12 = "component \'%s\' is not a type";
              }
              else {
                lVar5 = FUN_1400ba6e0(uVar9,lVar8,local_98,(longlong)*piVar4);
                if (lVar5 == 0) {
                  pcVar11 = "failed to create component \'%s\'";
                  pcVar12 = pcVar6;
                  goto LAB_1403cc261;
                }
                local_a8 = 0;
                lVar7 = FUN_1405fa820(uVar9,*(undefined8 *)(piVar4 + 0x2c),lVar5,lVar7);
                if (lVar7 != 0) {
                  FUN_1400ba7b0(uVar9,lVar8,local_98);
                  goto LAB_1403cc47a;
                }
                pcVar12 = "invalid value for component \'%s\'";
              }
            }
LAB_1403cc46f:
            error(param_2,pcVar12,pcVar6);
            goto LAB_1403cc474;
          }
LAB_1403cc237:
          error(param_2,"entity \'%s\' not found",pcVar12);
          *param_2 = 0x194;
        }
        else {
          iVar2 = strncmp(pcVar12,"toggle/",7);
          if (iVar2 == 0) {
            pcVar12 = pcVar12 + 7;
            local_a0 = 0;
            local_a8 = 0;
            lVar8 = FUN_1403ae520(uVar9,0,pcVar12,&DAT_14137ac84);
            if (lVar8 == 0) goto LAB_1403cc237;
            pcVar6 = (char *)FUN_1405f7fe0(param_1,"enable");
            uVar13 = (undefined7)((ulonglong)unaff_RBP >> 8);
            if (pcVar6 == (char *)0x0) {
              uVar3 = CONCAT71(uVar13,1);
            }
            else {
              iVar2 = strcmp(pcVar6,"true");
              uVar3 = CONCAT71(uVar13,iVar2 == 0);
            }
            pcVar6 = (char *)FUN_1405f7fe0(param_1,"component");
            if (pcVar6 == (char *)0x0) {
              FUN_1400bca30(uVar9,lVar8,uVar3 & 0xffffffff);
            }
            else {
              lVar7 = invalid_operator_for_add_expression(uVar9,pcVar12,pcVar6,&local_98);
              if (lVar7 == 0) goto LAB_1403cc359;
              if (((local_98 & 0xf000000000000000) == 0x8000000000000000) ||
                 ((local_98 & 0xf000000000000000) == 0x9000000000000000)) {
                uVar10 = FUN_1400b7610(uVar9,(uint)(local_98 >> 0x20) & 0xfffffff);
              }
              else {
                uVar10 = local_98 & 0xfffffffffffffff;
              }
              cVar1 = FUN_1400b9b40(uVar9,uVar10,0x122);
              if (cVar1 == '\0') {
                pcVar12 = "cannot toggle component \'%s\'";
                goto LAB_1403cc46f;
              }
              FUN_1400bbb80(uVar9,lVar8,local_98,uVar3 & 0xffffffff);
            }
          }
          else {
            iVar2 = strncmp(pcVar12,"script/",7);
            if (iVar2 == 0) {
              entity_s_not_found(uVar9,param_1,param_2,pcVar12 + 7);
            }
            else {
              iVar2 = strncmp(pcVar12,"action/",7);
              if (iVar2 != 0) goto LAB_1403cbc38;
              shrink_memory(uVar9,pcVar12,param_2);
            }
          }
        }
      }
    }
    else {
      if (iVar2 != 0) {
LAB_1403cbc38:
        uVar9 = 0;
        goto LAB_1403cc47c;
      }
      iVar2 = strncmp(pcVar12,"entity/",7);
      if (iVar2 == 0) {
        pcVar12 = pcVar12 + 7;
        local_a0 = 0;
        local_a8 = 0;
        lVar8 = FUN_1403ae520(uVar9,0,pcVar12,&DAT_14137ac84);
        if (lVar8 == 0) goto LAB_1403cc237;
        local_88 = 0;
        pcStack_80 = (char *)0x0;
        local_98 = 0x100010000;
        uStack_90 = 0;
        pcVar12 = (char *)FUN_1405f7fe0(param_1,"entity_id");
        if (pcVar12 != (char *)0x0) {
          iVar2 = strcmp(pcVar12,"true");
          local_98 = CONCAT71(local_98._1_7_,iVar2 == 0);
        }
        pcVar12 = (char *)FUN_1405f7fe0(param_1,"doc");
        if (pcVar12 != (char *)0x0) {
          iVar2 = strcmp(pcVar12,"true");
          local_98._0_2_ = CONCAT11(iVar2 == 0,(undefined1)local_98);
        }
        pcVar12 = (char *)FUN_1405f7fe0(param_1,"full_paths");
        if (pcVar12 != (char *)0x0) {
          iVar2 = strcmp(pcVar12,"true");
          local_98._0_3_ = CONCAT12(iVar2 == 0,(undefined2)local_98);
        }
        pcVar12 = (char *)FUN_1405f7fe0(param_1,"inherited");
        if (pcVar12 != (char *)0x0) {
          iVar2 = strcmp(pcVar12,"true");
          local_98._0_4_ = CONCAT13(iVar2 == 0,(undefined3)local_98);
        }
        pcVar12 = (char *)FUN_1405f7fe0(param_1,"values");
        if (pcVar12 != (char *)0x0) {
          iVar2 = strcmp(pcVar12,"true");
          local_98._0_5_ = CONCAT14(iVar2 == 0,(undefined4)local_98);
        }
        pcVar12 = (char *)FUN_1405f7fe0(param_1,"builtin");
        if (pcVar12 != (char *)0x0) {
          iVar2 = strcmp(pcVar12,"true");
          local_98._0_6_ = CONCAT15(iVar2 == 0,(undefined5)local_98);
        }
        pcVar12 = (char *)FUN_1405f7fe0(param_1,"type_info");
        if (pcVar12 != (char *)0x0) {
          iVar2 = strcmp(pcVar12,"true");
          local_98._0_7_ = CONCAT16(iVar2 == 0,(undefined6)local_98);
        }
        pcVar12 = (char *)FUN_1405f7fe0(param_1,"matches");
        if (pcVar12 != (char *)0x0) {
          iVar2 = strcmp(pcVar12,"true");
          local_88 = CONCAT71(local_88._1_7_,iVar2 == 0);
        }
        pcVar12 = (char *)FUN_1405f7fe0(param_1,"alerts");
        if (pcVar12 != (char *)0x0) {
          iVar2 = strcmp(pcVar12,"true");
          local_98 = CONCAT17(iVar2 == 0,(undefined7)local_98);
        }
        lVar7 = FUN_1405f7fe0(param_1,&DAT_14133587a);
        if (lVar7 != 0) {
          uStack_90 = FUN_1403ae4f0(uVar9,lVar7);
        }
        iVar2 = FUN_1405fa630(uVar9,lVar8,param_2 + 2,&local_98);
        if (iVar2 != 0) {
          FUN_1403b8960(param_2 + 2);
          *param_2 = 500;
          *(char **)(param_2 + 0x108) = "Internal server error";
        }
      }
      else {
        iVar2 = strncmp(pcVar12,"component/",10);
        if (iVar2 == 0) {
          pcVar12 = pcVar12 + 10;
          local_a0 = 0;
          local_a8 = 0;
          lVar8 = FUN_1403ae520(uVar9,0,pcVar12,&DAT_14137ac84);
          if (lVar8 == 0) goto LAB_1403cc237;
          pcVar6 = (char *)FUN_1405f7fe0(param_1,"component");
          if (pcVar6 == (char *)0x0) goto LAB_1403cc160;
          lVar7 = invalid_operator_for_add_expression(uVar9,pcVar12,pcVar6,&local_98);
          if (lVar7 == 0) {
LAB_1403cc359:
            pcVar12 = "unresolved component \'%s\'";
            goto LAB_1403cc46f;
          }
          lVar7 = FUN_1403b38b0(uVar9,local_98);
          if (lVar7 == 0) {
            pcVar12 = "component \'%s\' is not a type";
            goto LAB_1403cc46f;
          }
          lVar8 = FUN_1400ba4f0(uVar9,lVar8,local_98);
          if (lVar8 == 0) {
            pcVar11 = "failed to get component \'%s\'";
            pcVar12 = pcVar6;
            goto LAB_1403cc261;
          }
          FUN_1405fb600(uVar9,lVar7,lVar8,param_2 + 2);
        }
        else {
          iVar2 = strncmp(pcVar12,"type_info/",10);
          if (iVar2 == 0) {
            pcVar12 = pcVar12 + 10;
            local_a0 = 0;
            local_a8 = 0;
            lVar8 = FUN_1403ae520(uVar9,0,pcVar12,&DAT_14137ac84);
            if (lVar8 == 0) goto LAB_1403cc237;
            lVar8 = FUN_1405fb730(uVar9,lVar8);
            if (lVar8 == 0) {
              pcVar11 = "failed to serialize type info for \'%s\'";
              goto LAB_1403cc261;
            }
            FUN_1403b8780(param_2 + 2,lVar8);
            (*DAT_1415033b0)(lVar8);
          }
          else {
            iVar2 = strcmp(pcVar12,"query");
            if (iVar2 == 0) {
              resolved_identifier_s_is_not_a_query(uVar9,param_1,param_2);
            }
            else {
              iVar2 = strcmp(pcVar12,"world");
              if (iVar2 == 0) {
                internal_server_error(uVar9,param_2);
              }
              else {
                iVar2 = strncmp(pcVar12,"stats/",6);
                if (iVar2 == 0) {
                  if (DAT_1414ef3c0 == (local_40 ^ (ulonglong)auStack_c8)) {
                    uVar9 = time_spent_on_running_systems_in_frame(uVar9,param_1,param_2);
                    return uVar9;
                  }
                  goto LAB_1403cc4a5;
                }
                iVar2 = strncmp(pcVar12,"components",10);
                if (iVar2 == 0) {
                  FUN_1403ce6c0(uVar9,param_2);
                }
                else {
                  iVar2 = strncmp(pcVar12,"queries",7);
                  if (iVar2 == 0) {
                    FUN_1403ce7b0(uVar9,param_2);
                  }
                  else {
                    iVar2 = strncmp(pcVar12,"tables",6);
                    if (iVar2 == 0) {
                      memory(uVar9,param_2);
                    }
                    else {
                      iVar2 = strncmp(pcVar12,"commands/capture",0x10);
                      if (iVar2 == 0) {
                        FUN_1403cecc0(uVar9,param_3,param_2);
                      }
                      else {
                        iVar2 = strncmp(pcVar12,"commands/frame/",0xf);
                        if (iVar2 != 0) goto LAB_1403cbc38;
                        error_no_capture_for_frame_u(uVar9,param_3,pcVar12,param_2);
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
LAB_1403cc47a:
    uVar9 = 1;
  }
LAB_1403cc47c:
  if (DAT_1414ef3c0 == (local_40 ^ (ulonglong)auStack_c8)) {
    return uVar9;
  }
LAB_1403cc4a5:
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_40 ^ (ulonglong)auStack_c8);
}

