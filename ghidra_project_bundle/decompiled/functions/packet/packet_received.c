/**
 * Function: packet_received
 * Address:  140cc7ef0
 * Signature: undefined packet_received(void)
 * Body size: 1598 bytes
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 packet_received(longlong param_1,byte *param_2,undefined8 param_3,undefined8 param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  size_t sVar5;
  ulonglong uVar6;
  byte *pbVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  byte *_Buf1;
  byte *pbVar10;
  bool bVar11;
  ulonglong local_res20;
  undefined8 uVar12;
  
  uVar12 = 0x140cc7f0b;
  uVar6 = *(ulonglong *)(param_1 + 0x60);
  if (param_2 == (byte *)0x0) {
    return 0;
  }
  sVar5 = strlen((char *)param_2);
  pbVar1 = param_2 + sVar5;
LAB_140cc7f50:
  do {
    for (; ((bVar3 = *param_2, bVar3 == 0x20 || (((bVar3 - 9 & 0xfa) == 0 && (bVar3 != 0xe)))) &&
           (param_2 < pbVar1)); param_2 = param_2 + 1) {
    }
    pbVar7 = param_2;
    if (param_2 == pbVar1) {
      *(ulonglong *)(param_1 + 0x60) = uVar6;
      return 1;
    }
    for (; ((0x20 < bVar3 || ((0x100002600U >> ((longlong)(char)bVar3 & 0x3fU) & 1) == 0)) &&
           (pbVar7 < pbVar1)); pbVar7 = pbVar7 + 1) {
      bVar3 = pbVar7[1];
    }
    if (param_2 == pbVar7) {
      bVar3 = 0xff;
LAB_140cc7fbc:
      iVar4 = FUN_140c20ac0((int)(char)bVar3,3,0x100002600,param_4,uVar12);
      if ((((iVar4 == 0) && (iVar4 = FUN_140c20af0((int)(char)bVar3), iVar4 == 0)) &&
          (bVar3 != 0x5f)) && (bVar3 != 0x2a)) {
        return 0;
      }
      bVar11 = true;
      pbVar10 = param_2;
    }
    else {
      bVar3 = *param_2;
      if ((bVar3 != 0x2b) && (bVar3 != 0x2d)) goto LAB_140cc7fbc;
      pbVar10 = param_2 + 1;
      bVar11 = bVar3 == 0x2b;
      bVar3 = 0xff;
      if (pbVar10 != pbVar7) {
        bVar3 = *pbVar10;
      }
      iVar4 = FUN_140c20ac0((int)(char)bVar3,3,0x100002600,param_4,uVar12);
      if ((iVar4 == 0) && (iVar4 = FUN_140c20af0((int)(char)bVar3), iVar4 == 0)) {
        if (0x35 < (byte)(bVar3 - 0x2a)) {
          return 0;
        }
        if ((0x20000000000009U >> ((longlong)(char)(bVar3 - 0x2a) & 0x3fU) & 1) == 0) {
          return 0;
        }
      }
    }
    pbVar2 = pbVar10;
    param_2 = pbVar7;
    if (((longlong)pbVar7 - (longlong)pbVar10 == 1) && (*pbVar10 == 0x2a)) {
      if (bVar11) {
        uVar6 = uVar6 | 0xfe;
      }
      else {
        uVar6 = uVar6 & 0xffffffffffffff01;
      }
      goto LAB_140cc7f50;
    }
    for (; pbVar2 < pbVar7; pbVar2 = pbVar2 + 1) {
      if (*pbVar2 == 0x3a) goto LAB_140cc80b6;
    }
    if (pbVar2 == pbVar7) {
      return 0;
    }
LAB_140cc80b6:
    _Buf1 = pbVar2 + 1;
    local_res20 = (longlong)pbVar2 - (longlong)pbVar10;
    uVar9 = (longlong)pbVar7 - (longlong)_Buf1;
    if (local_res20 == 1) {
      if (*pbVar10 != 0x2a) goto LAB_140cc80f0;
      pbVar10 = (byte *)0x0;
      local_res20 = 0;
    }
    else {
      if (local_res20 == 0) {
        return 0;
      }
LAB_140cc80f0:
      uVar8 = 0;
      if (local_res20 != 0) {
        do {
          bVar3 = pbVar10[uVar8];
          iVar4 = FUN_140c20ac0((int)(char)bVar3,3);
          if (((iVar4 == 0) && (iVar4 = FUN_140c20af0((int)(char)bVar3), iVar4 == 0)) &&
             ((bVar3 != 0x5f && (bVar3 != 0x2d)))) {
            return 0;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < local_res20);
      }
    }
    if (uVar9 == 1) {
      if (*_Buf1 != 0x2a) goto LAB_140cc815a;
      _Buf1 = (byte *)0x0;
      uVar9 = 0;
    }
    else {
      if (uVar9 == 0) {
        return 0;
      }
LAB_140cc815a:
      uVar8 = 0;
      if (uVar9 != 0) {
        do {
          bVar3 = _Buf1[uVar8];
          iVar4 = FUN_140c20ac0((int)(char)bVar3,3);
          if ((((iVar4 == 0) && (iVar4 = FUN_140c20af0((int)(char)bVar3), iVar4 == 0)) &&
              (bVar3 != 0x5f)) && (bVar3 != 0x2d)) {
            return 0;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar9);
      }
    }
    if ((pbVar10 == (byte *)0x0) || (local_res20 == 0xc)) {
      if ((_Buf1 == (byte *)0x0) || (uVar9 == 0x12)) {
        if ((pbVar10 != (byte *)0x0) &&
           ((*(longlong *)pbVar10 != 0x697463656e6e6f63 || (*(int *)(pbVar10 + 8) != 0x79746976))))
        goto LAB_140cc821b;
        if ((_Buf1 == (byte *)0x0) ||
           (((*(longlong *)_Buf1 == 0x697463656e6e6f63 &&
             (*(longlong *)(_Buf1 + 8) == 0x74726174735f6e6f)) &&
            (*(short *)(_Buf1 + 0x10) == 0x6465)))) {
          if (bVar11) {
            uVar6 = uVar6 | 2;
          }
          else {
            uVar6 = uVar6 & 0xfffffffffffffffd;
          }
        }
      }
      if (pbVar10 != (byte *)0x0) goto LAB_140cc821b;
LAB_140cc8225:
      if ((_Buf1 == (byte *)0x0) || (uVar9 == 0x18)) {
        if ((pbVar10 == (byte *)0x0) ||
           ((*(longlong *)pbVar10 == 0x697463656e6e6f63 && (*(int *)(pbVar10 + 8) == 0x79746976))))
        {
          if ((_Buf1 == (byte *)0x0) ||
             (((*(longlong *)_Buf1 == 0x697463656e6e6f63 &&
               (*(longlong *)(_Buf1 + 8) == 0x65746174735f6e6f)) &&
              (*(longlong *)(_Buf1 + 0x10) == 0x646574616470755f)))) {
            if (bVar11) {
              uVar6 = uVar6 | 4;
            }
            else {
              uVar6 = uVar6 & 0xfffffffffffffffb;
            }
          }
          goto LAB_140cc8286;
        }
LAB_140cc828b:
        if (local_res20 != 0xc) goto LAB_140cc82ee;
      }
      else {
LAB_140cc8286:
        if (pbVar10 != (byte *)0x0) goto LAB_140cc828b;
      }
      if ((_Buf1 == (byte *)0x0) || (uVar9 == 0x11)) {
        if ((pbVar10 != (byte *)0x0) &&
           ((*(longlong *)pbVar10 != 0x697463656e6e6f63 || (*(int *)(pbVar10 + 8) != 0x79746976))))
        goto LAB_140cc82ee;
        if ((_Buf1 == (byte *)0x0) ||
           (((*(longlong *)_Buf1 == 0x697463656e6e6f63 &&
             (*(longlong *)(_Buf1 + 8) == 0x65736f6c635f6e6f)) && (_Buf1[0x10] == 100)))) {
          if (bVar11) {
            uVar6 = uVar6 | 8;
          }
          else {
            uVar6 = uVar6 & 0xfffffffffffffff7;
          }
        }
      }
      if (pbVar10 != (byte *)0x0) goto LAB_140cc82ee;
LAB_140cc82f8:
      if ((_Buf1 == (byte *)0x0) || (uVar9 == 0xe)) {
        if ((pbVar10 == (byte *)0x0) ||
           ((*(longlong *)pbVar10 == 0x726f70736e617274 && (pbVar10[8] == 0x74)))) {
          if ((_Buf1 == (byte *)0x0) ||
             (((*(longlong *)_Buf1 == 0x6574656d61726170 && (*(int *)(_Buf1 + 8) == 0x735f7372)) &&
              (*(short *)(_Buf1 + 0xc) == 0x7465)))) {
            if (bVar11) {
              uVar6 = uVar6 | 0x10;
            }
            else {
              uVar6 = uVar6 & 0xffffffffffffffef;
            }
          }
          goto LAB_140cc8353;
        }
LAB_140cc8358:
        if (local_res20 != 9) goto LAB_140cc841c;
      }
      else {
LAB_140cc8353:
        if (pbVar10 != (byte *)0x0) goto LAB_140cc8358;
      }
      if ((_Buf1 == (byte *)0x0) || (uVar9 == 0xb)) {
        if ((pbVar10 == (byte *)0x0) ||
           ((*(longlong *)pbVar10 == 0x726f70736e617274 && (pbVar10[8] == 0x74)))) {
          if ((_Buf1 == (byte *)0x0) ||
             (((*(longlong *)_Buf1 == 0x735f74656b636170 && (*(short *)(_Buf1 + 8) == 0x6e65)) &&
              (_Buf1[10] == 0x74)))) {
            if (bVar11) {
              uVar6 = uVar6 | 0x20;
            }
            else {
              uVar6 = uVar6 & 0xffffffffffffffdf;
            }
          }
          goto LAB_140cc83ba;
        }
LAB_140cc83bf:
        if (local_res20 != 9) goto LAB_140cc841c;
      }
      else {
LAB_140cc83ba:
        if (pbVar10 != (byte *)0x0) goto LAB_140cc83bf;
      }
      if ((_Buf1 == (byte *)0x0) || (uVar9 == 0xf)) {
        if ((pbVar10 != (byte *)0x0) &&
           ((*(longlong *)pbVar10 != 0x726f70736e617274 || (pbVar10[8] != 0x74))))
        goto LAB_140cc841c;
        if ((_Buf1 == (byte *)0x0) || (iVar4 = memcmp(_Buf1,"packet_received",0xf), iVar4 == 0)) {
          if (bVar11) {
            uVar6 = uVar6 | 0x40;
          }
          else {
            uVar6 = uVar6 & 0xffffffffffffffbf;
          }
        }
      }
      if (pbVar10 != (byte *)0x0) goto LAB_140cc841c;
      goto LAB_140cc8438;
    }
LAB_140cc821b:
    if (local_res20 == 0xc) goto LAB_140cc8225;
LAB_140cc82ee:
    if (local_res20 == 9) goto LAB_140cc82f8;
LAB_140cc841c:
    if (local_res20 == 8) {
LAB_140cc8438:
      if ((((_Buf1 == (byte *)0x0) || (uVar9 == 0xb)) &&
          ((pbVar10 == (byte *)0x0 || (*(longlong *)pbVar10 == 0x797265766f636572)))) &&
         ((_Buf1 == (byte *)0x0 ||
          (((*(longlong *)_Buf1 == 0x6c5f74656b636170 && (*(short *)(_Buf1 + 8) == 0x736f)) &&
           (_Buf1[10] == 0x74)))))) {
        if (bVar11) {
          uVar6 = uVar6 | 0x80;
        }
        else {
          uVar6 = uVar6 & 0xffffffffffffff7f;
        }
      }
    }
  } while( true );
}

