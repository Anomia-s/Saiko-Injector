/**
 * Function: AssetFileModel
 * Address:  1402cd610
 * Signature: AssetFileModel * __thiscall AssetFileModel(AssetFileModel * this, QObject * param_1)
 * Body size: 128 bytes
 */
ldv::editor::AssetFileModel::AssetFileModel(QObject *parent)
    : QAbstractListModel(parent)
{
    // vtable assignment is compiler/decompiler noise.

    new (&this->AssetFileModel_data.field_0x8) QString();

    this->AssetFileModel_data.offset_0x20 = nullptr;
    this->AssetFileModel_data.offset_0x28 = nullptr;
    this->AssetFileModel_data.offset_0x30 = nullptr;
    this->AssetFileModel_data.offset_0x38 = nullptr;

    new (&this->AssetFileModel_data.field_0x40) QCollator();

    auto *collator =
        reinterpret_cast<QCollator *>(&this->AssetFileModel_data.field_0x40);

    collator->setCaseSensitivity(Qt::CaseInsensitive);
    collator->setNumericMode(true);
}
