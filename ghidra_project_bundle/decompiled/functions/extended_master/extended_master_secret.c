/**
 * Function: extended_master_secret
 * Address:  140c448f0
 * Signature: undefined extended_master_secret(void)
 * Body size: 705 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
extended_master_secret
          (longlong param_1,undefined8 param_2,undefined8 param_3,void *param_4,size_t param_5,
          void *param_6,ulonglong param_7,int param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *_Dst;
  longlong lVar5;
  
  uVar4 = 0;
  if (0xffff < param_7) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\t1_enc.c",0x1b5,"tls1_export_keying_material");
    FUN_140b91cc0(0x14,0x80106,0);
    return 0;
  }
  lVar5 = param_5 + 0x40;
  if (param_8 != 0) {
    lVar5 = param_5 + 0x42 + param_7;
  }
  _Dst = (longlong *)FUN_140b8d8d0(lVar5,"ssl\\t1_enc.c",0x1c3);
  if (_Dst != (longlong *)0x0) {
    memcpy(_Dst,param_4,param_5);
    uVar2 = *(undefined8 *)(param_1 + 0x18c);
    *(undefined8 *)((longlong)_Dst + param_5) = *(undefined8 *)(param_1 + 0x184);
    ((undefined8 *)((longlong)_Dst + param_5))[1] = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0x19c);
    puVar1 = (undefined8 *)((longlong)_Dst + param_5 + 0x10);
    *puVar1 = *(undefined8 *)(param_1 + 0x194);
    puVar1[1] = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0x16c);
    puVar1 = (undefined8 *)(param_5 + 0x20 + (longlong)_Dst);
    *puVar1 = *(undefined8 *)(param_1 + 0x164);
    puVar1[1] = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0x17c);
    puVar1 = (undefined8 *)(param_5 + 0x30 + (longlong)_Dst);
    *puVar1 = *(undefined8 *)(param_1 + 0x174);
    puVar1[1] = uVar2;
    if (param_8 != 0) {
      *(char *)((longlong)_Dst + param_5 + 0x40) = (char)(param_7 >> 8);
      *(char *)(param_5 + 0x41 + (longlong)_Dst) = (char)param_7;
      if ((param_7 != 0) || (param_6 != (void *)0x0)) {
        memcpy((void *)(param_5 + 0x42 + (longlong)_Dst),param_6,param_7);
      }
    }
    iVar3 = memcmp(_Dst,"client finished",0xf);
    if (iVar3 != 0) {
      iVar3 = memcmp(_Dst,"server finished",0xf);
      if ((iVar3 != 0) &&
         (((*_Dst != 0x732072657473616d || ((int)_Dst[1] != 0x65726365)) ||
          (*(char *)((longlong)_Dst + 0xc) != 't')))) {
        iVar3 = memcmp(_Dst,"extended master secret",0x16);
        if ((iVar3 != 0) &&
           (((*_Dst != 0x617078652079656b || ((int)_Dst[1] != 0x6f69736e)) ||
            (*(char *)((longlong)_Dst + 0xc) != 'n')))) {
          uVar4 = FUN_140c44db0(param_1,_Dst,lVar5,0,0,0,0,0,0,0,0,
                                *(longlong *)(param_1 + 0x8f8) + 0x50,
                                *(undefined8 *)(*(longlong *)(param_1 + 0x8f8) + 8),param_2,param_3,
                                0);
          goto LAB_140c44b71;
        }
      }
    }
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("ssl\\t1_enc.c",0x1f8,"tls1_export_keying_material");
    FUN_140b91cc0(0x14,0x16f,0);
  }
LAB_140c44b71:
  FUN_140b8db20(_Dst,lVar5,"ssl\\t1_enc.c",0x1fa);
  return uVar4;
}

