/**
 * Function: tls_construct_client_key_exchange
 * Address:  140c38ba0
 * Signature: undefined tls_construct_client_key_exchange(void)
 * Body size: 911 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_client_key_exchange(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  char *pcVar6;
  undefined8 local_res8;
  
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x300) + 0x1c);
  if ((uVar1 & 0x1c8) == 0) {
LAB_140c38be3:
    if ((uVar1 & 0x41) == 0) {
      if ((uVar1 & 0x102) != 0) {
        iVar2 = FUN_140c3bd90(param_1,param_2);
        goto LAB_140c38bf3;
      }
      if ((uVar1 & 0x84) != 0) {
        lVar5 = *(longlong *)(param_1 + 0x4e0);
        local_res8 = 0;
        if (lVar5 == 0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          pcVar6 = "tls_construct_cke_ecdhe";
          uVar3 = 0xcb8;
LAB_140c38eaa:
          d_aplatformplatformopenssl_srccryptoerrerr_lo("ssl\\statem\\statem_clnt.c",uVar3,pcVar6);
          uVar3 = 0xc0103;
LAB_140c38ebc:
          FUN_140ba3290(param_1,0x50,uVar3,0);
          goto LAB_140c38ecc;
        }
        lVar4 = FUN_140bed6f0(param_1,lVar5);
        if (lVar4 == 0) {
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          d_aplatformplatformopenssl_srccryptoerrerr_lo
                    ("ssl\\statem\\statem_clnt.c",0xcbe,"tls_construct_cke_ecdhe");
          uVar3 = 0x80014;
LAB_140c38c8e:
          FUN_140ba3290(param_1,0x50,uVar3,0);
        }
        else {
          iVar2 = FUN_140bed870(param_1,lVar4,lVar5,0);
          if (iVar2 != 0) {
            lVar5 = FUN_140b7f740(lVar4,&local_res8);
            if (lVar5 == 0) {
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("ssl\\statem\\statem_clnt.c",0xccb,"tls_construct_cke_ecdhe");
              uVar3 = 0x80010;
            }
            else {
              iVar2 = FUN_140c22660(param_2,local_res8,lVar5,1);
              if (iVar2 != 0) {
                FUN_140b8d990(local_res8,"ssl\\statem\\statem_clnt.c",0xcd6);
                FUN_140b7efe0(lVar4);
                goto LAB_140c38bfb;
              }
              d_aplatformplatformopenssl_srccryptoerrerr_lo();
              d_aplatformplatformopenssl_srccryptoerrerr_lo
                        ("ssl\\statem\\statem_clnt.c",0xcd0,"tls_construct_cke_ecdhe");
              uVar3 = 0xc0103;
            }
            goto LAB_140c38c8e;
          }
        }
        FUN_140b8d990(local_res8,"ssl\\statem\\statem_clnt.c",0xcd6);
        FUN_140b7efe0(lVar4);
        goto LAB_140c38ecc;
      }
      if ((uVar1 & 0x10) != 0) {
        iVar2 = FUN_140c3bfc0(param_1,param_2);
        goto LAB_140c38bf3;
      }
      if ((uVar1 >> 9 & 1) != 0) {
        iVar2 = FUN_140c3c340(param_1,param_2);
        goto LAB_140c38bf3;
      }
      if ((uVar1 & 0x20) != 0) {
        local_res8 = 0;
        if (*(longlong *)(param_1 + 0xc10) == 0) {
LAB_140c38e7d:
          d_aplatformplatformopenssl_srccryptoerrerr_lo();
          pcVar6 = "tls_construct_cke_srp";
          uVar3 = 0xdd8;
          goto LAB_140c38eaa;
        }
        iVar2 = FUN_140bfc870();
        iVar2 = FUN_140c22220(param_2,(longlong)((int)(iVar2 + 7 + (iVar2 + 7 >> 0x1f & 7U)) >> 3),
                              &local_res8,2);
        if (iVar2 == 0) goto LAB_140c38e7d;
        FUN_140bfcc70(*(undefined8 *)(param_1 + 0xc10),local_res8);
        FUN_140b8d990(*(undefined8 *)(*(longlong *)(param_1 + 0x8f8) + 0x358),
                      "ssl\\statem\\statem_clnt.c",0xddd);
        lVar5 = *(longlong *)(param_1 + 0x8f8);
        uVar3 = FUN_140b8c830(*(undefined8 *)(param_1 + 0xbe8),"ssl\\statem\\statem_clnt.c",0xdde);
        *(undefined8 *)(lVar5 + 0x358) = uVar3;
        if (*(longlong *)(*(longlong *)(param_1 + 0x8f8) + 0x358) != 0) goto LAB_140c38bfb;
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        d_aplatformplatformopenssl_srccryptoerrerr_lo
                  ("ssl\\statem\\statem_clnt.c",0xde0,"tls_construct_cke_srp");
        uVar3 = 0x8000f;
        goto LAB_140c38ebc;
      }
      if ((uVar1 & 8) == 0) {
        d_aplatformplatformopenssl_srccryptoerrerr_lo();
        pcVar6 = "tls_construct_client_key_exchange";
        uVar3 = 0xe0d;
        goto LAB_140c38eaa;
      }
    }
    else {
      iVar2 = FUN_140c3b9e0(param_1,param_2);
LAB_140c38bf3:
      if (iVar2 == 0) goto LAB_140c38ecc;
    }
LAB_140c38bfb:
    uVar3 = 1;
  }
  else {
    iVar2 = FUN_140c3b6e0();
    if (iVar2 != 0) goto LAB_140c38be3;
LAB_140c38ecc:
    FUN_140b8db20(*(undefined8 *)(param_1 + 0x3b0),*(undefined8 *)(param_1 + 0x3b8),
                  "ssl\\statem\\statem_clnt.c",0xe13);
    *(undefined8 *)(param_1 + 0x3b0) = 0;
    *(undefined8 *)(param_1 + 0x3b8) = 0;
    FUN_140b8db20(*(undefined8 *)(param_1 + 0x3c0),*(undefined8 *)(param_1 + 0x3c8),
                  "ssl\\statem\\statem_clnt.c",0xe17);
    uVar3 = 0;
    *(undefined8 *)(param_1 + 0x3c0) = 0;
    *(undefined8 *)(param_1 + 0x3c8) = 0;
  }
  return uVar3;
}

