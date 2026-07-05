/**
 * Function: std_vector
 * Address:  14009f700
 * Signature: undefined std_vector(void)
 * Body size: 187 bytes
 */


int std_vector(void)

{
  undefined *puVar1;
  int iVar2;
  size_t sVar3;
  QByteArray *pQVar4;
  QByteArray local_40 [24];
  undefined8 local_28;
  
  puVar1 = PTR_s_qulonglong_1414f4328;
  local_28 = 0xfffffffffffffffe;
  iVar2 = DAT_14151ef54;
  if (DAT_14151ef54 == 0) {
    if (PTR_s_qulonglong_1414f4328 == (undefined *)0x0) {
      sVar3 = 0;
    }
    else {
      sVar3 = strlen(PTR_s_qulonglong_1414f4328);
    }
    QByteArray::QByteArray(local_40);
    QByteArray::reserve(local_40,sVar3 + 0xf);
    pQVar4 = QByteArray::append(local_40,"std::vector",0xb);
    pQVar4 = QByteArray::append(pQVar4,'<');
    QByteArray::append(pQVar4,puVar1,sVar3);
    QByteArray::append(local_40,'>');
    iVar2 = std_vectorqulonglong(local_40);
    DAT_14151ef54 = iVar2;
    QByteArray::~QByteArray(local_40);
  }
  return iVar2;
}

