/**
 * Function: RayTracingPipeline
 * Address:  14073c440
 * Signature: void __thiscall RayTracingPipeline(RayTracingPipeline * this, undefined8 param_1, undefined8 param_2)
 * Body size: 260 bytes
 */


void __thiscall
nvrhi::d3d12::RayTracingPipeline::RayTracingPipeline
          (RayTracingPipeline *this,undefined8 param_1,undefined8 param_2)

{
  undefined4 local_58;
  undefined4 local_54;
  RayTracingPipeline *local_50;
  undefined1 local_42;
  undefined1 local_41;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  (this->RayTracingPipeline_data).offset_0x0 = 1;
  this->vftablePtr = &vftable;
  (this->RayTracingPipeline_data).offset_0x8 = 0;
  (this->RayTracingPipeline_data).offset_0x10 = 0;
  (this->RayTracingPipeline_data).offset_0x18 = 0;
  (this->RayTracingPipeline_data).offset_0x20 = 0;
  (this->RayTracingPipeline_data).offset_0x28 = 0;
  (this->RayTracingPipeline_data).offset_0x30 = 0;
  (this->RayTracingPipeline_data).offset_0x38 = 0;
  (this->RayTracingPipeline_data).offset_0x40 = 0;
  (this->RayTracingPipeline_data).offset_0x48 = 0;
  (this->RayTracingPipeline_data).offset_0x50 = 0;
  (this->RayTracingPipeline_data).offset_0x58 = 0;
  (this->RayTracingPipeline_data).offset_0x60 = 0;
  (this->RayTracingPipeline_data).offset_0x68 = 0;
  (this->RayTracingPipeline_data).offset_0x70 = 0;
  *(undefined8 *)((longlong)&(this->RayTracingPipeline_data).offset_0x70 + 4) = 0;
  (this->RayTracingPipeline_data).offset_0x7c = 0;
  (this->RayTracingPipeline_data).offset_0x84 = 0x100000008;
  (this->RayTracingPipeline_data).offset_0x8c = 0xffffffff;
  (this->RayTracingPipeline_data).offset_0x90 = 0;
  local_54 = 0;
  FUN_140740a20(&(this->RayTracingPipeline_data).offset_0x98,&local_54,&local_41);
  (this->RayTracingPipeline_data).offset_0xd8 = (longlong *)0x0;
  (this->RayTracingPipeline_data).offset_0xe0 = (longlong *)0x0;
  (this->RayTracingPipeline_data).offset_0xe8 = (longlong *)0x0;
  local_58 = 0;
  local_50 = this;
  FUN_140740c40(&(this->RayTracingPipeline_data).field_0xf0,&local_58,&local_42);
  *(undefined4 *)&local_50[1].RayTracingPipeline_data.offset_0x8 = 0;
  local_50[1].RayTracingPipeline_data.offset_0x10 = param_1;
  local_50[1].RayTracingPipeline_data.offset_0x18 = param_2;
  return;
}

