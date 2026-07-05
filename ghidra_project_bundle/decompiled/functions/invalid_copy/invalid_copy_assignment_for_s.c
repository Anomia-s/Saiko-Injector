/**
 * Function: invalid_copy_assignment_for_s
 * Address:  140dbcd70
 * Signature: undefined invalid_copy_assignment_for_s(void)
 * Body size: 58 bytes
 */


void invalid_copy_assignment_for_s(void)

{
  longlong in_R9;
  
  redabortreset_bluesreset
            (1,"/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/type_info.c",0x124,
             "invalid copy assignment for %s",*(undefined8 *)(in_R9 + 0xb8));
  (*DAT_141503470)();
                    /* WARNING: Subroutine does not return */
  abort();
}

