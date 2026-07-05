/**
 * Function: orgopensslwinstore
 * Address:  140d707a0
 * Signature: undefined orgopensslwinstore(void)
 * Body size: 161 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * orgopensslwinstore(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  HCERTSTORE pvVar3;
  
  iVar1 = FUN_140b8c740(param_2,"org.openssl.winstore:",0x15);
  if (iVar1 == 0) {
    puVar2 = (undefined8 *)
             FUN_140b8da80(0x40,"providers\\implementations\\storemgmt\\winstore_store.c",0x57);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = param_1;
      pvVar3 = CertOpenSystemStoreW(0,L"ROOT");
      puVar2[4] = pvVar3;
      if (pvVar3 != (HCERTSTORE)0x0) {
        FUN_140d70b70(puVar2);
        return puVar2;
      }
      FUN_140b8d990(puVar2,"providers\\implementations\\storemgmt\\winstore_store.c",0x5e);
    }
  }
  return (undefined8 *)0x0;
}

