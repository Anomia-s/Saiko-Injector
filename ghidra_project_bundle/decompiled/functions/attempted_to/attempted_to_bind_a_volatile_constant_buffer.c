/**
 * Function: attempted_to_bind_a_volatile_constant_buffer
 * Address:  140746b90
 * Signature: undefined8 __thiscall attempted_to_bind_a_volatile_constant_buffer(void * this, longlong param_1, undefined8 * param_2)
 * Body size: 587 bytes
 */


undefined8 __thiscall
attempted_to_bind_a_volatile_constant_buffer(void *this,longlong param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  char *local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  longlong local_38 [2];
  
  local_38[1] = 0xfffffffffffffffe;
  if (*(uint *)(param_2 + 1) < *(uint *)(param_1 + 0x10)) {
    nvrhi::d3d12::StaticDescriptorHeap::vfunction6
              ((StaticDescriptorHeap *)((longlong)this + 0x1f0),local_38,
               *(uint *)(param_2 + 1) + *(int *)(param_1 + 0x14));
    uVar1 = *(undefined1 *)(param_2 + 2);
    switch(uVar1) {
    case 0:
      FUN_14072b800(local_38[0],0,(longlong)this + 0x10);
      break;
    case 1:
      local_a8 = *(undefined4 *)(param_2 + 3);
      uStack_a4 = *(undefined4 *)((longlong)param_2 + 0x1c);
      uStack_a0 = *(undefined4 *)(param_2 + 4);
      uStack_9c = *(undefined4 *)((longlong)param_2 + 0x24);
      FUN_140720ed0(*param_2,local_38[0],*(undefined1 *)((longlong)param_2 + 0x12),
                    *(undefined1 *)((longlong)param_2 + 0x11),&local_a8);
      break;
    case 2:
      local_98 = *(undefined4 *)(param_2 + 3);
      uStack_94 = *(undefined4 *)((longlong)param_2 + 0x1c);
      uStack_90 = *(undefined4 *)(param_2 + 4);
      uStack_8c = *(undefined4 *)((longlong)param_2 + 0x24);
      has_unsupported_dimension_for_uav
                (*param_2,local_38[0],*(undefined1 *)((longlong)param_2 + 0x12),
                 *(undefined1 *)((longlong)param_2 + 0x11),&local_98);
      break;
    case 3:
    case 5:
    case 7:
      local_88 = *(undefined4 *)(param_2 + 3);
      uStack_84 = *(undefined4 *)((longlong)param_2 + 0x1c);
      uStack_80 = *(undefined4 *)(param_2 + 4);
      uStack_7c = *(undefined4 *)((longlong)param_2 + 0x24);
      FUN_14072b890(*param_2,local_38[0],*(undefined1 *)((longlong)param_2 + 0x12),&local_88,uVar1);
      break;
    case 4:
    case 6:
    case 8:
      local_78 = *(undefined4 *)(param_2 + 3);
      uStack_74 = *(undefined4 *)((longlong)param_2 + 0x1c);
      uStack_70 = *(undefined4 *)(param_2 + 4);
      uStack_6c = *(undefined4 *)((longlong)param_2 + 0x24);
      FUN_14072ab30(*param_2,local_38[0],*(undefined1 *)((longlong)param_2 + 0x12),&local_78,uVar1);
      break;
    case 9:
      local_68 = *(undefined4 *)(param_2 + 3);
      uStack_64 = *(undefined4 *)((longlong)param_2 + 0x1c);
      uStack_60 = *(undefined4 *)(param_2 + 4);
      uStack_5c = *(undefined4 *)((longlong)param_2 + 0x24);
      FUN_14072b760(*param_2,local_38[0],&local_68);
      break;
    case 10:
      local_50 = 0;
      local_58 = (char *)FUN_140b65d30(0x40);
      local_48 = 0x3f;
      local_40 = 0x3f;
      builtin_strncpy(local_58,"Attempted to bind a volatile constant buffer to a bindless set.",
                      0x40);
      FUN_14053e350((longlong)this + 0x10,&local_58);
      if (0xf < local_40) {
        uVar2 = local_40 + 1;
        pcVar4 = local_58;
        if (0xfff < uVar2) {
          pcVar4 = *(char **)(local_58 + -8);
          if ((char *)0x1f < local_58 + (-8 - (longlong)pcVar4)) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          uVar2 = local_40 + 0x28;
        }
        thunk_FUN_140b68ba8(pcVar4,uVar2);
      }
      goto LAB_140746ceb;
    default:
      httplib::ClientImpl::vfunction4();
      return 0;
    case 0xc:
      FUN_140735ba0(*param_2,local_38[0]);
      break;
    case 0xe:
      FUN_140725a80(*param_2,local_38[0]);
    }
    uVar3 = FUN_14071d570((StaticDescriptorHeap *)((longlong)this + 0x1f0),
                          *(int *)(param_2 + 1) + *(int *)(param_1 + 0x14),1);
    uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
  }
  else {
LAB_140746ceb:
    uVar3 = 0;
  }
  return uVar3;
}

