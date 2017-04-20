/********************************************************************************
** Form generated from reading UI file 'adminView.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINVIEW_H
#define UI_ADMINVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminView
{
public:
    QAction *actionStudent_VIew;
    QAction *actionFaculty_VIew;
    QAction *actionLogout;
    QWidget *centralwidget;
    QGroupBox *optionsGroupBox;
    QSplitter *splitter;
    QPushButton *viewScheduleButton;
    QPushButton *manageClassesButton;
    QPushButton *viewClassesButton;
    QSplitter *splitter_2;
    QPushButton *viewScheduleButton_2;
    QPushButton *manageClassesButton_2;
    QPushButton *viewClassesButton_2;
    QLabel *welcomeLabel;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *adminView)
    {
        if (adminView->objectName().isEmpty())
            adminView->setObjectName(QStringLiteral("adminView"));
        adminView->resize(800, 600);
        actionStudent_VIew = new QAction(adminView);
        actionStudent_VIew->setObjectName(QStringLiteral("actionStudent_VIew"));
        actionFaculty_VIew = new QAction(adminView);
        actionFaculty_VIew->setObjectName(QStringLiteral("actionFaculty_VIew"));
        actionLogout = new QAction(adminView);
        actionLogout->setObjectName(QStringLiteral("actionLogout"));
        centralwidget = new QWidget(adminView);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        optionsGroupBox = new QGroupBox(centralwidget);
        optionsGroupBox->setObjectName(QStringLiteral("optionsGroupBox"));
        optionsGroupBox->setGeometry(QRect(120, 100, 581, 171));
        splitter = new QSplitter(optionsGroupBox);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(30, 40, 501, 34));
        splitter->setOrientation(Qt::Horizontal);
        viewScheduleButton = new QPushButton(splitter);
        viewScheduleButton->setObjectName(QStringLiteral("viewScheduleButton"));
        splitter->addWidget(viewScheduleButton);
        manageClassesButton = new QPushButton(splitter);
        manageClassesButton->setObjectName(QStringLiteral("manageClassesButton"));
        splitter->addWidget(manageClassesButton);
        viewClassesButton = new QPushButton(splitter);
        viewClassesButton->setObjectName(QStringLiteral("viewClassesButton"));
        splitter->addWidget(viewClassesButton);
        splitter_2 = new QSplitter(optionsGroupBox);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setGeometry(QRect(30, 90, 501, 34));
        splitter_2->setOrientation(Qt::Horizontal);
        viewScheduleButton_2 = new QPushButton(splitter_2);
        viewScheduleButton_2->setObjectName(QStringLiteral("viewScheduleButton_2"));
        splitter_2->addWidget(viewScheduleButton_2);
        manageClassesButton_2 = new QPushButton(splitter_2);
        manageClassesButton_2->setObjectName(QStringLiteral("manageClassesButton_2"));
        splitter_2->addWidget(manageClassesButton_2);
        viewClassesButton_2 = new QPushButton(splitter_2);
        viewClassesButton_2->setObjectName(QStringLiteral("viewClassesButton_2"));
        splitter_2->addWidget(viewClassesButton_2);
        welcomeLabel = new QLabel(centralwidget);
        welcomeLabel->setObjectName(QStringLiteral("welcomeLabel"));
        welcomeLabel->setGeometry(QRect(30, 20, 731, 61));
        QFont font;
        font.setPointSize(20);
        welcomeLabel->setFont(font);
        welcomeLabel->setAlignment(Qt::AlignCenter);
        adminView->setCentralWidget(centralwidget);
        menubar = new QMenuBar(adminView);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 31));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName(QStringLiteral("menuMenu"));
        adminView->setMenuBar(menubar);
        statusbar = new QStatusBar(adminView);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        adminView->setStatusBar(statusbar);

        menubar->addAction(menuMenu->menuAction());
        menuMenu->addSeparator();
        menuMenu->addAction(actionStudent_VIew);
        menuMenu->addAction(actionFaculty_VIew);
        menuMenu->addSeparator();
        menuMenu->addAction(actionLogout);

        retranslateUi(adminView);

        QMetaObject::connectSlotsByName(adminView);
    } // setupUi

    void retranslateUi(QMainWindow *adminView)
    {
        adminView->setWindowTitle(QApplication::translate("adminView", "MainWindow", Q_NULLPTR));
        actionStudent_VIew->setText(QApplication::translate("adminView", "Student VIew", Q_NULLPTR));
        actionFaculty_VIew->setText(QApplication::translate("adminView", "Faculty VIew", Q_NULLPTR));
        actionLogout->setText(QApplication::translate("adminView", "Logout", Q_NULLPTR));
        optionsGroupBox->setTitle(QApplication::translate("adminView", "Options", Q_NULLPTR));
        viewScheduleButton->setText(QApplication::translate("adminView", "View Classes", Q_NULLPTR));
        manageClassesButton->setText(QApplication::translate("adminView", "Add Classes", Q_NULLPTR));
        viewClassesButton->setText(QApplication::translate("adminView", "Remove Classes", Q_NULLPTR));
        viewScheduleButton_2->setText(QApplication::translate("adminView", "View Accounts", Q_NULLPTR));
        manageClassesButton_2->setText(QApplication::translate("adminView", "Add Account", Q_NULLPTR));
        viewClassesButton_2->setText(QApplication::translate("adminView", "Remove Account", Q_NULLPTR));
        welcomeLabel->setText(QApplication::translate("adminView", "Administrator Panel", Q_NULLPTR));
        menuMenu->setTitle(QApplication::translate("adminView", "Menu", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class adminView: public Ui_adminView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINVIEW_H
