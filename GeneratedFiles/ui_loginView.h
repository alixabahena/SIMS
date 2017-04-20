/********************************************************************************
** Form generated from reading UI file 'loginView.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINVIEW_H
#define UI_LOGINVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginView
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *loginStatus;
    QGroupBox *groupBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *cancelButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *okButton;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *usernameField;
    QSpacerItem *verticalSpacer_2;
    QLineEdit *passwordFIeld;
    QLabel *usernameLabel;
    QLabel *PasswordLabel;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *loginView)
    {
        if (loginView->objectName().isEmpty())
            loginView->setObjectName(QStringLiteral("loginView"));
        loginView->resize(866, 523);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(loginView->sizePolicy().hasHeightForWidth());
        loginView->setSizePolicy(sizePolicy);
        loginView->setMinimumSize(QSize(866, 523));
        loginView->setMaximumSize(QSize(866, 523));
        loginView->setTabShape(QTabWidget::Rounded);
        centralWidget = new QWidget(loginView);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 30, 821, 43));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        loginStatus = new QLabel(centralWidget);
        loginStatus->setObjectName(QStringLiteral("loginStatus"));
        loginStatus->setGeometry(QRect(50, 420, 771, 41));
        loginStatus->setAlignment(Qt::AlignCenter);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(49, 89, 771, 391));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        horizontalLayoutWidget = new QWidget(groupBox);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 240, 741, 71));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        cancelButton = new QPushButton(horizontalLayoutWidget);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(cancelButton->sizePolicy().hasHeightForWidth());
        cancelButton->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setPointSize(9);
        cancelButton->setFont(font1);

        horizontalLayout->addWidget(cancelButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        okButton = new QPushButton(horizontalLayoutWidget);
        okButton->setObjectName(QStringLiteral("okButton"));
        sizePolicy2.setHeightForWidth(okButton->sizePolicy().hasHeightForWidth());
        okButton->setSizePolicy(sizePolicy2);
        okButton->setFont(font1);
        okButton->setAutoDefault(true);

        horizontalLayout->addWidget(okButton);

        verticalLayoutWidget = new QWidget(groupBox);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(220, 30, 451, 171));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        usernameField = new QLineEdit(verticalLayoutWidget);
        usernameField->setObjectName(QStringLiteral("usernameField"));
        sizePolicy2.setHeightForWidth(usernameField->sizePolicy().hasHeightForWidth());
        usernameField->setSizePolicy(sizePolicy2);
        QFont font2;
        font2.setPointSize(12);
        usernameField->setFont(font2);

        verticalLayout->addWidget(usernameField);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        passwordFIeld = new QLineEdit(verticalLayoutWidget);
        passwordFIeld->setObjectName(QStringLiteral("passwordFIeld"));
        sizePolicy2.setHeightForWidth(passwordFIeld->sizePolicy().hasHeightForWidth());
        passwordFIeld->setSizePolicy(sizePolicy2);
        passwordFIeld->setFont(font2);
        passwordFIeld->setEchoMode(QLineEdit::Password);
        passwordFIeld->setClearButtonEnabled(false);

        verticalLayout->addWidget(passwordFIeld);

        usernameLabel = new QLabel(groupBox);
        usernameLabel->setObjectName(QStringLiteral("usernameLabel"));
        usernameLabel->setGeometry(QRect(80, 40, 116, 29));
        usernameLabel->setFont(font2);
        PasswordLabel = new QLabel(groupBox);
        PasswordLabel->setObjectName(QStringLiteral("PasswordLabel"));
        PasswordLabel->setGeometry(QRect(80, 160, 109, 29));
        PasswordLabel->setFont(font2);
        horizontalLayoutWidget->raise();
        verticalLayoutWidget->raise();
        usernameLabel->raise();
        PasswordLabel->raise();
        usernameField->raise();
        loginView->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(loginView);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        statusBar->setSizeGripEnabled(true);
        loginView->setStatusBar(statusBar);
        QWidget::setTabOrder(usernameField, passwordFIeld);
        QWidget::setTabOrder(passwordFIeld, cancelButton);
        QWidget::setTabOrder(cancelButton, okButton);

        retranslateUi(loginView);
        QObject::connect(cancelButton, SIGNAL(clicked()), loginView, SLOT(close()));

        okButton->setDefault(true);


        QMetaObject::connectSlotsByName(loginView);
    } // setupUi

    void retranslateUi(QMainWindow *loginView)
    {
        loginView->setWindowTitle(QApplication::translate("loginView", "Login", Q_NULLPTR));
        label->setText(QApplication::translate("loginView", "Student Information Management System", Q_NULLPTR));
        loginStatus->setText(QString());
        groupBox->setTitle(QApplication::translate("loginView", "Please Login Below:", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("loginView", "Exit", Q_NULLPTR));
        okButton->setText(QApplication::translate("loginView", "Login", Q_NULLPTR));
        usernameLabel->setText(QApplication::translate("loginView", "Username:", Q_NULLPTR));
        PasswordLabel->setText(QApplication::translate("loginView", "Password:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class loginView: public Ui_loginView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINVIEW_H
