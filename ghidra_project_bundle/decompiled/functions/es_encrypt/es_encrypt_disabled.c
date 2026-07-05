/**
 * Function: es_encrypt_disabled
 * Address:  140db1270
 * Signature: undefined es_encrypt_disabled(void)
 * Body size: 16660 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 es_encrypt_disabled(undefined1 *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  switch(*param_1) {
  case 0x61:
    cVar1 = param_1[1];
    if (cVar1 == '\0') {
      return 0xb7;
    }
    if (cVar1 == 'c') {
      iVar2 = strcmp("vp-info",param_1 + 2);
      uVar3 = 0xffffffff;
      if (iVar2 == 0) {
        uVar3 = 0x92;
      }
      return uVar3;
    }
    if (cVar1 == 'd') {
      if (param_1[2] == '\0') {
        return 0x70;
      }
      if (param_1[2] == 'd') {
        iVar2 = strcmp("itional-random",param_1 + 3);
        uVar3 = 0xffffffff;
        if (iVar2 == 0) {
          uVar3 = 0x147;
        }
        return uVar3;
      }
    }
    else {
      if (cVar1 == 'e') {
        iVar2 = strcmp("ad",param_1 + 2);
        uVar3 = 0xffffffff;
        if (iVar2 == 0) {
          uVar3 = 0x22;
        }
        return uVar3;
      }
      if (cVar1 == 'l') {
        if (param_1[2] == 'g') {
          cVar1 = param_1[3];
          if (cVar1 == '_') {
            iVar2 = strcmp("id_param",param_1 + 4);
            uVar3 = 0xffffffff;
            if (iVar2 == 0) {
              uVar3 = 0x2c;
            }
            return uVar3;
          }
          if (cVar1 == 'i') {
            iVar2 = strcmp("d-absent",param_1 + 4);
            uVar3 = 0xffffffff;
            if (iVar2 == 0) {
              uVar3 = 0x4e;
            }
            return uVar3;
          }
          if ((((cVar1 == 'o') && (param_1[4] == 'r')) &&
              ((param_1[5] == 'i' && ((param_1[6] == 't' && (param_1[7] == 'h')))))) &&
             ((param_1[8] == 'm' &&
              (((param_1[9] == '-' && (param_1[10] == 'i')) && (param_1[0xb] == 'd')))))) {
            if (param_1[0xc] == '\0') {
              return 0;
            }
            if (param_1[0xc] == '-') {
              iVar2 = strcmp("params",param_1 + 0xd);
              uVar3 = 0xffffffff;
              if (iVar2 == 0) {
                uVar3 = 1;
              }
              return uVar3;
            }
          }
        }
        else if (param_1[2] == 'i') {
          iVar2 = strcmp("as",param_1 + 3);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 0x155;
          }
          return uVar3;
        }
      }
    }
    break;
  case 0x62:
    cVar1 = param_1[1];
    if (cVar1 == '\0') {
      return 0xb8;
    }
    if (cVar1 == 'a') {
      iVar2 = strcmp("sis-type",param_1 + 2);
      uVar3 = 0xffffffff;
      if (iVar2 == 0) {
        uVar3 = 0xbe;
      }
      return uVar3;
    }
    if (cVar1 == 'i') {
      iVar2 = strcmp("ts",param_1 + 2);
      uVar3 = 0xffffffff;
      if (iVar2 == 0) {
        uVar3 = 0xb0;
      }
      return uVar3;
    }
    if (cVar1 == 'l') {
      if (((param_1[2] == 'o') && (param_1[3] == 'c')) && (param_1[4] == 'k')) {
        cVar1 = param_1[5];
        if (cVar1 == '-') {
          iVar2 = strcmp("size",param_1 + 6);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 0xa4;
          }
          return uVar3;
        }
        if (cVar1 == '_') {
          iVar2 = strcmp("padding",param_1 + 6);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 0x9a;
          }
          return uVar3;
        }
        if (cVar1 == 's') {
          iVar2 = strcmp("ize",param_1 + 6);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 0x2d;
          }
          return uVar3;
        }
      }
    }
    else if (cVar1 == 'u') {
      iVar2 = strcmp("ildinfo",param_1 + 2);
      uVar3 = 0xffffffff;
      if (iVar2 == 0) {
        uVar3 = 0x11c;
      }
      return uVar3;
    }
    break;
  case 99:
    switch(param_1[1]) {
    case 0x2d:
      iVar2 = strcmp("rounds",param_1 + 2);
      uVar3 = 0xffffffff;
      if (iVar2 == 0) {
        uVar3 = 0xa6;
      }
      return uVar3;
    case 0x65:
      iVar2 = strcmp("kalg",param_1 + 2);
      uVar3 = 0xffffffff;
      if (iVar2 == 0) {
        uVar3 = 0x74;
      }
      return uVar3;
    case 0x69:
      iVar2 = strcmp("pher",param_1 + 2);
      uVar3 = 0xffffffff;
      if (iVar2 == 0) {
        uVar3 = 2;
      }
      return uVar3;
    case 0x6f:
      if (param_1[2] == 'f') {
        iVar2 = strcmp("actor",param_1 + 3);
        uVar3 = 0xffffffff;
        if (iVar2 == 0) {
          uVar3 = 0xbf;
        }
        return uVar3;
      }
      if (param_1[2] == 'n') {
        if (param_1[3] == 's') {
          iVar2 = strcmp("tant",param_1 + 4);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 0x75;
          }
          return uVar3;
        }
        if (param_1[3] == 't') {
          iVar2 = strcmp("ext-string",param_1 + 4);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 0x148;
          }
          return uVar3;
        }
      }
      break;
    case 0x74:
      if (param_1[2] == 's') {
        if (param_1[3] == '\0') {
          return 0x2e;
        }
        if (param_1[3] == '_') {
          iVar2 = strcmp("mode",param_1 + 4);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 0x2f;
          }
          return uVar3;
        }
      }
      break;
    case 0x75:
      if (((param_1[2] == 's') && (param_1[3] == 't')) &&
         ((param_1[4] == 'o' && (param_1[5] == 'm')))) {
        if (param_1[6] == '\0') {
          return 0xa5;
        }
        if (param_1[6] == '-') {
          iVar2 = strcmp("iv",param_1 + 7);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 0x30;
          }
          return uVar3;
        }
      }
    }
    break;
  case 100:
    switch(param_1[1]) {
    case 0:
      return 0xf5;
    case 0x2d:
      iVar2 = strcmp("rounds",param_1 + 2);
      uVar3 = 0xffffffff;
      if (iVar2 == 0) {
        uVar3 = 0xa9;
      }
      return uVar3;
    case 0x61:
      if ((param_1[2] == 't') && (param_1[3] == 'a')) {
        if (param_1[4] == '\0') {
          return 0x76;
        }
        if (param_1[4] == '-') {
          if (param_1[5] == 's') {
            iVar2 = strcmp("tructure",param_1 + 6);
            uVar3 = 0xffffffff;
            if (iVar2 == 0) {
              uVar3 = 0xab;
            }
            return uVar3;
          }
          if (param_1[5] == 't') {
            iVar2 = strcmp("ype",param_1 + 6);
            uVar3 = 0xffffffff;
            if (iVar2 == 0) {
              uVar3 = 0xac;
            }
            return uVar3;
          }
        }
      }
      break;
    case 0x65:
      cVar1 = param_1[2];
      if (cVar1 == 'c') {
        if (param_1[3] == 'o') {
          iVar2 = strcmp("ded-from-explicit",param_1 + 4);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 0xc0;
          }
          return uVar3;
        }
        if (param_1[3] == 'r') {
          iVar2 = strcmp("ypt-only",param_1 + 4);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 0x31;
          }
          return uVar3;
        }
      }
      else {
        if (cVar1 == 'f') {
          iVar2 = strcmp("ault-digest",param_1 + 3);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 0xb1;
          }
          return uVar3;
        }
        if (cVar1 == 's') {
          iVar2 = strcmp("c",param_1 + 3);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 0xad;
          }
          return uVar3;
        }
        if (cVar1 == 't') {
          iVar2 = strcmp("erministic",param_1 + 3);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 0x149;
          }
          return uVar3;
        }
      }
      break;
    case 0x68:
      iVar2 = strcmp("kem-ikm",param_1 + 2);
      uVar3 = 0xffffffff;
      if (iVar2 == 0) {
        uVar3 = 0xb2;
      }
      return uVar3;
    case 0x69:
      if (param_1[2] == 'g') {
        if (((param_1[3] == 'e') && (param_1[4] == 's')) && (param_1[5] == 't')) {
          if (param_1[6] == '\0') {
            return 3;
          }
          if (param_1[6] == '-') {
            cVar1 = param_1[7];
            if (cVar1 == 'c') {
              iVar2 = strcmp("heck",param_1 + 8);
              uVar3 = 0xffffffff;
              if (iVar2 == 0) {
                uVar3 = 0xd6;
              }
              return uVar3;
            }
            if (cVar1 == 'n') {
              iVar2 = strcmp("oinit",param_1 + 8);
              uVar3 = 0xffffffff;
              if (iVar2 == 0) {
                uVar3 = 0xa7;
              }
              return uVar3;
            }
            if (cVar1 == 'o') {
              iVar2 = strcmp("neshot",param_1 + 8);
              uVar3 = 0xffffffff;
              if (iVar2 == 0) {
                uVar3 = 0xa8;
              }
              return uVar3;
            }
            if (cVar1 == 'p') {
              iVar2 = strcmp("rops",param_1 + 8);
              uVar3 = 0xffffffff;
              if (iVar2 == 0) {
                uVar3 = 9;
              }
              return uVar3;
            }
            if (cVar1 == 's') {
              iVar2 = strcmp("ize",param_1 + 8);
              uVar3 = 0xffffffff;
              if (iVar2 == 0) {
                uVar3 = 0xb5;
              }
              return uVar3;
            }
          }
        }
      }
      else if (param_1[2] == 's') {
        iVar2 = strcmp("tid",param_1 + 3);
        uVar3 = 0xffffffff;
        if (iVar2 == 0) {
          uVar3 = 0xb6;
        }
        return uVar3;
      }
      break;
    case 0x72:
      iVar2 = strcmp("bg-no-trunc-md",param_1 + 2);
      uVar3 = 0xffffffff;
      if (iVar2 == 0) {
        uVar3 = 0x120;
      }
      return uVar3;
    case 0x73:
      iVar2 = strcmp("a-sign-disabled",param_1 + 2);
      uVar3 = 0xffffffff;
      if (iVar2 == 0) {
        uVar3 = 0x121;
      }
      return uVar3;
    }
    break;
  case 0x65:
    switch(param_1[1]) {
    case 0:
      return 0xf7;
    case 0x61:
      iVar2 = strcmp("rly_clean",param_1 + 2);
      uVar3 = 0xffffffff;
      if (iVar2 == 0) {
        uVar3 = 0x77;
      }
      return uVar3;
    case 99:
      if ((((((param_1[2] == 'd') && (param_1[3] == 'h')) &&
            ((param_1[4] == '-' &&
             (((param_1[5] == 'c' && (param_1[6] == 'o')) && (param_1[7] == 'f')))))) &&
           ((param_1[8] == 'a' && (param_1[9] == 'c')))) && (param_1[10] == 't')) &&
         (((param_1[0xb] == 'o' && (param_1[0xc] == 'r')) && (param_1[0xd] == '-')))) {
        if (param_1[0xe] == 'c') {
          iVar2 = strcmp("heck",param_1 + 0xf);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 0x122;
          }
          return uVar3;
        }
        if (param_1[0xe] == 'm') {
          iVar2 = strcmp("ode",param_1 + 0xf);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 0x67;
          }
          return uVar3;
        }
      }
      break;
    case 0x6d:
      iVar2 = strcmp("s_check",param_1 + 2);
      uVar3 = 0xffffffff;
      if (iVar2 == 0) {
        uVar3 = 0x78;
      }
      return uVar3;
    case 0x6e:
      cVar1 = param_1[2];
      if (cVar1 == 'c') {
        if (param_1[3] == 'o') {
          if (param_1[4] == 'd') {
            if (param_1[5] == 'e') {
              iVar2 = strcmp("d-pub-key",param_1 + 6);
              uVar3 = 0xffffffff;
              if (iVar2 == 0) {
                uVar3 = 0xca;
              }
              return uVar3;
            }
            if (param_1[5] == 'i') {
              iVar2 = strcmp("ng",param_1 + 6);
              uVar3 = 0xffffffff;
              if (iVar2 == 0) {
                uVar3 = 0xc1;
              }
              return uVar3;
            }
          }
        }
        else if (((param_1[3] == 'r') && (param_1[4] == 'y')) &&
                ((param_1[5] == 'p' && ((param_1[6] == 't' && (param_1[7] == '-')))))) {
          if (param_1[8] == 'c') {
            iVar2 = strcmp("heck",param_1 + 9);
            uVar3 = 0xffffffff;
            if (iVar2 == 0) {
              uVar3 = 0x32;
            }
            return uVar3;
          }
          if (param_1[8] == 'l') {
            iVar2 = strcmp("evel",param_1 + 9);
            uVar3 = 0xffffffff;
            if (iVar2 == 0) {
              uVar3 = 0x65;
            }
            return uVar3;
          }
        }
      }
      else {
        if (cVar1 == 'g') {
          iVar2 = strcmp("ine",param_1 + 3);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 4;
          }
          return uVar3;
        }
        if ((((cVar1 == 't') && (param_1[3] == 'r')) && (param_1[4] == 'o')) &&
           ((param_1[5] == 'p' && (param_1[6] == 'y')))) {
          if (param_1[7] == '\0') {
            return 0x79;
          }
          if (param_1[7] == '_') {
            iVar2 = strcmp("required",param_1 + 8);
            uVar3 = 0xffffffff;
            if (iVar2 == 0) {
              uVar3 = 0x55;
            }
            return uVar3;
          }
        }
      }
      break;
    case 0x78:
      iVar2 = strcmp("pect",param_1 + 2);
      uVar3 = 0xffffffff;
      if (iVar2 == 0) {
        uVar3 = 0x156;
      }
      return uVar3;
    }
    break;
  case 0x66:
    if (param_1[1] == 'i') {
      cVar1 = param_1[2];
      if (cVar1 == 'e') {
        iVar2 = strcmp("ld-type",param_1 + 3);
        uVar3 = 0xffffffff;
        if (iVar2 == 0) {
          uVar3 = 0xc2;
        }
        return uVar3;
      }
      if (cVar1 == 'n') {
        iVar2 = strcmp("gerprint",param_1 + 3);
        uVar3 = 0xffffffff;
        if (iVar2 == 0) {
          uVar3 = 0x157;
        }
        return uVar3;
      }
      if (cVar1 == 'p') {
        iVar2 = strcmp("s-indicator",param_1 + 3);
        uVar3 = 0xffffffff;
        if (iVar2 == 0) {
          uVar3 = 5;
        }
        return uVar3;
      }
    }
    break;
  case 0x67:
    cVar1 = param_1[1];
    if (cVar1 == '\0') {
      return 0xcc;
    }
    if (cVar1 == 'e') {
      if (((param_1[2] == 'n') && (param_1[3] == 'e')) &&
         ((param_1[4] == 'r' && ((param_1[5] == 'a' && (param_1[6] == 't')))))) {
        if (param_1[7] == 'e') {
          if (param_1[8] == '\0') {
            return 0x141;
          }
        }
        else if (param_1[7] == 'o') {
          iVar2 = strcmp("r",param_1 + 8);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 0xc3;
          }
          return uVar3;
        }
      }
    }
    else {
      if (cVar1 == 'i') {
        iVar2 = strcmp("ndex",param_1 + 2);
        uVar3 = 0xffffffff;
        if (iVar2 == 0) {
          uVar3 = 0xcd;
        }
        return uVar3;
      }
      if ((((cVar1 == 'r') && (param_1[2] == 'o')) && (param_1[3] == 'u')) && (param_1[4] == 'p')) {
        if (param_1[5] == '\0') {
          return 0xd9;
        }
        if (param_1[5] == '-') {
          iVar2 = strcmp("check",param_1 + 6);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 0xc4;
          }
          return uVar3;
        }
      }
    }
    break;
  case 0x68:
    cVar1 = param_1[1];
    if (cVar1 == 'a') {
      iVar2 = strcmp("s-randkey",param_1 + 2);
      uVar3 = 0xffffffff;
      if (iVar2 == 0) {
        uVar3 = 0x33;
      }
      return uVar3;
    }
    if (cVar1 == 'i') {
      iVar2 = strcmp("ndex",param_1 + 2);
      uVar3 = 0xffffffff;
      if (iVar2 == 0) {
        uVar3 = 0xce;
      }
      return uVar3;
    }
    if (cVar1 == 'k') {
      if (((param_1[2] == 'd') && (param_1[3] == 'f')) && (param_1[4] == '-')) {
        if (param_1[5] == 'd') {
          iVar2 = strcmp("igest-check",param_1 + 6);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 0x123;
          }
          return uVar3;
        }
        if (param_1[5] == 'k') {
          iVar2 = strcmp("ey-check",param_1 + 6);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 0x124;
          }
          return uVar3;
        }
      }
    }
    else {
      if (cVar1 == 'm') {
        iVar2 = strcmp("ac-key-check",param_1 + 2);
        uVar3 = 0xffffffff;
        if (iVar2 == 0) {
          uVar3 = 0x125;
        }
        return uVar3;
      }
      if (cVar1 == 's') {
        iVar2 = strcmp("_padding",param_1 + 2);
        uVar3 = 0xffffffff;
        if (iVar2 == 0) {
          uVar3 = 0x9b;
        }
        return uVar3;
      }
    }
    break;
  case 0x69:
    switch(param_1[1]) {
    case 100:
      uVar3 = 0xffffffff;
      if (param_1[2] == '\0') {
        uVar3 = 0x84;
      }
      return uVar3;
    case 0x6b:
      iVar2 = strcmp("me",param_1 + 2);
      uVar3 = 0xffffffff;
      if (iVar2 == 0) {
        uVar3 = 0x98;
      }
      return uVar3;
    case 0x6d:
      iVar2 = strcmp("plicit-rejection",param_1 + 2);
      uVar3 = 0xffffffff;
      if (iVar2 == 0) {
        uVar3 = 8;
      }
      return uVar3;
    case 0x6e:
      cVar1 = param_1[2];
      if (cVar1 == 'c') {
        iVar2 = strcmp("lude-public",param_1 + 3);
        uVar3 = 0xffffffff;
        if (iVar2 == 0) {
          uVar3 = 0xc5;
        }
        return uVar3;
      }
      if (cVar1 == 'f') {
        iVar2 = strcmp("o",param_1 + 3);
        uVar3 = 0xffffffff;
        if (iVar2 == 0) {
          uVar3 = 0x7b;
        }
        return uVar3;
      }
      if (cVar1 == 'p') {
        iVar2 = strcmp("ut-type",param_1 + 3);
        uVar3 = 0xffffffff;
        if (iVar2 == 0) {
          uVar3 = 0xae;
        }
        return uVar3;
      }
      if (cVar1 == 's') {
        iVar2 = strcmp("tance",param_1 + 3);
        uVar3 = 0xffffffff;
        if (iVar2 == 0) {
          uVar3 = 0x14c;
        }
        return uVar3;
      }
      break;
    case 0x74:
      if ((param_1[2] == 'e') && (param_1[3] == 'r')) {
        if (param_1[4] == '\0') {
          return 0x7c;
        }
        if (param_1[4] == 'a') {
          iVar2 = strcmp("tion",param_1 + 5);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 0x6e;
          }
          return uVar3;
        }
      }
      break;
    case 0x76:
      cVar1 = param_1[2];
      if (cVar1 == '\0') {
        return 0x34;
      }
      if (cVar1 == '-') {
        iVar2 = strcmp("generated",param_1 + 3);
        uVar3 = 0xffffffff;
        if (iVar2 == 0) {
          uVar3 = 0x23;
        }
        return uVar3;
      }
      if (cVar1 == 'l') {
        iVar2 = strcmp("en",param_1 + 3);
        uVar3 = 0xffffffff;
        if (iVar2 == 0) {
          uVar3 = 0x35;
        }
        return uVar3;
      }
    }
    break;
  case 0x6a:
    uVar3 = 0xffffffff;
    if (param_1[1] == '\0') {
      uVar3 = 0xcb;
    }
    return uVar3;
  case 0x6b:
    switch(param_1[1]) {
    case 0x31:
      uVar3 = 0xffffffff;
      if (param_1[2] == '\0') {
        uVar3 = 0xba;
      }
      return uVar3;
    case 0x32:
      uVar3 = 0xffffffff;
      if (param_1[2] == '\0') {
        uVar3 = 0xbb;
      }
      return uVar3;
    case 0x33:
      uVar3 = 0xffffffff;
      if (param_1[2] == '\0') {
        uVar3 = 0xbc;
      }
      return uVar3;
    case 0x61:
      iVar2 = strcmp("t",param_1 + 2);
      uVar3 = 0xffffffff;
      if (iVar2 == 0) {
        uVar3 = 0x14d;
      }
      return uVar3;
    case 0x62:
      iVar2 = strcmp("kdf-key-check",param_1 + 2);
      uVar3 = 0xffffffff;
      if (iVar2 == 0) {
        uVar3 = 0x126;
      }
      return uVar3;
    case 100:
      if ((param_1[2] == 'f') && (param_1[3] == '-')) {
        cVar1 = param_1[4];
        if (cVar1 == 'd') {
          if ((((param_1[5] == 'i') && (param_1[6] == 'g')) && (param_1[7] == 'e')) &&
             ((param_1[8] == 's' && (param_1[9] == 't')))) {
            if (param_1[10] == '\0') {
              return 0x68;
            }
            if (param_1[10] == '-') {
              iVar2 = strcmp("props",param_1 + 0xb);
              uVar3 = 0xffffffff;
              if (iVar2 == 0) {
                uVar3 = 0x69;
              }
              return uVar3;
            }
          }
        }
        else {
          if (cVar1 == 'o') {
            iVar2 = strcmp("utlen",param_1 + 5);
            uVar3 = 0xffffffff;
            if (iVar2 == 0) {
              uVar3 = 0x6a;
            }
            return uVar3;
          }
          if (cVar1 == 't') {
            iVar2 = strcmp("ype",param_1 + 5);
            uVar3 = 0xffffffff;
            if (iVar2 == 0) {
              uVar3 = 0x6b;
            }
            return uVar3;
          }
          if (cVar1 == 'u') {
            iVar2 = strcmp("km",param_1 + 5);
            uVar3 = 0xffffffff;
            if (iVar2 == 0) {
              uVar3 = 0x6c;
            }
            return uVar3;
          }
        }
      }
      break;
    case 0x65:
      if (param_1[2] == 'y') {
        cVar1 = param_1[3];
        if (cVar1 == '\0') {
          return 0x80;
        }
        if (cVar1 == '-') {
          if (param_1[4] == 'c') {
            iVar2 = strcmp("heck",param_1 + 5);
            uVar3 = 0xffffffff;
            if (iVar2 == 0) {
              uVar3 = 0xd7;
            }
            return uVar3;
          }
          if (param_1[4] == 'l') {
            iVar2 = strcmp("ength",param_1 + 5);
            uVar3 = 0xffffffff;
            if (iVar2 == 0) {
              uVar3 = 0x153;
            }
            return uVar3;
          }
        }
        else {
          if (cVar1 == 'b') {
            iVar2 = strcmp("its",param_1 + 4);
            uVar3 = 0xffffffff;
            if (iVar2 == 0) {
              uVar3 = 0x3c;
            }
            return uVar3;
          }
          if (cVar1 == 'l') {
            iVar2 = strcmp("en",param_1 + 4);
            uVar3 = 0xffffffff;
            if (iVar2 == 0) {
              uVar3 = 0x36;
            }
            return uVar3;
          }
        }
      }
      break;
    case 0x6d:
      iVar2 = strcmp("ac-key-check",param_1 + 2);
      uVar3 = 0xffffffff;
      if (iVar2 == 0) {
        uVar3 = 0x127;
      }
      return uVar3;
    }
    break;
  case 0x6c:
    if (param_1[1] == 'a') {
      if (param_1[2] == 'b') {
        iVar2 = strcmp("el",param_1 + 3);
        uVar3 = 0xffffffff;
        if (iVar2 == 0) {
          uVar3 = 0x81;
        }
        return uVar3;
      }
      if (param_1[2] == 'n') {
        iVar2 = strcmp("es",param_1 + 3);
        uVar3 = 0xffffffff;
        if (iVar2 == 0) {
          uVar3 = 0x71;
        }
        return uVar3;
      }
    }
    break;
  case 0x6d:
    switch(param_1[1]) {
    case 0:
      return 0xb9;
    case 0x61:
      cVar1 = param_1[2];
      if (cVar1 == 'c') {
        cVar1 = param_1[3];
        if (cVar1 == '\0') {
          return 6;
        }
        if (cVar1 == 'k') {
          iVar2 = strcmp("ey",param_1 + 4);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 0x24;
          }
          return uVar3;
        }
        if (cVar1 == 'l') {
          iVar2 = strcmp("en",param_1 + 4);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 0x82;
          }
          return uVar3;
        }
      }
      else {
        if (cVar1 == 'n') {
          iVar2 = strcmp("datory-digest",param_1 + 3);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 0xda;
          }
          return uVar3;
        }
        if (cVar1 == 'x') {
          cVar1 = param_1[3];
          if (cVar1 == '-') {
            iVar2 = strcmp("size",param_1 + 4);
            uVar3 = 0xffffffff;
            if (iVar2 == 0) {
              uVar3 = 0xdc;
            }
            return uVar3;
          }
          if (cVar1 == '_') {
            switch(param_1[4]) {
            case 0x61:
              iVar2 = strcmp("dinlen",param_1 + 5);
              uVar3 = 0xffffffff;
              if (iVar2 == 0) {
                uVar3 = 0x56;
              }
              return uVar3;
            case 0x65:
              if (param_1[5] == 'a') {
                iVar2 = strcmp("rly_data",param_1 + 6);
                uVar3 = 0xffffffff;
                if (iVar2 == 0) {
                  uVar3 = 0x9c;
                }
                return uVar3;
              }
              if (param_1[5] == 'n') {
                iVar2 = strcmp("tropylen",param_1 + 6);
                uVar3 = 0xffffffff;
                if (iVar2 == 0) {
                  uVar3 = 0x57;
                }
                return uVar3;
              }
              break;
            case 0x66:
              iVar2 = strcmp("rag_len",param_1 + 5);
              uVar3 = 0xffffffff;
              if (iVar2 == 0) {
                uVar3 = 0x9d;
              }
              return uVar3;
            case 0x6e:
              iVar2 = strcmp("oncelen",param_1 + 5);
              uVar3 = 0xffffffff;
              if (iVar2 == 0) {
                uVar3 = 0x59;
              }
              return uVar3;
            case 0x70:
              iVar2 = strcmp("erslen",param_1 + 5);
              uVar3 = 0xffffffff;
              if (iVar2 == 0) {
                uVar3 = 0x5a;
              }
              return uVar3;
            case 0x72:
              iVar2 = strcmp("equest",param_1 + 5);
              uVar3 = 0xffffffff;
              if (iVar2 == 0) {
                uVar3 = 0x142;
              }
              return uVar3;
            }
          }
          else {
            if (cVar1 == 'i') {
              iVar2 = strcmp("um_length",param_1 + 4);
              uVar3 = 0xffffffff;
              if (iVar2 == 0) {
                uVar3 = 0x58;
              }
              return uVar3;
            }
            if (cVar1 == 'm') {
              iVar2 = strcmp("em_bytes",param_1 + 4);
              uVar3 = 0xffffffff;
              if (iVar2 == 0) {
                uVar3 = 0x88;
              }
              return uVar3;
            }
          }
        }
      }
      break;
    case 0x65:
      if (param_1[2] == 'm') {
        iVar2 = strcmp("cost",param_1 + 3);
        uVar3 = 0xffffffff;
        if (iVar2 == 0) {
          uVar3 = 0x72;
        }
        return uVar3;
      }
      if (param_1[2] == 's') {
        iVar2 = strcmp("sage-encoding",param_1 + 3);
        uVar3 = 0xffffffff;
        if (iVar2 == 0) {
          uVar3 = 0x14e;
        }
        return uVar3;
      }
      break;
    case 0x67:
      if (param_1[2] == 'f') {
        if (param_1[3] == '\0') {
          return 0xdb;
        }
        if ((param_1[3] == '1') && (param_1[4] == '-')) {
          if (param_1[5] == 'd') {
            iVar2 = strcmp("igest",param_1 + 6);
            uVar3 = 0xffffffff;
            if (iVar2 == 0) {
              uVar3 = 0xdd;
            }
            return uVar3;
          }
          if (param_1[5] == 'p') {
            iVar2 = strcmp("roperties",param_1 + 6);
            uVar3 = 0xffffffff;
            if (iVar2 == 0) {
              uVar3 = 0xde;
            }
            return uVar3;
          }
        }
      }
      break;
    case 0x69:
      if (param_1[2] == 'c') {
        iVar2 = strcmp("alg",param_1 + 3);
        uVar3 = 0xffffffff;
        if (iVar2 == 0) {
          uVar3 = 0x4f;
        }
        return uVar3;
      }
      if (param_1[2] == 'n') {
        if (param_1[3] == '_') {
          if (param_1[4] == 'e') {
            iVar2 = strcmp("ntropylen",param_1 + 5);
            uVar3 = 0xffffffff;
            if (iVar2 == 0) {
              uVar3 = 0x5b;
            }
            return uVar3;
          }
          if (param_1[4] == 'n') {
            iVar2 = strcmp("oncelen",param_1 + 5);
            uVar3 = 0xffffffff;
            if (iVar2 == 0) {
              uVar3 = 0x5d;
            }
            return uVar3;
          }
        }
        else if (param_1[3] == 'i') {
          iVar2 = strcmp("um_length",param_1 + 4);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 0x5c;
          }
          return uVar3;
        }
      }
      break;
    case 0x6c:
      if (param_1[2] == '-') {
        if (param_1[3] == 'd') {
          if (((param_1[4] == 's') && (param_1[5] == 'a')) && (param_1[6] == '.')) {
            cVar1 = param_1[7];
            if (cVar1 == 'i') {
              iVar2 = strcmp("nput_formats",param_1 + 8);
              uVar3 = 0xffffffff;
              if (iVar2 == 0) {
                uVar3 = 0xdf;
              }
              return uVar3;
            }
            if (cVar1 == 'o') {
              iVar2 = strcmp("utput_formats",param_1 + 8);
              uVar3 = 0xffffffff;
              if (iVar2 == 0) {
                uVar3 = 0xe0;
              }
              return uVar3;
            }
            if (cVar1 == 'p') {
              iVar2 = strcmp("refer_seed",param_1 + 8);
              uVar3 = 0xffffffff;
              if (iVar2 == 0) {
                uVar3 = 0xe1;
              }
              return uVar3;
            }
            if (cVar1 == 'r') {
              iVar2 = strcmp("etain_seed",param_1 + 8);
              uVar3 = 0xffffffff;
              if (iVar2 == 0) {
                uVar3 = 0xe2;
              }
              return uVar3;
            }
          }
        }
        else if (((param_1[3] == 'k') && (param_1[4] == 'e')) &&
                ((param_1[5] == 'm' && (param_1[6] == '.')))) {
          cVar1 = param_1[7];
          if (cVar1 == 'i') {
            if (param_1[8] == 'm') {
              iVar2 = strcmp("port_pct_type",param_1 + 9);
              uVar3 = 0xffffffff;
              if (iVar2 == 0) {
                uVar3 = 0xe3;
              }
              return uVar3;
            }
            if (param_1[8] == 'n') {
              iVar2 = strcmp("put_formats",param_1 + 9);
              uVar3 = 0xffffffff;
              if (iVar2 == 0) {
                uVar3 = 0xe4;
              }
              return uVar3;
            }
          }
          else {
            if (cVar1 == 'o') {
              iVar2 = strcmp("utput_formats",param_1 + 8);
              uVar3 = 0xffffffff;
              if (iVar2 == 0) {
                uVar3 = 0xe5;
              }
              return uVar3;
            }
            if (cVar1 == 'p') {
              iVar2 = strcmp("refer_seed",param_1 + 8);
              uVar3 = 0xffffffff;
              if (iVar2 == 0) {
                uVar3 = 0xe6;
              }
              return uVar3;
            }
            if (cVar1 == 'r') {
              iVar2 = strcmp("etain_seed",param_1 + 8);
              uVar3 = 0xffffffff;
              if (iVar2 == 0) {
                uVar3 = 0xe7;
              }
              return uVar3;
            }
          }
        }
      }
      break;
    case 0x6f:
      if (param_1[2] == 'd') {
        if (param_1[3] == 'e') {
          if (param_1[4] == '\0') {
            return 0x37;
          }
        }
        else if (param_1[3] == 'u') {
          iVar2 = strcmp("le-filename",param_1 + 4);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 0x11d;
          }
          return uVar3;
        }
      }
      break;
    case 0x75:
      uVar3 = 0xffffffff;
      if (param_1[2] == '\0') {
        uVar3 = 0x14f;
      }
      return uVar3;
    }
    break;
  case 0x6e:
    cVar1 = param_1[1];
    if (cVar1 == '\0') {
      return 0x89;
    }
    if (cVar1 == 'a') {
      iVar2 = strcmp("me",param_1 + 2);
      uVar3 = 0xffffffff;
      if (iVar2 == 0) {
        uVar3 = 0x128;
      }
      return uVar3;
    }
    if (cVar1 == 'o') {
      if (param_1[2] == '-') {
        iVar2 = strcmp("short-mac",param_1 + 3);
        uVar3 = 0xffffffff;
        if (iVar2 == 0) {
          uVar3 = 0x129;
        }
        return uVar3;
      }
      if (((param_1[2] == 'n') && (param_1[3] == 'c')) && (param_1[4] == 'e')) {
        if (param_1[5] == '\0') {
          return 0x7a;
        }
        if (param_1[5] == '-') {
          iVar2 = strcmp("type",param_1 + 6);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 0x150;
          }
          return uVar3;
        }
      }
    }
    else if (cVar1 == 'u') {
      iVar2 = strcmp("m",param_1 + 2);
      uVar3 = 0xffffffff;
      if (iVar2 == 0) {
        uVar3 = 0x38;
      }
      return uVar3;
    }
    break;
  case 0x6f:
    cVar1 = param_1[1];
    if (cVar1 == 'a') {
      iVar2 = strcmp("ep-label",param_1 + 2);
      uVar3 = 0xffffffff;
      if (iVar2 == 0) {
        uVar3 = 10;
      }
      return uVar3;
    }
    if (cVar1 == 'p') {
      if (param_1[2] == 'e') {
        if (param_1[3] == 'n') {
          iVar2 = strcmp("ssl-version",param_1 + 4);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 0x11f;
          }
          return uVar3;
        }
        if (param_1[3] == 'r') {
          iVar2 = strcmp("ation",param_1 + 4);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 0x99;
          }
          return uVar3;
        }
      }
      else if (param_1[2] == 't') {
        iVar2 = strcmp("ions",param_1 + 3);
        uVar3 = 0xffffffff;
        if (iVar2 == 0) {
          uVar3 = 0x9e;
        }
        return uVar3;
      }
    }
    else if (cVar1 == 'r') {
      iVar2 = strcmp("der",param_1 + 2);
      uVar3 = 0xffffffff;
      if (iVar2 == 0) {
        uVar3 = 0xc6;
      }
      return uVar3;
    }
    break;
  case 0x70:
    switch(param_1[1]) {
    case 0:
      return 0x8a;
    case 0x31:
      uVar3 = 0xffffffff;
      if (param_1[2] == '\0') {
        uVar3 = 0x110;
      }
      return uVar3;
    case 0x32:
      uVar3 = 0xffffffff;
      if (param_1[2] == '\0') {
        uVar3 = 0x111;
      }
      return uVar3;
    case 0x61:
      cVar1 = param_1[2];
      if (cVar1 == 'd') {
        cVar1 = param_1[3];
        if (cVar1 == '\0') {
          return 0x6d;
        }
        if (cVar1 == '-') {
          if (param_1[4] == 'm') {
            iVar2 = strcmp("ode",param_1 + 5);
            uVar3 = 0xffffffff;
            if (iVar2 == 0) {
              uVar3 = 0xe8;
            }
            return uVar3;
          }
          if (param_1[4] == 't') {
            iVar2 = strcmp("ype",param_1 + 5);
            uVar3 = 0xffffffff;
            if (iVar2 == 0) {
              uVar3 = 0x50;
            }
            return uVar3;
          }
        }
        else if (cVar1 == 'd') {
          iVar2 = strcmp("ing",param_1 + 4);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 0x39;
          }
          return uVar3;
        }
      }
      else if (cVar1 == 'r') {
        if ((param_1[3] == 't') && (param_1[4] == 'y')) {
          if (param_1[5] == 'u') {
            iVar2 = strcmp("-info",param_1 + 6);
            uVar3 = 0xffffffff;
            if (iVar2 == 0) {
              uVar3 = 0x93;
            }
            return uVar3;
          }
          if (param_1[5] == 'v') {
            iVar2 = strcmp("-info",param_1 + 6);
            uVar3 = 0xffffffff;
            if (iVar2 == 0) {
              uVar3 = 0x94;
            }
            return uVar3;
          }
        }
      }
      else if (cVar1 == 's') {
        iVar2 = strcmp("s",param_1 + 3);
        uVar3 = 0xffffffff;
        if (iVar2 == 0) {
          uVar3 = 0x83;
        }
        return uVar3;
      }
      break;
    case 0x62:
      if (param_1[2] == 'i') {
        iVar2 = strcmp("ts",param_1 + 3);
        uVar3 = 0xffffffff;
        if (iVar2 == 0) {
          uVar3 = 0xcf;
        }
        return uVar3;
      }
      if (param_1[2] == 'k') {
        iVar2 = strcmp("df2-lower-bound-check",param_1 + 3);
        uVar3 = 0xffffffff;
        if (iVar2 == 0) {
          uVar3 = 0x12a;
        }
        return uVar3;
      }
      break;
    case 99:
      iVar2 = strcmp("ounter",param_1 + 2);
      uVar3 = 0xffffffff;
      if (iVar2 == 0) {
        uVar3 = 0xd0;
      }
      return uVar3;
    case 0x69:
      iVar2 = strcmp("peline-tag",param_1 + 2);
      uVar3 = 0xffffffff;
      if (iVar2 == 0) {
        uVar3 = 0x3a;
      }
      return uVar3;
    case 0x6b:
      iVar2 = strcmp("cs5",param_1 + 2);
      uVar3 = 0xffffffff;
      if (iVar2 == 0) {
        uVar3 = 0x85;
      }
      return uVar3;
    case 0x6f:
      if (param_1[2] == 'i') {
        iVar2 = strcmp("nt-format",param_1 + 3);
        uVar3 = 0xffffffff;
        if (iVar2 == 0) {
          uVar3 = 199;
        }
        return uVar3;
      }
      if (param_1[2] == 't') {
        iVar2 = strcmp("ential",param_1 + 3);
        uVar3 = 0xffffffff;
        if (iVar2 == 0) {
          uVar3 = 0x6f;
        }
        return uVar3;
      }
      break;
    case 0x72:
      cVar1 = param_1[2];
      if (cVar1 == 'e') {
        if (param_1[3] == 'd') {
          iVar2 = strcmp("iction_resistance",param_1 + 4);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 0x5e;
          }
          return uVar3;
        }
        if (param_1[3] == 'f') {
          iVar2 = strcmp("ix",param_1 + 4);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 0x86;
          }
          return uVar3;
        }
      }
      else if (cVar1 == 'i') {
        if (param_1[3] == 'm') {
          iVar2 = strcmp("es",param_1 + 4);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 0x10e;
          }
          return uVar3;
        }
        if (param_1[3] == 'v') {
          if (param_1[4] == '\0') {
            return 0xe9;
          }
          if (param_1[4] == '_') {
            iVar2 = strcmp("len",param_1 + 5);
            uVar3 = 0xffffffff;
            if (iVar2 == 0) {
              uVar3 = 0xb4;
            }
            return uVar3;
          }
        }
      }
      else if (cVar1 == 'o') {
        if (param_1[3] == 'p') {
          iVar2 = strcmp("erties",param_1 + 4);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 7;
          }
          return uVar3;
        }
        if (param_1[3] == 'v') {
          iVar2 = strcmp("ider-name",param_1 + 4);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 0x11e;
          }
          return uVar3;
        }
      }
      break;
    case 0x75:
      iVar2 = strcmp("b",param_1 + 2);
      uVar3 = 0xffffffff;
      if (iVar2 == 0) {
        uVar3 = 0xea;
      }
      return uVar3;
    }
    break;
  case 0x71:
    switch(param_1[1]) {
    case 0:
      return 0xd1;
    case 0x31:
      uVar3 = 0xffffffff;
      if (param_1[2] == '\0') {
        uVar3 = 0x112;
      }
      return uVar3;
    case 0x32:
      uVar3 = 0xffffffff;
      if (param_1[2] == '\0') {
        uVar3 = 0x113;
      }
      return uVar3;
    case 0x62:
      iVar2 = strcmp("its",param_1 + 2);
      uVar3 = 0xffffffff;
      if (iVar2 == 0) {
        uVar3 = 0xd2;
      }
      return uVar3;
    case 0x78:
      uVar3 = 0xffffffff;
      if (param_1[2] == '\0') {
        uVar3 = 200;
      }
      return uVar3;
    case 0x79:
      uVar3 = 0xffffffff;
      if (param_1[2] == '\0') {
        uVar3 = 0xc9;
      }
      return uVar3;
    }
    break;
  case 0x72:
    cVar1 = param_1[1];
    if (cVar1 == '\0') {
      return 0x7d;
    }
    if (cVar1 == 'a') {
      if (param_1[2] == 'n') {
        if (param_1[3] == 'd') {
          if (param_1[4] == 'k') {
            iVar2 = strcmp("ey",param_1 + 5);
            uVar3 = 0xffffffff;
            if (iVar2 == 0) {
              uVar3 = 0x3b;
            }
            return uVar3;
          }
          if (param_1[4] == 'o') {
            iVar2 = strcmp("m_data",param_1 + 5);
            uVar3 = 0xffffffff;
            if (iVar2 == 0) {
              uVar3 = 0x5f;
            }
            return uVar3;
          }
        }
      }
      else if (param_1[2] == 'w') {
        iVar2 = strcmp("-bytes",param_1 + 3);
        uVar3 = 0xffffffff;
        if (iVar2 == 0) {
          uVar3 = 0x154;
        }
        return uVar3;
      }
    }
    else if (cVar1 == 'e') {
      cVar1 = param_1[2];
      if (cVar1 == 'a') {
        if ((param_1[3] == 'd') && (param_1[4] == '_')) {
          if (param_1[5] == 'a') {
            iVar2 = strcmp("head",param_1 + 6);
            uVar3 = 0xffffffff;
            if (iVar2 == 0) {
              uVar3 = 0x9f;
            }
            return uVar3;
          }
          if (param_1[5] == 'b') {
            iVar2 = strcmp("uffer_len",param_1 + 6);
            uVar3 = 0xffffffff;
            if (iVar2 == 0) {
              uVar3 = 0xa3;
            }
            return uVar3;
          }
        }
      }
      else {
        if (cVar1 == 'f') {
          iVar2 = strcmp("erence",param_1 + 3);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 0xaf;
          }
          return uVar3;
        }
        if ((((cVar1 == 's') && (param_1[3] == 'e')) && (param_1[4] == 'e')) &&
           ((param_1[5] == 'd' && (param_1[6] == '_')))) {
          cVar1 = param_1[7];
          if (cVar1 == 'c') {
            iVar2 = strcmp("ounter",param_1 + 8);
            uVar3 = 0xffffffff;
            if (iVar2 == 0) {
              uVar3 = 0x60;
            }
            return uVar3;
          }
          if (cVar1 == 'r') {
            iVar2 = strcmp("equests",param_1 + 8);
            uVar3 = 0xffffffff;
            if (iVar2 == 0) {
              uVar3 = 0x61;
            }
            return uVar3;
          }
          if (((cVar1 == 't') && (param_1[8] == 'i')) &&
             ((param_1[9] == 'm' && (param_1[10] == 'e')))) {
            if (param_1[0xb] == '\0') {
              return 0x62;
            }
            if (param_1[0xb] == '_') {
              iVar2 = strcmp("interval",param_1 + 0xc);
              uVar3 = 0xffffffff;
              if (iVar2 == 0) {
                uVar3 = 99;
              }
              return uVar3;
            }
          }
        }
      }
    }
    else {
      if (cVar1 == 'o') {
        iVar2 = strcmp("unds",param_1 + 2);
        uVar3 = 0xffffffff;
        if (iVar2 == 0) {
          uVar3 = 0x3d;
        }
        return uVar3;
      }
      if (((cVar1 == 's') && (param_1[2] == 'a')) && (param_1[3] == '-')) {
        switch(param_1[4]) {
        case 99:
          if (((((((param_1[5] == 'o') && (param_1[6] == 'e')) && (param_1[7] == 'f')) &&
                ((param_1[8] == 'f' && (param_1[9] == 'i')))) && (param_1[10] == 'c')) &&
              ((param_1[0xb] == 'i' && (param_1[0xc] == 'e')))) &&
             ((param_1[0xd] == 'n' && (param_1[0xe] == 't')))) {
            switch(param_1[0xf]) {
            case 0:
              return 0xeb;
            case 0x31:
              uVar3 = 0xffffffff;
              if (param_1[0x10] == '\0') {
                uVar3 = 0xec;
              }
              return uVar3;
            case 0x32:
              uVar3 = 0xffffffff;
              if (param_1[0x10] == '\0') {
                uVar3 = 0xed;
              }
              return uVar3;
            case 0x33:
              uVar3 = 0xffffffff;
              if (param_1[0x10] == '\0') {
                uVar3 = 0xee;
              }
              return uVar3;
            case 0x34:
              uVar3 = 0xffffffff;
              if (param_1[0x10] == '\0') {
                uVar3 = 0xef;
              }
              return uVar3;
            case 0x35:
              uVar3 = 0xffffffff;
              if (param_1[0x10] == '\0') {
                uVar3 = 0xf0;
              }
              return uVar3;
            case 0x36:
              uVar3 = 0xffffffff;
              if (param_1[0x10] == '\0') {
                uVar3 = 0xf1;
              }
              return uVar3;
            case 0x37:
              uVar3 = 0xffffffff;
              if (param_1[0x10] == '\0') {
                uVar3 = 0xf2;
              }
              return uVar3;
            case 0x38:
              uVar3 = 0xffffffff;
              if (param_1[0x10] == '\0') {
                uVar3 = 0xf3;
              }
              return uVar3;
            case 0x39:
              uVar3 = 0xffffffff;
              if (param_1[0x10] == '\0') {
                uVar3 = 0xf4;
              }
              return uVar3;
            }
          }
          break;
        case 100:
          iVar2 = strcmp("erive-from-pq",param_1 + 5);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 0xf6;
          }
          return uVar3;
        case 0x65:
          if ((((param_1[5] == 'x') && (param_1[6] == 'p')) && (param_1[7] == 'o')) &&
             (((param_1[8] == 'n' && (param_1[9] == 'e')) &&
              ((param_1[10] == 'n' && (param_1[0xb] == 't')))))) {
            switch(param_1[0xc]) {
            case 0:
              return 0xf8;
            case 0x31:
              if (param_1[0xd] == '\0') {
                return 0xf9;
              }
              if ((param_1[0xd] == '0') && (param_1[0xe] == '\0')) {
                return 0xfa;
              }
              break;
            case 0x32:
              uVar3 = 0xffffffff;
              if (param_1[0xd] == '\0') {
                uVar3 = 0xfb;
              }
              return uVar3;
            case 0x33:
              uVar3 = 0xffffffff;
              if (param_1[0xd] == '\0') {
                uVar3 = 0xfc;
              }
              return uVar3;
            case 0x34:
              uVar3 = 0xffffffff;
              if (param_1[0xd] == '\0') {
                uVar3 = 0xfd;
              }
              return uVar3;
            case 0x35:
              uVar3 = 0xffffffff;
              if (param_1[0xd] == '\0') {
                uVar3 = 0xfe;
              }
              return uVar3;
            case 0x36:
              uVar3 = 0xffffffff;
              if (param_1[0xd] == '\0') {
                uVar3 = 0xff;
              }
              return uVar3;
            case 0x37:
              uVar3 = 0xffffffff;
              if (param_1[0xd] == '\0') {
                uVar3 = 0x100;
              }
              return uVar3;
            case 0x38:
              uVar3 = 0xffffffff;
              if (param_1[0xd] == '\0') {
                uVar3 = 0x101;
              }
              return uVar3;
            case 0x39:
              uVar3 = 0xffffffff;
              if (param_1[0xd] == '\0') {
                uVar3 = 0x102;
              }
              return uVar3;
            }
          }
          break;
        case 0x66:
          if (((param_1[5] == 'a') && (param_1[6] == 'c')) &&
             ((param_1[7] == 't' && ((param_1[8] == 'o' && (param_1[9] == 'r')))))) {
            switch(param_1[10]) {
            case 0:
              return 0x103;
            case 0x31:
              if (param_1[0xb] == '\0') {
                return 0x104;
              }
              if ((param_1[0xb] == '0') && (param_1[0xc] == '\0')) {
                return 0x105;
              }
              break;
            case 0x32:
              uVar3 = 0xffffffff;
              if (param_1[0xb] == '\0') {
                uVar3 = 0x106;
              }
              return uVar3;
            case 0x33:
              uVar3 = 0xffffffff;
              if (param_1[0xb] == '\0') {
                uVar3 = 0x107;
              }
              return uVar3;
            case 0x34:
              uVar3 = 0xffffffff;
              if (param_1[0xb] == '\0') {
                uVar3 = 0x108;
              }
              return uVar3;
            case 0x35:
              uVar3 = 0xffffffff;
              if (param_1[0xb] == '\0') {
                uVar3 = 0x109;
              }
              return uVar3;
            case 0x36:
              uVar3 = 0xffffffff;
              if (param_1[0xb] == '\0') {
                uVar3 = 0x10a;
              }
              return uVar3;
            case 0x37:
              uVar3 = 0xffffffff;
              if (param_1[0xb] == '\0') {
                uVar3 = 0x10b;
              }
              return uVar3;
            case 0x38:
              uVar3 = 0xffffffff;
              if (param_1[0xb] == '\0') {
                uVar3 = 0x10c;
              }
              return uVar3;
            case 0x39:
              uVar3 = 0xffffffff;
              if (param_1[0xb] == '\0') {
                uVar3 = 0x10d;
              }
              return uVar3;
            }
          }
          break;
        case 0x70:
          if (param_1[5] == 'k') {
            iVar2 = strcmp("cs15-pad-disabled",param_1 + 6);
            uVar3 = 0xffffffff;
            if (iVar2 == 0) {
              uVar3 = 299;
            }
            return uVar3;
          }
          if (param_1[5] == 's') {
            iVar2 = strcmp("s-saltlen-check",param_1 + 6);
            uVar3 = 0xffffffff;
            if (iVar2 == 0) {
              uVar3 = 300;
            }
            return uVar3;
          }
          break;
        case 0x73:
          iVar2 = strcmp("ign-x931-pad-disabled",param_1 + 5);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 0x12d;
          }
          return uVar3;
        }
      }
    }
    break;
  case 0x73:
    switch(param_1[1]) {
    case 0x61:
      cVar1 = param_1[2];
      if (cVar1 == 'f') {
        iVar2 = strcmp("eprime-generator",param_1 + 3);
        uVar3 = 0xffffffff;
        if (iVar2 == 0) {
          uVar3 = 0xb3;
        }
        return uVar3;
      }
      if (cVar1 == 'l') {
        if (param_1[3] == 't') {
          if (param_1[4] == '\0') {
            return 0x87;
          }
          if (param_1[4] == 'l') {
            iVar2 = strcmp("en",param_1 + 5);
            uVar3 = 0xffffffff;
            if (iVar2 == 0) {
              uVar3 = 0x10f;
            }
            return uVar3;
          }
        }
      }
      else if (cVar1 == 'v') {
        iVar2 = strcmp("e-parameters",param_1 + 3);
        uVar3 = 0xffffffff;
        if (iVar2 == 0) {
          uVar3 = 0x66;
        }
        return uVar3;
      }
      break;
    case 0x65:
      cVar1 = param_1[2];
      if (cVar1 == 'c') {
        if (param_1[3] == 'r') {
          iVar2 = strcmp("et",param_1 + 4);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 0x8b;
          }
          return uVar3;
        }
        if ((((param_1[3] == 'u') && (param_1[4] == 'r')) && (param_1[5] == 'i')) &&
           (((param_1[6] == 't' && (param_1[7] == 'y')) && (param_1[8] == '-')))) {
          if (param_1[9] == 'b') {
            iVar2 = strcmp("its",param_1 + 10);
            uVar3 = 0xffffffff;
            if (iVar2 == 0) {
              uVar3 = 0x11a;
            }
            return uVar3;
          }
          if (param_1[9] == 'c') {
            iVar2 = strcmp("hecks",param_1 + 10);
            uVar3 = 0xffffffff;
            if (iVar2 == 0) {
              uVar3 = 0x12e;
            }
            return uVar3;
          }
        }
      }
      else {
        if (cVar1 == 'e') {
          iVar2 = strcmp("d",param_1 + 3);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 0x8c;
          }
          return uVar3;
        }
        if (cVar1 == 'r') {
          iVar2 = strcmp("ial",param_1 + 3);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 0x158;
          }
          return uVar3;
        }
        if (cVar1 == 's') {
          iVar2 = strcmp("sion_id",param_1 + 3);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 0x8d;
          }
          return uVar3;
        }
      }
      break;
    case 0x69:
      if (param_1[2] == 'g') {
        if (param_1[3] == 'n') {
          if (param_1[4] == '-') {
            if (param_1[5] == 'c') {
              iVar2 = strcmp("heck",param_1 + 6);
              uVar3 = 0xffffffff;
              if (iVar2 == 0) {
                uVar3 = 0xd8;
              }
              return uVar3;
            }
            if (param_1[5] == 'x') {
              iVar2 = strcmp("931-pad-check",param_1 + 6);
              uVar3 = 0xffffffff;
              if (iVar2 == 0) {
                uVar3 = 0x14a;
              }
              return uVar3;
            }
          }
          else if (((param_1[4] == 'a') && (param_1[5] == 't')) &&
                  ((param_1[6] == 'u' && ((param_1[7] == 'r' && (param_1[8] == 'e')))))) {
            if (param_1[9] == '\0') {
              return 0x151;
            }
            if (param_1[9] == '-') {
              iVar2 = strcmp("digest-check",param_1 + 10);
              uVar3 = 0xffffffff;
              if (iVar2 == 0) {
                uVar3 = 0x132;
              }
              return uVar3;
            }
          }
        }
      }
      else if (param_1[2] == 'z') {
        iVar2 = strcmp("e",param_1 + 3);
        uVar3 = 0xffffffff;
        if (iVar2 == 0) {
          uVar3 = 0x51;
        }
        return uVar3;
      }
      break;
    case 0x70:
      iVar2 = strcmp("eed",param_1 + 2);
      uVar3 = 0xffffffff;
      if (iVar2 == 0) {
        uVar3 = 0x3e;
      }
      return uVar3;
    case 0x73:
      cVar1 = param_1[2];
      if (cVar1 == 'h') {
        if (((param_1[3] == 'k') && (param_1[4] == 'd')) &&
           ((param_1[5] == 'f' && (param_1[6] == '-')))) {
          if (param_1[7] == 'd') {
            iVar2 = strcmp("igest-check",param_1 + 8);
            uVar3 = 0xffffffff;
            if (iVar2 == 0) {
              uVar3 = 0x133;
            }
            return uVar3;
          }
          if (param_1[7] == 'k') {
            iVar2 = strcmp("ey-check",param_1 + 8);
            uVar3 = 0xffffffff;
            if (iVar2 == 0) {
              uVar3 = 0x134;
            }
            return uVar3;
          }
        }
      }
      else if (cVar1 == 'k') {
        if (((param_1[3] == 'd') && (param_1[4] == 'f')) && (param_1[5] == '-')) {
          if (param_1[6] == 'd') {
            iVar2 = strcmp("igest-check",param_1 + 7);
            uVar3 = 0xffffffff;
            if (iVar2 == 0) {
              uVar3 = 0x135;
            }
            return uVar3;
          }
          if (param_1[6] == 'k') {
            iVar2 = strcmp("ey-check",param_1 + 7);
            uVar3 = 0xffffffff;
            if (iVar2 == 0) {
              uVar3 = 0x136;
            }
            return uVar3;
          }
        }
      }
      else if (cVar1 == 'l') {
        iVar2 = strcmp("3-ms",param_1 + 3);
        uVar3 = 0xffffffff;
        if (iVar2 == 0) {
          uVar3 = 0x52;
        }
        return uVar3;
      }
      break;
    case 0x74:
      cVar1 = param_1[2];
      if (cVar1 == '-') {
        cVar1 = param_1[3];
        if (cVar1 == 'd') {
          iVar2 = strcmp("esc",param_1 + 4);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 0x12f;
          }
          return uVar3;
        }
        if (cVar1 == 'p') {
          iVar2 = strcmp("hase",param_1 + 4);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 0x130;
          }
          return uVar3;
        }
        if (cVar1 == 't') {
          iVar2 = strcmp("ype",param_1 + 4);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 0x131;
          }
          return uVar3;
        }
      }
      else if (cVar1 == 'a') {
        if (param_1[3] == 't') {
          if (param_1[4] == 'e') {
            if (param_1[5] == '\0') {
              return 0x143;
            }
          }
          else if (param_1[4] == 'u') {
            iVar2 = strcmp("s",param_1 + 5);
            uVar3 = 0xffffffff;
            if (iVar2 == 0) {
              uVar3 = 0x137;
            }
            return uVar3;
          }
        }
      }
      else if ((cVar1 == 'r') && (param_1[3] == 'e')) {
        if (param_1[4] == 'a') {
          iVar2 = strcmp("m_mac",param_1 + 5);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 0xa0;
          }
          return uVar3;
        }
        if (param_1[4] == 'n') {
          iVar2 = strcmp("gth",param_1 + 5);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 0x144;
          }
          return uVar3;
        }
      }
      break;
    case 0x75:
      if (param_1[2] == 'b') {
        iVar2 = strcmp("ject",param_1 + 3);
        uVar3 = 0xffffffff;
        if (iVar2 == 0) {
          uVar3 = 0x159;
        }
        return uVar3;
      }
      if ((((param_1[2] == 'p') && (param_1[3] == 'p')) && (param_1[4] == '-')) &&
         (param_1[5] == 'p')) {
        if (param_1[6] == 'r') {
          iVar2 = strcmp("ivinfo",param_1 + 7);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 0x95;
          }
          return uVar3;
        }
        if (param_1[6] == 'u') {
          iVar2 = strcmp("binfo",param_1 + 7);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 0x96;
          }
          return uVar3;
        }
      }
    }
    break;
  case 0x74:
    switch(param_1[1]) {
    case 0x61:
      if (param_1[2] == 'g') {
        if (param_1[3] == '\0') {
          return 0x25;
        }
        if (param_1[3] == 'l') {
          iVar2 = strcmp("en",param_1 + 4);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 0x26;
          }
          return uVar3;
        }
      }
      break;
    case 100:
      iVar2 = strcmp("es-encrypt-disabled",param_1 + 2);
      uVar3 = 0xffffffff;
      if (iVar2 == 0) {
        uVar3 = 0x138;
      }
      return uVar3;
    case 0x65:
      if ((param_1[2] == 's') && (param_1[3] == 't')) {
        if (param_1[4] == '-') {
          iVar2 = strcmp("entropy",param_1 + 5);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 0x152;
          }
          return uVar3;
        }
        if (param_1[4] == '_') {
          if (param_1[5] == 'e') {
            iVar2 = strcmp("ntropy",param_1 + 6);
            uVar3 = 0xffffffff;
            if (iVar2 == 0) {
              uVar3 = 0x145;
            }
            return uVar3;
          }
          if (param_1[5] == 'n') {
            iVar2 = strcmp("once",param_1 + 6);
            uVar3 = 0xffffffff;
            if (iVar2 == 0) {
              uVar3 = 0x146;
            }
            return uVar3;
          }
        }
      }
      break;
    case 0x68:
      iVar2 = strcmp("reads",param_1 + 2);
      uVar3 = 0xffffffff;
      if (iVar2 == 0) {
        uVar3 = 0x90;
      }
      return uVar3;
    case 0x6c:
      if (param_1[2] == 's') {
        cVar1 = param_1[3];
        if (cVar1 == '-') {
          switch(param_1[4]) {
          case 99:
            iVar2 = strcmp("lient-version",param_1 + 5);
            uVar3 = 0xffffffff;
            if (iVar2 == 0) {
              uVar3 = 0xb;
            }
            return uVar3;
          case 100:
            iVar2 = strcmp("ata-size",param_1 + 5);
            uVar3 = 0xffffffff;
            if (iVar2 == 0) {
              uVar3 = 0xaa;
            }
            return uVar3;
          case 0x67:
            if ((((param_1[5] == 'r') && (param_1[6] == 'o')) && (param_1[7] == 'u')) &&
               ((param_1[8] == 'p' && (param_1[9] == '-')))) {
              cVar1 = param_1[10];
              if (cVar1 == 'a') {
                iVar2 = strcmp("lg",param_1 + 0xb);
                uVar3 = 0xffffffff;
                if (iVar2 == 0) {
                  uVar3 = 0xd;
                }
                return uVar3;
              }
              if (cVar1 == 'i') {
                if (param_1[0xb] == 'd') {
                  if (param_1[0xc] == '\0') {
                    return 0xe;
                  }
                }
                else if (param_1[0xb] == 's') {
                  iVar2 = strcmp("-kem",param_1 + 0xc);
                  uVar3 = 0xffffffff;
                  if (iVar2 == 0) {
                    uVar3 = 0xf;
                  }
                  return uVar3;
                }
              }
              else if (cVar1 == 'n') {
                if (((param_1[0xb] == 'a') && (param_1[0xc] == 'm')) && (param_1[0xd] == 'e')) {
                  if (param_1[0xe] == '\0') {
                    return 0x14;
                  }
                  if (param_1[0xe] == '-') {
                    iVar2 = strcmp("internal",param_1 + 0xf);
                    uVar3 = 0xffffffff;
                    if (iVar2 == 0) {
                      uVar3 = 0x15;
                    }
                    return uVar3;
                  }
                }
              }
              else if (cVar1 == 's') {
                iVar2 = strcmp("ec-bits",param_1 + 0xb);
                uVar3 = 0xffffffff;
                if (iVar2 == 0) {
                  uVar3 = 0x16;
                }
                return uVar3;
              }
            }
            break;
          case 0x6d:
            cVar1 = param_1[5];
            if (cVar1 == 'a') {
              if (param_1[6] == 'c') {
                if (param_1[7] == '\0') {
                  return 0x48;
                }
                if (param_1[7] == '-') {
                  iVar2 = strcmp("size",param_1 + 8);
                  uVar3 = 0xffffffff;
                  if (iVar2 == 0) {
                    uVar3 = 0x49;
                  }
                  return uVar3;
                }
              }
              else if ((param_1[6] == 'x') && (param_1[7] == '-')) {
                if (param_1[8] == 'd') {
                  iVar2 = strcmp("tls",param_1 + 9);
                  uVar3 = 0xffffffff;
                  if (iVar2 == 0) {
                    uVar3 = 0x10;
                  }
                  return uVar3;
                }
                if (param_1[8] == 't') {
                  iVar2 = strcmp("ls",param_1 + 9);
                  uVar3 = 0xffffffff;
                  if (iVar2 == 0) {
                    uVar3 = 0x11;
                  }
                  return uVar3;
                }
              }
            }
            else if (cVar1 == 'i') {
              if ((param_1[6] == 'n') && (param_1[7] == '-')) {
                if (param_1[8] == 'd') {
                  iVar2 = strcmp("tls",param_1 + 9);
                  uVar3 = 0xffffffff;
                  if (iVar2 == 0) {
                    uVar3 = 0x12;
                  }
                  return uVar3;
                }
                if (param_1[8] == 't') {
                  iVar2 = strcmp("ls",param_1 + 9);
                  uVar3 = 0xffffffff;
                  if (iVar2 == 0) {
                    uVar3 = 0x13;
                  }
                  return uVar3;
                }
              }
            }
            else if (cVar1 == 'u') {
              iVar2 = strcmp("lti",param_1 + 6);
              uVar3 = 0xffffffff;
              if (iVar2 == 0) {
                uVar3 = 0x3f;
              }
              return uVar3;
            }
            break;
          case 0x6e:
            iVar2 = strcmp("egotiated-version",param_1 + 5);
            uVar3 = 0xffffffff;
            if (iVar2 == 0) {
              uVar3 = 0xc;
            }
            return uVar3;
          case 0x73:
            if (((((param_1[5] == 'i') && (param_1[6] == 'g')) && (param_1[7] == 'a')) &&
                ((param_1[8] == 'l' && (param_1[9] == 'g')))) && (param_1[10] == '-')) {
              switch(param_1[0xb]) {
              case 99:
                iVar2 = strcmp("ode-point",param_1 + 0xc);
                uVar3 = 0xffffffff;
                if (iVar2 == 0) {
                  uVar3 = 0x17;
                }
                return uVar3;
              case 0x68:
                if (((param_1[0xc] == 'a') && (param_1[0xd] == 's')) &&
                   ((param_1[0xe] == 'h' && (param_1[0xf] == '-')))) {
                  if (param_1[0x10] == 'n') {
                    iVar2 = strcmp("ame",param_1 + 0x11);
                    uVar3 = 0xffffffff;
                    if (iVar2 == 0) {
                      uVar3 = 0x18;
                    }
                    return uVar3;
                  }
                  if (param_1[0x10] == 'o') {
                    iVar2 = strcmp("id",param_1 + 0x11);
                    uVar3 = 0xffffffff;
                    if (iVar2 == 0) {
                      uVar3 = 0x19;
                    }
                    return uVar3;
                  }
                }
                break;
              case 0x69:
                iVar2 = strcmp("ana-name",param_1 + 0xc);
                uVar3 = 0xffffffff;
                if (iVar2 == 0) {
                  uVar3 = 0x1a;
                }
                return uVar3;
              case 0x6b:
                if (((((param_1[0xc] == 'e') && (param_1[0xd] == 'y')) && (param_1[0xe] == 't')) &&
                    ((param_1[0xf] == 'y' && (param_1[0x10] == 'p')))) && (param_1[0x11] == 'e')) {
                  if (param_1[0x12] == '\0') {
                    return 0x1b;
                  }
                  if (param_1[0x12] == '-') {
                    iVar2 = strcmp("oid",param_1 + 0x13);
                    uVar3 = 0xffffffff;
                    if (iVar2 == 0) {
                      uVar3 = 0x1c;
                    }
                    return uVar3;
                  }
                }
                break;
              case 0x6e:
                iVar2 = strcmp("ame",param_1 + 0xc);
                uVar3 = 0xffffffff;
                if (iVar2 == 0) {
                  uVar3 = 0x1d;
                }
                return uVar3;
              case 0x6f:
                iVar2 = strcmp("id",param_1 + 0xc);
                uVar3 = 0xffffffff;
                if (iVar2 == 0) {
                  uVar3 = 0x1e;
                }
                return uVar3;
              case 0x73:
                if (param_1[0xc] == 'e') {
                  iVar2 = strcmp("c-bits",param_1 + 0xd);
                  uVar3 = 0xffffffff;
                  if (iVar2 == 0) {
                    uVar3 = 0x1f;
                  }
                  return uVar3;
                }
                if (((param_1[0xc] == 'i') && (param_1[0xd] == 'g')) && (param_1[0xe] == '-')) {
                  if (param_1[0xf] == 'n') {
                    iVar2 = strcmp("ame",param_1 + 0x10);
                    uVar3 = 0xffffffff;
                    if (iVar2 == 0) {
                      uVar3 = 0x20;
                    }
                    return uVar3;
                  }
                  if (param_1[0xf] == 'o') {
                    iVar2 = strcmp("id",param_1 + 0x10);
                    uVar3 = 0xffffffff;
                    if (iVar2 == 0) {
                      uVar3 = 0x21;
                    }
                    return uVar3;
                  }
                }
              }
            }
            break;
          case 0x76:
            iVar2 = strcmp("ersion",param_1 + 5);
            uVar3 = 0xffffffff;
            if (iVar2 == 0) {
              uVar3 = 0x4a;
            }
            return uVar3;
          }
        }
        else if (cVar1 == '1') {
          cVar1 = param_1[4];
          if (cVar1 == '-') {
            if ((((param_1[5] == 'p') && (param_1[6] == 'r')) && (param_1[7] == 'f')) &&
               (param_1[8] == '-')) {
              cVar1 = param_1[9];
              if (cVar1 == 'd') {
                iVar2 = strcmp("igest-check",param_1 + 10);
                uVar3 = 0xffffffff;
                if (iVar2 == 0) {
                  uVar3 = 0x13b;
                }
                return uVar3;
              }
              if (cVar1 == 'e') {
                iVar2 = strcmp("ms-check",param_1 + 10);
                uVar3 = 0xffffffff;
                if (iVar2 == 0) {
                  uVar3 = 0x13c;
                }
                return uVar3;
              }
              if (cVar1 == 'k') {
                iVar2 = strcmp("ey-check",param_1 + 10);
                uVar3 = 0xffffffff;
                if (iVar2 == 0) {
                  uVar3 = 0x13d;
                }
                return uVar3;
              }
            }
          }
          else if (cVar1 == '3') {
            if (((param_1[5] == '-') && (param_1[6] == 'k')) &&
               ((param_1[7] == 'd' && ((param_1[8] == 'f' && (param_1[9] == '-')))))) {
              if (param_1[10] == 'd') {
                iVar2 = strcmp("igest-check",param_1 + 0xb);
                uVar3 = 0xffffffff;
                if (iVar2 == 0) {
                  uVar3 = 0x139;
                }
                return uVar3;
              }
              if (param_1[10] == 'k') {
                iVar2 = strcmp("ey-check",param_1 + 0xb);
                uVar3 = 0xffffffff;
                if (iVar2 == 0) {
                  uVar3 = 0x13a;
                }
                return uVar3;
              }
            }
          }
          else if ((((cVar1 == 'm') && (param_1[5] == 'u')) && (param_1[6] == 'l')) &&
                  (((param_1[7] == 't' && (param_1[8] == 'i')) && (param_1[9] == '_')))) {
            cVar1 = param_1[10];
            if (cVar1 == 'a') {
              if ((param_1[0xb] == 'a') && (param_1[0xc] == 'd')) {
                if (param_1[0xd] == '\0') {
                  return 0x40;
                }
                if (param_1[0xd] == 'p') {
                  iVar2 = strcmp("acklen",param_1 + 0xe);
                  uVar3 = 0xffffffff;
                  if (iVar2 == 0) {
                    uVar3 = 0x41;
                  }
                  return uVar3;
                }
              }
            }
            else if (cVar1 == 'e') {
              if ((param_1[0xb] == 'n') && (param_1[0xc] == 'c')) {
                cVar1 = param_1[0xd];
                if (cVar1 == '\0') {
                  return 0x42;
                }
                if (cVar1 == 'i') {
                  iVar2 = strcmp("n",param_1 + 0xe);
                  uVar3 = 0xffffffff;
                  if (iVar2 == 0) {
                    uVar3 = 0x43;
                  }
                  return uVar3;
                }
                if (cVar1 == 'l') {
                  iVar2 = strcmp("en",param_1 + 0xe);
                  uVar3 = 0xffffffff;
                  if (iVar2 == 0) {
                    uVar3 = 0x44;
                  }
                  return uVar3;
                }
              }
            }
            else {
              if (cVar1 == 'i') {
                iVar2 = strcmp("nterleave",param_1 + 0xb);
                uVar3 = 0xffffffff;
                if (iVar2 == 0) {
                  uVar3 = 0x45;
                }
                return uVar3;
              }
              if (((cVar1 == 'm') && (param_1[0xb] == 'a')) && (param_1[0xc] == 'x')) {
                if (param_1[0xd] == 'b') {
                  iVar2 = strcmp("ufsz",param_1 + 0xe);
                  uVar3 = 0xffffffff;
                  if (iVar2 == 0) {
                    uVar3 = 0x46;
                  }
                  return uVar3;
                }
                if (param_1[0xd] == 's') {
                  iVar2 = strcmp("ndfrag",param_1 + 0xe);
                  uVar3 = 0xffffffff;
                  if (iVar2 == 0) {
                    uVar3 = 0x47;
                  }
                  return uVar3;
                }
              }
            }
          }
        }
        else if (cVar1 == 'a') {
          if ((param_1[4] == 'a') && (param_1[5] == 'd')) {
            if (param_1[6] == '\0') {
              return 0x27;
            }
            if (param_1[6] == 'p') {
              iVar2 = strcmp("ad",param_1 + 7);
              uVar3 = 0xffffffff;
              if (iVar2 == 0) {
                uVar3 = 0x28;
              }
              return uVar3;
            }
          }
        }
        else if (cVar1 == 'i') {
          if (param_1[4] == 'v') {
            cVar1 = param_1[5];
            if (cVar1 == 'f') {
              iVar2 = strcmp("ixed",param_1 + 6);
              uVar3 = 0xffffffff;
              if (iVar2 == 0) {
                uVar3 = 0x2a;
              }
              return uVar3;
            }
            if (cVar1 == 'g') {
              iVar2 = strcmp("en",param_1 + 6);
              uVar3 = 0xffffffff;
              if (iVar2 == 0) {
                uVar3 = 0x29;
              }
              return uVar3;
            }
            if (cVar1 == 'i') {
              iVar2 = strcmp("nv",param_1 + 6);
              uVar3 = 0xffffffff;
              if (iVar2 == 0) {
                uVar3 = 0x2b;
              }
              return uVar3;
            }
          }
        }
        else if (cVar1 == 't') {
          iVar2 = strcmp("ree",param_1 + 4);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 0xa1;
          }
          return uVar3;
        }
      }
      break;
    case 0x70:
      uVar3 = 0xffffffff;
      if (param_1[2] == '\0') {
        uVar3 = 0xbd;
      }
      return uVar3;
    case 0x79:
      iVar2 = strcmp("pe",param_1 + 2);
      uVar3 = 0xffffffff;
      if (iVar2 == 0) {
        uVar3 = 0x8e;
      }
      return uVar3;
    }
    break;
  case 0x75:
    cVar1 = param_1[1];
    if (cVar1 == 'k') {
      iVar2 = strcmp("m",param_1 + 2);
      uVar3 = 0xffffffff;
      if (iVar2 == 0) {
        uVar3 = 0x91;
      }
      return uVar3;
    }
    if (cVar1 == 'p') {
      iVar2 = strcmp("dated-iv",param_1 + 2);
      uVar3 = 0xffffffff;
      if (iVar2 == 0) {
        uVar3 = 0x4b;
      }
      return uVar3;
    }
    if ((cVar1 == 's') && (param_1[2] == 'e')) {
      if (param_1[3] == '-') {
        cVar1 = param_1[4];
        if (cVar1 == 'b') {
          iVar2 = strcmp("its",param_1 + 5);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 0x4c;
          }
          return uVar3;
        }
        if (cVar1 == 'c') {
          iVar2 = strcmp("ofactor-flag",param_1 + 5);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 0x11b;
          }
          return uVar3;
        }
        if (cVar1 == 'k') {
          iVar2 = strcmp("eybits",param_1 + 5);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 0x97;
          }
          return uVar3;
        }
        if (cVar1 == 'l') {
          uVar3 = 0xffffffff;
          if (param_1[5] == '\0') {
            uVar3 = 0x7e;
          }
          return uVar3;
        }
        if (cVar1 == 's') {
          iVar2 = strcmp("eparator",param_1 + 5);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 0x7f;
          }
          return uVar3;
        }
      }
      else if (param_1[3] == '_') {
        if (param_1[4] == 'd') {
          iVar2 = strcmp("erivation_function",param_1 + 5);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 100;
          }
          return uVar3;
        }
        if (param_1[4] == 'e') {
          iVar2 = strcmp("tm",param_1 + 5);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 0xa2;
          }
          return uVar3;
        }
      }
    }
    break;
  case 0x76:
    if (param_1[1] == 'a') {
      if ((((param_1[2] == 'l') && (param_1[3] == 'i')) &&
          ((param_1[4] == 'd' &&
           (((param_1[5] == 'a' && (param_1[6] == 't')) && (param_1[7] == 'e')))))) &&
         (param_1[8] == '-')) {
        cVar1 = param_1[9];
        if (cVar1 == 'g') {
          if (param_1[10] == '\0') {
            return 0xd3;
          }
        }
        else {
          if (cVar1 == 'l') {
            iVar2 = strcmp("egacy",param_1 + 10);
            uVar3 = 0xffffffff;
            if (iVar2 == 0) {
              uVar3 = 0xd4;
            }
            return uVar3;
          }
          if (cVar1 == 'p') {
            iVar2 = strcmp("q",param_1 + 10);
            uVar3 = 0xffffffff;
            if (iVar2 == 0) {
              uVar3 = 0xd5;
            }
            return uVar3;
          }
        }
      }
    }
    else if ((param_1[1] == 'e') && (param_1[2] == 'r')) {
      if (param_1[3] == 'i') {
        iVar2 = strcmp("fy-message",param_1 + 4);
        uVar3 = 0xffffffff;
        if (iVar2 == 0) {
          uVar3 = 0x14b;
        }
        return uVar3;
      }
      if (param_1[3] == 's') {
        iVar2 = strcmp("ion",param_1 + 4);
        uVar3 = 0xffffffff;
        if (iVar2 == 0) {
          uVar3 = 0x73;
        }
        return uVar3;
      }
    }
    break;
  case 0x78:
    switch(param_1[1]) {
    case 0x39:
      if (param_1[2] == '4') {
        iVar2 = strcmp("2kdf-key-check",param_1 + 3);
        uVar3 = 0xffffffff;
        if (iVar2 == 0) {
          uVar3 = 0x13e;
        }
        return uVar3;
      }
      if ((((param_1[2] == '6') && (param_1[3] == '3')) && (param_1[4] == 'k')) &&
         (((param_1[5] == 'd' && (param_1[6] == 'f')) && (param_1[7] == '-')))) {
        if (param_1[8] == 'd') {
          iVar2 = strcmp("igest-check",param_1 + 9);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 0x13f;
          }
          return uVar3;
        }
        if (param_1[8] == 'k') {
          iVar2 = strcmp("ey-check",param_1 + 9);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 0x140;
          }
          return uVar3;
        }
      }
      break;
    case 99:
      iVar2 = strcmp("ghash",param_1 + 2);
      uVar3 = 0xffffffff;
      if (iVar2 == 0) {
        uVar3 = 0x8f;
      }
      return uVar3;
    case 0x6f:
      if (param_1[2] == 'f') {
        if (param_1[3] == '\0') {
          return 0x53;
        }
        if (param_1[3] == 'l') {
          iVar2 = strcmp("en",param_1 + 4);
          uVar3 = 0xffffffff;
          if (iVar2 == 0) {
            uVar3 = 0x54;
          }
          return uVar3;
        }
      }
      break;
    case 0x70:
      cVar1 = param_1[2];
      if (cVar1 == '\0') {
        return 0x114;
      }
      if (cVar1 == '1') {
        if (param_1[3] == '\0') {
          return 0x115;
        }
      }
      else if (cVar1 == '2') {
        uVar3 = 0xffffffff;
        if (param_1[3] == '\0') {
          uVar3 = 0x116;
        }
        return uVar3;
      }
      break;
    case 0x71:
      cVar1 = param_1[2];
      if (cVar1 == '\0') {
        return 0x117;
      }
      if (cVar1 == '1') {
        if (param_1[3] == '\0') {
          return 0x118;
        }
      }
      else if (cVar1 == '2') {
        uVar3 = 0xffffffff;
        if (param_1[3] == '\0') {
          uVar3 = 0x119;
        }
        return uVar3;
      }
      break;
    case 0x74:
      iVar2 = strcmp("s_standard",param_1 + 2);
      uVar3 = 0xffffffff;
      if (iVar2 == 0) {
        uVar3 = 0x4d;
      }
      return uVar3;
    }
  }
  return 0xffffffff;
}

