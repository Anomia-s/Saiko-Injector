/**
 * Function: create_channel
 * Address:  140bc8c20
 * Signature: undefined create_channel(void)
 * Body size: 968 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong create_channel(undefined8 *param_1)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 in_stack_ffffffffffffff98;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 *puStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  uStack_10 = 0x140bc8c35;
  lVar4 = param_1[1];
  lVar3 = FUN_140ba2f40();
  if (lVar4 == lVar3) {
    FUN_140bcba90(0,"ssl\\quic\\quic_impl.c",0x254,"ossl_quic_new",CONCAT44(uVar9,0xc0101),0);
    return 0;
  }
  lVar4 = FUN_140b8da80(0x130,"ssl\\quic\\quic_impl.c",600);
  if (lVar4 == 0) {
    FUN_140bcba90(0,"ssl\\quic\\quic_impl.c",0x25a,"ossl_quic_new",CONCAT44(uVar9,0x8000f),0);
    return 0;
  }
  lVar3 = cryptothreadarchthread_winc();
  *(longlong *)(lVar4 + 0xa8) = lVar3;
  if (lVar3 == 0) {
    uVar6 = 0x261;
    uVar8 = CONCAT44(uVar9,0x8000f);
LAB_140bc8f9d:
    pcVar7 = "ossl_quic_new";
  }
  else {
    uVar6 = FUN_140b79590();
    piVar5 = (int *)ossl_ssl_connection_new_int(param_1,lVar4,uVar6);
    *(int **)(lVar4 + 0x78) = piVar5;
    if ((piVar5 == (int *)0x0) ||
       ((*piVar5 != 0 &&
        ((-1 < (char)*piVar5 || (piVar5 = (int *)FUN_140bc8b20(piVar5), piVar5 == (int *)0x0)))))) {
      uVar6 = 0x269;
LAB_140bc8f90:
      uVar8 = CONCAT44(uVar9,0xc0103);
      goto LAB_140bc8f9d;
    }
    piVar5[0x58] = piVar5[0x58] | 0x6000;
    *(ulonglong *)(piVar5 + 0x26a) = *(ulonglong *)(piVar5 + 0x26a) & 0x3df6ffb85;
    piVar5[0x2e9] = 0;
    local_18 = 0;
    *(uint *)(lVar4 + 0x100) =
         ((*(uint *)(param_1 + 0xd8) >> 2 & 1) << 3 ^ *(uint *)(lVar4 + 0x100) & 0xfffffff7) &
         0xfffffff9;
    local_58 = *param_1;
    local_50 = param_1[0x8c];
    local_48 = *(undefined8 *)(lVar4 + 0xa8);
    local_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    puStack_20 = (undefined8 *)0x0;
    if (((param_1[0xd8] & 4) != 0) || (((byte)param_1[0xd8] & 10) == 10)) {
      local_40 = 1;
    }
    lVar3 = FUN_140c4df30(&local_58);
    *(longlong *)(lVar4 + 0x90) = lVar3;
    if (lVar3 != 0) {
      puStack_20 = param_1;
      lVar3 = FUN_140c4e020(lVar3,&local_38);
      *(longlong *)(lVar4 + 0x98) = lVar3;
      if (lVar3 == 0) {
        FUN_140bcba90(0,"ssl\\quic\\quic_impl.c",0x71b,"create_channel",CONCAT44(uVar9,0xc0103),0);
        FUN_140c4dfe0(*(undefined8 *)(lVar4 + 0x90));
        goto LAB_140bc8fb2;
      }
      lVar3 = FUN_140c58ce0(lVar3,*(undefined8 *)(lVar4 + 0x78));
      *(longlong *)(lVar4 + 0xa0) = lVar3;
      if (lVar3 == 0) {
        FUN_140bcba90(0,"ssl\\quic\\quic_impl.c",0x722,"create_channel",CONCAT44(uVar9,0xc0103),0);
        FUN_140c58ca0(*(undefined8 *)(lVar4 + 0x98));
        FUN_140c4dfe0(*(undefined8 *)(lVar4 + 0x90));
        goto LAB_140bc8fb2;
      }
      FUN_140c50790(lVar3,param_1[0x2e],lVar4);
      FUN_140c50810(*(undefined8 *)(lVar4 + 0xa0),param_1[0x2f]);
      uVar6 = *(undefined8 *)(lVar4 + 0x90);
      iVar2 = FUN_140bc89e0(lVar4,param_1,0x80,0,uVar6,*(undefined8 *)(lVar4 + 0x98));
      uVar9 = (undefined4)((ulonglong)uVar6 >> 0x20);
      if (iVar2 != 0) {
        iVar2 = 1;
        *(undefined4 *)(lVar4 + 0x104) = 1;
        *(undefined4 *)(lVar4 + 0x108) = *(undefined4 *)(*(longlong *)(lVar4 + 8) + 0x140);
        uVar1 = *(ulonglong *)(*(longlong *)(lVar4 + 8) + 0x138);
        *(undefined4 *)(lVar4 + 0x118) = 0;
        *(ulonglong *)(lVar4 + 0x110) = uVar1 & 0x3df6ffb87;
        *(undefined4 *)(lVar4 + 0x128) = 0;
        if ((*(longlong *)(lVar4 + 0xb0) != 0) || ((*(byte *)(lVar4 + 0x100) & 0x10) != 0)) {
          iVar2 = 2;
        }
        FUN_140c50760(*(undefined8 *)(lVar4 + 0xa0),iVar2 == 2,*(undefined8 *)(lVar4 + 0x120));
        return lVar4;
      }
      uVar6 = 0x286;
      goto LAB_140bc8f90;
    }
    pcVar7 = "create_channel";
    uVar8 = CONCAT44(uVar9,0xc0103);
    uVar6 = 0x714;
  }
  FUN_140bcba90(0,"ssl\\quic\\quic_impl.c",uVar6,pcVar7,uVar8,0);
LAB_140bc8fb2:
  FUN_140bcac70(lVar4,0);
  FUN_140b8d990(lVar4,"ssl\\quic\\quic_impl.c",0x2a2);
  return 0;
}

