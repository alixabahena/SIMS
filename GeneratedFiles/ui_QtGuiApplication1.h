/********************************************************************************
** Form generated from reading UI file 'QtGuiApplication1.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTGUIAPPLICATION1_H
#define UI_QTGUIAPPLICATION1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtGuiApplication1Class
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *loginStatus;
    QGroupBox *groupBox;
    QSplitter *splitter_3;
    QLabel *usernameLabel;
    QLabel *PasswordLabel;
    QSplitter *splitter_2;
    QLineEdit *usernameField;
    QLineEdit *passwordFIeld;
    QSplitter *splitter;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtGuiApplication1Class)
    {
        if (QtGuiApplication1Class->objectName().isEmpty())
            QtGuiApplication1Class->setObjectName(QStringLiteral("QtGuiApplication1Class"));
        QtGuiApplication1Class->resize(866, 523);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QtGuiApplication1Class->sizePolicy().hasHeightForWidth());
        QtGuiApplication1Class->setSizePolicy(sizePolicy);
        QtGuiApplication1Class->setMinimumSize(QSize(866, 523));
        QtGuiApplication1Class->setMaximumSize(QSize(866, 523));
        QtGuiApplication1Class->setTabShape(QTabWidget::Rounded);
        centralWidget = new QWidget(QtGuiApplication1Class);
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
        loginStatus->setGeometry(QRect(30, 430, 811, 41));
        loginStatus->setAlignment(Qt::AlignCenter);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(99, 109, 661, 311));
        splitter_3 = new QSplitter(groupBox);
        splitter_3->setObjectName(QStringLiteral("splitter_3"));
        splitter_3->setGeometry(QRect(50, 50, 131, 141));
        splitter_3->setOrientation(Qt::Vertical);
        usernameLabel = new QLabel(splitter_3);
        usernameLabel->setObjectName(QStringLiteral("usernameLabel"));
        QFont font1;
        font1.setPointSize(12);
        usernameLabel->setFont(font1);
        splitter_3->addWidget(usernameLabel);
        PasswordLabel = new QLabel(splitter_3);
        PasswordLabel->setObjectName(QStringLiteral("PasswordLabel"));
        PasswordLabel->setFont(font1);
        splitter_3->addWidget(PasswordLabel);
        splitter_2 = new QSplitter(groupBox);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setGeometry(QRect(203, 49, 441, 141));
        splitter_2->setOrientation(Qt::Vertical);
        usernameField = new QLineEdit(splitter_2);
        usernameField->setObjectName(QStringLiteral("usernameField"));
        usernameField->setFont(font1);
        splitter_2->addWidget(usernameField);
        passwordFIeld = new QLineEdit(splitter_2);
        passwordFIeld->setObjectName(QStringLiteral("passwordFIeld"));
        passwordFIeld->setFont(font1);
        passwordFIeld->setEchoMode(QLineEdit::Password);
        splitter_2->addWidget(passwordFIeld);
        splitter = new QSplitter(groupBox);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(50, 230, 571, 51));
        splitter->setOrientation(Qt::Horizontal);
        splitter->setHandleWidth(100);
        okButton = new QPushButton(splitter);
        okButton->setObjectName(QStringLiteral("okButton"));
        QFont font2;
        font2.setPointSize(9);
        okButton->setFont(font2);
        okButton->setAutoDefault(true);
        splitter->addWidget(okButton);
        cancelButton = new QPushButton(splitter);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setFont(font2);
        splitter->addWidget(cancelButton);
        QtGuiApplication1Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtGuiApplication1Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 866, 31));
        QtGuiApplication1Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtGuiApplication1Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtGuiApplication1Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtGuiApplication1Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        statusBar->setSizeGripEnabled(true);
        QtGuiApplication1Class->setStatusBar(statusBar);

        retranslateUi(QtGuiApplication1Class);
        QObject::connect(cancelButton, SIGNAL(clicked()), QtGuiApplication1Class, SLOT(close()));

        okButton->setDefault(true);


        QMetaObject::connectSlotsByName(QtGuiApplication1Class);
    } // setupUi

    void retranslateUi(QMainWindow *QtGuiApplication1Class)
    {
        QtGuiApplication1Class->setWindowTitle(QApplication::translate("QtGuiApplication1Class", "Login", Q_NULLPTR));
        label->setText(QApplication::translate("QtGuiApplication1Class", "Student Information Management System", Q_NULLPTR));
        loginStatus->setText(QString());
        groupBox->setTitle(QApplication::translate("QtGuiApplication1Class", "Please Login Below:", Q_NULLPTR));
        usernameLabel->setText(QApplication::translate("QtGuiApplication1Class", "Username:", Q_NULLPTR));
        PasswordLabel->setText(QApplication::translate("QtGuiApplication1Class", "Password:", Q_NULLPTR));
        okButton->setText(QApplication::translate("QtGuiApplication1Class", "OK", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("QtGuiApplication1Class", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QtGuiApplication1Class: public Ui_QtGuiApplication1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTGUIAPPLICATION1_H
