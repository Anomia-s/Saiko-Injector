/**
 * Function: cJSON_Minify
 * Address:  140584bc0
 * Signature: undefined cJSON_Minify(void)
 * Body size: 277 bytes
 */


void cJSON_Minify(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
                    /* 0x584bc0  61  cJSON_Minify */
  pcVar3 = param_1;
  if (param_1 != (char *)0x0) {
LAB_140584be0:
    pcVar2 = pcVar3;
    switch(*pcVar2) {
    case '\0':
      *param_1 = '\0';
      break;
    default:
      *param_1 = *pcVar2;
      param_1 = param_1 + 1;
      pcVar3 = pcVar2 + 1;
      goto LAB_140584be0;
    case '\t':
    case '\n':
    case '\r':
    case ' ':
      pcVar3 = pcVar2 + 1;
      goto LAB_140584be0;
    case '\"':
      *param_1 = '\"';
      cVar1 = pcVar2[1];
      while( true ) {
        pcVar2 = pcVar2 + 1;
        param_1 = param_1 + 1;
        pcVar3 = pcVar2;
        if (cVar1 == '\0') break;
        *param_1 = cVar1;
        if (*pcVar2 == '\\') {
          if (pcVar2[1] == '\"') {
            pcVar2 = pcVar2 + 1;
            param_1[1] = '\"';
            param_1 = param_1 + 1;
          }
        }
        else if (*pcVar2 == '\"') {
          *param_1 = '\"';
          param_1 = param_1 + 1;
          pcVar3 = pcVar2 + 1;
          break;
        }
        cVar1 = pcVar2[1];
      }
      goto LAB_140584be0;
    case '/':
      if (pcVar2[1] == '*') {
        pcVar3 = pcVar2 + 2;
        do {
          if (*pcVar3 == '*') {
            if (pcVar3[1] == '/') {
              pcVar3 = pcVar3 + 2;
              goto LAB_140584be0;
            }
          }
          else if (*pcVar3 == '\0') goto LAB_140584be0;
          pcVar3 = pcVar3 + 1;
        } while( true );
      }
      pcVar3 = pcVar2 + 1;
      if (pcVar2[1] == '/') {
        pcVar3 = pcVar2 + 2;
        do {
          cVar1 = *pcVar3;
          if (cVar1 == '\0') break;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\n');
      }
      goto LAB_140584be0;
    }
  }
  return;
}

