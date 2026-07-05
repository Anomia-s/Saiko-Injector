/**
 * Function: lightingconfigclocktime_f32latitude_f32ambien
 * Address:  1401fd520
 * Signature: undefined lightingconfigclocktime_f32latitude_f32ambien(void)
 * Body size: 4430 bytes
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void lightingconfigclocktime_f32latitude_f32ambien(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ushort *puVar4;
  longlong lVar5;
  
  lVar5 = 0;
  memset(&DAT_1416b62e0,0,0x888);
  uVar3 = DAT_14151f5d8;
  _DAT_1416b6300 = thunk_FUN_1406df2c0("Position{x:f32,y:f32,z:f32}",0x1b,0);
  uVar1 = DAT_14151f5e0;
  _DAT_1416b62e0 = uVar3;
  _DAT_1416b62e8 = 0xc000c0001;
  puVar4 = &DAT_1416b62e8;
  _DAT_1416b62f0 = FUN_1401fe680;
  _DAT_1416b62f8 = &LAB_1401fe740;
  _DAT_1416b6328 = thunk_FUN_1406df2c0("Rotation{x:f32,y:f32,z:f32,w:f32}",0x21,0);
  uVar2 = DAT_14151f600;
  _DAT_1416b6308 = uVar1;
  _DAT_1416b6310 = 0x1000100002;
  _DAT_1416b6318 = FUN_1401fe7e0;
  _DAT_1416b6320 = &LAB_1401fe8d0;
  _DAT_1416b6350 = thunk_FUN_1406df2c0("Scale{x:f32,y:f32,z:f32}",0x18,0);
  uVar3 = DAT_14151f5f8;
  _DAT_1416b6330 = uVar2;
  _DAT_1416b6338 = 0xc000c0003;
  _DAT_1416b6340 = FUN_1401fe680;
  _DAT_1416b6348 = &LAB_1401fe740;
  _DAT_1416b6378 = thunk_FUN_1406df2c0("Name{value:u8[64]}",0x12,0);
  uVar1 = DAT_14151f608;
  _DAT_1416b6358 = uVar3;
  _DAT_1416b6360 = 0x4000400004;
  _DAT_1416b6368 = FUN_1401fe9a0;
  _DAT_1416b6370 = &LAB_1401fea00;
  _DAT_1416b63a0 = thunk_FUN_1406df2c0("Velocity{x:f32,y:f32,z:f32}",0x1b,0);
  uVar3 = DAT_14151f6b0;
  _DAT_1416b6380 = uVar1;
  _DAT_1416b6388 = 0xc000c0005;
  _DAT_1416b6390 = FUN_1401fe680;
  _DAT_1416b6398 = &LAB_1401fe740;
  _DAT_1416b63c8 = thunk_FUN_1406df2c0("BoxShape{}",10,0);
  uVar1 = DAT_14151f6b8;
  _DAT_1416b63a8 = uVar3;
  _DAT_1416b63b0 = 0x100010000000a;
  _DAT_1416b63b8 = httplib::ClientImpl::vfunction4;
  _DAT_1416b63c0 = httplib::ClientImpl::vfunction4;
  _DAT_1416b63f0 = thunk_FUN_1406df2c0("SphereShape{}",0xd,0);
  uVar3 = DAT_14151f6c0;
  _DAT_1416b63d0 = uVar1;
  _DAT_1416b63d8 = 0x100010000000b;
  _DAT_1416b63e0 = httplib::ClientImpl::vfunction4;
  _DAT_1416b63e8 = httplib::ClientImpl::vfunction4;
  _DAT_1416b6418 = thunk_FUN_1406df2c0("CylinderShape{}",0xf,0);
  uVar1 = DAT_14151f6c8;
  _DAT_1416b63f8 = uVar3;
  _DAT_1416b6400 = 0x100010000000c;
  _DAT_1416b6408 = httplib::ClientImpl::vfunction4;
  _DAT_1416b6410 = httplib::ClientImpl::vfunction4;
  _DAT_1416b6440 = thunk_FUN_1406df2c0("ConeShape{}",0xb,0);
  uVar2 = DAT_14151f6d0;
  _DAT_1416b6420 = uVar1;
  _DAT_1416b6428 = 0x100010000000d;
  _DAT_1416b6430 = httplib::ClientImpl::vfunction4;
  _DAT_1416b6438 = httplib::ClientImpl::vfunction4;
  _DAT_1416b6468 = thunk_FUN_1406df2c0("WedgeShape{}",0xc,0);
  uVar3 = DAT_14151f618;
  _DAT_1416b6448 = uVar2;
  _DAT_1416b6450 = 0x100010000000e;
  _DAT_1416b6458 = httplib::ClientImpl::vfunction4;
  _DAT_1416b6460 = httplib::ClientImpl::vfunction4;
  _DAT_1416b6490 = thunk_FUN_1406df2c0("RigidBody{friction:f32,restitution:f32,density:f32}",0x33,0)
  ;
  uVar1 = DAT_14151f620;
  _DAT_1416b6470 = uVar3;
  _DAT_1416b6478 = 0xc000c0014;
  _DAT_1416b6480 = FUN_1401fe680;
  _DAT_1416b6488 = &LAB_1401fe740;
  _DAT_1416b64b8 = thunk_FUN_1406df2c0("Anchored{}",10,0);
  uVar2 = DAT_14151f6e8;
  _DAT_1416b6498 = uVar1;
  _DAT_1416b64a0 = 0x1000100000015;
  _DAT_1416b64a8 = httplib::ClientImpl::vfunction4;
  _DAT_1416b64b0 = httplib::ClientImpl::vfunction4;
  _DAT_1416b64e0 = thunk_FUN_1406df2c0("Locked{}",8,0);
  uVar3 = DAT_14151f668;
  _DAT_1416b64c0 = uVar2;
  _DAT_1416b64c8 = 0x1000100000016;
  _DAT_1416b64d0 = httplib::ClientImpl::vfunction4;
  _DAT_1416b64d8 = httplib::ClientImpl::vfunction4;
  _DAT_1416b6508 = thunk_FUN_1406df2c0("BrickColor{r:f32,g:f32,b:f32}",0x1d,0);
  uVar1 = DAT_14151f670;
  _DAT_1416b64e8 = uVar3;
  _DAT_1416b64f0 = 0xc000c001e;
  _DAT_1416b64f8 = FUN_1401fe680;
  _DAT_1416b6500 = &LAB_1401fe740;
  _DAT_1416b6530 = thunk_FUN_1406df2c0("Transparency{value:f32}",0x17,0);
  uVar3 = DAT_14151f680;
  _DAT_1416b6510 = uVar1;
  _DAT_1416b6518 = 0x40004001f;
  _DAT_1416b6520 = FUN_1401fea50;
  _DAT_1416b6528 = &LAB_1401feaa0;
  _DAT_1416b6558 = thunk_FUN_1406df2c0("SurfaceMaterial{type:u64}",0x19,0);
  uVar1 = DAT_14151f688;
  _DAT_1416b6538 = uVar3;
  _DAT_1416b6540 = 0x100080020;
  _DAT_1416b6548 = FUN_1401feae0;
  _DAT_1416b6550 = &LAB_1401feb20;
  _DAT_1416b6580 = thunk_FUN_1406df2c0("Mesh{id:MeshID,sx:f32,sy:f32,sz:f32}",0x24,0);
  uVar3 = DAT_14151f690;
  _DAT_1416b6560 = uVar1;
  _DAT_1416b6568 = 0x1800140021;
  _DAT_1416b6570 = FUN_1401feb60;
  _DAT_1416b6578 = &LAB_1401fec50;
  _DAT_1416b65a8 =
       thunk_FUN_1406df2c0("SurfaceAppearance{albedo:TextureID,normal:TextureID,metallic_roughness:TextureID,occlusion:TextureID,emissive:TextureID}"
                           ,0x78,0);
  uVar1 = DAT_14151f698;
  _DAT_1416b6588 = uVar3;
  _DAT_1416b6590 = 0x2800280022;
  _DAT_1416b6598 = &LAB_1401fed20;
  _DAT_1416b65a0 = &LAB_1401fed30;
  _DAT_1416b65d0 =
       thunk_FUN_1406df2c0("SoundEmitter{clip:AudioID,volume:f32,range:f32,loop:u8,playing:u8}",0x42
                           ,0);
  uVar2 = DAT_14151f6d8;
  _DAT_1416b65b0 = uVar1;
  _DAT_1416b65b8 = 0x1800120028;
  _DAT_1416b65c0 = &LAB_1401fee20;
  _DAT_1416b65c8 = &LAB_1401fee30;
  _DAT_1416b65f8 = thunk_FUN_1406df2c0("SpawnPoint{}",0xc,0);
  uVar3 = DAT_14151f5e8;
  _DAT_1416b65d8 = uVar2;
  _DAT_1416b65e0 = 0x1000100000032;
  _DAT_1416b65e8 = httplib::ClientImpl::vfunction4;
  _DAT_1416b65f0 = httplib::ClientImpl::vfunction4;
  _DAT_1416b6620 = thunk_FUN_1406df2c0("NetworkID{value:u64}",0x14,0);
  uVar1 = DAT_14151f5f0;
  _DAT_1416b6600 = uVar3;
  _DAT_1416b6608 = 0x80008003c;
  _DAT_1416b6610 = FUN_1401fef10;
  _DAT_1416b6618 = &LAB_1401fef50;
  _DAT_1416b6648 = thunk_FUN_1406df2c0("StableId{value:u64}",0x13,0);
  uVar3 = DAT_14151f6e0;
  _DAT_1416b6628 = uVar1;
  _DAT_1416b6630 = 0x800080078;
  _DAT_1416b6638 = FUN_1401fef10;
  _DAT_1416b6640 = &LAB_1401fef50;
  _DAT_1416b6670 = thunk_FUN_1406df2c0("Character{}",0xb,0);
  uVar1 = DAT_14151f6f0;
  _DAT_1416b6650 = uVar3;
  _DAT_1416b6658 = 0x1000100000050;
  _DAT_1416b6660 = httplib::ClientImpl::vfunction4;
  _DAT_1416b6668 = httplib::ClientImpl::vfunction4;
  _DAT_1416b6698 =
       thunk_FUN_1406df2c0("Humanoid{health:f32,maxHealth:f32,walkSpeed:f32,jumpPower:f32,hipHeight:f32}"
                           ,0x4c,0);
  uVar3 = DAT_14151f6f8;
  _DAT_1416b6678 = uVar1;
  _DAT_1416b6680 = 0x1c00140051;
  _DAT_1416b6688 = &LAB_1401fef90;
  _DAT_1416b6690 = &LAB_1401fefa0;
  _DAT_1416b66c0 =
       thunk_FUN_1406df2c0("HumanoidState{current:u8,previous:u8,timer:f32,no_floor_timer:f32,launch_vx:f32,launch_vz:f32,tilt_dot:f32}"
                           ,0x6b,0);
  uVar1 = DAT_14151f708;
  _DAT_1416b66a0 = uVar3;
  _DAT_1416b66a8 = 0x1800160052;
  _DAT_1416b66b0 = &LAB_1401ff0a0;
  _DAT_1416b66b8 = &LAB_1401ff0b0;
  _DAT_1416b66e8 = thunk_FUN_1406df2c0("AutoRotate{enabled:u8}",0x16,0);
  uVar3 = DAT_14151f738;
  _DAT_1416b66c8 = uVar1;
  _DAT_1416b66d0 = 0x100010053;
  _DAT_1416b66d8 = FUN_1401ff1f0;
  _DAT_1416b66e0 = &LAB_1401ff230;
  _DAT_1416b6710 = thunk_FUN_1406df2c0("BodyPart{type:u8}",0x11,0);
  uVar1 = DAT_14151f758;
  _DAT_1416b66f0 = uVar3;
  _DAT_1416b66f8 = 0x100010054;
  _DAT_1416b6700 = FUN_1401ff1f0;
  _DAT_1416b6708 = &LAB_1401ff260;
  _DAT_1416b6738 =
       thunk_FUN_1406df2c0("CharacterAppearance{rig:RigID,body0:MeshID,body1:MeshID,body2:MeshID,body3:MeshID,body4:MeshID,body5:MeshID,face:TextureID,shirt:TextureID,pants:TextureID}"
                           ,0x9b,0);
  uVar3 = DAT_14151f768;
  _DAT_1416b6718 = uVar1;
  _DAT_1416b6720 = 0x5000500055;
  _DAT_1416b6728 = &LAB_1401ff280;
  _DAT_1416b6730 = &LAB_1401ff290;
  _DAT_1416b6760 = thunk_FUN_1406df2c0("Player{user_id:i64,display_name:u8[64],is_admin:u8}",0x33,0)
  ;
  uVar1 = DAT_14151f770;
  _DAT_1416b6740 = uVar3;
  _DAT_1416b6748 = 0x5000490056;
  _DAT_1416b6750 = FUN_1401ff2a0;
  _DAT_1416b6758 = &LAB_1401ff360;
  _DAT_1416b6788 =
       thunk_FUN_1406df2c0("Leaderstats{names:u8[64],v0:i64,v1:i64,v2:i64,v3:i64,count:u8}",0x3e,0);
  uVar3 = DAT_14151f778;
  _DAT_1416b6768 = uVar1;
  _DAT_1416b6770 = 0x57;
  _DAT_1416b6772 = 0x61;
  _DAT_1416b6774 = 0x68;
  DAT_1416b6776 = 0;
  DAT_1416b6777 = 0;
  _DAT_1416b6778 = &LAB_1401ff410;
  _DAT_1416b6780 = &LAB_1401ff420;
  _DAT_1416b67b0 = thunk_FUN_1406df2c0("PlayerTeam{name:u8[24],r:f32,g:f32,b:f32}",0x29,0);
  uVar1 = DAT_14151f780;
  _DAT_1416b6790 = uVar3;
  _DAT_1416b6798 = 0x58;
  _DAT_1416b679a = 0x24;
  _DAT_1416b679c = 0x24;
  DAT_1416b679e = 0;
  DAT_1416b679f = 0;
  _DAT_1416b67a0 = FUN_1401ff550;
  _DAT_1416b67a8 = &LAB_1401ff640;
  _DAT_1416b67d8 = thunk_FUN_1406df2c0("Tool{name:u8[32],icon:u64,equipped:u8}",0x26,0);
  uVar3 = DAT_14151f748;
  _DAT_1416b67b8 = uVar1;
  _DAT_1416b67c0 = 0x59;
  _DAT_1416b67c2 = 0x29;
  _DAT_1416b67c4 = 0x30;
  DAT_1416b67c6 = 0;
  DAT_1416b67c7 = 0;
  _DAT_1416b67c8 = FUN_1401ff720;
  _DAT_1416b67d0 = &LAB_1401ff7d0;
  _DAT_1416b6800 = thunk_FUN_1406df2c0("Attachment{slot:u8}",0x13,0);
  uVar1 = DAT_14151f750;
  _DAT_1416b67e0 = uVar3;
  _DAT_1416b67e8 = 0x82;
  _DAT_1416b67ea = 1;
  _DAT_1416b67ec = 1;
  DAT_1416b67ee = 0;
  DAT_1416b67ef = 0;
  _DAT_1416b67f0 = FUN_1401ff1f0;
  _DAT_1416b67f8 = &LAB_1401ff260;
  _DAT_1416b6828 = thunk_FUN_1406df2c0("AccessoryRoot{slot:u8}",0x16,0);
  uVar3 = DAT_1416dfb08;
  _DAT_1416b6808 = uVar1;
  _DAT_1416b6810 = 0x83;
  _DAT_1416b6812 = 1;
  _DAT_1416b6814 = 1;
  DAT_1416b6816 = 0;
  DAT_1416b6817 = 0;
  _DAT_1416b6818 = FUN_1401ff1f0;
  _DAT_1416b6820 = &LAB_1401ff260;
  _DAT_1416b6850 =
       thunk_FUN_1406df2c0("UITransform2D{pos:{x:{s:f32,o:f32},y:{s:f32,o:f32}},size:{x:{s:f32,o:f32},y:{s:f32,o:f32}},anchor_x:f32,anchor_y:f32,rotation:f32,z_index:i16}"
                           ,0x8e,0);
  uVar1 = DAT_1416dfb10;
  _DAT_1416b6830 = uVar3;
  _DAT_1416b6838 = 0x8c;
  _DAT_1416b683a = 0x2e;
  _DAT_1416b683c = 0x30;
  DAT_1416b683e = 0;
  DAT_1416b683f = 0;
  _DAT_1416b6840 = &LAB_1401ff860;
  _DAT_1416b6848 = &LAB_1401ff870;
  _DAT_1416b6878 = thunk_FUN_1406df2c0("UIVisible{value:u8}",0x13,0);
  uVar3 = DAT_1416dfb18;
  _DAT_1416b6858 = uVar1;
  _DAT_1416b6860 = 0x8d;
  _DAT_1416b6862 = 1;
  _DAT_1416b6864 = 1;
  DAT_1416b6866 = 0;
  DAT_1416b6867 = 0;
  _DAT_1416b6868 = FUN_1401ff1f0;
  _DAT_1416b6870 = &LAB_1401ff260;
  _DAT_1416b68a0 =
       thunk_FUN_1406df2c0("UIFrame{fill:{r:f32,g:f32,b:f32,a:f32},border_color:{r:f32,g:f32,b:f32,a:f32},border_width:f32,corner_radius:f32,clips_descendants:u8}"
                           ,0x86,0);
  uVar1 = DAT_1416dfb20;
  _DAT_1416b6880 = uVar3;
  _DAT_1416b6888 = 0x8e;
  _DAT_1416b688a = 0x29;
  _DAT_1416b688c = 0x2c;
  DAT_1416b688e = 0;
  DAT_1416b688f = 0;
  _DAT_1416b6890 = &LAB_1401ff880;
  _DAT_1416b6898 = &LAB_1401ff890;
  _DAT_1416b68c8 =
       thunk_FUN_1406df2c0("UIText{text:u8[128],font_size:f32,color:{r:f32,g:f32,b:f32,a:f32},outline_color:{r:f32,g:f32,b:f32,a:f32},outline_width:f32,h_align:u8,v_align:u8}"
                           ,0x92,0);
  uVar3 = DAT_1416dfb28;
  _DAT_1416b68a8 = uVar1;
  _DAT_1416b68b0 = 0x8f;
  _DAT_1416b68b2 = 0xaa;
  _DAT_1416b68b4 = 0xac;
  DAT_1416b68b6 = 0;
  DAT_1416b68b7 = 0;
  _DAT_1416b68b8 = &LAB_1401ff8a0;
  _DAT_1416b68c0 = &LAB_1401ff8b0;
  _DAT_1416b68f0 =
       thunk_FUN_1406df2c0("UITextInput{placeholder:u8[64],max_length:u32,cursor_color:{r:f32,g:f32,b:f32,a:f32},password:u8}"
                           ,0x61,0);
  uVar1 = DAT_1416dfb30;
  _DAT_1416b68d0 = uVar3;
  _DAT_1416b68d8 = 0x90;
  _DAT_1416b68da = 0x55;
  _DAT_1416b68dc = 0x58;
  DAT_1416b68de = 0;
  DAT_1416b68df = 0;
  _DAT_1416b68e0 = &LAB_1401ff8c0;
  _DAT_1416b68e8 = &LAB_1401ff8d0;
  _DAT_1416b6918 = thunk_FUN_1406df2c0("UIRoot{}",8,0);
  uVar2 = DAT_1416dfb38;
  _DAT_1416b68f8 = uVar1;
  _DAT_1416b6900 = 0x91;
  _DAT_1416b6902 = 0;
  _DAT_1416b6904 = 1;
  DAT_1416b6906 = 1;
  DAT_1416b6907 = 0;
  _DAT_1416b6908 = httplib::ClientImpl::vfunction4;
  _DAT_1416b6910 = httplib::ClientImpl::vfunction4;
  _DAT_1416b6940 = thunk_FUN_1406df2c0("UIClickable{}",0xd,0);
  uVar3 = DAT_14151f6a0;
  _DAT_1416b6920 = uVar2;
  _DAT_1416b6928 = 0x92;
  _DAT_1416b692a = 0;
  _DAT_1416b692c = 1;
  DAT_1416b692e = 1;
  DAT_1416b692f = 0;
  _DAT_1416b6930 = httplib::ClientImpl::vfunction4;
  _DAT_1416b6938 = httplib::ClientImpl::vfunction4;
  _DAT_1416b6968 =
       thunk_FUN_1406df2c0("PointLight{r:f32,g:f32,b:f32,intensity:f32,range:f32,castShadows:u8}",
                           0x44,0);
  uVar1 = DAT_14151f6a8;
  _DAT_1416b6948 = uVar3;
  _DAT_1416b6950 = 100;
  _DAT_1416b6952 = 0x15;
  _DAT_1416b6954 = 0x18;
  DAT_1416b6956 = 0;
  DAT_1416b6957 = 0;
  _DAT_1416b6958 = &LAB_1401ffa50;
  _DAT_1416b6960 = &LAB_1401ffa60;
  _DAT_1416b6990 =
       thunk_FUN_1406df2c0("SpotLight{r:f32,g:f32,b:f32,intensity:f32,range:f32,innerAngle:f32,outerAngle:f32,castShadows:u8}"
                           ,0x61,0);
  uVar3 = DAT_14151f7b8;
  _DAT_1416b6970 = uVar1;
  _DAT_1416b6978 = 0x65;
  _DAT_1416b697a = 0x1d;
  _DAT_1416b697c = 0x20;
  DAT_1416b697e = 0;
  DAT_1416b697f = 0;
  _DAT_1416b6980 = &LAB_1401ffb80;
  _DAT_1416b6988 = &LAB_1401ffb90;
  _DAT_1416b69b8 =
       thunk_FUN_1406df2c0("LightingConfig{clockTime:f32,latitude:f32,ambient:f32,globalShadows:u8,sunR:f32,sunG:f32,sunB:f32,sunIntensity:f32}"
                           ,0x73,0);
  uVar1 = DAT_14151f798;
  _DAT_1416b6998 = uVar3;
  _DAT_1416b69a0 = 0x6e;
  _DAT_1416b69a2 = 0x1d;
  _DAT_1416b69a4 = 0x20;
  DAT_1416b69a6 = 0;
  DAT_1416b69a7 = 1;
  _DAT_1416b69a8 = &LAB_1401ffba0;
  _DAT_1416b69b0 = &LAB_1401ffbb0;
  uVar3 = 0;
  _DAT_1416b69e0 =
       thunk_FUN_1406df2c0("LocalTransform{ox:f32,oy:f32,oz:f32,rx:f32,ry:f32,rz:f32,rw:f32}",0x40,0
                          );
  _DAT_1416b69c0 = uVar1;
  _DAT_1416b69c8 = 6;
  _DAT_1416b69ca = 0x1c;
  _DAT_1416b69cc = 0x1c;
  DAT_1416b69ce = 0;
  DAT_1416b69cf = 0;
  _DAT_1416b69d0 = &LAB_1401ffbc0;
  _DAT_1416b69d8 = &LAB_1401ffbd0;
  _DAT_1416b69e8 = DAT_14151f710;
  _DAT_1416b69f0 = 0;
  _DAT_1416b69f2 = 0;
  _DAT_1416b69f4 = 4;
  _DAT_1416b69f6 = 0;
  uRam00000001416b69fe = 0;
  _DAT_1416b6a00 = 0;
  uRam00000001416b6a06 = 0;
  uRam00000001416b6a08 = 0;
  _DAT_1416b6a10 = DAT_14151f7a8;
  _DAT_1416b6a18 = 0;
  _DAT_1416b6a1a = 0;
  _DAT_1416b6a1c = 0x148;
  uRam00000001416b6a2e = 0;
  uRam00000001416b6a30 = 0;
  _DAT_1416b6a1e = 0;
  uRam00000001416b6a26 = 0;
  _DAT_1416b6a28 = 0;
  _DAT_1416b6a38 = DAT_14151f7a0;
  _DAT_1416b6a40 = 0;
  _DAT_1416b6a44 = 0x10;
  uRam00000001416b6a56 = 0;
  uRam00000001416b6a58 = 0;
  _DAT_1416b6a46 = 0;
  uRam00000001416b6a4e = 0;
  _DAT_1416b6a50 = 0;
  memset(&DAT_1416b6a60,(int)CONCAT71((int7)((ulonglong)uVar3 >> 8),0xff),0x101);
  do {
    if (0xfeff < (ushort)(*puVar4 - 0x101)) {
      (&DAT_1416b6a60)[*puVar4] = (char)lVar5;
    }
    if (0xfeff < (ushort)(puVar4[0x14] - 0x101)) {
      (&DAT_1416b6a60)[puVar4[0x14]] = (char)lVar5 + '\x01';
    }
    lVar5 = lVar5 + 2;
    puVar4 = puVar4 + 0x28;
  } while (lVar5 != 0x30);
  return;
}

