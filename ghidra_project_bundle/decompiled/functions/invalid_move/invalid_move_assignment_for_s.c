/**
 * Function: invalid_move_assignment_for_s
 * Address:  140dbcdb0
 * Signature: undefined invalid_move_assignment_for_s(void)
 * Body size: 58 bytes
 */


void invalid_move_assignment_for_s(void)

{
  longlong in_R9;
  
  redabortreset_bluesreset
            (1,"/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/type_info.c",0x130,
             "invalid move assignment for %s",*(undefined8 *)(in_R9 + 0xb8));
  (*DAT_141503470)();
                    /* WARNING: Subroutine does not return */
  abort();
}

