/**
 * Function: BindlessLayout
 * Address:  140745440
 * Signature: BindlessLayout * __thiscall BindlessLayout(BindlessLayout * this, void * param_1)
 * Body size: 361 bytes
 */


BindlessLayout * __thiscall
nvrhi::d3d12::BindlessLayout::BindlessLayout(BindlessLayout *this,void *param_1)

{
  undefined1 *_Dst;
  undefined8 *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  (this->BindlessLayout_data).offset_0x0 = 1;
  this->vftablePtr = &vftable;
  memcpy(&(this->BindlessLayout_data).offset_0x8,param_1,0xa0);
  _Dst = &(this->BindlessLayout_data).field_0xa8;
  (this->BindlessLayout_data).offset_0x3b8 = 0;
  (this->BindlessLayout_data).offset_0x3c0 = (void *)0x0;
  (this->BindlessLayout_data).offset_0x3c8 = 0;
  memset(_Dst,0,0x30c);
  lVar5 = (this->BindlessLayout_data).offset_0x98;
  if (lVar5 != 0) {
    lVar5 = lVar5 << 3;
    lVar6 = 0;
    do {
      while ((bVar3 = (&(this->BindlessLayout_data).field_0x1c)[lVar6] - 1, bVar3 < 0xe &&
             ((0x2dffU >> (bVar3 & 0x1f) & 1) != 0))) {
        uVar4 = *(undefined4 *)(&DAT_14123d1c4 + (ulonglong)bVar3 * 4);
        lVar2 = (this->BindlessLayout_data).offset_0x3a8;
        (this->BindlessLayout_data).offset_0x3a8 = lVar2 + 1;
        puVar1 = (undefined8 *)(&(this->BindlessLayout_data).field_0xa8 + lVar2 * 0x18);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined8 *)(&(this->BindlessLayout_data).field_0xb8 + lVar2 * 0x18) = 0;
        lVar2 = (this->BindlessLayout_data).offset_0x3a8;
        *(undefined4 *)(&(this->BindlessLayout_data).field_0x90 + lVar2 * 0x18) = uVar4;
        *(undefined4 *)(&(this->BindlessLayout_data).field_0x94 + lVar2 * 0x18) = 0xffffffff;
        *(undefined4 *)(&(this->BindlessLayout_data).offset_0x98 + lVar2 * 3) =
             (this->BindlessLayout_data).offset_0xc;
        *(undefined4 *)((longlong)&(this->BindlessLayout_data).offset_0x98 + lVar2 * 0x18 + 4) =
             *(undefined4 *)(&(this->BindlessLayout_data).field_0x18 + lVar6);
        *(undefined8 *)(&(this->BindlessLayout_data).offset_0xa0 + lVar2 * 6) = 1;
        lVar6 = lVar6 + 8;
        if (lVar5 == lVar6) goto LAB_140745562;
      }
      httplib::ClientImpl::vfunction4();
      lVar6 = lVar6 + 8;
    } while (lVar5 != lVar6);
  }
LAB_140745562:
  if ((this->BindlessLayout_data).offset_0xa0 == 0) {
    (this->BindlessLayout_data).offset_0x3b0 = 0;
    uVar4 = FUN_14071d610((this->BindlessLayout_data).offset_0x8);
    (this->BindlessLayout_data).offset_0x3c8 = uVar4;
    (this->BindlessLayout_data).offset_0x3b8 = (int)(this->BindlessLayout_data).offset_0x3a8;
    (this->BindlessLayout_data).offset_0x3c0 = _Dst;
  }
  return this;
}

