/**
 * Function: async_init_thread
 * Address:  140ba0340
 * Signature: undefined async_init_thread(void)
 * Body size: 566 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 async_init_thread(ulonglong param_1,ulonglong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  LPVOID pvVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  lVar6 = 0;
  if (param_1 < param_2) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo
              ("crypto\\async\\async.c",0x162,"ASYNC_init_thread");
    FUN_140b91cc0(0x33,0x67,0);
  }
  else {
    iVar1 = openssl_init_crypto(0x100,0);
    if (((iVar1 != 0) && (iVar1 = cryptoinitthreadc(0,0,FUN_140ba0ad0), iVar1 != 0)) &&
       (plVar2 = (longlong *)FUN_140b8da80(0x18,"crypto\\async\\async.c",0x16c),
       plVar2 != (longlong *)0x0)) {
      lVar3 = FUN_140b77af0(0,param_2 & 0xffffffff);
      *plVar2 = lVar3;
      if (lVar3 == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\async\\async.c",0x172,"ASYNC_init_thread");
        FUN_140b91cc0(0x33,0x8000f,0);
        uVar7 = 0x173;
      }
      else {
        plVar2[2] = param_1;
        while (param_2 != 0) {
          param_2 = param_2 - 1;
          puVar4 = (undefined8 *)FUN_140b8da80(0x38,"crypto\\async\\async.c",0x52);
          if (puVar4 == (undefined8 *)0x0) break;
          *(undefined4 *)((longlong)puVar4 + 0x24) = 0;
          pvVar5 = CreateFiberEx(0,0,1,FUN_140c30110,(LPVOID)0x0);
          *puVar4 = pvVar5;
          if (pvVar5 == (LPVOID)0x0) {
            FUN_140b8d990(puVar4[3],"crypto\\async\\async.c",0x5e);
            DeleteFiber((LPVOID)*puVar4);
            FUN_140b8d990(puVar4,"crypto\\async\\async.c",0x60);
            break;
          }
          puVar4[3] = 0;
          FUN_140b78340(*plVar2,puVar4);
          lVar6 = lVar6 + 1;
        }
        plVar2[1] = lVar6;
        iVar1 = FUN_140b8b970(&DAT_1416ff9c4,plVar2);
        if (iVar1 != 0) {
          return 1;
        }
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("crypto\\async\\async.c",0x18b,"ASYNC_init_thread");
        FUN_140b91cc0(0x33,0x65,0);
        FUN_140ba0c60(plVar2);
        FUN_140b77c10(*plVar2);
        uVar7 = 0x193;
      }
      FUN_140b8d990(plVar2,"crypto\\async\\async.c",uVar7);
    }
  }
  return 0;
}

