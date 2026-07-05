/**
 * Function: missing_for_multiline_comment
 * Address:  1405d9a80
 * Signature: undefined missing_for_multiline_comment(void)
 * Body size: 475 bytes
 */


char * missing_for_multiline_comment(undefined8 *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char cVar4;
  char *pcVar5;
  
  cVar1 = *(char *)(param_1 + 6);
LAB_1405d9aa2:
  cVar4 = *param_2;
  if (cVar1 == '\0') {
    while( true ) {
      if (cVar4 == '\0') {
        return param_2;
      }
      iVar2 = isspace((int)cVar4);
      pcVar5 = param_2;
      if (iVar2 == 0) break;
      cVar4 = param_2[1];
      param_2 = param_2 + 1;
    }
  }
  else {
    while( true ) {
      if (cVar4 == '\0') {
        return param_2;
      }
      iVar2 = isspace((int)cVar4);
      pcVar5 = param_2;
      if ((cVar4 == '\n') || (iVar2 == 0)) break;
      cVar4 = param_2[1];
      param_2 = param_2 + 1;
    }
  }
  if (cVar4 == '/') {
    if (pcVar5[1] == '*') {
      pcVar3 = pcVar5 + 5;
      pcVar5 = pcVar5 + 2;
      do {
        if (pcVar3[-3] == '*') {
          if (pcVar3[-2] == '/') goto LAB_1405d9b8f;
        }
        else if (pcVar3[-3] == '\0') {
          FUN_140399a50(*param_1,param_1[1],(longlong)pcVar5 - param_1[1],
                        "missing */ for multiline comment");
          return (char *)0x0;
        }
        pcVar3 = pcVar3 + 1;
        pcVar5 = pcVar5 + 1;
      } while( true );
    }
    if (pcVar5[1] == '/') {
      pcVar5 = pcVar5 + 2;
      cVar4 = *pcVar5;
      if (cVar4 != '\0') {
        while (cVar4 != '\n') {
          pcVar5 = pcVar5 + 1;
          cVar4 = *pcVar5;
          if (cVar4 == '\0') {
            return pcVar5;
          }
        }
        if (cVar1 != '\0') {
LAB_1405d9c5f:
          pcVar5 = (char *)FUN_1405da2a0(param_1,pcVar5);
          return pcVar5;
        }
        param_2 = pcVar5 + 1;
        goto LAB_1405d9aa2;
      }
    }
  }
  return pcVar5;
LAB_1405d9b8f:
  param_2 = pcVar3 + -1;
  cVar4 = pcVar3[-1];
  pcVar5 = param_2;
  if ((cVar4 == '\r') &&
     (cVar4 = (*pcVar3 != '\n') * '\x03' + '\n', pcVar5 = pcVar3, *pcVar3 != '\n')) {
    pcVar5 = param_2;
  }
  if (((cVar1 != '\0') && (cVar4 == '\n')) && (cVar4 = pcVar5[1], cVar4 != '\0')) {
    pcVar3 = pcVar5 + 2;
    do {
      iVar2 = isspace((int)cVar4);
      if ((cVar4 == '\n') || (iVar2 == 0)) {
        if ((cVar4 == '/') && ((*pcVar3 == '/' || (*pcVar3 == '*')))) goto LAB_1405d9c5f;
        break;
      }
      cVar4 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar4 != '\0');
  }
  goto LAB_1405d9aa2;
}

