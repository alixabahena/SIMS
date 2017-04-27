/********************************************************************************
** Form generated from reading UI file 'studentView.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTVIEW_H
#define UI_STUDENTVIEW_H

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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_studentView
{
public:
    QVBoxLayout *verticalLayout_5;
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
    QLabel *studentInfoBrowser;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QPushButton *viewScheduleButton;
    QPushButton *manageScheduleButton;
    QPushButton *viewClassesButton;
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
    QLabel *crnLabel;
    QPushButton *removeClassButton;
    QPushButton *addClassButton;
    QLineEdit *crnAddRemoveLine;
    QFrame *line_5;
    QTableView *manageClassesView;
    QLabel *addRemoveClassLabel;
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

    void setupUi(QWidget *studentView)
    {
        if (studentView->objectName().isEmpty())
            studentView->setObjectName(QStringLiteral("studentView"));
        studentView->resize(747, 614);
        verticalLayout_5 = new QVBoxLayout(studentView);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));

        verticalLayout_2->addLayout(verticalLayout_4);

        welcomeLabel = new QLabel(studentView);
        welcomeLabel->setObjectName(QStringLiteral("welcomeLabel"));
        QFont font;
        font.setPointSize(20);
        welcomeLabel->setFont(font);
        welcomeLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(welcomeLabel);

        usernameLabel = new QLabel(studentView);
        usernameLabel->setObjectName(QStringLiteral("usernameLabel"));
        usernameLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(usernameLabel);

        line_2 = new QFrame(studentView);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_2);

        label = new QLabel(studentView);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setPointSize(12);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        stackedWidget = new QStackedWidget(studentView);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        mainPage = new QWidget();
        mainPage->setObjectName(QStringLiteral("mainPage"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mainPage->sizePolicy().hasHeightForWidth());
        mainPage->setSizePolicy(sizePolicy1);
        verticalLayout_3 = new QVBoxLayout(mainPage);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        studentInfoBrowser = new QLabel(mainPage);
        studentInfoBrowser->setObjectName(QStringLiteral("studentInfoBrowser"));
        studentInfoBrowser->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(studentInfoBrowser->sizePolicy().hasHeightForWidth());
        studentInfoBrowser->setSizePolicy(sizePolicy2);
        studentInfoBrowser->setFont(font1);
        studentInfoBrowser->setFrameShape(QFrame::StyledPanel);
        studentInfoBrowser->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout->addWidget(studentInfoBrowser);

        horizontalSpacer = new QSpacerItem(35, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(15);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        viewScheduleButton = new QPushButton(mainPage);
        viewScheduleButton->setObjectName(QStringLiteral("viewScheduleButton"));
        sizePolicy2.setHeightForWidth(viewScheduleButton->sizePolicy().hasHeightForWidth());
        viewScheduleButton->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(viewScheduleButton);

        manageScheduleButton = new QPushButton(mainPage);
        manageScheduleButton->setObjectName(QStringLiteral("manageScheduleButton"));
        sizePolicy2.setHeightForWidth(manageScheduleButton->sizePolicy().hasHeightForWidth());
        manageScheduleButton->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(manageScheduleButton);

        viewClassesButton = new QPushButton(mainPage);
        viewClassesButton->setObjectName(QStringLiteral("viewClassesButton"));
        sizePolicy2.setHeightForWidth(viewClassesButton->sizePolicy().hasHeightForWidth());
        viewClassesButton->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(viewClassesButton);

        changePasswordButton = new QPushButton(mainPage);
        changePasswordButton->setObjectName(QStringLiteral("changePasswordButton"));
        sizePolicy2.setHeightForWidth(changePasswordButton->sizePolicy().hasHeightForWidth());
        changePasswordButton->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(changePasswordButton);

        logoutButton = new QPushButton(mainPage);
        logoutButton->setObjectName(QStringLiteral("logoutButton"));
        sizePolicy2.setHeightForWidth(logoutButton->sizePolicy().hasHeightForWidth());
        logoutButton->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(logoutButton);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        stackedWidget->addWidget(mainPage);
        viewSchedule = new QWidget();
        viewSchedule->setObjectName(QStringLiteral("viewSchedule"));
        sizePolicy1.setHeightForWidth(viewSchedule->sizePolicy().hasHeightForWidth());
        viewSchedule->setSizePolicy(sizePolicy1);
        verticalLayout_7 = new QVBoxLayout(viewSchedule);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);

        scheduleLabel = new QLabel(viewSchedule);
        scheduleLabel->setObjectName(QStringLiteral("scheduleLabel"));
        scheduleLabel->setFont(font1);
        scheduleLabel->setMidLineWidth(4);
        scheduleLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(scheduleLabel);

        semesterScheduleView = new QTextEdit(viewSchedule);
        semesterScheduleView->setObjectName(QStringLiteral("semesterScheduleView"));
        semesterScheduleView->setEnabled(false);

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
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(25);
        gridLayout_2->setVerticalSpacing(15);
        crnLabel = new QLabel(manageSchedule);
        crnLabel->setObjectName(QStringLiteral("crnLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(crnLabel->sizePolicy().hasHeightForWidth());
        crnLabel->setSizePolicy(sizePolicy3);
        QFont font2;
        font2.setPointSize(10);
        crnLabel->setFont(font2);

        gridLayout_2->addWidget(crnLabel, 0, 0, 1, 1);

        removeClassButton = new QPushButton(manageSchedule);
        removeClassButton->setObjectName(QStringLiteral("removeClassButton"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(removeClassButton->sizePolicy().hasHeightForWidth());
        removeClassButton->setSizePolicy(sizePolicy4);
        removeClassButton->setMinimumSize(QSize(200, 0));

        gridLayout_2->addWidget(removeClassButton, 0, 3, 1, 1);

        addClassButton = new QPushButton(manageSchedule);
        addClassButton->setObjectName(QStringLiteral("addClassButton"));
        sizePolicy4.setHeightForWidth(addClassButton->sizePolicy().hasHeightForWidth());
        addClassButton->setSizePolicy(sizePolicy4);
        addClassButton->setMinimumSize(QSize(200, 0));

        gridLayout_2->addWidget(addClassButton, 0, 2, 1, 1);

        crnAddRemoveLine = new QLineEdit(manageSchedule);
        crnAddRemoveLine->setObjectName(QStringLiteral("crnAddRemoveLine"));
        sizePolicy4.setHeightForWidth(crnAddRemoveLine->sizePolicy().hasHeightForWidth());
        crnAddRemoveLine->setSizePolicy(sizePolicy4);
        crnAddRemoveLine->setFont(font2);

        gridLayout_2->addWidget(crnAddRemoveLine, 0, 1, 1, 1);

        line_5 = new QFrame(manageSchedule);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_5, 2, 0, 1, 4);

        manageClassesView = new QTableView(manageSchedule);
        manageClassesView->setObjectName(QStringLiteral("manageClassesView"));
        QSizePolicy sizePolicy5(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(manageClassesView->sizePolicy().hasHeightForWidth());
        manageClassesView->setSizePolicy(sizePolicy5);

        gridLayout_2->addWidget(manageClassesView, 3, 0, 6, 4);

        addRemoveClassLabel = new QLabel(manageSchedule);
        addRemoveClassLabel->setObjectName(QStringLiteral("addRemoveClassLabel"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(addRemoveClassLabel->sizePolicy().hasHeightForWidth());
        addRemoveClassLabel->setSizePolicy(sizePolicy6);
        addRemoveClassLabel->setFont(font2);
        addRemoveClassLabel->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(addRemoveClassLabel, 1, 0, 1, 4);


        verticalLayout_10->addLayout(gridLayout_2);

        stackedWidget->addWidget(manageSchedule);
        viewClasses = new QWidget();
        viewClasses->setObjectName(QStringLiteral("viewClasses"));
        verticalLayout_8 = new QVBoxLayout(viewClasses);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        classesSearchBox = new QComboBox(viewClasses);
        classesSearchBox->setObjectName(QStringLiteral("classesSearchBox"));
        QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(classesSearchBox->sizePolicy().hasHeightForWidth());
        classesSearchBox->setSizePolicy(sizePolicy7);
        classesSearchBox->setFont(font2);

        gridLayout->addWidget(classesSearchBox, 0, 1, 1, 1);

        searchButton = new QPushButton(viewClasses);
        searchButton->setObjectName(QStringLiteral("searchButton"));
        searchButton->setFont(font2);

        gridLayout->addWidget(searchButton, 0, 3, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(verticalSpacer_3, 2, 1, 1, 1);

        searchLabel = new QLabel(viewClasses);
        searchLabel->setObjectName(QStringLiteral("searchLabel"));
        QSizePolicy sizePolicy8(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(searchLabel->sizePolicy().hasHeightForWidth());
        searchLabel->setSizePolicy(sizePolicy8);
        searchLabel->setFont(font2);
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
        sizePolicy8.setHeightForWidth(searchClassesInput->sizePolicy().hasHeightForWidth());
        searchClassesInput->setSizePolicy(sizePolicy8);
        searchClassesInput->setFont(font2);

        gridLayout->addWidget(searchClassesInput, 0, 2, 1, 1);


        verticalLayout_8->addLayout(gridLayout);

        stackedWidget->addWidget(viewClasses);
        changePassword = new QWidget();
        changePassword->setObjectName(QStringLiteral("changePassword"));
        verticalLayout_9 = new QVBoxLayout(changePassword);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        currentPasswordLabel = new QLabel(changePassword);
        currentPasswordLabel->setObjectName(QStringLiteral("currentPasswordLabel"));
        currentPasswordLabel->setFont(font1);

        formLayout->setWidget(1, QFormLayout::LabelRole, currentPasswordLabel);

        line_4 = new QFrame(changePassword);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        formLayout->setWidget(2, QFormLayout::SpanningRole, line_4);

        newPasswordLabel = new QLabel(changePassword);
        newPasswordLabel->setObjectName(QStringLiteral("newPasswordLabel"));
        newPasswordLabel->setFont(font1);

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
        verifyNewPasswordLabel->setFont(font1);

        formLayout->setWidget(4, QFormLayout::LabelRole, verifyNewPasswordLabel);

        verifyNewPasswordField = new QLineEdit(changePassword);
        verifyNewPasswordField->setObjectName(QStringLiteral("verifyNewPasswordField"));
        verifyNewPasswordField->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        verifyNewPasswordField->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(4, QFormLayout::FieldRole, verifyNewPasswordField);

        submitButton = new QPushButton(changePassword);
        submitButton->setObjectName(QStringLiteral("submitButton"));
        submitButton->setFont(font2);

        formLayout->setWidget(5, QFormLayout::FieldRole, submitButton);

        verticalSpacer_4 = new QSpacerItem(0, 150, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(0, QFormLayout::FieldRole, verticalSpacer_4);

        passwordChangeStatusLabel = new QLabel(changePassword);
        passwordChangeStatusLabel->setObjectName(QStringLiteral("passwordChangeStatusLabel"));
        passwordChangeStatusLabel->setFont(font2);
        passwordChangeStatusLabel->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(6, QFormLayout::SpanningRole, passwordChangeStatusLabel);


        verticalLayout_9->addLayout(formLayout);

        stackedWidget->addWidget(changePassword);

        verticalLayout_2->addWidget(stackedWidget);

        backButton = new QPushButton(studentView);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setEnabled(false);

        verticalLayout_2->addWidget(backButton);


        verticalLayout_5->addLayout(verticalLayout_2);


        retranslateUi(studentView);
        QObject::connect(searchClassesInput, SIGNAL(returnPressed()), searchButton, SLOT(click()));
        QObject::connect(verifyNewPasswordField, SIGNAL(returnPressed()), submitButton, SLOT(click()));

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(studentView);
    } // setupUi

    void retranslateUi(QWidget *studentView)
    {
        studentView->setWindowTitle(QApplication::translate("studentView", "Student Portal", Q_NULLPTR));
        welcomeLabel->setText(QApplication::translate("studentView", "Student Portal", Q_NULLPTR));
        usernameLabel->setText(QString());
        label->setText(QApplication::translate("studentView", "Student Information and Options", Q_NULLPTR));
        studentInfoBrowser->setText(QString());
        viewScheduleButton->setText(QApplication::translate("studentView", "View Schedule", Q_NULLPTR));
        manageScheduleButton->setText(QApplication::translate("studentView", "Manage Schedule", Q_NULLPTR));
        viewClassesButton->setText(QApplication::translate("studentView", "View Classes", Q_NULLPTR));
        changePasswordButton->setText(QApplication::translate("studentView", "Change Password", Q_NULLPTR));
        logoutButton->setText(QApplication::translate("studentView", "Logout", Q_NULLPTR));
        scheduleLabel->setText(QApplication::translate("studentView", "Current Student Semester Schedule", Q_NULLPTR));
        crnLabel->setText(QApplication::translate("studentView", "CRN:", Q_NULLPTR));
        removeClassButton->setText(QApplication::translate("studentView", "Remove Class", Q_NULLPTR));
        addClassButton->setText(QApplication::translate("studentView", "Add Class", Q_NULLPTR));
        addRemoveClassLabel->setText(QString());
        searchButton->setText(QApplication::translate("studentView", "Submit", Q_NULLPTR));
        searchLabel->setText(QApplication::translate("studentView", "Search: ", Q_NULLPTR));
        currentPasswordLabel->setText(QApplication::translate("studentView", "Current Password: ", Q_NULLPTR));
        newPasswordLabel->setText(QApplication::translate("studentView", "New Password: ", Q_NULLPTR));
        verifyNewPasswordLabel->setText(QApplication::translate("studentView", "Verify New Password: ", Q_NULLPTR));
        submitButton->setText(QApplication::translate("studentView", "Submit", Q_NULLPTR));
        passwordChangeStatusLabel->setText(QString());
        backButton->setText(QApplication::translate("studentView", "Back", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class studentView: public Ui_studentView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTVIEW_H
