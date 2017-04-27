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
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QFormLayout *formLayout;
    QFrame *line;
    QSpacerItem *verticalSpacer_3;
    QLineEdit *usernameField;
    QSpacerItem *verticalSpacer_2;
    QLineEdit *passwordFIeld;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *cancelButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *okButton;
    QLabel *loginStatus;
    QLabel *PasswordLabel;
    QLabel *usernameLabel;

    void setupUi(QMainWindow *loginView)
    {
        if (loginView->objectName().isEmpty())
            loginView->setObjectName(QStringLiteral("loginView"));
        loginView->resize(485, 363);
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
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
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

        usernameField = new QLineEdit(centralWidget);
        usernameField->setObjectName(QStringLiteral("usernameField"));
        sizePolicy1.setHeightForWidth(usernameField->sizePolicy().hasHeightForWidth());
        usernameField->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(12);
        usernameField->setFont(font1);

        formLayout->setWidget(3, QFormLayout::FieldRole, usernameField);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(4, QFormLayout::FieldRole, verticalSpacer_2);

        passwordFIeld = new QLineEdit(centralWidget);
        passwordFIeld->setObjectName(QStringLiteral("passwordFIeld"));
        sizePolicy1.setHeightForWidth(passwordFIeld->sizePolicy().hasHeightForWidth());
        passwordFIeld->setSizePolicy(sizePolicy1);
        passwordFIeld->setFont(font1);
        passwordFIeld->setEchoMode(QLineEdit::Password);
        passwordFIeld->setClearButtonEnabled(false);

        formLayout->setWidget(6, QFormLayout::FieldRole, passwordFIeld);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(7, QFormLayout::FieldRole, verticalSpacer);

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


        formLayout->setLayout(8, QFormLayout::FieldRole, horizontalLayout);

        loginStatus = new QLabel(centralWidget);
        loginStatus->setObjectName(QStringLiteral("loginStatus"));
        loginStatus->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(9, QFormLayout::SpanningRole, loginStatus);

        PasswordLabel = new QLabel(centralWidget);
        PasswordLabel->setObjectName(QStringLiteral("PasswordLabel"));
        QFont font3;
        font3.setPointSize(10);
        PasswordLabel->setFont(font3);

        formLayout->setWidget(5, QFormLayout::FieldRole, PasswordLabel);

        usernameLabel = new QLabel(centralWidget);
        usernameLabel->setObjectName(QStringLiteral("usernameLabel"));
        usernameLabel->setFont(font3);

        formLayout->setWidget(2, QFormLayout::FieldRole, usernameLabel);


        verticalLayout_2->addLayout(formLayout);


        verticalLayout->addLayout(verticalLayout_2);

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
        cancelButton->setText(QApplication::translate("loginView", "Exit", Q_NULLPTR));
        okButton->setText(QApplication::translate("loginView", "Login", Q_NULLPTR));
        loginStatus->setText(QString());
        PasswordLabel->setText(QApplication::translate("loginView", "Password:", Q_NULLPTR));
        usernameLabel->setText(QApplication::translate("loginView", "Username:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class loginView: public Ui_loginView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINVIEW_H
