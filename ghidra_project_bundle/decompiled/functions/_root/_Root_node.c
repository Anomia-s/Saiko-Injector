/**
 * Function: _Root_node
 * Address:  140810c40
 * Signature: _Root_node * __thiscall _Root_node(_Root_node * this, _Root_node_vftable * param_1, _Root_node_vftable * param_2, _Root_node_vftable * param_3, uint param_4)
 * Body size: 293 bytes
 */


_Root_node * __thiscall
std::_Root_node::_Root_node
          (_Root_node *this,_Root_node_vftable *param_1,_Root_node_vftable *param_2,
          _Root_node_vftable *param_3,uint param_4)

{
  _Root_node_vftable *p_Var1;
  uint uVar2;
  undefined4 uVar3;
  
  this->vftablePtr = param_2;
  this[1].vftablePtr = param_2;
  this[2].vftablePtr = param_3;
  this[3].vftablePtr = (_Root_node_vftable *)0x0;
  this[4].vftablePtr = (_Root_node_vftable *)0x0;
  this[5].vftablePtr = (_Root_node_vftable *)0x0;
  this[6].vftablePtr = (_Root_node_vftable *)0x0;
  this[7].vftablePtr = (_Root_node_vftable *)0x0;
  p_Var1 = (_Root_node_vftable *)FUN_140b65d30(0x30);
  *(undefined4 *)&p_Var1[1].vfunction3 = 0x14;
  *(undefined8 *)((longlong)&p_Var1[1].vfunction3 + 4) = 0;
  *(undefined8 *)((longlong)&p_Var1[2].vfunction3 + 4) = 0;
  *(undefined4 *)((longlong)&p_Var1[3].vfunction3 + 4) = 0;
  p_Var1->vfunction3 = (vfunction3 *)&vftable;
  p_Var1[4].vfunction3 = (vfunction3 *)0x0;
  p_Var1[5].vfunction3 = (vfunction3 *)0x0;
  this[8].vftablePtr = p_Var1;
  this[9].vftablePtr = p_Var1;
  *(uint *)&this[10].vftablePtr = param_4;
  this[0xb].vftablePtr = param_1;
  uVar2 = (uint)((param_4 & 0x800) == 0);
  *(uint *)&this[0xc].vftablePtr = uVar2 << 8;
  *(uint *)((longlong)&this[0xc].vftablePtr + 4) = uVar2 << 2;
  this[0xd].vftablePtr = param_1;
  *(uint *)&this[0xe].vftablePtr = param_4;
  if ((param_4 & 0x3f) < 2) {
    *(undefined4 *)&this[0x10].vftablePtr = 0x8775dfb;
  }
  else {
    switch(param_4 & 0x3f) {
    case 2:
      uVar3 = 0x6e000300;
      break;
    default:
      *(undefined4 *)&this[0x10].vftablePtr = 0;
      goto LAB_140810d51;
    case 4:
      uVar3 = 0x7080001b;
      break;
    case 8:
      uVar3 = 0x7181a01b;
      break;
    case 0x10:
      uVar3 = 0x6e080304;
      break;
    case 0x20:
      uVar3 = 0x7088001f;
    }
    *(undefined4 *)&this[0x10].vftablePtr = uVar3;
    *(undefined4 *)((longlong)&p_Var1[1].vfunction3 + 4) = 8;
  }
LAB_140810d51:
  FUN_140810f80();
  return this;
}

