/**
 * Function: ~ExplicitProducer
 * Address:  1401ba9c0
 * Signature: void __thiscall ~ExplicitProducer(ExplicitProducer * this)
 * Body size: 454 bytes
 */


void __thiscall
tracy::moodycamel::ConcurrentQueue<tracy::QueueItem,tracy::moodycamel::ConcurrentQueueDefaultTraits>
::ExplicitProducer::~ExplicitProducer(ExplicitProducer *this)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  
  this->vftablePtr = &vftable;
  lVar10 = (this->ExplicitProducer_data).offset_0x38;
  if (lVar10 != 0) {
    lVar11 = lVar10;
    if ((short)(this->ExplicitProducer_data).offset_0x20 != 0) {
      uVar8 = (this->ExplicitProducer_data).offset_0x60 - (this->ExplicitProducer_data).offset_0x50;
      do {
        uVar9 = uVar8 & (this->ExplicitProducer_data).offset_0x58 - 1U;
        uVar8 = uVar9 + 1;
      } while ((*(longlong *)((this->ExplicitProducer_data).offset_0x68 + uVar9 * 0x10) -
               (this->ExplicitProducer_data).offset_0x20) + 0x800000000000ffffU < 0x7fffffffffffffff
              );
    }
    do {
      lVar10 = *(longlong *)(lVar10 + 0x200000);
      if (*(longlong *)(lVar10 + 0x200008) == 0x10000) {
        lVar11 = (this->ExplicitProducer_data).offset_0x38;
      }
    } while (lVar10 != lVar11);
    lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    do {
      lVar4 = *(longlong *)(lVar11 + 0x200000);
      if (*(char *)(lVar11 + 0x200021) == '\x01') {
        if (*(char *)(lVar10 + 0x18c) == '\0') {
          FUN_1401b83e0();
        }
        FUN_1401b8260(lVar11);
      }
      else {
        lVar5 = (this->ExplicitProducer_data).offset_0x40;
        LOCK();
        piVar2 = (int *)(lVar11 + 0x200014);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -0x80000000;
        UNLOCK();
        if (iVar3 == 0) {
          lVar6 = *(longlong *)(lVar5 + 0x28);
          do {
            *(longlong *)(lVar11 + 0x200018) = lVar6;
            *(undefined4 *)(lVar11 + 0x200014) = 1;
            plVar1 = (longlong *)(lVar5 + 0x28);
            LOCK();
            lVar7 = *plVar1;
            bVar12 = lVar6 == lVar7;
            if (bVar12) {
              *plVar1 = lVar11;
              lVar7 = lVar6;
            }
            UNLOCK();
            if (bVar12) break;
            LOCK();
            piVar2 = (int *)(lVar11 + 0x200014);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + 0x7fffffff;
            UNLOCK();
            lVar6 = lVar7;
          } while (iVar3 == 1);
        }
      }
      lVar11 = lVar4;
    } while (lVar4 != (this->ExplicitProducer_data).offset_0x38);
  }
  lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  lVar11 = (this->ExplicitProducer_data).offset_0x70;
  while (lVar11 != 0) {
    lVar4 = *(longlong *)(lVar11 + 0x18);
    if (*(char *)(lVar10 + 0x18c) == '\0') {
      FUN_1401b83e0();
    }
    FUN_1401b8260(lVar11);
    lVar11 = lVar4;
  }
  return;
}

