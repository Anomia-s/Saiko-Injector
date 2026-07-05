/**
 * Function: ssl_server_hostname_verification_failed
 * Address:  1401c4100
 * Signature: undefined ssl_server_hostname_verification_failed(void)
 * Body size: 1195 bytes
 */


undefined8 * ssl_server_hostname_verification_failed(undefined8 *param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  switch(param_2) {
  case 0:
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    pcVar1 = (char *)FUN_140b65d30(0x20);
    *param_1 = pcVar1;
    param_1[2] = 0x12;
    param_1[3] = 0x1f;
    builtin_strncpy(pcVar1,"Success (no error)",0x12);
    goto LAB_1401c448e;
  case 1:
    param_1[1] = 0;
    param_1[2] = 7;
    param_1[3] = 0xf;
    *(undefined4 *)param_1 = 0x6e6b6e55;
    *(undefined4 *)((longlong)param_1 + 3) = 0x6e776f6e;
    goto LAB_1401c459e;
  case 2:
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    pcVar1 = (char *)FUN_140b65d30(0x20);
    *param_1 = pcVar1;
    param_1[2] = 0x1e;
    param_1[3] = 0x1f;
    builtin_strncpy(pcVar1,"Could not establ",0x10);
    uVar3._0_1_ = 'b';
    uVar3._1_1_ = 'l';
    uVar3._2_1_ = 'i';
    uVar3._3_1_ = 's';
    uVar5._0_1_ = 'h';
    uVar5._1_1_ = ' ';
    uVar5._2_1_ = 'c';
    uVar5._3_1_ = 'o';
    uVar7._0_1_ = 'n';
    uVar7._1_1_ = 'n';
    uVar7._2_1_ = 'e';
    uVar7._3_1_ = 'c';
    uVar9._0_1_ = 't';
    uVar9._1_1_ = 'i';
    uVar9._2_1_ = 'o';
    uVar9._3_1_ = 'n';
    break;
  case 3:
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    pcVar1 = (char *)FUN_140b65d30(0x20);
    *param_1 = pcVar1;
    param_1[2] = 0x19;
    param_1[3] = 0x1f;
    builtin_strncpy(pcVar1,"Failed to bind I",0x10);
    uVar2._0_1_ = ' ';
    uVar2._1_1_ = 'b';
    uVar2._2_1_ = 'i';
    uVar2._3_1_ = 'n';
    uVar4._0_1_ = 'd';
    uVar4._1_1_ = ' ';
    uVar4._2_1_ = 'I';
    uVar4._3_1_ = 'P';
    uVar6._0_1_ = ' ';
    uVar6._1_1_ = 'a';
    uVar6._2_1_ = 'd';
    uVar6._3_1_ = 'd';
    uVar8._0_1_ = 'r';
    uVar8._1_1_ = 'e';
    uVar8._2_1_ = 's';
    uVar8._3_1_ = 's';
    goto LAB_1401c438a;
  case 4:
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    pcVar1 = (char *)FUN_140b65d30(0x20);
    *param_1 = pcVar1;
    param_1[2] = 0x19;
    param_1[3] = 0x1f;
    builtin_strncpy(pcVar1,"Failed to read c",0x10);
    uVar2._0_1_ = ' ';
    uVar2._1_1_ = 'r';
    uVar2._2_1_ = 'e';
    uVar2._3_1_ = 'a';
    uVar4._0_1_ = 'd';
    uVar4._1_1_ = ' ';
    uVar4._2_1_ = 'c';
    uVar4._3_1_ = 'o';
    uVar6._0_1_ = 'n';
    uVar6._1_1_ = 'n';
    uVar6._2_1_ = 'e';
    uVar6._3_1_ = 'c';
    uVar8._0_1_ = 't';
    uVar8._1_1_ = 'i';
    uVar8._2_1_ = 'o';
    uVar8._3_1_ = 'n';
LAB_1401c438a:
    *(undefined4 *)(pcVar1 + 9) = uVar2;
    *(undefined4 *)(pcVar1 + 0xd) = uVar4;
    *(undefined4 *)(pcVar1 + 0x11) = uVar6;
    *(undefined4 *)(pcVar1 + 0x15) = uVar8;
    pcVar1[0x19] = '\0';
    return param_1;
  case 5:
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    pcVar1 = (char *)FUN_140b65d30(0x20);
    *param_1 = pcVar1;
    param_1[2] = 0x1a;
    param_1[3] = 0x1f;
    builtin_strncpy(pcVar1,"Failed to write connection",0x1b);
    return param_1;
  case 6:
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    pcVar1 = (char *)FUN_140b65d30(0x20);
    *param_1 = pcVar1;
    param_1[2] = 0x1f;
    param_1[3] = 0x1f;
    builtin_strncpy(pcVar1,"Maximum redirect count exceeded",0x20);
    return param_1;
  case 7:
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    pcVar1 = (char *)FUN_140b65d30(0x20);
    *param_1 = pcVar1;
    param_1[2] = 0x1c;
    param_1[3] = 0x1f;
    builtin_strncpy(pcVar1,"Connection handling canceled",0x1d);
    return param_1;
  case 8:
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    pcVar1 = (char *)FUN_140b65d30(0x20);
    *param_1 = pcVar1;
    param_1[2] = 0x15;
    param_1[3] = 0x1f;
    builtin_strncpy(pcVar1,"SSL connection failed",0x16);
    return param_1;
  case 9:
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    pcVar1 = (char *)FUN_140b65d30(0x20);
    *param_1 = pcVar1;
    param_1[2] = 0x1e;
    param_1[3] = 0x1f;
    builtin_strncpy(pcVar1,"SSL certificate ",0x10);
    uVar3._0_1_ = 'e';
    uVar3._1_1_ = ' ';
    uVar3._2_1_ = 'l';
    uVar3._3_1_ = 'o';
    uVar5._0_1_ = 'a';
    uVar5._1_1_ = 'd';
    uVar5._2_1_ = 'i';
    uVar5._3_1_ = 'n';
    uVar7._0_1_ = 'g';
    uVar7._1_1_ = ' ';
    uVar7._2_1_ = 'f';
    uVar7._3_1_ = 'a';
    uVar9._0_1_ = 'i';
    uVar9._1_1_ = 'l';
    uVar9._2_1_ = 'e';
    uVar9._3_1_ = 'd';
    break;
  case 10:
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    pcVar1 = (char *)FUN_140b65d30(0x20);
    *param_1 = pcVar1;
    param_1[2] = 0x1e;
    param_1[3] = 0x1f;
    builtin_strncpy(pcVar1,"SSL server verif",0x10);
    uVar3._0_1_ = 'i';
    uVar3._1_1_ = 'f';
    uVar3._2_1_ = 'i';
    uVar3._3_1_ = 'c';
    uVar5._0_1_ = 'a';
    uVar5._1_1_ = 't';
    uVar5._2_1_ = 'i';
    uVar5._3_1_ = 'o';
    uVar7._0_1_ = 'n';
    uVar7._1_1_ = ' ';
    uVar7._2_1_ = 'f';
    uVar7._3_1_ = 'a';
    uVar9._0_1_ = 'i';
    uVar9._1_1_ = 'l';
    uVar9._2_1_ = 'e';
    uVar9._3_1_ = 'd';
    break;
  case 0xb:
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    pcVar1 = (char *)FUN_140b65d30(0x30);
    *param_1 = pcVar1;
    param_1[2] = 0x27;
    param_1[3] = 0x2f;
    builtin_strncpy(pcVar1,"SSL server hostname verification failed",0x28);
    return param_1;
  case 0xc:
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    pcVar1 = (char *)FUN_140b65d30(0x30);
    *param_1 = pcVar1;
    param_1[2] = 0x2e;
    param_1[3] = 0x2f;
    builtin_strncpy(pcVar1,"Unsupported HTTP multipart boundary characters",0x2f);
    return param_1;
  case 0xd:
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    pcVar1 = (char *)FUN_140b65d30(0x20);
    *param_1 = pcVar1;
    param_1[2] = 0x12;
    param_1[3] = 0x1f;
    builtin_strncpy(pcVar1,"Compression failed",0x12);
LAB_1401c448e:
    pcVar1[0x12] = '\0';
    return param_1;
  case 0xe:
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    pcVar1 = (char *)FUN_140b65d30(0x20);
    *param_1 = pcVar1;
    param_1[2] = 0x14;
    param_1[3] = 0x1f;
    builtin_strncpy(pcVar1,"Connection timed out",0x15);
    return param_1;
  case 0xf:
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    pcVar1 = (char *)FUN_140b65d30(0x20);
    *param_1 = pcVar1;
    param_1[2] = 0x17;
    param_1[3] = 0x1f;
    builtin_strncpy(pcVar1,"Proxy connection failed",0x18);
    return param_1;
  default:
    param_1[1] = 0;
    param_1[2] = 7;
    param_1[3] = 0xf;
    *(undefined4 *)param_1 = 0x61766e49;
    *(undefined4 *)((longlong)param_1 + 3) = 0x64696c61;
LAB_1401c459e:
    *(undefined1 *)((longlong)param_1 + 7) = 0;
    return param_1;
  }
  *(undefined4 *)(pcVar1 + 0xe) = uVar3;
  *(undefined4 *)(pcVar1 + 0x12) = uVar5;
  *(undefined4 *)(pcVar1 + 0x16) = uVar7;
  *(undefined4 *)(pcVar1 + 0x1a) = uVar9;
  pcVar1[0x1e] = '\0';
  return param_1;
}

