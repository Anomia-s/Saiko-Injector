/**
 * Function: invalid_constructor_for_s
 * Address:  140dbccf0
 * Signature: undefined invalid_constructor_for_s(void)
 * Body size: 58 bytes
 */


void invalid_constructor_for_s(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  redabortreset_bluesreset
            (1,"/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/type_info.c",0x10d,
             "invalid constructor for %s",*(undefined8 *)(param_3 + 0xb8));
  (*DAT_141503470)();
                    /* WARNING: Subroutine does not return */
  abort();
}

