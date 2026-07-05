/**
 * Function: AssetFilterProxy
 * Address:  1402cd260
 * Signature: AssetFilterProxy * __thiscall AssetFilterProxy(AssetFilterProxy * this, QObject * param_1)
 * Body size: 87 bytes
 */


AssetFilterProxy * __thiscall
ldv::editor::AssetFilterProxy::AssetFilterProxy(AssetFilterProxy *this,QObject *param_1)

{
  QSortFilterProxyModel::QSortFilterProxyModel((QSortFilterProxyModel *)this,param_1);
  this->vftablePtr = &vftable;
  (this->AssetFilterProxy_data).offset_0x8 = 0;
  (this->AssetFilterProxy_data).offset_0x10 = 0;
  (this->AssetFilterProxy_data).offset_0x18 = 0;
  QSortFilterProxyModel::setRecursiveFilteringEnabled((QSortFilterProxyModel *)this,false);
  return this;
}

