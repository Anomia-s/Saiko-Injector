ldv::editor::AccountWidget::AccountWidget(void *accountManager, QWidget *parent)
    : QWidget(parent)
{
    // vtable assignments are compiler/decompiler noise.

    this->AccountWidget_data.offset_0x10 = accountManager;

    this->AccountWidget_data.offset_0x18 = nullptr; // avatar/icon QLabel
    this->AccountWidget_data.offset_0x20 = nullptr; // username/account QLabel
    this->AccountWidget_data.offset_0x28 = nullptr; // Sign In QPushButton
    this->AccountWidget_data.offset_0x30 = nullptr; // Sign Out QPushButton
    this->AccountWidget_data.offset_0x38 = nullptr;
    this->AccountWidget_data.offset_0x40 = nullptr;
    this->AccountWidget_data.offset_0x48 = nullptr;

    auto *layout = new QHBoxLayout(this);
    layout->setContentsMargins(8, 0, 8, 0);
    layout->setSpacing(6);

    auto *avatarLabel = new QLabel(nullptr, nullptr);
    this->AccountWidget_data.offset_0x18 = avatarLabel;

    avatarLabel->setFixedSize(24, 24);
    avatarLabel->setScaledContents(true);
    avatarLabel->setVisible(false);

    layout->addWidget(avatarLabel);

    auto *nameLabel = new QLabel(nullptr);
    this->AccountWidget_data.offset_0x20 = nameLabel;

    nameLabel->setStyleSheet("font-weight: bold; color: palette(text);");
    nameLabel->setVisible(false);

    layout->addWidget(nameLabel);

    auto *signInButton = new QPushButton("Sign In");
    this->AccountWidget_data.offset_0x28 = signInButton;

    layout->addWidget(signInButton);

    auto *signOutButton = new QPushButton("Sign Out");
    this->AccountWidget_data.offset_0x30 = signOutButton;

    signOutButton->setVisible(false);

    layout->addWidget(signOutButton);

    QObject::connect(
        signInButton,
        &QPushButton::clicked,
        this,
        &AccountWidget::onSignInClicked
    );

    QObject::connect(
        signOutButton,
        &QPushButton::clicked,
        this,
        &AccountWidget::onSignOutClicked
    );

    this->refreshAccountState();
}
