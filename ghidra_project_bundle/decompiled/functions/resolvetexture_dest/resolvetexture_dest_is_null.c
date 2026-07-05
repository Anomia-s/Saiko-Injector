/**
 * Function: resolvetexture_dest_is_null
 * Address:  1406e24c0
 * Signature: void __thiscall resolvetexture_dest_is_null(void * this, longlong * param_1, undefined8 param_2, longlong * param_3, undefined8 param_4)
 * Body size: 1252 bytes
 */


void __thiscall
resolvetexture_dest_is_null
          (void *this,longlong *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  bool bVar1;
  char cVar2;
  uint *puVar3;
  uint *puVar4;
  char *pcVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  byte local_88 [4];
  int local_84;
  int local_7c;
  byte local_78 [4];
  int local_74;
  int local_6c;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  cVar2 = a_command_list_must_be_opened_before_any_rend();
  if (cVar2 == '\0') {
    return;
  }
  cVar2 = operation_requires_at_least(this,0,"resolveTexture");
  if (cVar2 == '\0') {
    return;
  }
  if (param_1 == (longlong *)0x0) {
    local_60 = 0;
    pcVar5 = (char *)FUN_140b65d30(0x20);
    local_58 = 0x1c;
    local_50 = 0x1f;
    builtin_strncpy(pcVar5,"resolveTexture: dest is NULL",0x1d);
    local_68 = pcVar5;
    (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
              (*(longlong **)((longlong)this + 0x20),2,pcVar5);
    thunk_FUN_140b68ba8(pcVar5,0x20);
    if (param_3 != (longlong *)0x0) {
      return;
    }
  }
  else if (param_3 != (longlong *)0x0) {
    puVar3 = (uint *)(**(code **)(*param_1 + 0x28))(param_1);
    puVar4 = (uint *)(**(code **)(*param_3 + 0x28))(param_3);
    FUN_1406dfba0(param_2,local_88,puVar3,0);
    FUN_1406dfba0(param_4,local_78,puVar4,0);
    if ((local_7c == local_6c) && (local_84 == local_74)) {
      bVar1 = false;
    }
    else {
      local_60 = 0;
      pcVar5 = (char *)FUN_140b65d30(0x60);
      local_58 = 0x5d;
      local_50 = 0x5f;
      builtin_strncpy(pcVar5,
                      "resolveTexture: source and destination subresource sets must resolve to sets of the same size"
                      ,0x5e);
      local_68 = pcVar5;
      (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                (*(longlong **)((longlong)this + 0x20),2,pcVar5);
      thunk_FUN_140b68ba8(pcVar5,0x60);
      bVar1 = true;
    }
    uVar8 = *puVar4 >> (local_78[0] & 0x1f);
    uVar6 = puVar4[1] >> (local_78[0] & 0x1f);
    uVar10 = *puVar3 >> (local_88[0] & 0x1f);
    uVar9 = puVar3[1] >> (local_88[0] & 0x1f);
    if ((uVar8 + (uVar8 == 0) == uVar10 + (uVar10 == 0)) &&
       (uVar6 + (uVar6 == 0) == uVar9 + (uVar9 == 0))) {
      if (puVar3[5] == 1) goto LAB_1406e2728;
LAB_1406e285f:
      local_60 = 0;
      pcVar5 = (char *)FUN_140b65d30(0x40);
      local_58 = 0x3d;
      local_50 = 0x3f;
      builtin_strncpy(pcVar5,"resolveTexture: destination texture must not be multi-sampled",0x3e);
      local_68 = pcVar5;
      (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                (*(longlong **)((longlong)this + 0x20),2,pcVar5);
      thunk_FUN_140b68ba8(pcVar5,0x40);
      bVar1 = true;
      if (1 < puVar4[5]) goto LAB_1406e28e1;
LAB_1406e2734:
      local_60 = 0;
      pcVar5 = (char *)FUN_140b65d30(0x40);
      local_58 = 0x34;
      local_50 = 0x3f;
      builtin_strncpy(pcVar5,"resolveTexture: source texture must be multi-sampled",0x35);
      local_68 = pcVar5;
      (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                (*(longlong **)((longlong)this + 0x20),2,pcVar5);
      thunk_FUN_140b68ba8(pcVar5,0x40);
      if ((char)puVar4[7] == (char)puVar3[7]) {
        return;
      }
    }
    else {
      local_60 = 0;
      pcVar5 = (char *)FUN_140b65d30(0x70);
      local_58 = 0x66;
      local_50 = 0x6f;
      builtin_strncpy(pcVar5,
                      "resolveTexture: referenced mip levels of source and destination textures must have the same dimensions"
                      ,0x67);
      local_68 = pcVar5;
      (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
                (*(longlong **)((longlong)this + 0x20),2,pcVar5);
      thunk_FUN_140b68ba8(pcVar5,0x70);
      bVar1 = true;
      if (puVar3[5] != 1) goto LAB_1406e285f;
LAB_1406e2728:
      if (puVar4[5] < 2) goto LAB_1406e2734;
LAB_1406e28e1:
      if ((char)puVar4[7] == (char)puVar3[7]) {
        if (bVar1) {
          return;
        }
        (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x78))
                  (*(longlong **)((longlong)this + 0x10),param_1,param_2,param_3,param_4);
        return;
      }
    }
    local_60 = 0;
    pcVar5 = (char *)FUN_140b65d30(0x50);
    local_58 = 0x49;
    local_50 = 0x4f;
    builtin_strncpy(pcVar5,
                    "resolveTexture: source and destination textures must have the same format",0x4a
                   );
    local_68 = pcVar5;
    (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
              (*(longlong **)((longlong)this + 0x20),2,pcVar5);
    uVar7 = 0x50;
    goto LAB_1406e298a;
  }
  local_60 = 0;
  pcVar5 = (char *)FUN_140b65d30(0x20);
  local_58 = 0x1b;
  local_50 = 0x1f;
  builtin_strncpy(pcVar5,"resolveTexture: src is NULL",0x1c);
  local_68 = pcVar5;
  (**(code **)(**(longlong **)((longlong)this + 0x20) + 8))
            (*(longlong **)((longlong)this + 0x20),2,pcVar5);
  uVar7 = 0x20;
LAB_1406e298a:
  thunk_FUN_140b68ba8(pcVar5,uVar7);
  return;
}

