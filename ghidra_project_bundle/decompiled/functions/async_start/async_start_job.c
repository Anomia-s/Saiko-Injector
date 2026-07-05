/**
 * Function: async_start_job
 * Address:  140ba0580
 * Signature: undefined async_start_job(void)
 * Body size: 980 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
async_start_job(longlong *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
               void *param_5,size_t param_6)

{
  longlong lVar1;
  void *_Dst;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  LPVOID pvVar8;
  
  iVar2 = openssl_init_crypto(0x100,0);
  if (iVar2 == 0) {
    return 0;
  }
  lVar3 = FUN_140b8b930(&DAT_1416ff9c0);
  if (lVar3 == 0) {
    iVar2 = cryptoinitthreadc(0,0,FUN_140ba0ad0);
    if (iVar2 != 0) {
      lVar3 = FUN_140b8d8d0(0x20,"crypto\\async\\async.c",0x2a);
      if (lVar3 != 0) {
        FUN_140c300b0(lVar3);
        *(undefined8 *)(lVar3 + 0x10) = 0;
        *(undefined4 *)(lVar3 + 0x18) = 0;
        iVar2 = FUN_140b8b970(&DAT_1416ff9c0,lVar3);
        if (iVar2 != 0) goto LAB_140ba0644;
      }
      FUN_140b8d990(lVar3,"crypto\\async\\async.c",0x36);
    }
    lVar3 = 0;
  }
LAB_140ba0644:
  if (lVar3 == 0) {
    return 0;
  }
  if (*param_1 != 0) {
    *(longlong *)(lVar3 + 0x10) = *param_1;
  }
  do {
    while (lVar4 = *(longlong *)(lVar3 + 0x10), lVar4 != 0) {
      iVar2 = *(int *)(lVar4 + 0x24);
      if (iVar2 == 3) {
        *param_3 = *(undefined4 *)(lVar4 + 0x20);
        *(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x28) = 0;
        FUN_140ba0bc0(*(undefined8 *)(lVar3 + 0x10));
        *(undefined8 *)(lVar3 + 0x10) = 0;
        *param_1 = 0;
        return 3;
      }
      if (iVar2 == 1) {
        *param_1 = lVar4;
        *(undefined4 *)(*(longlong *)(lVar3 + 0x10) + 0x24) = 2;
        *(undefined8 *)(lVar3 + 0x10) = 0;
        return 2;
      }
      if (iVar2 != 2) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\async\\async.c",0xf1,"ASYNC_start_job");
        FUN_140b91cc0(0x33,0xc0103,0);
        FUN_140ba0bc0(*(undefined8 *)(lVar3 + 0x10));
        *(undefined8 *)(lVar3 + 0x10) = 0;
        *param_1 = 0;
        return 0;
      }
      lVar4 = *param_1;
      if (lVar4 == 0) {
        return 0;
      }
      *(longlong *)(lVar3 + 0x10) = lVar4;
      lVar4 = FUN_140c172d0(*(undefined8 *)(lVar4 + 0x30));
      if (lVar4 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\async\\async.c",0xdd,"ASYNC_start_job");
        FUN_140b91cc0(0x33,0xc0103,0);
        FUN_140ba0bc0(*(undefined8 *)(lVar3 + 0x10));
        *(undefined8 *)(lVar3 + 0x10) = 0;
        *param_1 = 0;
        return 0;
      }
      SwitchToFiber((LPVOID)**(undefined8 **)(lVar3 + 0x10));
      lVar1 = *(longlong *)(lVar3 + 0x10);
      uVar5 = FUN_140c172d0(lVar4);
      *(undefined8 *)(lVar1 + 0x30) = uVar5;
    }
    puVar6 = (undefined8 *)FUN_140b8b930(&DAT_1416ff9c4);
    if (puVar6 == (undefined8 *)0x0) {
      iVar2 = async_init_thread(0,0);
      if (iVar2 == 0) goto LAB_140ba0920;
      puVar6 = (undefined8 *)FUN_140b8b930(&DAT_1416ff9c4);
    }
    puVar7 = (undefined8 *)FUN_140b783c0(*puVar6);
    if (puVar7 == (undefined8 *)0x0) {
      if ((puVar6[2] != 0) && ((ulonglong)puVar6[2] <= (ulonglong)puVar6[1])) {
LAB_140ba0920:
        *(undefined8 *)(lVar3 + 0x10) = 0;
        return 1;
      }
      puVar7 = (undefined8 *)FUN_140b8da80(0x38,"crypto\\async\\async.c",0x52);
      if (puVar7 != (undefined8 *)0x0) {
        *(undefined4 *)((longlong)puVar7 + 0x24) = 0;
        pvVar8 = CreateFiberEx(0,0,1,FUN_140c30110,(LPVOID)0x0);
        *puVar7 = pvVar8;
        if (pvVar8 == (LPVOID)0x0) {
          FUN_140b8d990(puVar7[3],"crypto\\async\\async.c",0x5e);
          DeleteFiber((LPVOID)*puVar7);
          FUN_140b8d990(puVar7,"crypto\\async\\async.c",0x60);
          goto LAB_140ba0920;
        }
        puVar6[1] = puVar6[1] + 1;
      }
    }
    *(undefined8 **)(lVar3 + 0x10) = puVar7;
    if (puVar7 == (undefined8 *)0x0) {
      return 1;
    }
    if (param_5 == (void *)0x0) {
      puVar7[3] = 0;
    }
    else {
      uVar5 = FUN_140b8d8d0(param_6,"crypto\\async\\async.c",0xfd);
      puVar7[3] = uVar5;
      _Dst = *(void **)(*(longlong *)(lVar3 + 0x10) + 0x18);
      if (_Dst == (void *)0x0) {
        FUN_140ba0bc0(*(longlong *)(lVar3 + 0x10));
        *(undefined8 *)(lVar3 + 0x10) = 0;
        return 0;
      }
      memcpy(_Dst,param_5,param_6);
    }
    *(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x10) = param_4;
    *(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x28) = param_2;
    uVar5 = FUN_140c17590(0);
    SwitchToFiber((LPVOID)**(undefined8 **)(lVar3 + 0x10));
    lVar4 = *(longlong *)(lVar3 + 0x10);
    uVar5 = FUN_140c172d0(uVar5);
    *(undefined8 *)(lVar4 + 0x30) = uVar5;
  } while( true );
}

