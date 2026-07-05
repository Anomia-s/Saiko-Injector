/**
 * Function: createtextured3dpool_default
 * Address:  140426b80
 * Signature: undefined createtextured3dpool_default(void)
 * Body size: 321 bytes
 */


void createtextured3dpool_default(longlong *param_1,char *param_2)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  if (*param_2 != '\x01') {
    return;
  }
  lVar2 = *(longlong *)(param_2 + 0x20);
  if (lVar2 == 0) {
    return;
  }
  lVar4 = *(longlong *)(param_2 + 0x18);
  if (lVar4 == 0) {
    iVar1 = *(int *)(param_2 + 0x10);
    if (iVar1 < 0x3132564e) {
      if (iVar1 == 0x15151002) {
        uVar5 = 0x17;
      }
      else if (iVar1 == 0x16161804) {
        uVar5 = 0x16;
      }
      else {
        if (iVar1 != 0x16362004) goto LAB_140426cae;
        uVar5 = 0x15;
      }
    }
    else {
      if (iVar1 < 0x32315659) {
        if ((iVar1 == 0x3132564e) || (iVar1 == 0x3231564e)) {
LAB_140426c16:
          uVar5 = 0x32;
          goto LAB_140426c1c;
        }
      }
      else if ((iVar1 == 0x32315659) || (iVar1 == 0x56555949)) goto LAB_140426c16;
LAB_140426cae:
      uVar5 = 0;
    }
LAB_140426c1c:
    iVar1 = (**(code **)(*param_1 + 0xb8))
                      (param_1,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),1,
                       *(undefined4 *)(param_2 + 0xc),uVar5,0,param_2 + 0x18,0);
    if (iVar1 < 0) {
      pcVar3 = "CreateTexture(D3DPOOL_DEFAULT)";
      goto LAB_140426c96;
    }
    lVar4 = *(longlong *)(param_2 + 0x18);
    lVar2 = *(longlong *)(param_2 + 0x20);
  }
  iVar1 = (**(code **)(*param_1 + 0xf8))(param_1,lVar2,lVar4);
  if (-1 < iVar1) {
    *param_2 = '\0';
    return;
  }
  pcVar3 = "UpdateTexture()";
LAB_140426c96:
  outofvideomemory(pcVar3,iVar1);
  return;
}

