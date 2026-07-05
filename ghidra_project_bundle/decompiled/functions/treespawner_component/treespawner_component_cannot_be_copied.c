/**
 * Function: treespawner_component_cannot_be_copied
 * Address:  1405e0730
 * Signature: undefined treespawner_component_cannot_be_copied(void)
 * Body size: 56 bytes
 */


void treespawner_component_cannot_be_copied(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 < 1) {
    return;
  }
  redabortreset_bluesreset
            (1,"/opt/actions-runner/_work/Platform/Platform/thirdparty/flecs/src/tree_spawner.c",
             0x20,"TreeSpawner component cannot be copied");
  (*DAT_141503470)();
                    /* WARNING: Subroutine does not return */
  abort();
}

