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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
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
    QTextEdit *studentInfoBrowser;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QPushButton *viewScheduleButton;
    QPushButton *manageClassesButton;
    QPushButton *viewClassesButton;
    QPushButton *pushButton;
    QPushButton *logoutButton;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer_2;
    QLabel *scheduleLabel;
    QTableWidget *scheduleTableWidget;
    QSpacerItem *verticalSpacer;
    QFrame *line;
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
        studentInfoBrowser = new QTextEdit(page);
        studentInfoBrowser->setObjectName(QStringLiteral("studentInfoBrowser"));
        studentInfoBrowser->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(studentInfoBrowser->sizePolicy().hasHeightForWidth());
        studentInfoBrowser->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        studentInfoBrowser->setFont(font2);
        studentInfoBrowser->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        studentInfoBrowser->setContextMenuPolicy(Qt::DefaultContextMenu);
        studentInfoBrowser->setFrameShape(QFrame::StyledPanel);
        studentInfoBrowser->setFrameShadow(QFrame::Plain);
        studentInfoBrowser->setReadOnly(true);
        studentInfoBrowser->setTextInteractionFlags(Qt::NoTextInteraction);

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

        manageClassesButton = new QPushButton(page);
        manageClassesButton->setObjectName(QStringLiteral("manageClassesButton"));
        sizePolicy1.setHeightForWidth(manageClassesButton->sizePolicy().hasHeightForWidth());
        manageClassesButton->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(manageClassesButton);

        viewClassesButton = new QPushButton(page);
        viewClassesButton->setObjectName(QStringLiteral("viewClassesButton"));
        sizePolicy1.setHeightForWidth(viewClassesButton->sizePolicy().hasHeightForWidth());
        viewClassesButton->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(viewClassesButton);

        pushButton = new QPushButton(page);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(pushButton);

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

        scheduleTableWidget = new QTableWidget(page_2);
        scheduleTableWidget->setObjectName(QStringLiteral("scheduleTableWidget"));

        verticalLayout_6->addWidget(scheduleTableWidget);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);

        line = new QFrame(page_2);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_6->addWidget(line);


        verticalLayout_7->addLayout(verticalLayout_6);

        stackedWidget->addWidget(page_2);

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
        studentInfoBrowser->setDocumentTitle(QApplication::translate("studentView", "Student Information", Q_NULLPTR));
        viewScheduleButton->setText(QApplication::translate("studentView", "View Schedule", Q_NULLPTR));
        manageClassesButton->setText(QApplication::translate("studentView", "Manage Classes", Q_NULLPTR));
        viewClassesButton->setText(QApplication::translate("studentView", "View Classes", Q_NULLPTR));
        pushButton->setText(QApplication::translate("studentView", "Change Password", Q_NULLPTR));
        logoutButton->setText(QApplication::translate("studentView", "Logout", Q_NULLPTR));
        scheduleLabel->setText(QApplication::translate("studentView", "Current Student Semester Schedule", Q_NULLPTR));
        backButton->setText(QApplication::translate("studentView", "Back", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class studentView: public Ui_studentView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTVIEW_H
