/**
 * Function: no_compatible_gpu_foundnnluduvo_requires_a_co
 * Address:  1402997d0
 * Signature: undefined no_compatible_gpu_foundnnluduvo_requires_a_co(void)
 * Body size: 658 bytes
 */


undefined8 no_compatible_gpu_foundnnluduvo_requires_a_co(QWidget *param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  double dVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  QWindow *pQVar9;
  VulkanBackend *this;
  uint uVar10;
  uint uVar11;
  VulkanBackend local_88 [4];
  QString local_68 [24];
  int *local_50;
  wchar_t *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  uVar8 = 1;
  if (*(char *)&param_1[1].QPaintDevice == '\0') {
    pQVar9 = QWidget::windowHandle(param_1);
    if (pQVar9 == (QWindow *)0x0) {
      if (*(byte *)(DAT_14151e360 + 0x39) < 9) {
        FUN_140b53500(DAT_14151e360,&PTR_s__opt_actions_runner__work_Platfo_140e02808);
      }
    }
    else {
      dVar3 = QPaintDevice::devicePixelRatio(&param_1->QPaintDevice);
      lVar2 = *(longlong *)&param_1[1].field_0x8;
      uVar11 = (uint)(longlong)
                     ((double)((*(int *)(lVar2 + 0x1c) - *(int *)(lVar2 + 0x14)) + 1) * dVar3);
      if (uVar11 < 2) {
        uVar11 = 1;
      }
      uVar5 = (uint)(longlong)
                    ((double)((*(int *)(lVar2 + 0x20) - *(int *)(lVar2 + 0x18)) + 1) * dVar3);
      uVar10 = 1;
      if (1 < uVar5) {
        uVar10 = uVar5;
      }
      FUN_14059b0b0(local_88,pQVar9);
      local_50 = (int *)0x0;
      local_48 = L"d3d12";
      local_40 = 5;
      QString::QString(local_68,(QArrayDataPointer<char16_t> *)&local_50);
      iVar6 = QString::compare((QString *)&param_1[0xb16].field_0x8,local_68,0);
      QString::~QString(local_68);
      if (local_50 != (int *)0x0) {
        LOCK();
        *local_50 = *local_50 + -1;
        UNLOCK();
        if (*local_50 == 0) {
          free(local_50);
        }
      }
      if (iVar6 == 0) {
        this = (VulkanBackend *)D3D12Backend::D3D12Backend((D3D12Backend *)local_88,0);
      }
      else {
        this = VulkanBackend::VulkanBackend(local_88,0);
      }
      if (this == (VulkanBackend *)0x0) {
        QString::QString(local_68,
                         "No compatible GPU found.\n\nLuduvo requires a compatible Vulkan 1.3 or D3D12 GPU/driver.\nSee launcher.log for details."
                        );
        QString::QString((QString *)&local_50,"Luduvo");
        QMessageBox::critical(param_1,&local_50,local_68,0x400,0);
        QString::~QString((QString *)&local_50);
        QString::~QString(local_68);
      }
      else {
        cVar4 = FUN_14029e7b0(param_1 + 2,this,uVar11,uVar10);
        if (cVar4 != '\0') {
          *(undefined4 *)&param_1[0xb0c].QObject.field_0x4 = 0;
          *(undefined1 *)&param_1[1].QPaintDevice = 1;
          iVar6 = 0;
          if (0 < *(int *)&param_1[0xb17].field_0x8) {
            iVar6 = *(int *)&param_1[0xb17].field_0x8;
          }
          iVar7 = 2;
          if (iVar6 < 2) {
            iVar7 = iVar6;
          }
          *(int *)&param_1[0xb17].field_0x8 = iVar7;
          uVar1 = (&DAT_140dee57c)[(uint)(iVar7 * 0x30)];
          param_1[0xa92].field_0xc = (&DAT_140dee550)[(uint)(iVar7 * 0x30)];
          *(undefined8 *)&param_1[0xa90].QPaintDevice.field_0x4 = 0x3f1d70a43fc00000;
          *(undefined8 *)&param_1[0xa91].QObject.field_0x4 = 0x400000003fba7efa;
          *(undefined8 *)&param_1[0xa91].field_0xc = 0x3fe666663d4ccccd;
          *(undefined8 *)&param_1[0xa91].QPaintDevice.field_0x4 = 0x3f99999a40533333;
          *(undefined8 *)&param_1[0xa92].QObject.field_0x4 = 0x300000003;
          param_1[0xac5].field_0xc = uVar1;
          *(undefined4 *)&param_1[0xaa1].field_0x8 = 1;
          param_1[0xaa1].field_0xc = 1;
          param_1[0xaa1].QPaintDevice = (QPaintDevice)0x418000003d4ccccd;
          *(undefined4 *)&param_1[0xaa2].QObject = 0x3f800000;
          FUN_14009ec70(param_1);
          return 1;
        }
        (*this->vftablePtr->vfunction1)(this,1);
      }
    }
    uVar8 = 0;
  }
  return uVar8;
}

