/**
 * Function: using_writebuffer_on_mappable_buffers_is_inva
 * Address:  1406ff040
 * Signature: void __thiscall using_writebuffer_on_mappable_buffers_is_inva(void * this, longlong * param_1, void * param_2, ulonglong param_3, ulonglong param_4)
 * Body size: 643 bytes
 */


void __thiscall
using_writebuffer_on_mappable_buffers_is_inva
          (void *this,longlong *param_1,void *param_2,ulonglong param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong **pplVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined8 local_68;
  void *local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  lVar1 = *(longlong *)((longlong)this + 0x138);
  local_58 = param_1;
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  pplVar2 = *(longlong ***)(lVar1 + 0x18);
  if (pplVar2 == *(longlong ***)(lVar1 + 0x20)) {
    FUN_1406f5260(lVar1 + 0x10,pplVar2,&local_58);
    plVar6 = local_58;
  }
  else {
    plVar6 = (longlong *)0x0;
    plVar4 = param_1;
    if (pplVar2 == &local_58) {
      plVar6 = param_1;
      plVar4 = (longlong *)0x0;
    }
    *pplVar2 = plVar4;
    *(longlong *)(lVar1 + 0x18) = *(longlong *)(lVar1 + 0x18) + 8;
  }
  if (plVar6 != (longlong *)0x0) {
    local_58 = (longlong *)0x0;
    (**(code **)(*plVar6 + 0x10))();
  }
  if (*(char *)((longlong)param_1 + 0x6b) == '\x01') {
    which_is_insufficient(this,param_1,param_2,param_3);
  }
  else {
    FUN_140705a00(this);
    if ((param_4 & 3) == 0 && param_3 < 0x10001) {
      if (*(char *)((longlong)this + 0x130) == '\x01') {
        FUN_1407cb250(this,param_1,0x800);
        *(undefined1 *)((longlong)this + 0x9b1) = 1;
      }
      (**(code **)(*(longlong *)this + 0x1d0))(this);
      (*DAT_1416b70c8)(**(undefined8 **)((longlong)this + 0x138),param_1[0x10],param_4,
                       (int)param_3 + 3U & 0x3fffc,param_2);
    }
    else if (*(char *)((longlong)param_1 + 0x75) == '\x02') {
      uVar3 = *(undefined8 *)((longlong)this + 0x18);
      local_50 = 0;
      local_58 = (longlong *)FUN_140b65d30(0x40);
      local_48 = 0x30;
      local_40 = 0x3f;
      *local_58 = 0x727720676e697355;
      local_58[1] = 0x6566667542657469;
      local_58[2] = 0x70616d206e6f2072;
      local_58[3] = 0x756220656c626170;
      *(undefined4 *)(local_58 + 4) = 0x72656666;
      builtin_strncpy((char *)((longlong)local_58 + 0x24),"s is",4);
      *(undefined4 *)(local_58 + 5) = 0x766e6920;
      builtin_strncpy((char *)((longlong)local_58 + 0x2c),"alid",4);
      *(char *)(local_58 + 6) = '\0';
      FUN_140533460(uVar3,&local_58);
      if (0xf < local_40) {
        uVar5 = local_40 + 1;
        plVar6 = local_58;
        if (0xfff < uVar5) {
          plVar6 = (longlong *)local_58[-1];
          if ((char *)0x1f < (char *)((longlong)local_58 + (-8 - (longlong)plVar6))) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          uVar5 = local_40 + 0x28;
        }
        thunk_FUN_140b68ba8(plVar6,uVar5);
      }
    }
    else {
      list_too_long(*(undefined8 *)((longlong)this + 0xa38),param_3,&local_58,&local_68,&local_60,
                    (ulonglong)*(uint *)((longlong)this + 0x40) << 0x3c |
                    *(ulonglong *)(*(longlong *)((longlong)this + 0x138) + 0x40) & 0xfffffffffffffff
                    ,0x100);
      memcpy(local_60,param_2,param_3);
      (**(code **)(*(longlong *)this + 0x90))(this,param_1,param_4,local_58,local_68,param_3);
    }
  }
  return;
}

