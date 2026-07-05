/**
 * Function: to_many_keyshares_requested_in_s_max_d
 * Address:  140baf6f0
 * Signature: undefined to_many_keyshares_requested_in_s_max_d(void)
 * Body size: 912 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong to_many_keyshares_requested_in_s_max_d
                    (longlong param_1,longlong *param_2,longlong *param_3,undefined8 *param_4,
                    ulonglong *param_5,undefined8 *param_6,ulonglong *param_7,byte *param_8)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined4 uVar7;
  longlong local_78 [6];
  undefined8 *local_48;
  longlong lStack_40;
  ulonglong local_38;
  undefined2 *puStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x140baf70e;
  uVar4 = 0;
  uVar5 = 0;
  if (param_1 == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\t1_lib.c",0x63d,"tls1_set_groups_list");
    FUN_140b91cc0(0x14,0xc0102,0);
    uVar3 = 0;
  }
  else {
    local_78[5] = 0;
    local_48 = (undefined8 *)0x0;
    local_28 = 1;
    local_78[2] = 0;
    local_78[3] = 0;
    uStack_20 = 0;
    local_38 = 0;
    puStack_30 = (undefined2 *)0x0;
    local_78[1] = 0x20;
    local_78[4] = 0x20;
    lStack_40 = 0x20;
    local_78[0] = param_1;
    local_78[3] = FUN_140b8d8d0(0x40,"ssl\\t1_lib.c",0x64a);
    uVar3 = uVar4;
    if ((local_78[3] != 0) &&
       (local_48 = (undefined8 *)FUN_140b8d8d0(local_78[4] * 8,"ssl\\t1_lib.c",0x64d),
       local_48 != (undefined8 *)0x0)) {
      *local_48 = 0;
      puStack_30 = (undefined2 *)FUN_140b8d8d0(lStack_40 * 2,"ssl\\t1_lib.c",0x651);
      if (puStack_30 != (undefined2 *)0x0) {
        bVar1 = *param_8;
        if (bVar1 != 0) {
LAB_140baf830:
          iVar2 = isspace((uint)bVar1);
          if (iVar2 != 0) goto code_r0x000140baf83c;
          if (*param_8 != 0) {
            plVar6 = local_78;
            iVar2 = FUN_140c1aad0(param_8,0x2f,1,FUN_140bb4200,plVar6);
            uVar7 = (undefined4)((ulonglong)plVar6 >> 0x20);
            uVar3 = uVar5;
            if (iVar2 != 0) {
              if (iVar2 == -1) {
                d_aplatformplatformopenssl_srccryptoerrerr_lo();
                d_aplatformplatformopenssl_srccryptoerrerr_lo
                          ("ssl\\t1_lib.c",0x663,"tls1_set_groups_list");
                FUN_140b91cc0(0x14,0x80106,"Syntax error in \'%s\'",param_8);
              }
              else {
                uVar5 = uVar4;
                if (local_78[5] != 0) {
                  do {
                    if (local_48[uVar4] != 0) {
                      if (uVar4 != uVar5) {
                        local_48[uVar5] = local_48[uVar4];
                      }
                      uVar5 = uVar5 + 1;
                    }
                    uVar4 = uVar4 + 1;
                  } while (uVar4 < (ulonglong)local_78[5]);
                }
                local_78[5] = uVar5;
                if (local_38 < 5) {
                  if ((local_78[2] != 0) && (local_38 == 0)) {
                    local_38 = 1;
                    *puStack_30 = 0;
                  }
                  goto LAB_140baf963;
                }
                d_aplatformplatformopenssl_srccryptoerrerr_lo();
                d_aplatformplatformopenssl_srccryptoerrerr_lo
                          ("ssl\\t1_lib.c",0x678,"tls1_set_groups_list");
                FUN_140b91cc0(0x14,0x80106,"To many keyshares requested in \'%s\' (max = %d)",
                              param_8,CONCAT44(uVar7,4));
              }
            }
            goto LAB_140bafa13;
          }
        }
LAB_140baf963:
        if ((((param_2 != (longlong *)0x0) && (param_4 != (undefined8 *)0x0)) &&
            (param_6 != (undefined8 *)0x0)) &&
           (((param_3 != (longlong *)0x0 && (param_5 != (ulonglong *)0x0)) &&
            (param_7 != (ulonglong *)0x0)))) {
          FUN_140b8d990(*param_2,"ssl\\t1_lib.c",0x69a);
          *param_2 = local_78[3];
          *param_3 = local_78[2];
          FUN_140b8d990(*param_4,"ssl\\t1_lib.c",0x69d);
          *param_4 = puStack_30;
          *param_5 = local_38;
          FUN_140b8d990(*param_6,"ssl\\t1_lib.c",0x6a0);
          *param_6 = local_48;
          *param_7 = local_78[5];
          return 1;
        }
        uVar3 = 1;
      }
    }
LAB_140bafa13:
    FUN_140b8d990(local_78[3],"ssl\\t1_lib.c",0x6a7);
    FUN_140b8d990(local_48,"ssl\\t1_lib.c",0x6a8);
    FUN_140b8d990(puStack_30,"ssl\\t1_lib.c",0x6a9);
  }
  return uVar3;
code_r0x000140baf83c:
  bVar1 = param_8[1];
  param_8 = param_8 + 1;
  if (bVar1 == 0) goto LAB_140baf963;
  goto LAB_140baf830;
}

