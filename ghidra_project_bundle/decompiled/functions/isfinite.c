/**
 * Function: isfinite
 * Address:  1407a39f0
 * Signature: undefined isfinite(void)
 * Body size: 3447 bytes
 */


undefined8 isfinite(undefined8 *param_1,longlong param_2,char *param_3)

{
  char *_Str1;
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  
  _Str1 = (char *)*param_1;
  if (_Str1 == (char *)0x0) {
    pcVar1 = (char *)param_1[1];
    if (pcVar1 != (char *)0x0) {
      iVar3 = strcmp(pcVar1,"assert");
      if (iVar3 == 0) {
        return 1;
      }
      iVar3 = strcmp(pcVar1,"type");
      if (iVar3 == 0) {
        return 0x28;
      }
      iVar3 = strcmp(pcVar1,"typeof");
      if (iVar3 == 0) {
        return 0x2c;
      }
      iVar3 = strcmp(pcVar1,"rawset");
      if (iVar3 == 0) {
        return 0x31;
      }
      iVar3 = strcmp(pcVar1,"rawget");
      if (iVar3 == 0) {
        return 0x32;
      }
      iVar3 = strcmp(pcVar1,"rawequal");
      if (iVar3 == 0) {
        return 0x33;
      }
      iVar3 = strcmp(pcVar1,"rawlen");
      if (iVar3 == 0) {
        return 0x3a;
      }
      iVar3 = strcmp(pcVar1,"unpack");
      if (iVar3 == 0) {
        return 0x35;
      }
      iVar3 = strcmp(pcVar1,"select");
      if (iVar3 == 0) {
        return 0x39;
      }
      iVar3 = strcmp(pcVar1,"getmetatable");
      if (iVar3 == 0) {
        return 0x3c;
      }
      iVar3 = strcmp(pcVar1,"setmetatable");
      if (iVar3 == 0) {
        return 0x3d;
      }
      iVar3 = strcmp(pcVar1,"tonumber");
      if (iVar3 == 0) {
        return 0x3e;
      }
      iVar3 = strcmp(pcVar1,"tostring");
      if (iVar3 == 0) {
        return 0x3f;
      }
    }
LAB_1407a3d14:
    if (param_3 != (char *)0x0) {
      if (param_2 == 0) {
        if (((_Str1 == (char *)0x0) && ((char *)param_1[1] != (char *)0x0)) &&
           (iVar3 = strcmp((char *)param_1[1],param_3), iVar3 == 0)) goto LAB_1407a4492;
      }
      else {
        cVar2 = FUN_1407a4880(param_1,param_2,param_3);
        if (cVar2 != '\0') {
          return 0x36;
        }
      }
    }
    uVar4 = 0xffffffff;
  }
  else {
    iVar3 = strcmp(_Str1,"math");
    if ((iVar3 == 0) && (pcVar1 = (char *)param_1[1], pcVar1 != (char *)0x0)) {
      iVar3 = strcmp(pcVar1,"abs");
      if (iVar3 == 0) {
        return 2;
      }
      iVar3 = strcmp(pcVar1,"acos");
      if (iVar3 == 0) {
        return 3;
      }
      iVar3 = strcmp(pcVar1,"asin");
      if (iVar3 == 0) {
        return 4;
      }
      iVar3 = strcmp(pcVar1,"atan2");
      if (iVar3 == 0) {
        return 5;
      }
      iVar3 = strcmp(pcVar1,"atan");
      if (iVar3 == 0) {
        return 6;
      }
      iVar3 = strcmp(pcVar1,"ceil");
      if (iVar3 == 0) {
        return 7;
      }
      iVar3 = strcmp(pcVar1,"cosh");
      if (iVar3 == 0) {
        return 8;
      }
      iVar3 = strcmp(pcVar1,"cos");
      if (iVar3 == 0) {
        return 9;
      }
      iVar3 = strcmp(pcVar1,"deg");
      if (iVar3 == 0) {
        return 10;
      }
      iVar3 = strcmp(pcVar1,"exp");
      if (iVar3 == 0) {
        return 0xb;
      }
      iVar3 = strcmp(pcVar1,"floor");
      if (iVar3 == 0) {
        return 0xc;
      }
      iVar3 = strcmp(pcVar1,"fmod");
      if (iVar3 == 0) {
        return 0xd;
      }
      iVar3 = strcmp(pcVar1,"frexp");
      if (iVar3 == 0) {
        return 0xe;
      }
      iVar3 = strcmp(pcVar1,"ldexp");
      if (iVar3 == 0) {
        return 0xf;
      }
      iVar3 = strcmp(pcVar1,"log10");
      if (iVar3 == 0) {
        return 0x10;
      }
      iVar3 = strcmp(pcVar1,"log");
      if (iVar3 == 0) {
        return 0x11;
      }
      iVar3 = strcmp(pcVar1,"max");
      if (iVar3 == 0) {
        return 0x12;
      }
      iVar3 = strcmp(pcVar1,"min");
      if (iVar3 == 0) {
        return 0x13;
      }
      iVar3 = strcmp(pcVar1,"modf");
      if (iVar3 == 0) {
        return 0x14;
      }
      iVar3 = strcmp(pcVar1,"pow");
      if (iVar3 == 0) {
        return 0x15;
      }
      iVar3 = strcmp(pcVar1,"rad");
      if (iVar3 == 0) {
        return 0x16;
      }
      iVar3 = strcmp(pcVar1,"sinh");
      if (iVar3 == 0) {
        return 0x17;
      }
      iVar3 = strcmp(pcVar1,"sin");
      if (iVar3 == 0) {
        return 0x18;
      }
      iVar3 = strcmp(pcVar1,"sqrt");
      if (iVar3 == 0) {
        return 0x19;
      }
      iVar3 = strcmp(pcVar1,"tanh");
      if (iVar3 == 0) {
        return 0x1a;
      }
      iVar3 = strcmp(pcVar1,"tan");
      if (iVar3 == 0) {
        return 0x1b;
      }
      iVar3 = strcmp(pcVar1,"clamp");
      if (iVar3 == 0) {
        return 0x2e;
      }
      iVar3 = strcmp(pcVar1,"sign");
      if (iVar3 == 0) {
        return 0x2f;
      }
      iVar3 = strcmp(pcVar1,"round");
      if (iVar3 == 0) {
        return 0x30;
      }
      iVar3 = strcmp(pcVar1,"lerp");
      if (iVar3 == 0) {
        return 0x59;
      }
      iVar3 = strcmp(pcVar1,"isnan");
      if (iVar3 == 0) {
        return 0x5b;
      }
      iVar3 = strcmp(pcVar1,"isinf");
      if (iVar3 == 0) {
        return 0x5c;
      }
      iVar3 = strcmp(pcVar1,"isfinite");
      if (iVar3 == 0) {
        return 0x5d;
      }
    }
    iVar3 = strcmp(_Str1,"bit32");
    if ((iVar3 == 0) && (pcVar1 = (char *)param_1[1], pcVar1 != (char *)0x0)) {
      iVar3 = strcmp(pcVar1,"arshift");
      if (iVar3 == 0) {
        return 0x1c;
      }
      iVar3 = strcmp(pcVar1,"band");
      if (iVar3 == 0) {
        return 0x1d;
      }
      iVar3 = strcmp(pcVar1,"bnot");
      if (iVar3 == 0) {
        return 0x1e;
      }
      iVar3 = strcmp(pcVar1,"bor");
      if (iVar3 == 0) {
        return 0x1f;
      }
      iVar3 = strcmp(pcVar1,"bxor");
      if (iVar3 == 0) {
        return 0x20;
      }
      iVar3 = strcmp(pcVar1,"btest");
      if (iVar3 == 0) {
        return 0x21;
      }
      iVar3 = strcmp(pcVar1,"extract");
      if (iVar3 == 0) {
        return 0x22;
      }
      iVar3 = strcmp(pcVar1,"lrotate");
      if (iVar3 == 0) {
        return 0x23;
      }
      iVar3 = strcmp(pcVar1,"lshift");
      if (iVar3 == 0) {
        return 0x24;
      }
      iVar3 = strcmp(pcVar1,"replace");
      if (iVar3 == 0) {
        return 0x25;
      }
      iVar3 = strcmp(pcVar1,"rrotate");
      if (iVar3 == 0) {
        return 0x26;
      }
      iVar3 = strcmp(pcVar1,"rshift");
      if (iVar3 == 0) {
        return 0x27;
      }
      iVar3 = strcmp(pcVar1,"countlz");
      if (iVar3 == 0) {
        return 0x37;
      }
      iVar3 = strcmp(pcVar1,"countrz");
      if (iVar3 == 0) {
        return 0x38;
      }
      iVar3 = strcmp(pcVar1,"byteswap");
      if (iVar3 == 0) {
        return 0x40;
      }
    }
    iVar3 = strcmp(_Str1,"string");
    if ((iVar3 == 0) && (pcVar1 = (char *)param_1[1], pcVar1 != (char *)0x0)) {
      iVar3 = strcmp(pcVar1,"byte");
      if (iVar3 == 0) {
        return 0x29;
      }
      iVar3 = strcmp(pcVar1,"char");
      if (iVar3 == 0) {
        return 0x2a;
      }
      iVar3 = strcmp(pcVar1,"len");
      if (iVar3 == 0) {
        return 0x2b;
      }
      iVar3 = strcmp(pcVar1,"sub");
      if (iVar3 == 0) {
        return 0x2d;
      }
    }
    iVar3 = strcmp(_Str1,"table");
    if ((iVar3 == 0) && (pcVar1 = (char *)param_1[1], pcVar1 != (char *)0x0)) {
      iVar3 = strcmp(pcVar1,"insert");
      if (iVar3 == 0) {
        return 0x34;
      }
      iVar3 = strcmp(pcVar1,"unpack");
      if (iVar3 == 0) {
        return 0x35;
      }
    }
    iVar3 = strcmp(_Str1,"buffer");
    if ((iVar3 == 0) && (pcVar1 = (char *)param_1[1], pcVar1 != (char *)0x0)) {
      iVar3 = strcmp(pcVar1,"readi8");
      if (iVar3 == 0) {
        return 0x41;
      }
      iVar3 = strcmp(pcVar1,"readu8");
      if (iVar3 == 0) {
        return 0x42;
      }
      iVar3 = strcmp(pcVar1,"writei8");
      if (iVar3 == 0) {
        return 0x43;
      }
      iVar3 = strcmp(pcVar1,"writeu8");
      if (iVar3 == 0) {
        return 0x43;
      }
      iVar3 = strcmp(pcVar1,"readi16");
      if (iVar3 == 0) {
        return 0x44;
      }
      iVar3 = strcmp(pcVar1,"readu16");
      if (iVar3 == 0) {
        return 0x45;
      }
      iVar3 = strcmp(pcVar1,"writei16");
      if (iVar3 == 0) {
        return 0x46;
      }
      iVar3 = strcmp(pcVar1,"writeu16");
      if (iVar3 == 0) {
        return 0x46;
      }
      iVar3 = strcmp(pcVar1,"readi32");
      if (iVar3 == 0) {
        return 0x47;
      }
      iVar3 = strcmp(pcVar1,"readu32");
      if (iVar3 == 0) {
        return 0x48;
      }
      iVar3 = strcmp(pcVar1,"writei32");
      if (iVar3 == 0) {
        return 0x49;
      }
      iVar3 = strcmp(pcVar1,"writeu32");
      if (iVar3 == 0) {
        return 0x49;
      }
      iVar3 = strcmp(pcVar1,"readf32");
      if (iVar3 == 0) {
        return 0x4a;
      }
      iVar3 = strcmp(pcVar1,"writef32");
      if (iVar3 == 0) {
        return 0x4b;
      }
      iVar3 = strcmp(pcVar1,"readf64");
      if (iVar3 == 0) {
        return 0x4c;
      }
      iVar3 = strcmp(pcVar1,"writef64");
      if (iVar3 == 0) {
        return 0x4d;
      }
    }
    iVar3 = strcmp(_Str1,"vector");
    if ((iVar3 != 0) || (pcVar1 = (char *)param_1[1], pcVar1 == (char *)0x0)) goto LAB_1407a3d14;
    iVar3 = strcmp(pcVar1,"create");
    if (iVar3 != 0) {
      iVar3 = strcmp(pcVar1,"magnitude");
      if (iVar3 == 0) {
        return 0x4e;
      }
      iVar3 = strcmp(pcVar1,"normalize");
      if (iVar3 == 0) {
        return 0x4f;
      }
      iVar3 = strcmp(pcVar1,"cross");
      if (iVar3 == 0) {
        return 0x50;
      }
      iVar3 = strcmp(pcVar1,"dot");
      if (iVar3 == 0) {
        return 0x51;
      }
      iVar3 = strcmp(pcVar1,"floor");
      if (iVar3 == 0) {
        return 0x52;
      }
      iVar3 = strcmp(pcVar1,"ceil");
      if (iVar3 == 0) {
        return 0x53;
      }
      iVar3 = strcmp(pcVar1,"abs");
      if (iVar3 == 0) {
        return 0x54;
      }
      iVar3 = strcmp(pcVar1,"sign");
      if (iVar3 == 0) {
        return 0x55;
      }
      iVar3 = strcmp(pcVar1,"clamp");
      if (iVar3 == 0) {
        return 0x56;
      }
      iVar3 = strcmp(pcVar1,"min");
      if (iVar3 == 0) {
        return 0x57;
      }
      iVar3 = strcmp(pcVar1,"max");
      if (iVar3 == 0) {
        return 0x58;
      }
      iVar3 = strcmp(pcVar1,"lerp");
      if (iVar3 == 0) {
        return 0x5a;
      }
      goto LAB_1407a3d14;
    }
LAB_1407a4492:
    uVar4 = 0x36;
  }
  return uVar4;
}

