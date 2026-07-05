// FUN_14009f530 @ 14009f530

QDebug * FUN_14009f530(QDebug *param_1,QDebug *param_2,char *param_3,longlong *param_4)

{
  __uint64 *p_Var1;
  QDebug *pQVar2;
  __uint64 *p_Var3;
  QDebugStateSaver local_58 [8];
  QDebug *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_50 = param_2;
  QDebugStateSaver::QDebugStateSaver(local_58,param_2);
  *(undefined1 *)(*(longlong *)local_50 + 0x30) = 0;
  pQVar2 = QDebug::operator<<(local_50,param_3);
  QTextStream::operator<<(*(QTextStream **)pQVar2,'(');
  if ((*(QTextStream **)pQVar2)[0x30] == (QTextStream)0x1) {
    QTextStream::operator<<(*(QTextStream **)pQVar2,' ');
  }
  p_Var3 = (__uint64 *)*param_4;
  p_Var1 = (__uint64 *)param_4[1];
  if (p_Var3 != p_Var1) {
    QTextStream::operator<<(*(QTextStream **)local_50,*p_Var3);
    if ((*(QTextStream **)local_50)[0x30] == (QTextStream)0x1) {
      QTextStream::operator<<(*(QTextStream **)local_50,' ');
    }
    p_Var3 = p_Var3 + 1;
  }
  for (; p_Var3 != p_Var1; p_Var3 = p_Var3 + 1) {
    pQVar2 = QDebug::operator<<(local_50,", ");
    QTextStream::operator<<(*(QTextStream **)pQVar2,*p_Var3);
    if ((*(QTextStream **)pQVar2)[0x30] == (QTextStream)0x1) {
      QTextStream::operator<<(*(QTextStream **)pQVar2,' ');
    }
  }
  QTextStream::operator<<(*(QTextStream **)local_50,')');
  if ((*(QTextStream **)local_50)[0x30] == (QTextStream)0x1) {
    QTextStream::operator<<(*(QTextStream **)local_50,' ');
  }
  pQVar2 = local_50;
  QDebug::QDebug(param_1,local_50);
  QDebugStateSaver::~QDebugStateSaver(local_58);
  QDebug::~QDebug(pQVar2);
  return param_1;
}


