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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
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
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *welcomeLabel;
    QLabel *usernameLabel;
    QFrame *line_2;
    QLabel *label;
    QStackedWidget *stackedWidget;
    QWidget *mainPage;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *editUsersButton;
    QPushButton *editFacultyButton;
    QPushButton *editStudentsButton;
    QPushButton *editRecordsButton;
    QPushButton *editClassesButton;
    QPushButton *changePasswordButton;
    QPushButton *logoutButton;
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
    QPushButton *addClassButton;
    QPushButton *removeClassButton;
    QTableView *manageClassesView;
    QWidget *viewClasses;
    QVBoxLayout *verticalLayout_8;
    QGridLayout *gridLayout;
    QComboBox *classesSearchBox;
    QPushButton *searchButton;
    QSpacerItem *verticalSpacer_3;
    QLabel *searchLabel;
    QTableView *classesView;
    QFrame *line_3;
    QLineEdit *searchClassesInput;
    QWidget *changePassword;
    QVBoxLayout *verticalLayout_9;
    QFormLayout *formLayout;
    QLabel *currentPasswordLabel;
    QFrame *line_4;
    QLabel *newPasswordLabel;
    QLineEdit *currentPasswordField;
    QLineEdit *newPasswordField;
    QLabel *verifyNewPasswordLabel;
    QLineEdit *verifyNewPasswordField;
    QPushButton *submitButton;
    QSpacerItem *verticalSpacer_4;
    QLabel *passwordChangeStatusLabel;
    QPushButton *backButton;

    void setupUi(QMainWindow *adminView)
    {
        if (adminView->objectName().isEmpty())
            adminView->setObjectName(QStringLiteral("adminView"));
        adminView->resize(747, 616);
        actionStudent_VIew = new QAction(adminView);
        actionStudent_VIew->setObjectName(QStringLiteral("actionStudent_VIew"));
        actionFaculty_VIew = new QAction(adminView);
        actionFaculty_VIew->setObjectName(QStringLiteral("actionFaculty_VIew"));
        actionLogout = new QAction(adminView);
        actionLogout->setObjectName(QStringLiteral("actionLogout"));
        centralwidget = new QWidget(adminView);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 721, 591));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));

        verticalLayout_2->addLayout(verticalLayout_4);

        welcomeLabel = new QLabel(layoutWidget);
        welcomeLabel->setObjectName(QStringLiteral("welcomeLabel"));
        QFont font;
        font.setPointSize(20);
        welcomeLabel->setFont(font);
        welcomeLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(welcomeLabel);

        usernameLabel = new QLabel(layoutWidget);
        usernameLabel->setObjectName(QStringLiteral("usernameLabel"));
        usernameLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(usernameLabel);

        line_2 = new QFrame(layoutWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_2);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setPointSize(12);
        font1.setItalic(true);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        stackedWidget = new QStackedWidget(layoutWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        mainPage = new QWidget();
        mainPage->setObjectName(QStringLiteral("mainPage"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mainPage->sizePolicy().hasHeightForWidth());
        mainPage->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(mainPage);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(15);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        editUsersButton = new QPushButton(mainPage);
        editUsersButton->setObjectName(QStringLiteral("editUsersButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(editUsersButton->sizePolicy().hasHeightForWidth());
        editUsersButton->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(editUsersButton);

        editFacultyButton = new QPushButton(mainPage);
        editFacultyButton->setObjectName(QStringLiteral("editFacultyButton"));
        sizePolicy1.setHeightForWidth(editFacultyButton->sizePolicy().hasHeightForWidth());
        editFacultyButton->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(editFacultyButton);

        editStudentsButton = new QPushButton(mainPage);
        editStudentsButton->setObjectName(QStringLiteral("editStudentsButton"));
        sizePolicy1.setHeightForWidth(editStudentsButton->sizePolicy().hasHeightForWidth());
        editStudentsButton->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(editStudentsButton);

        editRecordsButton = new QPushButton(mainPage);
        editRecordsButton->setObjectName(QStringLiteral("editRecordsButton"));
        sizePolicy1.setHeightForWidth(editRecordsButton->sizePolicy().hasHeightForWidth());
        editRecordsButton->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(editRecordsButton);

        editClassesButton = new QPushButton(mainPage);
        editClassesButton->setObjectName(QStringLiteral("editClassesButton"));
        sizePolicy1.setHeightForWidth(editClassesButton->sizePolicy().hasHeightForWidth());
        editClassesButton->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(editClassesButton);

        changePasswordButton = new QPushButton(mainPage);
        changePasswordButton->setObjectName(QStringLiteral("changePasswordButton"));
        sizePolicy1.setHeightForWidth(changePasswordButton->sizePolicy().hasHeightForWidth());
        changePasswordButton->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(changePasswordButton);

        logoutButton = new QPushButton(mainPage);
        logoutButton->setObjectName(QStringLiteral("logoutButton"));
        sizePolicy1.setHeightForWidth(logoutButton->sizePolicy().hasHeightForWidth());
        logoutButton->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        logoutButton->setFont(font2);

        verticalLayout->addWidget(logoutButton);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        stackedWidget->addWidget(mainPage);
        viewSchedule = new QWidget();
        viewSchedule->setObjectName(QStringLiteral("viewSchedule"));
        sizePolicy.setHeightForWidth(viewSchedule->sizePolicy().hasHeightForWidth());
        viewSchedule->setSizePolicy(sizePolicy);
        verticalLayout_7 = new QVBoxLayout(viewSchedule);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

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

        verticalLayout_6->addWidget(semesterScheduleView);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

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
        addClassButton = new QPushButton(manageSchedule);
        addClassButton->setObjectName(QStringLiteral("addClassButton"));

        gridLayout_2->addWidget(addClassButton, 0, 1, 1, 1);

        removeClassButton = new QPushButton(manageSchedule);
        removeClassButton->setObjectName(QStringLiteral("removeClassButton"));

        gridLayout_2->addWidget(removeClassButton, 1, 1, 1, 1);

        manageClassesView = new QTableView(manageSchedule);
        manageClassesView->setObjectName(QStringLiteral("manageClassesView"));

        gridLayout_2->addWidget(manageClassesView, 0, 0, 3, 1);


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
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(classesSearchBox->sizePolicy().hasHeightForWidth());
        classesSearchBox->setSizePolicy(sizePolicy2);
        QFont font4;
        font4.setPointSize(10);
        classesSearchBox->setFont(font4);

        gridLayout->addWidget(classesSearchBox, 0, 1, 1, 1);

        searchButton = new QPushButton(viewClasses);
        searchButton->setObjectName(QStringLiteral("searchButton"));
        searchButton->setFont(font4);

        gridLayout->addWidget(searchButton, 0, 3, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(verticalSpacer_3, 2, 1, 1, 1);

        searchLabel = new QLabel(viewClasses);
        searchLabel->setObjectName(QStringLiteral("searchLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(searchLabel->sizePolicy().hasHeightForWidth());
        searchLabel->setSizePolicy(sizePolicy3);
        searchLabel->setFont(font4);
        searchLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(searchLabel, 0, 0, 1, 1);

        classesView = new QTableView(viewClasses);
        classesView->setObjectName(QStringLiteral("classesView"));

        gridLayout->addWidget(classesView, 3, 0, 1, 4);

        line_3 = new QFrame(viewClasses);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 1, 0, 1, 4);

        searchClassesInput = new QLineEdit(viewClasses);
        searchClassesInput->setObjectName(QStringLiteral("searchClassesInput"));
        sizePolicy3.setHeightForWidth(searchClassesInput->sizePolicy().hasHeightForWidth());
        searchClassesInput->setSizePolicy(sizePolicy3);
        searchClassesInput->setFont(font4);

        gridLayout->addWidget(searchClassesInput, 0, 2, 1, 1);


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

        formLayout->setWidget(1, QFormLayout::LabelRole, currentPasswordLabel);

        line_4 = new QFrame(changePassword);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        formLayout->setWidget(2, QFormLayout::SpanningRole, line_4);

        newPasswordLabel = new QLabel(changePassword);
        newPasswordLabel->setObjectName(QStringLiteral("newPasswordLabel"));
        newPasswordLabel->setFont(font3);

        formLayout->setWidget(3, QFormLayout::LabelRole, newPasswordLabel);

        currentPasswordField = new QLineEdit(changePassword);
        currentPasswordField->setObjectName(QStringLiteral("currentPasswordField"));
        currentPasswordField->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        currentPasswordField->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, currentPasswordField);

        newPasswordField = new QLineEdit(changePassword);
        newPasswordField->setObjectName(QStringLiteral("newPasswordField"));
        newPasswordField->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        newPasswordField->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(3, QFormLayout::FieldRole, newPasswordField);

        verifyNewPasswordLabel = new QLabel(changePassword);
        verifyNewPasswordLabel->setObjectName(QStringLiteral("verifyNewPasswordLabel"));
        verifyNewPasswordLabel->setFont(font3);

        formLayout->setWidget(4, QFormLayout::LabelRole, verifyNewPasswordLabel);

        verifyNewPasswordField = new QLineEdit(changePassword);
        verifyNewPasswordField->setObjectName(QStringLiteral("verifyNewPasswordField"));
        verifyNewPasswordField->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        verifyNewPasswordField->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(4, QFormLayout::FieldRole, verifyNewPasswordField);

        submitButton = new QPushButton(changePassword);
        submitButton->setObjectName(QStringLiteral("submitButton"));
        submitButton->setFont(font4);

        formLayout->setWidget(5, QFormLayout::FieldRole, submitButton);

        verticalSpacer_4 = new QSpacerItem(0, 150, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(0, QFormLayout::FieldRole, verticalSpacer_4);

        passwordChangeStatusLabel = new QLabel(changePassword);
        passwordChangeStatusLabel->setObjectName(QStringLiteral("passwordChangeStatusLabel"));
        passwordChangeStatusLabel->setFont(font4);

        formLayout->setWidget(6, QFormLayout::SpanningRole, passwordChangeStatusLabel);


        verticalLayout_9->addLayout(formLayout);

        stackedWidget->addWidget(changePassword);

        verticalLayout_2->addWidget(stackedWidget);

        backButton = new QPushButton(layoutWidget);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setEnabled(false);

        verticalLayout_2->addWidget(backButton);

        adminView->setCentralWidget(centralwidget);

        retranslateUi(adminView);

        stackedWidget->setCurrentIndex(2);


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
        label->setText(QApplication::translate("adminView", "Administrative Options", Q_NULLPTR));
        editUsersButton->setText(QApplication::translate("adminView", "Edit Users Table", Q_NULLPTR));
        editFacultyButton->setText(QApplication::translate("adminView", "Edit Faculty Table", Q_NULLPTR));
        editStudentsButton->setText(QApplication::translate("adminView", "Edit Students Table", Q_NULLPTR));
        editRecordsButton->setText(QApplication::translate("adminView", "Edit Records Table", Q_NULLPTR));
        editClassesButton->setText(QApplication::translate("adminView", "Edit Classes Table", Q_NULLPTR));
        changePasswordButton->setText(QApplication::translate("adminView", "Change Password", Q_NULLPTR));
        logoutButton->setText(QApplication::translate("adminView", "Logout", Q_NULLPTR));
        scheduleLabel->setText(QApplication::translate("adminView", "Current Student Semester Schedule", Q_NULLPTR));
        addClassButton->setText(QApplication::translate("adminView", "Add Class", Q_NULLPTR));
        removeClassButton->setText(QApplication::translate("adminView", "Remove Class", Q_NULLPTR));
        searchButton->setText(QApplication::translate("adminView", "Submit", Q_NULLPTR));
        searchLabel->setText(QApplication::translate("adminView", "Search: ", Q_NULLPTR));
        currentPasswordLabel->setText(QApplication::translate("adminView", "Current Password: ", Q_NULLPTR));
        newPasswordLabel->setText(QApplication::translate("adminView", "New Password: ", Q_NULLPTR));
        verifyNewPasswordLabel->setText(QApplication::translate("adminView", "Verify New Password: ", Q_NULLPTR));
        submitButton->setText(QApplication::translate("adminView", "Submit", Q_NULLPTR));
        passwordChangeStatusLabel->setText(QString());
        backButton->setText(QApplication::translate("adminView", "Back", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class adminView: public Ui_adminView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINVIEW_H
