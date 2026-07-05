/**
 * Function: invalid_escape_sequence_in_string_s
 * Address:  1407610e0
 * Signature: undefined invalid_escape_sequence_in_string_s(void)
 * Body size: 228 bytes
 */


char * invalid_escape_sequence_in_string_s(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 auStack_58 [32];
  char *local_38;
  char local_21;
  ulonglong local_20;
  
  local_20 = DAT_1414ef3c0 ^ (ulonglong)auStack_58;
  pcVar3 = param_1;
  pcVar2 = param_1;
  do {
    pcVar4 = pcVar2 + 1;
    cVar1 = *pcVar3;
    if (cVar1 == '\\') {
      if (pcVar3[1] == '$') {
        local_21 = '$';
        pcVar3 = pcVar3 + 2;
      }
      else if (pcVar3[1] == '{') {
        local_21 = '{';
        pcVar3 = pcVar3 + 2;
      }
      else {
        pcVar3 = (char *)FUN_1403d29c0(pcVar3,&local_21);
        if (pcVar3 == (char *)0x0) {
          local_38 = param_1;
          FUN_140399630(0xfffffffd,
                        "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/script/expr/util.c"
                        ,0x187,"invalid escape sequence in string \'%s\'");
          pcVar4 = (char *)0x0;
LAB_14076119d:
          if (DAT_1414ef3c0 != (local_20 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
            FUN_140b65db0(local_20 ^ (ulonglong)auStack_58);
          }
          return pcVar4;
        }
      }
    }
    else {
      if (cVar1 == '\0') {
        *pcVar2 = '\0';
        goto LAB_14076119d;
      }
      pcVar3 = pcVar3 + 1;
      local_21 = cVar1;
    }
    *pcVar2 = local_21;
    pcVar2 = pcVar4;
  } while( true );
}

