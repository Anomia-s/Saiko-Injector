/**
 * Function: container_name_s_key_type_lun
 * Address:  140c79290
 * Signature: undefined container_name_s_key_type_lun(void)
 * Body size: 560 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void container_name_s_key_type_lun
               (longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 local_res8;
  
  uVar1 = *(uint *)(param_1 + 0x40);
  if ((uVar1 & 2) != 0) {
    lVar2 = capi_cert_get_fnamen(param_1,param_3,param_3,param_4,0x140c7929d);
    if (lVar2 == 0) {
      FUN_140c078a0(param_2,"  <No Friendly Name>\n");
    }
    else {
      FUN_140c078a0(param_2,"  Friendly Name \"%s\"\n",lVar2);
      FUN_140b8d990(lVar2,"engines\\e_capi.c",0x56d);
    }
  }
  local_res8 = *(undefined8 *)(param_3 + 8);
  lVar2 = FUN_140b763f0(0,&local_res8,*(undefined4 *)(param_3 + 0x10));
  if (lVar2 == 0) {
    FUN_140c078a0(param_2,"  <Can\'t parse certificate>\n");
  }
  if ((uVar1 & 1) != 0) {
    FUN_140c078a0(param_2,"  Subject: ");
    uVar3 = FUN_140b74cc0(lVar2);
    FUN_140c27030(param_2,uVar3,0,0x82031f);
    FUN_140c078a0(param_2,"\n  Issuer: ");
    uVar3 = FUN_140b74cb0(lVar2);
    FUN_140c27030(param_2,uVar3,0,0x82031f);
    FUN_140c078a0(param_2,&DAT_1413a7288);
  }
  if ((uVar1 & 4) != 0) {
    _2spublic_key_algorithm(param_2,lVar2,0x82031f,0);
  }
  if ((uVar1 & 0x20) != 0) {
    puVar4 = (undefined8 *)err_capi_error(param_1,param_3);
    if (puVar4 == (undefined8 *)0x0) {
      FUN_140c078a0(param_2,"  No Private Key\n");
    }
    else {
      lVar5 = err_capi_error(puVar4[1]);
      lVar6 = err_capi_error(*puVar4);
      if ((lVar5 != 0) && (lVar6 != 0)) {
        FUN_140c078a0(param_2,"  Private Key Info:\n");
        FUN_140c078a0(param_2,"    Provider Name:  %s, Provider Type %lu\n",lVar5,
                      *(undefined4 *)(puVar4 + 2));
        FUN_140c078a0(param_2,"    Container Name: %s, Key Type %lu\n",lVar6,
                      *(undefined4 *)(puVar4 + 5));
      }
      FUN_140b8d990(lVar5,"engines\\e_capi.c",0x546);
      FUN_140b8d990(lVar6,"engines\\e_capi.c",0x547);
    }
    FUN_140b8d990(puVar4,"engines\\e_capi.c",0x585);
  }
  if ((uVar1 & 8) != 0) {
    FUN_140bf5ad0(param_2,lVar2);
  }
  FUN_140b763d0(lVar2);
  return;
}

