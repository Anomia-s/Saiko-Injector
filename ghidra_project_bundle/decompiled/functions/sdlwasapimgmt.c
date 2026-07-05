/**
 * Function: sdlwasapimgmt
 * Address:  14044bd70
 * Signature: undefined sdlwasapimgmt(void)
 * Body size: 405 bytes
 */


undefined8 sdlwasapimgmt(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_1414ef3c0 ^ (ulonglong)auStack_48;
  local_20 = 0;
  local_18 = uapi_ms_win_core_synch_l1_2_0dll(0);
  if (local_18 != 0) {
    FUN_140106150(&DAT_1416f19c8,0);
    FUN_140106140(&DAT_1416f19b8,0);
    DAT_1416f19b0 =
         sdlthreadcreateentry_function
                   (avrevertmmthreadcharacteristics,"SDLWASAPIMgmt",0x40000,&local_20);
    if (DAT_1416f19b0 != 0) {
      FUN_140138360(local_18);
      FUN_140158210(local_18);
      if (local_20 == 0) {
        *param_1 = FUN_14044c020;
        param_1[2] = FUN_14044c080;
        param_1[3] = FUN_14044c130;
        param_1[1] = FUN_14044c1a0;
        param_1[5] = FUN_14044c220;
        param_1[4] = FUN_14044c290;
        param_1[6] = FUN_14044c520;
        param_1[7] = FUN_14044c290;
        param_1[8] = FUN_14044c5e0;
        param_1[9] = FUN_14044bf10;
        param_1[10] = FUN_14044c770;
        param_1[0xc] = FUN_14044c7c0;
        param_1[0xd] = FUN_14044c810;
        param_1[0xb] = FUN_14044c8b0;
        *(undefined1 *)((longlong)param_1 + 0x71) = 1;
        uVar1 = 0x14044c801;
        goto LAB_14044be3d;
      }
      FUN_140138250(DAT_1416f19b0,0);
      DAT_1416f19b0 = 0;
      FUN_1400fbed0(&DAT_141339891,local_20);
      FUN_140160cf0(local_20);
    }
  }
  uVar1 = 0;
LAB_14044be3d:
  if (DAT_1414ef3c0 == (local_10 ^ (ulonglong)auStack_48)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_10 ^ (ulonglong)auStack_48);
}

