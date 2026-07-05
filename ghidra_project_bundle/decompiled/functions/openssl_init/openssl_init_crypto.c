/**
 * Function: openssl_init_crypto
 * Address:  140bf63c0
 * Signature: undefined openssl_init_crypto(void)
 * Body size: 1280 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool openssl_init_crypto(ulonglong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  ulonglong local_res18;
  
  iVar4 = 0;
  if (DAT_141700018 == 0) {
    iVar1 = FUN_140b8b860(&DAT_141700020,&local_res18,0);
    iVar3 = iVar4;
    if (iVar1 != 0) {
      if ((local_res18 & param_1) == param_1) {
        return true;
      }
      iVar3 = 1;
    }
    iVar2 = FUN_140b8b890(&DAT_141700040,FUN_140bf6940);
    iVar1 = iVar4;
    if (iVar2 != 0) {
      iVar1 = DAT_141700048;
    }
    if (iVar1 != 0) {
      if ((param_1 >> 0x12 & 1) != 0) {
        return true;
      }
      if (iVar3 == 0) {
        iVar3 = FUN_140b8b860(&DAT_141700020,&local_res18,DAT_141700030);
        if (iVar3 == 0) {
          return false;
        }
        if ((local_res18 & param_1) == param_1) {
          return true;
        }
      }
      pcVar6 = (code *)&LAB_140bf6b40;
      if ((param_1 >> 0x13 & 1) == 0) {
        pcVar6 = FUN_140bf6b10;
      }
      iVar1 = FUN_140b8b890(&DAT_14170004c,pcVar6);
      iVar3 = iVar4;
      if (iVar1 != 0) {
        iVar3 = DAT_141700050;
      }
      if (iVar3 != 0) {
        iVar1 = FUN_140b8b890(&DAT_141700054,FUN_140bf6b50);
        iVar3 = iVar4;
        if (iVar1 != 0) {
          iVar3 = DAT_141700058;
        }
        if (iVar3 != 0) {
          if ((param_1 & 1) != 0) {
            iVar1 = FUN_140b8b890(&DAT_14170005c,&LAB_140bf6be0);
            iVar3 = iVar4;
            if (iVar1 != 0) {
              iVar3 = DAT_141700060;
            }
            if (iVar3 == 0) {
              return false;
            }
          }
          iVar3 = 0;
          if ((param_1 & 2) != 0) {
            iVar2 = FUN_140b8b890(&DAT_14170005c,FUN_140bf6b90);
            iVar1 = iVar3;
            if (iVar2 != 0) {
              iVar1 = DAT_141700060;
            }
            if (iVar1 == 0) {
              return false;
            }
          }
          if ((param_1 >> 0x14 & 1) != 0) {
            iVar2 = FUN_140b8b890(&DAT_141700064,&LAB_140bf6c20);
            iVar1 = iVar3;
            if (iVar2 != 0) {
              iVar1 = DAT_141700068;
            }
            if (iVar1 == 0) {
              return false;
            }
          }
          if ((param_1 >> 0x15 & 1) != 0) {
            iVar2 = FUN_140b8b890(&DAT_141700064,FUN_140bf6bf0);
            iVar1 = iVar3;
            if (iVar2 != 0) {
              iVar1 = DAT_141700068;
            }
            if (iVar1 == 0) {
              return false;
            }
          }
          if ((param_1 & 0x10) != 0) {
            iVar2 = FUN_140b8b890(&DAT_14170006c,&LAB_140bf6c60);
            iVar1 = iVar3;
            if (iVar2 != 0) {
              iVar1 = DAT_141700070;
            }
            if (iVar1 == 0) {
              return false;
            }
          }
          if ((param_1 & 4) != 0) {
            iVar2 = FUN_140b8b890(&DAT_14170006c,FUN_140bf6c30);
            iVar1 = iVar3;
            if (iVar2 != 0) {
              iVar1 = DAT_141700070;
            }
            if (iVar1 == 0) {
              return false;
            }
          }
          if ((param_1 & 0x20) != 0) {
            iVar2 = FUN_140b8b890(&DAT_141700074,&LAB_140bf6ca0);
            iVar1 = iVar3;
            if (iVar2 != 0) {
              iVar1 = DAT_141700078;
            }
            if (iVar1 == 0) {
              return false;
            }
          }
          if ((param_1 & 8) != 0) {
            iVar2 = FUN_140b8b890(&DAT_141700074,FUN_140bf6c70);
            iVar1 = iVar3;
            if (iVar2 != 0) {
              iVar1 = DAT_141700078;
            }
            if (iVar1 == 0) {
              return false;
            }
          }
          if (((param_1 >> 0x11 & 1) == 0) || (iVar1 = FUN_140b69300(), iVar1 != 0)) {
            if ((char)param_1 < '\0') {
              iVar1 = FUN_140b8b890(&DAT_14170007c,FUN_140bf6d10);
              if (iVar1 != 0) {
                iVar3 = DAT_141700084;
              }
              if (iVar3 == 0) {
                return false;
              }
            }
            if (((param_1 & 0x40) != 0) && (lVar5 = FUN_140b8b930(&DAT_14170001c), lVar5 == 0)) {
              iVar3 = FUN_140b8b970(&DAT_14170001c,0xffffffffffffffff);
              if (iVar3 == 0) {
                return false;
              }
              if (param_2 == 0) {
                iVar3 = FUN_140b8b890(&DAT_14170007c,FUN_140bf6cb0);
                if (iVar3 != 0) {
                  iVar4 = DAT_141700084;
                }
              }
              else {
                iVar3 = FUN_140b8b770(DAT_141700038);
                if (iVar3 == 0) {
                  return false;
                }
                DAT_141700088 = param_2;
                iVar3 = FUN_140b8b890(&DAT_14170007c,FUN_140bf6ce0);
                DAT_141700088 = 0;
                if (iVar3 != 0) {
                  iVar4 = DAT_141700084;
                }
                FUN_140b8b7a0(DAT_141700038);
              }
              if (iVar4 < 1) {
                return false;
              }
            }
            iVar4 = 0;
            if ((param_1 >> 8 & 1) != 0) {
              iVar1 = FUN_140b8b890(&DAT_141700090,FUN_140bf6d40);
              iVar3 = iVar4;
              if (iVar1 != 0) {
                iVar3 = DAT_141700098;
              }
              if (iVar3 == 0) {
                return false;
              }
            }
            if ((param_1 >> 0xb & 1) != 0) {
              iVar1 = FUN_140b8b890(&DAT_14170009c,FUN_140bf6d80);
              iVar3 = iVar4;
              if (iVar1 != 0) {
                iVar3 = DAT_1417000a0;
              }
              if (iVar3 == 0) {
                return false;
              }
            }
            if ((param_1 >> 9 & 1) != 0) {
              iVar1 = FUN_140b8b890(&DAT_1417000a4,FUN_140bf6db0);
              iVar3 = iVar4;
              if (iVar1 != 0) {
                iVar3 = DAT_1417000a8;
              }
              if (iVar3 == 0) {
                return false;
              }
            }
            if ((param_1 >> 10 & 1) != 0) {
              iVar1 = FUN_140b8b890(&DAT_1417000ac,FUN_140bf6de0);
              iVar3 = iVar4;
              if (iVar1 != 0) {
                iVar3 = DAT_1417000b0;
              }
              if (iVar3 == 0) {
                return false;
              }
            }
            if ((param_1 >> 0xe & 1) != 0) {
              iVar1 = FUN_140b8b890(&DAT_1417000b4,FUN_140bf6e10);
              iVar3 = iVar4;
              if (iVar1 != 0) {
                iVar3 = DAT_1417000b8;
              }
              if (iVar3 == 0) {
                return false;
              }
            }
            if ((param_1 >> 0xd & 1) != 0) {
              iVar3 = FUN_140b8b890(&DAT_1417000bc,FUN_140bf6e40);
              if (iVar3 != 0) {
                iVar4 = DAT_1417000c0;
              }
              if (iVar4 == 0) {
                return false;
              }
            }
            if ((param_1 & 0xfe00) != 0) {
              FUN_140c72ba0();
            }
            iVar4 = FUN_140b8b830(&DAT_141700020,param_1,&local_res18,DAT_141700030);
            return iVar4 != 0;
          }
        }
      }
    }
  }
  else if ((param_1 >> 0x12 & 1) == 0) {
    d_aplatformplatformopenssl_srccryptoerrerr_lo();
    d_aplatformplatformopenssl_srccryptoerrerr_lo("crypto\\init.c",0x1fb,"OPENSSL_init_crypto");
    FUN_140b91cc0(0xf,0xc0105,0);
  }
  return false;
}

