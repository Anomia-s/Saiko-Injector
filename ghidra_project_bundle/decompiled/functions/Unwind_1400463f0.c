/**
 * Function: Unwind@1400463f0
 * Address:  1400463f0
 * Signature: void __fastcall Unwind@1400463f0(undefined8 param_1, longlong param_2)
 * Body size: 244 bytes
 */


void Unwind_1400463f0(undefined8 param_1,longlong param_2)

{
  *(AllHitCollisionCollector<JPH::CollisionCollector<JPH::BodyID,JPH::CollisionCollectorTraitsCollideShape>_>_vftable
    **)(param_2 + 0x158) =
       &JPH::
        AllHitCollisionCollector<JPH::CollisionCollector<JPH::BodyID,JPH::CollisionCollectorTraitsCollideShape>_>
        ::vftable;
  if (*(longlong *)(param_2 + 0x180) != 0) {
    *(undefined8 *)(param_2 + 0x170) = 0;
    (*DAT_14151f538)();
  }
  return;
}

