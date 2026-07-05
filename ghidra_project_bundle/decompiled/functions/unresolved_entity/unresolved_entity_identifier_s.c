/**
 * Function: unresolved_entity_identifier_s
 * Address:  14075a500
 * Signature: undefined unresolved_entity_identifier_s(void)
 * Body size: 162 bytes
 */


undefined8 unresolved_entity_identifier_s(undefined8 *param_1,char *param_2,longlong *param_3)

{
  longlong lVar1;
  
  if (((*param_2 != '#') || (param_2[1] != '0')) || (param_2[2] != '\0')) {
    if ((code *)param_1[0x102] == (code *)0x0) {
      lVar1 = FUN_1403ae520(*param_1,0,param_2,".",0,1);
      *param_3 = lVar1;
    }
    else {
      lVar1 = (*(code *)param_1[0x102])(*param_1,param_2,param_1[0x103]);
      *param_3 = lVar1;
    }
    if (lVar1 == 0) {
      FUN_140399630(0xfffffffd,
                    "/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/addons/meta/cursor.c"
                    ,0x56a,"unresolved entity identifier \'%s\'",param_2);
      return 0xffffffff;
    }
  }
  return 0;
}

