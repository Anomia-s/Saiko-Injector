/**
 * Function: could_not_decode_distinguished_namen
 * Address:  140c0fcc0
 * Signature: undefined could_not_decode_distinguished_namen(void)
 * Body size: 825 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void could_not_decode_distinguished_namen
               (undefined8 param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  char *pcVar5;
  bool bVar6;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [80];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x140c0fcce;
  local_28 = DAT_1414ef3c0 ^ (ulonglong)auStack_b8;
  switch(*param_3) {
  case 1:
    if (param_3[2] == 0) {
      FUN_140c078a0(param_1,"%*sFALSE",param_4,&DAT_1413a2ad6);
    }
    else {
      FUN_140c078a0(param_1,"%*sTRUE",param_4,&DAT_1413a2ad6);
    }
    break;
  case 2:
  case 10:
    iVar2 = FUN_140c078a0(param_1,&DAT_1413a5ce4,param_4,&DAT_1413a2ad6);
    if (-1 < iVar2) {
      iVar2 = FUN_140bd8720(&local_88,*(undefined8 *)(param_3 + 2));
      if (iVar2 < 1) {
        FUN_140bc7a20(param_1,*(undefined8 *)(*(undefined4 **)(param_3 + 2) + 2),
                      **(undefined4 **)(param_3 + 2));
      }
      else {
        FUN_140c078a0(param_1,&DAT_1413a6398,local_88);
      }
    }
    break;
  case 3:
  case 4:
  case 0x15:
    iVar2 = FUN_140c078a0(param_1,&DAT_1413a5ce4,param_4,&DAT_1413a2ad6);
    if (-1 < iVar2) {
      FUN_140bc7a20(param_1,*(undefined8 *)(*(undefined4 **)(param_3 + 2) + 2),
                    **(undefined4 **)(param_3 + 2));
    }
    break;
  case 5:
    pcVar5 = "%*sNULL";
    goto LAB_140c0fe07;
  case 6:
    iVar2 = FUN_140c078a0(param_1,&DAT_1413a5ce4,param_4,&DAT_1413a2ad6);
    if (-1 < iVar2) {
      uVar1 = *(undefined8 *)(param_3 + 2);
      iVar2 = FUN_140b96640(local_78,0x50,uVar1,1);
      if (0 < iVar2) {
        uVar3 = FUN_140b964c0(uVar1);
        lVar4 = FUN_140b96460(uVar3);
        if (lVar4 == 0) {
          FUN_140c078a0(param_1,&DAT_1413a5d54,local_78);
        }
        else {
          FUN_140c078a0(param_1,"%s (%s)",local_78,lVar4);
        }
      }
    }
    break;
  case 7:
  case 0xc:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
    local_90 = *(undefined8 *)(*(undefined4 **)(param_3 + 2) + 2);
    local_98 = **(undefined4 **)(param_3 + 2);
    FUN_140c078a0(param_1,"%*s%.*s",param_4,&DAT_1413a2ad6);
    break;
  default:
    local_98 = *param_3;
    FUN_140c078a0(param_1,"%*s<Unsupported tag %d>",param_4,&DAT_1413a2ad6);
    break;
  case 9:
    pcVar5 = "%*sREAL";
LAB_140c0fe07:
    FUN_140c078a0(param_1,pcVar5,param_4,&DAT_1413a2ad6);
    break;
  case 0x10:
    if (param_2 < 0x1f5) {
      if (((param_2 != 500) && (param_2 != 0x1d3)) && ((param_2 != 0x1d7 && (param_2 != 0x1da)))) {
        bVar6 = param_2 == 0x1e5;
LAB_140c0ff41:
        if (!bVar6) goto switchD_140c0fd12_caseD_11;
      }
    }
    else if (((param_2 != 0x36b) && (param_2 != 0x36c)) && (param_2 != 0x36d)) {
      bVar6 = param_2 == 0x36e;
      goto LAB_140c0ff41;
    }
    local_80 = *(undefined8 *)(*(undefined4 **)(param_3 + 2) + 2);
    lVar4 = FUN_140b9c800(0,&local_80,**(undefined4 **)(param_3 + 2));
    if (lVar4 == 0) {
      FUN_140b73bf0(param_1,"(COULD NOT DECODE DISTINGUISHED NAME)\n");
    }
    else {
      FUN_140c27030(param_1,lVar4,param_4,0x20000);
      FUN_140b9c7e0(lVar4);
    }
    break;
  case 0x11:
switchD_140c0fd12_caseD_11:
    local_98 = 1;
    FUN_140ca5fc0(param_1,*(undefined8 *)(*(undefined4 **)(param_3 + 2) + 2),
                  **(undefined4 **)(param_3 + 2),param_4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_28 ^ (ulonglong)auStack_b8);
}

