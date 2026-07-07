ldv::editor::AssetBrowser::AssetBrowser(QWidget *parent)
    : QWidget(parent)
{
    // vtable assignment is compiler/decompiler noise.
    // Base QWidget constructor already ran before this point.

    this->AssetBrowser_data.offset_0x10 = nullptr;

    new (&this->AssetBrowser_data.field_0x18) QString();

    this->AssetBrowser_data.offset_0x30 = nullptr;
    this->AssetBrowser_data.offset_0x38 = nullptr;
    this->AssetBrowser_data.offset_0x40 = nullptr;
    this->AssetBrowser_data.offset_0x48 = -1;
    this->AssetBrowser_data.offset_0x4c = 0;
    this->AssetBrowser_data.offset_0x50 = nullptr;
    this->AssetBrowser_data.offset_0x58 = nullptr;
    this->AssetBrowser_data.offset_0x60 = nullptr;
    this->AssetBrowser_data.offset_0x68 = nullptr;
    this->AssetBrowser_data.offset_0x70 = nullptr;
    this->AssetBrowser_data.offset_0x78 = nullptr;
    this->AssetBrowser_data.offset_0x80 = nullptr;
    this->AssetBrowser_data.offset_0x88 = nullptr;
    this->AssetBrowser_data.offset_0x90 = nullptr;
    this->AssetBrowser_data.offset_0x98 = nullptr;
    this->AssetBrowser_data.offset_0xa0 = nullptr;
    this->AssetBrowser_data.offset_0xa8 = nullptr;

    auto *layout = new QVBoxLayout(this);
    layout->setContentsMargins(0, 0, 0, 0);
    layout->setSpacing(2);

    FUN_1402a1060(this);   // likely creates main browser widgets / toolbar / view
    AssetItemDelegate::AssetItemDelegate_Constructor_or_Destructor(this);
    FUN_1402a1b30(this);   // likely finalizes UI setup / model setup

    auto *watcher = new QFileSystemWatcher(this);
    this->AssetBrowser_data.offset_0xa0 = watcher;

    auto *refreshTimer = new QTimer(this);
    this->AssetBrowser_data.offset_0xa8 = refreshTimer;

    refreshTimer->setSingleShot(true);
    refreshTimer->setInterval(200);

    QObject::connect(
        refreshTimer,
        &QTimer::timeout,
        this,
        &AssetBrowser::FUN_1402a2500
    );

    QObject::connect(
        watcher,
        &QFileSystemWatcher::directoryChanged,
        this,
        [this](const QString &path)
        {
            // Decompiled target: LAB_1402a36d0
            // Likely schedules or performs a refresh when an asset directory changes.
            this->onDirectoryChanged(path);
        }
    );

    FUN_1402a2520(this);   // likely initial scan / populate / refresh
}
