/**
 * Function: invalid_equals_hook_for_s
 * Address:  140dbccb0
 * Signature: undefined invalid_equals_hook_for_s(void)
 * Body size: 58 bytes
 */


void invalid_equals_hook_for_s(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  redabortreset_bluesreset
            (1,"/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/type_info.c",0x160,
             "invalid equals hook for %s",*(undefined8 *)(param_3 + 0xb8));
  (*DAT_141503470)();
                    /* WARNING: Subroutine does not return */
  abort();
}

