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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginView
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QFormLayout *formLayout;
    QFrame *line;
    QSpacerItem *verticalSpacer_3;
    QLabel *usernameLabel;
    QLineEdit *usernameField;
    QSpacerItem *verticalSpacer_2;
    QLabel *PasswordLabel;
    QLineEdit *passwordFIeld;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QToolButton *cancelButton;
    QSpacerItem *horizontalSpacer;
    QToolButton *okButton;
    QCheckBox *rememberusername;
    QLabel *loginStatus;

    void setupUi(QMainWindow *loginView)
    {
        if (loginView->objectName().isEmpty())
            loginView->setObjectName(QStringLiteral("loginView"));
        loginView->resize(663, 442);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(loginView->sizePolicy().hasHeightForWidth());
        loginView->setSizePolicy(sizePolicy);
        loginView->setStyleSheet(QLatin1String("border-color: rgb(85, 170, 255);\n"
"border-top-color: rgb(85, 170, 255);"));
        loginView->setTabShape(QTabWidget::Rounded);
        loginView->setDockNestingEnabled(true);
        centralWidget = new QWidget(loginView);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMinimumSize(QSize(0, 80));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral(""));
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);

        verticalLayout_2->addWidget(label);

        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        formLayout->setWidget(0, QFormLayout::SpanningRole, line);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(1, QFormLayout::FieldRole, verticalSpacer_3);

        usernameLabel = new QLabel(centralWidget);
        usernameLabel->setObjectName(QStringLiteral("usernameLabel"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        usernameLabel->setFont(font1);

        formLayout->setWidget(2, QFormLayout::FieldRole, usernameLabel);

        usernameField = new QLineEdit(centralWidget);
        usernameField->setObjectName(QStringLiteral("usernameField"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(usernameField->sizePolicy().hasHeightForWidth());
        usernameField->setSizePolicy(sizePolicy2);
        QFont font2;
        font2.setPointSize(12);
        usernameField->setFont(font2);

        formLayout->setWidget(3, QFormLayout::FieldRole, usernameField);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(4, QFormLayout::FieldRole, verticalSpacer_2);

        PasswordLabel = new QLabel(centralWidget);
        PasswordLabel->setObjectName(QStringLiteral("PasswordLabel"));
        PasswordLabel->setFont(font1);

        formLayout->setWidget(5, QFormLayout::FieldRole, PasswordLabel);

        passwordFIeld = new QLineEdit(centralWidget);
        passwordFIeld->setObjectName(QStringLiteral("passwordFIeld"));
        sizePolicy2.setHeightForWidth(passwordFIeld->sizePolicy().hasHeightForWidth());
        passwordFIeld->setSizePolicy(sizePolicy2);
        passwordFIeld->setFont(font2);
        passwordFIeld->setEchoMode(QLineEdit::Password);
        passwordFIeld->setClearButtonEnabled(false);

        formLayout->setWidget(6, QFormLayout::FieldRole, passwordFIeld);

        verticalSpacer = new QSpacerItem(80, 30, QSizePolicy::Minimum, QSizePolicy::Preferred);

        formLayout->setItem(8, QFormLayout::FieldRole, verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        cancelButton = new QToolButton(centralWidget);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        sizePolicy2.setHeightForWidth(cancelButton->sizePolicy().hasHeightForWidth());
        cancelButton->setSizePolicy(sizePolicy2);
        cancelButton->setMinimumSize(QSize(0, 40));
        QFont font3;
        font3.setPointSize(9);
        cancelButton->setFont(font3);
        cancelButton->setStyleSheet(QLatin1String("QToolButton { /* all types of tool button */\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"}\n"
"\n"
"QToolButton[popupMode=\"1\"] { /* only for MenuButtonPopup */\n"
"    padding-right: 20px; /* make way for the popup button */\n"
"}\n"
"\n"
"QToolButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"/* the subcontrols below are used only in the MenuButtonPopup mode */\n"
"QToolButton::menu-button {\n"
"    border: 2px solid gray;\n"
"    border-top-right-radius: 6px;\n"
"    border-bottom-right-radius: 6px;\n"
"    /* 16px width + 4px for border = 20px allocated above */\n"
"    width: 16px;\n"
"}\n"
"\n"
"QToolButton::menu-arrow {\n"
"    image: url(downarrow.png);\n"
"}\n"
"\n"
"QToolButton::menu-arrow:open {\n"
"    t"
                        "op: 1px; left: 1px; /* shift it a bit */\n"
"}"));

        horizontalLayout->addWidget(cancelButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        okButton = new QToolButton(centralWidget);
        okButton->setObjectName(QStringLiteral("okButton"));
        sizePolicy2.setHeightForWidth(okButton->sizePolicy().hasHeightForWidth());
        okButton->setSizePolicy(sizePolicy2);
        okButton->setMinimumSize(QSize(0, 40));
        okButton->setFont(font3);
        okButton->setStyleSheet(QLatin1String("QToolButton { /* all types of tool button */\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"}\n"
"\n"
"QToolButton[popupMode=\"1\"] { /* only for MenuButtonPopup */\n"
"    padding-right: 20px; /* make way for the popup button */\n"
"}\n"
"\n"
"QToolButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"/* the subcontrols below are used only in the MenuButtonPopup mode */\n"
"QToolButton::menu-button {\n"
"    border: 2px solid gray;\n"
"    border-top-right-radius: 6px;\n"
"    border-bottom-right-radius: 6px;\n"
"    /* 16px width + 4px for border = 20px allocated above */\n"
"    width: 16px;\n"
"}\n"
"\n"
"QToolButton::menu-arrow {\n"
"    image: url(downarrow.png);\n"
"}\n"
"\n"
"QToolButton::menu-arrow:open {\n"
"    t"
                        "op: 1px; left: 1px; /* shift it a bit */\n"
"}"));

        horizontalLayout->addWidget(okButton);


        formLayout->setLayout(12, QFormLayout::FieldRole, horizontalLayout);

        rememberusername = new QCheckBox(centralWidget);
        rememberusername->setObjectName(QStringLiteral("rememberusername"));

        formLayout->setWidget(9, QFormLayout::FieldRole, rememberusername);

        loginStatus = new QLabel(centralWidget);
        loginStatus->setObjectName(QStringLiteral("loginStatus"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(loginStatus->sizePolicy().hasHeightForWidth());
        loginStatus->setSizePolicy(sizePolicy3);
        loginStatus->setFont(font1);
        loginStatus->setFrameShape(QFrame::NoFrame);
        loginStatus->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(10, QFormLayout::FieldRole, loginStatus);


        verticalLayout_2->addLayout(formLayout);


        verticalLayout->addLayout(verticalLayout_2);

        loginView->setCentralWidget(centralWidget);
        QWidget::setTabOrder(cancelButton, okButton);

        retranslateUi(loginView);
        QObject::connect(usernameField, SIGNAL(returnPressed()), okButton, SLOT(click()));
        QObject::connect(passwordFIeld, SIGNAL(returnPressed()), okButton, SLOT(click()));
        QObject::connect(cancelButton, SIGNAL(clicked()), loginView, SLOT(close()));

        QMetaObject::connectSlotsByName(loginView);
    } // setupUi

    void retranslateUi(QMainWindow *loginView)
    {
        loginView->setWindowTitle(QApplication::translate("loginView", "SIMS Login", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        loginView->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("loginView", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">Student Information Management System<br/>Version 0.90</span></p></body></html>", Q_NULLPTR));
        usernameLabel->setText(QApplication::translate("loginView", "<html><head/><body><p><span style=\" font-weight:400;\">Username: (ex. martinj)</span></p></body></html>", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        usernameField->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        PasswordLabel->setText(QApplication::translate("loginView", "<html><head/><body><p><span style=\" font-weight:400;\">Password:</span></p></body></html>", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("loginView", "Exit", Q_NULLPTR));
        okButton->setText(QApplication::translate("loginView", "Login", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        rememberusername->setToolTip(QApplication::translate("loginView", "Remembers last username successfully logged in with.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        rememberusername->setText(QApplication::translate("loginView", "Remember username?", Q_NULLPTR));
        loginStatus->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class loginView: public Ui_loginView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINVIEW_H
