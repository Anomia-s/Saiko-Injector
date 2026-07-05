/**
 * Function: client_traffic_secret_n
 * Address:  140bbb0e0
 * Signature: undefined client_traffic_secret_n(void)
 * Body size: 659 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void client_traffic_secret_n(longlong param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  longlong lVar5;
  void *_Dst;
  void *_Size;
  undefined1 auStack_178 [32];
  void *local_158;
  void *local_150;
  undefined1 *local_148;
  char *local_140;
  undefined1 *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  undefined8 *local_120;
  undefined1 **local_118;
  undefined1 **local_110;
  undefined8 **local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 *local_e8;
  undefined1 **local_e0;
  undefined1 *local_d8;
  char *local_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [64];
  undefined1 local_78 [64];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x140bbb0f2;
  local_38 = DAT_1414ef3c0 ^ (ulonglong)auStack_178;
  uVar3 = FUN_140ba7640();
  local_e8 = local_c8;
  iVar2 = FUN_140b97b40(uVar3);
  _Size = (void *)(longlong)iVar2;
  if (iVar2 < 1) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\tls13_enc.c",0x316,"tls13_update_key");
    FUN_140ba3290(param_1,0x50,0xc0103,0);
  }
  else {
    local_108 = &local_e0;
    local_110 = &local_d8;
    local_118 = &local_e8;
    local_120 = &local_d0;
    local_128 = local_78;
    local_130 = local_b8;
    local_138 = (undefined1 *)0xb;
    local_140 = "traffic upd";
    local_158 = *(void **)(param_1 + 0x378);
    local_148 = (undefined1 *)0x0;
    lVar5 = 0x7b4;
    if (*(int *)(param_1 + 0x78) != param_2) {
      lVar5 = 0x774;
    }
    _Dst = (void *)(lVar5 + param_1);
    local_150 = _Dst;
    iVar2 = FUN_140bbbee0(param_1,uVar3,*(undefined8 *)(param_1 + 0x370),
                          *(undefined4 *)(param_1 + 0x380));
    puVar1 = local_e8;
    if (iVar2 != 0) {
      memcpy(_Dst,local_b8,(size_t)_Size);
      local_f8 = 0;
      local_100 = 0;
      local_108 = (undefined8 **)((ulonglong)local_108 & 0xffffffff00000000);
      local_110 = local_e0;
      local_118 = *(undefined1 ***)(param_1 + 0x370);
      local_120 = (char **)0x0;
      local_128 = (undefined1 *)0x0;
      local_130 = local_d8;
      local_138 = puVar1;
      local_140 = local_d0;
      local_148 = local_78;
      local_158 = _Dst;
      local_150 = _Size;
      local_f0 = uVar3;
      iVar2 = read_buffer_len(param_1,*(undefined4 *)(param_1 + 0x48),param_2 != 0,3);
      if (iVar2 != 0) {
        pcVar4 = "SERVER_TRAFFIC_SECRET_N";
        if (*(int *)(param_1 + 0x78) != param_2) {
          pcVar4 = "CLIENT_TRAFFIC_SECRET_N";
        }
        FUN_140b6ede0(param_1,pcVar4,local_b8,_Size);
      }
    }
    FUN_14046e980(local_78,0x40);
    FUN_14046e980(local_b8,0x40);
    if (puVar1 != local_c8) {
      FUN_140b8d990(puVar1,"ssl\\tls13_enc.c",0x342);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_38 ^ (ulonglong)auStack_178);
}

