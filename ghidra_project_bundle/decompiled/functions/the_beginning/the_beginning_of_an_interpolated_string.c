/**
 * Function: the_beginning_of_an_interpolated_string
 * Address:  14079fdb0
 * Signature: undefined the_beginning_of_an_interpolated_string(void)
 * Body size: 1423 bytes
 */


undefined8 * the_beginning_of_an_interpolated_string(int *param_1,undefined8 *param_2)

{
  longlong lVar1;
  char *pcVar2;
  int iVar3;
  undefined *puVar4;
  
  iVar3 = *param_1;
  switch(iVar3) {
  case 0:
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 5;
    param_2[3] = 0xf;
    *(undefined4 *)param_2 = 0x666f653c;
    *(undefined1 *)((longlong)param_2 + 4) = 0x3e;
    break;
  default:
    if (iVar3 < 0x100) {
      FUN_14079f4f0(param_2,"\'%c\'");
      return param_2;
    }
    if (iVar3 - 0x123U < 0x15) {
      puVar4 = (&PTR_DAT_14124eb90)[iVar3 - 0x123U];
LAB_1407a02ce:
      FUN_14079f4f0(param_2,"\'%s\'",puVar4);
      return param_2;
    }
    pcVar2 = "<unknown>";
    goto LAB_1407a031c;
  case 0x101:
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 4;
    param_2[3] = 0xf;
    *(undefined4 *)param_2 = 0x273d3d27;
    break;
  case 0x102:
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 4;
    param_2[3] = 0xf;
    *(undefined4 *)param_2 = 0x273d3c27;
    break;
  case 0x103:
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 4;
    param_2[3] = 0xf;
    *(undefined4 *)param_2 = 0x273d3e27;
    break;
  case 0x104:
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 4;
    param_2[3] = 0xf;
    *(undefined4 *)param_2 = 0x273d7e27;
    break;
  case 0x105:
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 4;
    param_2[3] = 0xf;
    *(undefined4 *)param_2 = 0x272e2e27;
    break;
  case 0x106:
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 5;
    param_2[3] = 0xf;
    *(undefined4 *)param_2 = 0x2e2e2e27;
    *(undefined1 *)((longlong)param_2 + 4) = 0x27;
    break;
  case 0x107:
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 4;
    param_2[3] = 0xf;
    *(undefined4 *)param_2 = 0x273e2d27;
    break;
  case 0x108:
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 4;
    param_2[3] = 0xf;
    *(undefined4 *)param_2 = 0x273a3a27;
    break;
  case 0x109:
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 4;
    param_2[3] = 0xf;
    *(undefined4 *)param_2 = 0x272f2f27;
    break;
  case 0x10a:
    if (*(longlong *)(param_1 + 6) != 0) {
      iVar3 = param_1[5];
      pcVar2 = "`%.*s{";
      goto LAB_1407a01ad;
    }
    pcVar2 = "the beginning of an interpolated string";
    goto LAB_1407a031c;
  case 0x10b:
    if (*(longlong *)(param_1 + 6) != 0) {
      iVar3 = param_1[5];
      pcVar2 = "}%.*s{";
      goto LAB_1407a01ad;
    }
    pcVar2 = "the middle of an interpolated string";
    goto LAB_1407a031c;
  case 0x10c:
    if (*(longlong *)(param_1 + 6) != 0) {
      iVar3 = param_1[5];
      pcVar2 = "}%.*s`";
      goto LAB_1407a01ad;
    }
    pcVar2 = "the end of an interpolated string";
    goto LAB_1407a031c;
  case 0x10d:
    if (*(longlong *)(param_1 + 6) != 0) {
      iVar3 = param_1[5];
      pcVar2 = "`%.*s`";
      goto LAB_1407a01ad;
    }
    pcVar2 = "interpolated string";
    goto LAB_1407a031c;
  case 0x10e:
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 4;
    param_2[3] = 0xf;
    *(undefined4 *)param_2 = 0x273d2b27;
    break;
  case 0x10f:
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 4;
    param_2[3] = 0xf;
    *(undefined4 *)param_2 = 0x273d2d27;
    break;
  case 0x110:
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 4;
    param_2[3] = 0xf;
    *(undefined4 *)param_2 = 0x273d2a27;
    break;
  case 0x111:
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 4;
    param_2[3] = 0xf;
    *(undefined4 *)param_2 = 0x273d2f27;
    break;
  case 0x112:
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 5;
    param_2[3] = 0xf;
    *(undefined4 *)param_2 = 0x3d2f2f27;
    *(undefined1 *)((longlong)param_2 + 4) = 0x27;
    break;
  case 0x113:
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 4;
    param_2[3] = 0xf;
    *(undefined4 *)param_2 = 0x273d2527;
    break;
  case 0x114:
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 4;
    param_2[3] = 0xf;
    *(undefined4 *)param_2 = 0x273d5e27;
    break;
  case 0x115:
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 5;
    param_2[3] = 0xf;
    *(undefined4 *)param_2 = 0x3d2e2e27;
    *(undefined1 *)((longlong)param_2 + 4) = 0x27;
    break;
  case 0x116:
  case 0x117:
    if (*(longlong *)(param_1 + 6) == 0) {
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 6;
      param_2[3] = 0xf;
      *(undefined4 *)param_2 = 0x69727473;
      *(undefined2 *)((longlong)param_2 + 4) = 0x676e;
      return param_2;
    }
    iVar3 = param_1[5];
    pcVar2 = "\"%.*s\"";
LAB_1407a01ad:
    FUN_14079f4f0(param_2,pcVar2,iVar3);
    break;
  case 0x118:
    if (*(longlong *)(param_1 + 6) != 0) {
      iVar3 = param_1[5];
      pcVar2 = "\'%.*s\'";
      goto LAB_1407a01ad;
    }
    pcVar2 = "number";
    goto LAB_1407a031c;
  case 0x119:
    puVar4 = *(undefined **)(param_1 + 6);
    if (puVar4 != (undefined *)0x0) goto LAB_1407a02ce;
    pcVar2 = "identifier";
    goto LAB_1407a031c;
  case 0x11a:
    param_2[1] = 0;
    param_2[2] = 7;
    param_2[3] = 0xf;
    *(undefined4 *)param_2 = 0x6d6d6f63;
    *(undefined4 *)((longlong)param_2 + 3) = 0x746e656d;
    *(undefined1 *)((longlong)param_2 + 7) = 0;
    break;
  case 0x11c:
    puVar4 = *(undefined **)(param_1 + 6);
    if (puVar4 != (undefined *)0x0) goto LAB_1407a02ce;
    pcVar2 = "attribute";
    goto LAB_1407a031c;
  case 0x11d:
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 4;
    param_2[3] = 0xf;
    *(undefined4 *)param_2 = 0x275b4027;
    break;
  case 0x11e:
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    pcVar2 = (char *)FUN_140b65d30(0x20);
    *param_2 = pcVar2;
    param_2[2] = 0x10;
    param_2[3] = 0x1f;
    builtin_strncpy(pcVar2,"malformed string",0x11);
    break;
  case 0x11f:
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    pcVar2 = (char *)FUN_140b65d30(0x20);
    *param_2 = pcVar2;
    param_2[2] = 0x12;
    param_2[3] = 0x1f;
    builtin_strncpy(pcVar2,"unfinished comment",0x13);
    break;
  case 0x120:
    if (param_1[6] != 0) {
      lVar1 = FUN_1408439c0(param_1[6]);
      if (lVar1 != 0) {
        FUN_14079f4f0(param_2,"Unicode character U+%x (did you mean \'%s\'?)",param_1[6],lVar1);
        return param_2;
      }
      FUN_14079f4f0(param_2,"Unicode character U+%x",param_1[6]);
      return param_2;
    }
    pcVar2 = "invalid UTF-8 sequence";
LAB_1407a031c:
    FUN_140004940(param_2,pcVar2);
    break;
  case 0x121:
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    pcVar2 = (char *)FUN_140b65d30(0x30);
    *param_2 = pcVar2;
    param_2[2] = 0x2b;
    param_2[3] = 0x2f;
    builtin_strncpy(pcVar2,"\'{{\', which is invalid (did you mean \'\\{\'?)",0x2c);
  }
  return param_2;
}

