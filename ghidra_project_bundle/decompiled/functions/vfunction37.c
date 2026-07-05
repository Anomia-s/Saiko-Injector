/**
 * Function: vfunction37
 * Address:  140801120
 * Signature: void __thiscall vfunction37(SurfaceImpl * this, float * param_1, QPixmap * param_2)
 * Body size: 222 bytes
 */


void __thiscall
Scintilla::SurfaceImpl::vfunction37(SurfaceImpl *this,float *param_1,QPixmap *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  double local_78;
  double dStack_70;
  ulonglong local_60;
  
  local_60 = DAT_1414ef3c0 ^ (ulonglong)auStack_98;
  fVar1 = *param_1;
  fVar2 = param_1[2];
  iVar5 = QPixmap::width(param_2);
  fVar3 = param_1[1];
  fVar4 = param_1[3];
  iVar6 = QPixmap::height(param_2);
  local_78 = (double)(((fVar2 - fVar1) - (float)iVar5) * 0.5 + fVar1);
  dStack_70 = (double)(((fVar4 - fVar3) - (float)iVar6) * 0.5 + fVar3);
  QPainter::drawPixmap((QPainter *)this[3].vftablePtr,(QPointF *)&local_78,param_2);
  if (DAT_1414ef3c0 == (local_60 ^ (ulonglong)auStack_98)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140b65db0(local_60 ^ (ulonglong)auStack_98);
}

