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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminView
{
public:
    QAction *actionStudent_VIew;
    QAction *actionFaculty_VIew;
    QAction *actionLogout;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *welcomeLabel;
    QLabel *usernameLabel;
    QLabel *adminmodifymessage;
    QToolButton *backButton;
    QFrame *line_2;
    QLabel *label;
    QStackedWidget *stackedWidget;
    QWidget *mainPage;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QToolButton *editUsersButton;
    QToolButton *editFacultyButton;
    QToolButton *editStudentsButton;
    QToolButton *editRecordsButton;
    QToolButton *editClassesButton;
    QToolButton *changePasswordButton;
    QToolButton *logoutButton;
    QWidget *viewSchedule;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer_2;
    QLabel *scheduleLabel;
    QTextEdit *semesterScheduleView;
    QSpacerItem *verticalSpacer;
    QFrame *line;
    QWidget *manageSchedule;
    QVBoxLayout *verticalLayout_10;
    QGridLayout *gridLayout_2;
    QTableView *manageClassesView;
    QToolButton *addClassButton;
    QToolButton *removeClassButton;
    QWidget *viewClasses;
    QVBoxLayout *verticalLayout_8;
    QGridLayout *gridLayout;
    QComboBox *classesSearchBox;
    QSpacerItem *verticalSpacer_3;
    QLabel *searchLabel;
    QTableView *classesView;
    QFrame *line_3;
    QLineEdit *searchClassesInput;
    QToolButton *searchButton;
    QWidget *changePassword;
    QVBoxLayout *verticalLayout_9;
    QFormLayout *formLayout;
    QLabel *currentPasswordLabel;
    QLineEdit *currentPasswordField;
    QFrame *line_4;
    QLabel *newPasswordLabel;
    QLineEdit *newPasswordField;
    QLabel *verifyNewPasswordLabel;
    QLineEdit *verifyNewPasswordField;
    QToolButton *submitButton;
    QLabel *passwordChangeStatusLabel;
    QWidget *DBViewer;
    QVBoxLayout *verticalLayout_11;
    QGridLayout *gridLayout_5;
    QTableView *DBView;
    QToolButton *addItemButton;
    QToolButton *removeItemButton;
    QToolButton *saveButton;

    void setupUi(QMainWindow *adminView)
    {
        if (adminView->objectName().isEmpty())
            adminView->setObjectName(QStringLiteral("adminView"));
        adminView->resize(749, 614);
        adminView->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        actionStudent_VIew = new QAction(adminView);
        actionStudent_VIew->setObjectName(QStringLiteral("actionStudent_VIew"));
        actionFaculty_VIew = new QAction(adminView);
        actionFaculty_VIew->setObjectName(QStringLiteral("actionFaculty_VIew"));
        actionLogout = new QAction(adminView);
        actionLogout->setObjectName(QStringLiteral("actionLogout"));
        centralwidget = new QWidget(adminView);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_5 = new QVBoxLayout(centralwidget);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));

        verticalLayout_2->addLayout(verticalLayout_4);

        welcomeLabel = new QLabel(centralwidget);
        welcomeLabel->setObjectName(QStringLiteral("welcomeLabel"));
        QFont font;
        font.setPointSize(20);
        welcomeLabel->setFont(font);
        welcomeLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(welcomeLabel);

        usernameLabel = new QLabel(centralwidget);
        usernameLabel->setObjectName(QStringLiteral("usernameLabel"));
        usernameLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(usernameLabel);

        adminmodifymessage = new QLabel(centralwidget);
        adminmodifymessage->setObjectName(QStringLiteral("adminmodifymessage"));
        adminmodifymessage->setEnabled(true);
        adminmodifymessage->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(adminmodifymessage);

        backButton = new QToolButton(centralwidget);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(backButton->sizePolicy().hasHeightForWidth());
        backButton->setSizePolicy(sizePolicy);
        backButton->setMinimumSize(QSize(80, 20));
        backButton->setStyleSheet(QLatin1String("QToolButton { /* all types of tool button */\n"
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
        backButton->setArrowType(Qt::LeftArrow);

        verticalLayout_2->addWidget(backButton);

        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_2);

        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setPointSize(12);
        font1.setItalic(true);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        mainPage = new QWidget();
        mainPage->setObjectName(QStringLiteral("mainPage"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mainPage->sizePolicy().hasHeightForWidth());
        mainPage->setSizePolicy(sizePolicy1);
        verticalLayout_3 = new QVBoxLayout(mainPage);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(15);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        editUsersButton = new QToolButton(mainPage);
        editUsersButton->setObjectName(QStringLiteral("editUsersButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(editUsersButton->sizePolicy().hasHeightForWidth());
        editUsersButton->setSizePolicy(sizePolicy2);
        editUsersButton->setStyleSheet(QLatin1String("QToolButton { /* all types of tool button */\n"
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

        verticalLayout->addWidget(editUsersButton);

        editFacultyButton = new QToolButton(mainPage);
        editFacultyButton->setObjectName(QStringLiteral("editFacultyButton"));
        editFacultyButton->setEnabled(true);
        sizePolicy2.setHeightForWidth(editFacultyButton->sizePolicy().hasHeightForWidth());
        editFacultyButton->setSizePolicy(sizePolicy2);
        editFacultyButton->setStyleSheet(QLatin1String("QToolButton { /* all types of tool button */\n"
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

        verticalLayout->addWidget(editFacultyButton);

        editStudentsButton = new QToolButton(mainPage);
        editStudentsButton->setObjectName(QStringLiteral("editStudentsButton"));
        sizePolicy2.setHeightForWidth(editStudentsButton->sizePolicy().hasHeightForWidth());
        editStudentsButton->setSizePolicy(sizePolicy2);
        editStudentsButton->setStyleSheet(QLatin1String("QToolButton { /* all types of tool button */\n"
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

        verticalLayout->addWidget(editStudentsButton);

        editRecordsButton = new QToolButton(mainPage);
        editRecordsButton->setObjectName(QStringLiteral("editRecordsButton"));
        sizePolicy2.setHeightForWidth(editRecordsButton->sizePolicy().hasHeightForWidth());
        editRecordsButton->setSizePolicy(sizePolicy2);
        editRecordsButton->setStyleSheet(QLatin1String("QToolButton { /* all types of tool button */\n"
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

        verticalLayout->addWidget(editRecordsButton);

        editClassesButton = new QToolButton(mainPage);
        editClassesButton->setObjectName(QStringLiteral("editClassesButton"));
        sizePolicy2.setHeightForWidth(editClassesButton->sizePolicy().hasHeightForWidth());
        editClassesButton->setSizePolicy(sizePolicy2);
        editClassesButton->setStyleSheet(QLatin1String("QToolButton { /* all types of tool button */\n"
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

        verticalLayout->addWidget(editClassesButton);

        changePasswordButton = new QToolButton(mainPage);
        changePasswordButton->setObjectName(QStringLiteral("changePasswordButton"));
        sizePolicy2.setHeightForWidth(changePasswordButton->sizePolicy().hasHeightForWidth());
        changePasswordButton->setSizePolicy(sizePolicy2);
        changePasswordButton->setStyleSheet(QLatin1String("QToolButton { /* all types of tool button */\n"
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

        verticalLayout->addWidget(changePasswordButton);

        logoutButton = new QToolButton(mainPage);
        logoutButton->setObjectName(QStringLiteral("logoutButton"));
        sizePolicy2.setHeightForWidth(logoutButton->sizePolicy().hasHeightForWidth());
        logoutButton->setSizePolicy(sizePolicy2);
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        logoutButton->setFont(font2);
        logoutButton->setStyleSheet(QLatin1String("QToolButton { /* all types of tool button */\n"
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

        verticalLayout->addWidget(logoutButton);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        stackedWidget->addWidget(mainPage);
        viewSchedule = new QWidget();
        viewSchedule->setObjectName(QStringLiteral("viewSchedule"));
        sizePolicy1.setHeightForWidth(viewSchedule->sizePolicy().hasHeightForWidth());
        viewSchedule->setSizePolicy(sizePolicy1);
        verticalLayout_7 = new QVBoxLayout(viewSchedule);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_6->addItem(verticalSpacer_2);

        scheduleLabel = new QLabel(viewSchedule);
        scheduleLabel->setObjectName(QStringLiteral("scheduleLabel"));
        QFont font3;
        font3.setPointSize(12);
        scheduleLabel->setFont(font3);
        scheduleLabel->setMidLineWidth(4);
        scheduleLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(scheduleLabel);

        semesterScheduleView = new QTextEdit(viewSchedule);
        semesterScheduleView->setObjectName(QStringLiteral("semesterScheduleView"));
        semesterScheduleView->setEnabled(false);
        semesterScheduleView->setFont(font3);
        semesterScheduleView->setStyleSheet(QLatin1String("QScrollBar:horizontal { border: 1px solid black; \n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);}\n"
"\n"
"QScrollBar:vertical { border: 1px solid black; \n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde); }"));

        verticalLayout_6->addWidget(semesterScheduleView);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout_6->addItem(verticalSpacer);

        line = new QFrame(viewSchedule);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_6->addWidget(line);


        verticalLayout_7->addLayout(verticalLayout_6);

        stackedWidget->addWidget(viewSchedule);
        manageSchedule = new QWidget();
        manageSchedule->setObjectName(QStringLiteral("manageSchedule"));
        verticalLayout_10 = new QVBoxLayout(manageSchedule);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        manageClassesView = new QTableView(manageSchedule);
        manageClassesView->setObjectName(QStringLiteral("manageClassesView"));
        manageClassesView->setStyleSheet(QLatin1String("QScrollBar:horizontal { border: 1px solid black; \n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);}\n"
"\n"
"QScrollBar:vertical { border: 1px solid black; \n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde); }"));

        gridLayout_2->addWidget(manageClassesView, 0, 0, 3, 1);

        addClassButton = new QToolButton(manageSchedule);
        addClassButton->setObjectName(QStringLiteral("addClassButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(addClassButton->sizePolicy().hasHeightForWidth());
        addClassButton->setSizePolicy(sizePolicy3);
        addClassButton->setMinimumSize(QSize(0, 30));
        addClassButton->setStyleSheet(QLatin1String("QToolButton { /* all types of tool button */\n"
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

        gridLayout_2->addWidget(addClassButton, 0, 1, 1, 1);

        removeClassButton = new QToolButton(manageSchedule);
        removeClassButton->setObjectName(QStringLiteral("removeClassButton"));
        sizePolicy3.setHeightForWidth(removeClassButton->sizePolicy().hasHeightForWidth());
        removeClassButton->setSizePolicy(sizePolicy3);
        removeClassButton->setMinimumSize(QSize(0, 30));
        removeClassButton->setStyleSheet(QLatin1String("QToolButton { /* all types of tool button */\n"
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

        gridLayout_2->addWidget(removeClassButton, 1, 1, 1, 1);


        verticalLayout_10->addLayout(gridLayout_2);

        stackedWidget->addWidget(manageSchedule);
        viewClasses = new QWidget();
        viewClasses->setObjectName(QStringLiteral("viewClasses"));
        verticalLayout_8 = new QVBoxLayout(viewClasses);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        classesSearchBox = new QComboBox(viewClasses);
        classesSearchBox->setObjectName(QStringLiteral("classesSearchBox"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(200);
        sizePolicy4.setHeightForWidth(classesSearchBox->sizePolicy().hasHeightForWidth());
        classesSearchBox->setSizePolicy(sizePolicy4);
        classesSearchBox->setMinimumSize(QSize(0, 25));
        QFont font4;
        font4.setPointSize(10);
        classesSearchBox->setFont(font4);
        classesSearchBox->setStyleSheet(QLatin1String(" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);"));

        gridLayout->addWidget(classesSearchBox, 0, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(verticalSpacer_3, 2, 1, 1, 1);

        searchLabel = new QLabel(viewClasses);
        searchLabel->setObjectName(QStringLiteral("searchLabel"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(searchLabel->sizePolicy().hasHeightForWidth());
        searchLabel->setSizePolicy(sizePolicy5);
        searchLabel->setFont(font4);
        searchLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(searchLabel, 0, 0, 1, 1);

        classesView = new QTableView(viewClasses);
        classesView->setObjectName(QStringLiteral("classesView"));
        classesView->setStyleSheet(QLatin1String("QScrollBar:horizontal { border: 1px solid black; \n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);}\n"
"\n"
"QScrollBar:vertical { border: 1px solid black; \n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde); }"));

        gridLayout->addWidget(classesView, 3, 0, 1, 4);

        line_3 = new QFrame(viewClasses);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 1, 0, 1, 4);

        searchClassesInput = new QLineEdit(viewClasses);
        searchClassesInput->setObjectName(QStringLiteral("searchClassesInput"));
        sizePolicy5.setHeightForWidth(searchClassesInput->sizePolicy().hasHeightForWidth());
        searchClassesInput->setSizePolicy(sizePolicy5);
        searchClassesInput->setFont(font4);

        gridLayout->addWidget(searchClassesInput, 0, 2, 1, 1);

        searchButton = new QToolButton(viewClasses);
        searchButton->setObjectName(QStringLiteral("searchButton"));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(200);
        sizePolicy6.setHeightForWidth(searchButton->sizePolicy().hasHeightForWidth());
        searchButton->setSizePolicy(sizePolicy6);
        searchButton->setMinimumSize(QSize(25, 25));
        searchButton->setFont(font4);
        searchButton->setStyleSheet(QLatin1String("QToolButton { /* all types of tool button */\n"
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

        gridLayout->addWidget(searchButton, 0, 3, 1, 1);


        verticalLayout_8->addLayout(gridLayout);

        stackedWidget->addWidget(viewClasses);
        changePassword = new QWidget();
        changePassword->setObjectName(QStringLiteral("changePassword"));
        verticalLayout_9 = new QVBoxLayout(changePassword);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        currentPasswordLabel = new QLabel(changePassword);
        currentPasswordLabel->setObjectName(QStringLiteral("currentPasswordLabel"));
        currentPasswordLabel->setFont(font3);

        formLayout->setWidget(0, QFormLayout::LabelRole, currentPasswordLabel);

        currentPasswordField = new QLineEdit(changePassword);
        currentPasswordField->setObjectName(QStringLiteral("currentPasswordField"));
        currentPasswordField->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        currentPasswordField->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(0, QFormLayout::FieldRole, currentPasswordField);

        line_4 = new QFrame(changePassword);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        formLayout->setWidget(1, QFormLayout::SpanningRole, line_4);

        newPasswordLabel = new QLabel(changePassword);
        newPasswordLabel->setObjectName(QStringLiteral("newPasswordLabel"));
        newPasswordLabel->setFont(font3);

        formLayout->setWidget(2, QFormLayout::LabelRole, newPasswordLabel);

        newPasswordField = new QLineEdit(changePassword);
        newPasswordField->setObjectName(QStringLiteral("newPasswordField"));
        newPasswordField->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        newPasswordField->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(2, QFormLayout::FieldRole, newPasswordField);

        verifyNewPasswordLabel = new QLabel(changePassword);
        verifyNewPasswordLabel->setObjectName(QStringLiteral("verifyNewPasswordLabel"));
        verifyNewPasswordLabel->setFont(font3);

        formLayout->setWidget(3, QFormLayout::LabelRole, verifyNewPasswordLabel);

        verifyNewPasswordField = new QLineEdit(changePassword);
        verifyNewPasswordField->setObjectName(QStringLiteral("verifyNewPasswordField"));
        verifyNewPasswordField->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        verifyNewPasswordField->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(3, QFormLayout::FieldRole, verifyNewPasswordField);

        submitButton = new QToolButton(changePassword);
        submitButton->setObjectName(QStringLiteral("submitButton"));
        QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(submitButton->sizePolicy().hasHeightForWidth());
        submitButton->setSizePolicy(sizePolicy7);
        submitButton->setFont(font4);
        submitButton->setStyleSheet(QLatin1String("QToolButton { /* all types of tool button */\n"
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

        formLayout->setWidget(4, QFormLayout::FieldRole, submitButton);

        passwordChangeStatusLabel = new QLabel(changePassword);
        passwordChangeStatusLabel->setObjectName(QStringLiteral("passwordChangeStatusLabel"));
        passwordChangeStatusLabel->setFont(font4);

        formLayout->setWidget(5, QFormLayout::SpanningRole, passwordChangeStatusLabel);


        verticalLayout_9->addLayout(formLayout);

        stackedWidget->addWidget(changePassword);
        DBViewer = new QWidget();
        DBViewer->setObjectName(QStringLiteral("DBViewer"));
        verticalLayout_11 = new QVBoxLayout(DBViewer);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        DBView = new QTableView(DBViewer);
        DBView->setObjectName(QStringLiteral("DBView"));
        DBView->setStyleSheet(QLatin1String("QScrollBar:horizontal { border: 1px solid black; \n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde);}\n"
"\n"
"QScrollBar:vertical { border: 1px solid black; \n"
" background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #f6f7fa, stop: 1 #dadbde); }"));

        gridLayout_5->addWidget(DBView, 0, 0, 5, 1);

        addItemButton = new QToolButton(DBViewer);
        addItemButton->setObjectName(QStringLiteral("addItemButton"));
        QSizePolicy sizePolicy8(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(addItemButton->sizePolicy().hasHeightForWidth());
        addItemButton->setSizePolicy(sizePolicy8);
        addItemButton->setMinimumSize(QSize(80, 30));
        addItemButton->setStyleSheet(QLatin1String("QToolButton { /* all types of tool button */\n"
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

        gridLayout_5->addWidget(addItemButton, 0, 1, 1, 1);

        removeItemButton = new QToolButton(DBViewer);
        removeItemButton->setObjectName(QStringLiteral("removeItemButton"));
        sizePolicy8.setHeightForWidth(removeItemButton->sizePolicy().hasHeightForWidth());
        removeItemButton->setSizePolicy(sizePolicy8);
        removeItemButton->setMinimumSize(QSize(80, 30));
        removeItemButton->setStyleSheet(QLatin1String("QToolButton { /* all types of tool button */\n"
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

        gridLayout_5->addWidget(removeItemButton, 1, 1, 1, 1);

        saveButton = new QToolButton(DBViewer);
        saveButton->setObjectName(QStringLiteral("saveButton"));
        sizePolicy8.setHeightForWidth(saveButton->sizePolicy().hasHeightForWidth());
        saveButton->setSizePolicy(sizePolicy8);
        saveButton->setMinimumSize(QSize(80, 30));
        saveButton->setFont(font2);
        saveButton->setStyleSheet(QLatin1String("QToolButton { /* all types of tool button */\n"
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

        gridLayout_5->addWidget(saveButton, 2, 1, 1, 1);


        verticalLayout_11->addLayout(gridLayout_5);

        stackedWidget->addWidget(DBViewer);

        verticalLayout_2->addWidget(stackedWidget);


        verticalLayout_5->addLayout(verticalLayout_2);

        adminView->setCentralWidget(centralwidget);

        retranslateUi(adminView);

        stackedWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(adminView);
    } // setupUi

    void retranslateUi(QMainWindow *adminView)
    {
        adminView->setWindowTitle(QApplication::translate("adminView", "MainWindow", Q_NULLPTR));
        actionStudent_VIew->setText(QApplication::translate("adminView", "Student VIew", Q_NULLPTR));
        actionFaculty_VIew->setText(QApplication::translate("adminView", "Faculty VIew", Q_NULLPTR));
        actionLogout->setText(QApplication::translate("adminView", "Logout", Q_NULLPTR));
        welcomeLabel->setText(QApplication::translate("adminView", "Admin Portal", Q_NULLPTR));
        usernameLabel->setText(QString());
        adminmodifymessage->setText(QApplication::translate("adminView", "The below functions let an admin fully modify any table by adding, removing, and modifying any record. ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        backButton->setToolTip(QApplication::translate("adminView", "Goes back to main menu.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        backButton->setText(QApplication::translate("adminView", "Back", Q_NULLPTR));
        label->setText(QApplication::translate("adminView", "Administrative Options", Q_NULLPTR));
        editUsersButton->setText(QApplication::translate("adminView", "Edit Users Table", Q_NULLPTR));
        editFacultyButton->setText(QApplication::translate("adminView", "Edit Faculty Table", Q_NULLPTR));
        editStudentsButton->setText(QApplication::translate("adminView", "Edit Students Table", Q_NULLPTR));
        editRecordsButton->setText(QApplication::translate("adminView", "Edit Records Table", Q_NULLPTR));
        editClassesButton->setText(QApplication::translate("adminView", "Edit Classes Table", Q_NULLPTR));
        changePasswordButton->setText(QApplication::translate("adminView", "Change Password", Q_NULLPTR));
        logoutButton->setText(QApplication::translate("adminView", "Logout", Q_NULLPTR));
        scheduleLabel->setText(QApplication::translate("adminView", "Current Student Semester Schedule", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        addClassButton->setToolTip(QApplication::translate("adminView", "Adds a record", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        addClassButton->setText(QApplication::translate("adminView", "Add Class", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        removeClassButton->setToolTip(QApplication::translate("adminView", "Removes a record.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        removeClassButton->setText(QApplication::translate("adminView", "Remove Class", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        classesSearchBox->setToolTip(QApplication::translate("adminView", "Search for classes by any field.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        searchLabel->setText(QApplication::translate("adminView", "Search: ", Q_NULLPTR));
        searchButton->setText(QApplication::translate("adminView", "Submit", Q_NULLPTR));
        currentPasswordLabel->setText(QApplication::translate("adminView", "Current Password: ", Q_NULLPTR));
        newPasswordLabel->setText(QApplication::translate("adminView", "New Password: ", Q_NULLPTR));
        verifyNewPasswordLabel->setText(QApplication::translate("adminView", "Verify New Password: ", Q_NULLPTR));
        submitButton->setText(QApplication::translate("adminView", "Submit", Q_NULLPTR));
        passwordChangeStatusLabel->setText(QString());
#ifndef QT_NO_TOOLTIP
        addItemButton->setToolTip(QApplication::translate("adminView", "Add a record.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        addItemButton->setText(QApplication::translate("adminView", "Add Item", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        removeItemButton->setToolTip(QApplication::translate("adminView", "Removes a record.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        removeItemButton->setText(QApplication::translate("adminView", "Remove Item", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        saveButton->setToolTip(QApplication::translate("adminView", "Saves an added record.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        saveButton->setText(QApplication::translate("adminView", "Save", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class adminView: public Ui_adminView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINVIEW_H
