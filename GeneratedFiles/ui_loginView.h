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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginView
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QFormLayout *formLayout;
    QSpacerItem *verticalSpacer_3;
    QLabel *usernameLabel;
    QLineEdit *usernameField;
    QSpacerItem *verticalSpacer_2;
    QLabel *PasswordLabel;
    QLineEdit *passwordFIeld;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *cancelButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *okButton;
    QFrame *line;
    QLabel *loginStatus;

    void setupUi(QMainWindow *loginView)
    {
        if (loginView->objectName().isEmpty())
            loginView->setObjectName(QStringLiteral("loginView"));
        loginView->resize(472, 259);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(loginView->sizePolicy().hasHeightForWidth());
        loginView->setSizePolicy(sizePolicy);
        loginView->setTabShape(QTabWidget::Rounded);
        centralWidget = new QWidget(loginView);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(1, QFormLayout::FieldRole, verticalSpacer_3);

        usernameLabel = new QLabel(centralWidget);
        usernameLabel->setObjectName(QStringLiteral("usernameLabel"));
        QFont font1;
        font1.setPointSize(10);
        usernameLabel->setFont(font1);

        formLayout->setWidget(2, QFormLayout::LabelRole, usernameLabel);

        usernameField = new QLineEdit(centralWidget);
        usernameField->setObjectName(QStringLiteral("usernameField"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(usernameField->sizePolicy().hasHeightForWidth());
        usernameField->setSizePolicy(sizePolicy1);
        usernameField->setFont(font);

        formLayout->setWidget(2, QFormLayout::FieldRole, usernameField);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(3, QFormLayout::FieldRole, verticalSpacer_2);

        PasswordLabel = new QLabel(centralWidget);
        PasswordLabel->setObjectName(QStringLiteral("PasswordLabel"));
        PasswordLabel->setFont(font1);

        formLayout->setWidget(4, QFormLayout::LabelRole, PasswordLabel);

        passwordFIeld = new QLineEdit(centralWidget);
        passwordFIeld->setObjectName(QStringLiteral("passwordFIeld"));
        sizePolicy1.setHeightForWidth(passwordFIeld->sizePolicy().hasHeightForWidth());
        passwordFIeld->setSizePolicy(sizePolicy1);
        passwordFIeld->setFont(font);
        passwordFIeld->setEchoMode(QLineEdit::Password);
        passwordFIeld->setClearButtonEnabled(false);

        formLayout->setWidget(4, QFormLayout::FieldRole, passwordFIeld);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(5, QFormLayout::FieldRole, verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        cancelButton = new QPushButton(centralWidget);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        sizePolicy1.setHeightForWidth(cancelButton->sizePolicy().hasHeightForWidth());
        cancelButton->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setPointSize(9);
        cancelButton->setFont(font2);

        horizontalLayout->addWidget(cancelButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        okButton = new QPushButton(centralWidget);
        okButton->setObjectName(QStringLiteral("okButton"));
        sizePolicy1.setHeightForWidth(okButton->sizePolicy().hasHeightForWidth());
        okButton->setSizePolicy(sizePolicy1);
        okButton->setFont(font2);
        okButton->setAutoDefault(true);

        horizontalLayout->addWidget(okButton);


        formLayout->setLayout(6, QFormLayout::FieldRole, horizontalLayout);

        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        formLayout->setWidget(0, QFormLayout::SpanningRole, line);

        loginStatus = new QLabel(centralWidget);
        loginStatus->setObjectName(QStringLiteral("loginStatus"));
        loginStatus->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(7, QFormLayout::SpanningRole, loginStatus);


        gridLayout->addLayout(formLayout, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        loginView->setCentralWidget(centralWidget);
        QWidget::setTabOrder(cancelButton, okButton);

        retranslateUi(loginView);
        QObject::connect(cancelButton, SIGNAL(clicked()), loginView, SLOT(close()));
        QObject::connect(passwordFIeld, SIGNAL(returnPressed()), okButton, SLOT(click()));

        okButton->setDefault(true);


        QMetaObject::connectSlotsByName(loginView);
    } // setupUi

    void retranslateUi(QMainWindow *loginView)
    {
        loginView->setWindowTitle(QApplication::translate("loginView", "Login", Q_NULLPTR));
        label->setText(QApplication::translate("loginView", "Student Information Management System", Q_NULLPTR));
        usernameLabel->setText(QApplication::translate("loginView", "Username:", Q_NULLPTR));
        PasswordLabel->setText(QApplication::translate("loginView", "Password:", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("loginView", "Exit", Q_NULLPTR));
        okButton->setText(QApplication::translate("loginView", "Login", Q_NULLPTR));
        loginStatus->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class loginView: public Ui_loginView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINVIEW_H
