/**
 * Function: invalid_primitive_kind
 * Address:  1405e0db0
 * Signature: undefined invalid_primitive_kind(void)
 * Body size: 712 bytes
 */


undefined8
invalid_primitive_kind
          (undefined8 param_1,undefined4 param_2,double *param_3,undefined8 param_4,char param_5)

{
  int iVar1;
  size_t sVar2;
  undefined1 *puVar3;
  char *pcVar4;
  undefined8 uVar5;
  double dVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  char local_33 [3];
  ulonglong local_30;
  
  local_30 = DAT_1414ef3c0 ^ (ulonglong)auStack_78;
  switch(param_2) {
  case 1:
    if (*(char *)param_3 == '\x01') {
      pcVar4 = "true";
LAB_1405e0ff7:
      uVar5 = 4;
    }
    else {
      pcVar4 = "false";
      uVar5 = 5;
    }
    goto LAB_1405e1000;
  case 2:
    if (*(char *)param_3 == '\0') {
      uVar5 = 0x30;
    }
    else {
      FUN_1403d28f0(local_33,*(char *)param_3,0x22);
      if (param_5 == '\0') {
        pcVar4 = local_33;
        goto LAB_1405e101a;
      }
      FUN_1403b7ad0(param_4,0x22);
      FUN_1403b8780(param_4,local_33);
      uVar5 = 0x22;
    }
    FUN_1403b7ad0(param_4,uVar5);
    goto LAB_1405e0f5c;
  case 3:
  case 4:
    dVar6 = (double)(ulonglong)*(byte *)param_3;
    break;
  case 5:
    dVar6 = (double)(ulonglong)*(ushort *)param_3;
    break;
  case 6:
    dVar6 = (double)(ulonglong)(uint)*(float *)param_3;
    break;
  case 7:
    dVar6 = *param_3;
    pcVar4 = "%llu";
    goto LAB_1405e0f46;
  case 8:
    dVar6 = (double)(longlong)*(char *)param_3;
    break;
  case 9:
    dVar6 = (double)(longlong)*(short *)param_3;
    break;
  case 10:
    dVar6 = (double)(longlong)(int)*(float *)param_3;
    break;
  case 0xb:
  case 0xf:
    dVar6 = *param_3;
    break;
  case 0xc:
    dVar6 = (double)*(float *)param_3;
    goto LAB_1405e0f89;
  case 0xd:
    dVar6 = *param_3;
LAB_1405e0f89:
    uVar5 = 0;
    FUN_1403b7ce0(param_4,dVar6,0);
    goto LAB_1405e0f5e;
  case 0xe:
    dVar6 = *param_3;
    pcVar4 = "%u";
LAB_1405e0f46:
    FUN_1403b79b0(param_4,pcVar4,dVar6);
    goto LAB_1405e0f5c;
  case 0x10:
    pcVar4 = (char *)*param_3;
    if (pcVar4 == (char *)0x0) {
      pcVar4 = "null";
      goto LAB_1405e0ff7;
    }
    if (param_5 != '\0') {
      uVar5 = 0;
      iVar1 = FUN_1403d2a30(0,0,0x22,pcVar4);
      sVar2 = strlen(pcVar4);
      if (iVar1 == (int)sVar2) {
        FUN_1403b7ad0(param_4,0x22);
        FUN_1403b7a10(param_4,pcVar4,iVar1);
        FUN_1403b7ad0(param_4,0x22);
        uVar5 = 0;
      }
      else {
        puVar3 = (undefined1 *)(*DAT_141503398)(iVar1 + 3);
        FUN_1403d2a30(puVar3 + 1,iVar1,0x22,pcVar4);
        *puVar3 = 0x22;
        *(undefined2 *)(puVar3 + (longlong)iVar1 + 1) = 0x22;
        FUN_1403b8780(param_4,puVar3);
        (*DAT_1415033b0)(puVar3);
      }
      goto LAB_1405e0f5e;
    }
LAB_1405e101a:
    FUN_1403b8780(param_4,pcVar4);
    goto LAB_1405e0f5c;
  case 0x11:
    if (*param_3 != 0.0) {
      local_48 = 0;
      local_58 = 0;
      local_50 = param_4;
      FUN_1403adfd0(param_1,0,*param_3,".");
      uVar5 = 0;
      goto LAB_1405e0f5e;
    }
LAB_1405e0fbd:
    pcVar4 = "#0";
    uVar5 = 2;
LAB_1405e1000:
    FUN_1403b7a10(param_4,pcVar4,uVar5);
    goto LAB_1405e0f5c;
  case 0x12:
    if (*param_3 == 0.0) goto LAB_1405e0fbd;
    FUN_1403b34d0(param_1,*param_3,param_4);
    goto LAB_1405e0f5c;
  default:
    FUN_140399630(0xfffffffd,
                  "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/meta/serializer.c"
                  ,0x82,"invalid primitive kind");
    uVar5 = 0xffffffff;
    goto LAB_1405e0f5e;
  }
  FUN_1403b7b70(param_4,dVar6);
LAB_1405e0f5c:
  uVar5 = 0;
LAB_1405e0f5e:
  if (DAT_1414ef3c0 != (local_30 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_140b65db0(local_30 ^ (ulonglong)auStack_78);
  }
  return uVar5;
}

