/**
 * Function: openssl_engines
 * Address:  140c5b2a0
 * Signature: undefined openssl_engines(void)
 * Body size: 975 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * openssl_engines(char *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1 == (char *)0x0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\engine\\eng_list.c",0x19d,"ENGINE_by_id")
    ;
    FUN_140b91cc0(0x26,0xc0102,0);
  }
  else {
    FUN_140cafa90();
    iVar1 = FUN_140b8b890(&DAT_1417001a8,FUN_140c105d0);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = DAT_1417001ac;
    }
    if (iVar2 == 0) {
      d_aplatformplatformopenssl_srccryptoerrerr_lo();
      d_aplatformplatformopenssl_srccryptoerrerr_lo
                ("crypto\\engine\\eng_list.c",0x1a4,"ENGINE_by_id");
      FUN_140b91cc0(0x26,0x8000f,0);
      return (undefined8 *)0x0;
    }
    iVar2 = FUN_140b8b770(DAT_1417001c0);
    puVar4 = DAT_141700ae0;
    if (iVar2 != 0) {
      do {
        if (puVar4 == (undefined8 *)0x0) {
          FUN_140b8b7a0(DAT_1417001c0);
LAB_140c5b3a9:
          puVar4 = (undefined8 *)0x0;
          iVar2 = strcmp(param_1,"dynamic");
          if (iVar2 != 0) {
            lVar3 = uopenssl_win32_utf8("OPENSSL_ENGINES");
            if (lVar3 == 0) {
              lVar3 = FUN_140c5c3a0();
            }
            puVar4 = (undefined8 *)openssl_engines("dynamic");
            if ((((puVar4 != (undefined8 *)0x0) &&
                 (iVar2 = FUN_140cd9910(puVar4,&DAT_1413a6a3c,param_1,0), iVar2 != 0)) &&
                (iVar2 = FUN_140cd9910(puVar4,"DIR_LOAD",&DAT_1413a6f94,0), iVar2 != 0)) &&
               (((iVar2 = FUN_140cd9910(puVar4,"DIR_ADD",lVar3,0), iVar2 != 0 &&
                 (iVar2 = FUN_140cd9910(puVar4,"LIST_ADD",&DAT_1413a7044,0), iVar2 != 0)) &&
                (iVar2 = FUN_140cd9910(puVar4,&DAT_1413a6a4c,0,0), iVar2 != 0)))) {
              return puVar4;
            }
          }
          FUN_140c10150(puVar4);
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("crypto\\engine\\eng_list.c",0x1db,"ENGINE_by_id");
          FUN_140b91cc0(0x26,0x74,"id=%s",param_1);
          return (undefined8 *)0x0;
        }
        iVar2 = strcmp(param_1,(char *)*puVar4);
        if (iVar2 == 0) {
          if ((*(byte *)(puVar4 + 0x13) & 4) == 0) {
            LOCK();
            *(int *)((longlong)puVar4 + 0x9c) = *(int *)((longlong)puVar4 + 0x9c) + 1;
            UNLOCK();
            FUN_140b8b7a0(DAT_1417001c0);
            return puVar4;
          }
          puVar5 = (undefined8 *)FUN_140c10070();
          if (puVar5 != (undefined8 *)0x0) {
            *puVar5 = *puVar4;
            puVar5[1] = puVar4[1];
            puVar5[2] = puVar4[2];
            puVar5[3] = puVar4[3];
            puVar5[4] = puVar4[4];
            puVar5[5] = puVar4[5];
            puVar5[6] = puVar4[6];
            puVar5[7] = puVar4[7];
            puVar5[8] = puVar4[8];
            puVar5[9] = puVar4[9];
            puVar5[0xb] = puVar4[0xb];
            puVar5[0xc] = puVar4[0xc];
            puVar5[0xd] = puVar4[0xd];
            puVar5[0xe] = puVar4[0xe];
            puVar5[0xf] = puVar4[0xf];
            puVar5[0x10] = puVar4[0x10];
            puVar5[0x12] = puVar4[0x12];
            *(undefined4 *)(puVar5 + 0x13) = *(undefined4 *)(puVar4 + 0x13);
            lVar3 = puVar4[0x1b];
            puVar5[0x1b] = lVar3;
            if (lVar3 != 0) {
              if (DAT_141700af0 == (undefined8 *)0x0) {
                if (DAT_141700af8 != (undefined8 *)0x0) goto LAB_140c5b5da;
                DAT_141700af0 = puVar5;
                puVar5[0x19] = 0;
              }
              else {
                if ((DAT_141700af8 == (undefined8 *)0x0) || (DAT_141700af8[0x1a] != 0))
                goto LAB_140c5b5da;
                DAT_141700af8[0x1a] = puVar5;
                puVar5[0x19] = DAT_141700af8;
              }
              DAT_141700af8 = puVar5;
              puVar5[0x1a] = 0;
            }
LAB_140c5b5da:
            FUN_140b8b7a0(DAT_1417001c0);
            return puVar5;
          }
          FUN_140b8b7a0(DAT_1417001c0);
          goto LAB_140c5b3a9;
        }
        puVar4 = (undefined8 *)puVar4[0x18];
      } while( true );
    }
  }
  return (undefined8 *)0x0;
}

