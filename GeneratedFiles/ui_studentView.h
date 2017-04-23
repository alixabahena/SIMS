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
#include <QtWidgets/QPlainTextEdit>
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
    QWidget *page;
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
    QWidget *page_2;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer_2;
    QLabel *scheduleLabel;
    QTextEdit *semesterScheduleView;
    QSpacerItem *verticalSpacer;
    QFrame *line;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_8;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_3;
    QLabel *searchLabel;
    QPlainTextEdit *searchClassesInput;
    QComboBox *classesSearchBox;
    QTableView *tableView;
    QFrame *line_3;
    QWidget *page_4;
    QWidget *formLayoutWidget;
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
        studentView->resize(721, 614);
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
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(page->sizePolicy().hasHeightForWidth());
        page->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(page);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        studentInfoBrowser = new QLabel(page);
        studentInfoBrowser->setObjectName(QStringLiteral("studentInfoBrowser"));
        studentInfoBrowser->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(studentInfoBrowser->sizePolicy().hasHeightForWidth());
        studentInfoBrowser->setSizePolicy(sizePolicy1);
        studentInfoBrowser->setFont(font1);
        studentInfoBrowser->setFrameShape(QFrame::StyledPanel);
        studentInfoBrowser->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout->addWidget(studentInfoBrowser);

        horizontalSpacer = new QSpacerItem(35, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(15);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        viewScheduleButton = new QPushButton(page);
        viewScheduleButton->setObjectName(QStringLiteral("viewScheduleButton"));
        sizePolicy1.setHeightForWidth(viewScheduleButton->sizePolicy().hasHeightForWidth());
        viewScheduleButton->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(viewScheduleButton);

        manageScheduleButton = new QPushButton(page);
        manageScheduleButton->setObjectName(QStringLiteral("manageScheduleButton"));
        sizePolicy1.setHeightForWidth(manageScheduleButton->sizePolicy().hasHeightForWidth());
        manageScheduleButton->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(manageScheduleButton);

        viewClassesButton = new QPushButton(page);
        viewClassesButton->setObjectName(QStringLiteral("viewClassesButton"));
        sizePolicy1.setHeightForWidth(viewClassesButton->sizePolicy().hasHeightForWidth());
        viewClassesButton->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(viewClassesButton);

        changePasswordButton = new QPushButton(page);
        changePasswordButton->setObjectName(QStringLiteral("changePasswordButton"));
        sizePolicy1.setHeightForWidth(changePasswordButton->sizePolicy().hasHeightForWidth());
        changePasswordButton->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(changePasswordButton);

        logoutButton = new QPushButton(page);
        logoutButton->setObjectName(QStringLiteral("logoutButton"));
        sizePolicy1.setHeightForWidth(logoutButton->sizePolicy().hasHeightForWidth());
        logoutButton->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(logoutButton);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        sizePolicy.setHeightForWidth(page_2->sizePolicy().hasHeightForWidth());
        page_2->setSizePolicy(sizePolicy);
        verticalLayout_7 = new QVBoxLayout(page_2);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);

        scheduleLabel = new QLabel(page_2);
        scheduleLabel->setObjectName(QStringLiteral("scheduleLabel"));
        scheduleLabel->setFont(font1);
        scheduleLabel->setMidLineWidth(4);
        scheduleLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(scheduleLabel);

        semesterScheduleView = new QTextEdit(page_2);
        semesterScheduleView->setObjectName(QStringLiteral("semesterScheduleView"));
        semesterScheduleView->setEnabled(false);

        verticalLayout_6->addWidget(semesterScheduleView);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);

        line = new QFrame(page_2);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_6->addWidget(line);


        verticalLayout_7->addLayout(verticalLayout_6);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        verticalLayout_8 = new QVBoxLayout(page_3);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(verticalSpacer_3, 2, 1, 1, 1);

        searchLabel = new QLabel(page_3);
        searchLabel->setObjectName(QStringLiteral("searchLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(searchLabel->sizePolicy().hasHeightForWidth());
        searchLabel->setSizePolicy(sizePolicy2);
        QFont font2;
        font2.setPointSize(10);
        searchLabel->setFont(font2);
        searchLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(searchLabel, 0, 0, 1, 1);

        searchClassesInput = new QPlainTextEdit(page_3);
        searchClassesInput->setObjectName(QStringLiteral("searchClassesInput"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(searchClassesInput->sizePolicy().hasHeightForWidth());
        searchClassesInput->setSizePolicy(sizePolicy3);
        searchClassesInput->setMinimumSize(QSize(450, 25));
        searchClassesInput->setMaximumSize(QSize(16777215, 25));
        searchClassesInput->setInputMethodHints(Qt::ImhNone);
        searchClassesInput->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        searchClassesInput->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        gridLayout->addWidget(searchClassesInput, 0, 2, 1, 1);

        classesSearchBox = new QComboBox(page_3);
        classesSearchBox->setObjectName(QStringLiteral("classesSearchBox"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(classesSearchBox->sizePolicy().hasHeightForWidth());
        classesSearchBox->setSizePolicy(sizePolicy4);
        classesSearchBox->setMinimumSize(QSize(150, 0));
        classesSearchBox->setFont(font2);

        gridLayout->addWidget(classesSearchBox, 0, 1, 1, 1);

        tableView = new QTableView(page_3);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout->addWidget(tableView, 3, 0, 1, 3);

        line_3 = new QFrame(page_3);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 1, 0, 1, 3);


        verticalLayout_8->addLayout(gridLayout);

        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        formLayoutWidget = new QWidget(page_4);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 10, 681, 451));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        currentPasswordLabel = new QLabel(formLayoutWidget);
        currentPasswordLabel->setObjectName(QStringLiteral("currentPasswordLabel"));
        currentPasswordLabel->setFont(font1);

        formLayout->setWidget(1, QFormLayout::LabelRole, currentPasswordLabel);

        line_4 = new QFrame(formLayoutWidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        formLayout->setWidget(2, QFormLayout::SpanningRole, line_4);

        newPasswordLabel = new QLabel(formLayoutWidget);
        newPasswordLabel->setObjectName(QStringLiteral("newPasswordLabel"));
        newPasswordLabel->setFont(font1);

        formLayout->setWidget(3, QFormLayout::LabelRole, newPasswordLabel);

        currentPasswordField = new QLineEdit(formLayoutWidget);
        currentPasswordField->setObjectName(QStringLiteral("currentPasswordField"));
        currentPasswordField->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        currentPasswordField->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, currentPasswordField);

        newPasswordField = new QLineEdit(formLayoutWidget);
        newPasswordField->setObjectName(QStringLiteral("newPasswordField"));
        newPasswordField->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        newPasswordField->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(3, QFormLayout::FieldRole, newPasswordField);

        verifyNewPasswordLabel = new QLabel(formLayoutWidget);
        verifyNewPasswordLabel->setObjectName(QStringLiteral("verifyNewPasswordLabel"));
        verifyNewPasswordLabel->setFont(font1);

        formLayout->setWidget(4, QFormLayout::LabelRole, verifyNewPasswordLabel);

        verifyNewPasswordField = new QLineEdit(formLayoutWidget);
        verifyNewPasswordField->setObjectName(QStringLiteral("verifyNewPasswordField"));
        verifyNewPasswordField->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        verifyNewPasswordField->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(4, QFormLayout::FieldRole, verifyNewPasswordField);

        submitButton = new QPushButton(formLayoutWidget);
        submitButton->setObjectName(QStringLiteral("submitButton"));
        submitButton->setFont(font2);

        formLayout->setWidget(5, QFormLayout::FieldRole, submitButton);

        verticalSpacer_4 = new QSpacerItem(0, 150, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(0, QFormLayout::FieldRole, verticalSpacer_4);

        passwordChangeStatusLabel = new QLabel(formLayoutWidget);
        passwordChangeStatusLabel->setObjectName(QStringLiteral("passwordChangeStatusLabel"));
        passwordChangeStatusLabel->setFont(font2);

        formLayout->setWidget(6, QFormLayout::SpanningRole, passwordChangeStatusLabel);

        stackedWidget->addWidget(page_4);

        verticalLayout_2->addWidget(stackedWidget);

        backButton = new QPushButton(studentView);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setEnabled(false);

        verticalLayout_2->addWidget(backButton);


        verticalLayout_5->addLayout(verticalLayout_2);


        retranslateUi(studentView);

        stackedWidget->setCurrentIndex(0);


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
