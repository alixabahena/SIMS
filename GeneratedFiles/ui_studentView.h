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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_studentView
{
public:
    QLabel *welcomeLabel;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGroupBox *optionsGroupBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *viewScheduleButton;
    QPushButton *manageClassesButton;
    QPushButton *viewClassesButton;
    QPushButton *pushButton;
    QPushButton *logoutButton;
    QWidget *page_2;
    QTableView *scheduleTableView;
    QLabel *scheduleLabel;
    QFrame *line;
    QPushButton *backButton;
    QLabel *usernameLabel;

    void setupUi(QWidget *studentView)
    {
        if (studentView->objectName().isEmpty())
            studentView->setObjectName(QStringLiteral("studentView"));
        studentView->resize(637, 559);
        welcomeLabel = new QLabel(studentView);
        welcomeLabel->setObjectName(QStringLiteral("welcomeLabel"));
        welcomeLabel->setGeometry(QRect(27, 20, 581, 61));
        QFont font;
        font.setPointSize(20);
        welcomeLabel->setFont(font);
        welcomeLabel->setAlignment(Qt::AlignCenter);
        stackedWidget = new QStackedWidget(studentView);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(20, 90, 591, 431));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        optionsGroupBox = new QGroupBox(page);
        optionsGroupBox->setObjectName(QStringLiteral("optionsGroupBox"));
        optionsGroupBox->setGeometry(QRect(10, 30, 581, 391));
        verticalLayoutWidget = new QWidget(optionsGroupBox);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(39, 40, 501, 321));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(15);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        viewScheduleButton = new QPushButton(verticalLayoutWidget);
        viewScheduleButton->setObjectName(QStringLiteral("viewScheduleButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(viewScheduleButton->sizePolicy().hasHeightForWidth());
        viewScheduleButton->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(viewScheduleButton);

        manageClassesButton = new QPushButton(verticalLayoutWidget);
        manageClassesButton->setObjectName(QStringLiteral("manageClassesButton"));
        sizePolicy.setHeightForWidth(manageClassesButton->sizePolicy().hasHeightForWidth());
        manageClassesButton->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(manageClassesButton);

        viewClassesButton = new QPushButton(verticalLayoutWidget);
        viewClassesButton->setObjectName(QStringLiteral("viewClassesButton"));
        sizePolicy.setHeightForWidth(viewClassesButton->sizePolicy().hasHeightForWidth());
        viewClassesButton->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(viewClassesButton);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(pushButton);

        logoutButton = new QPushButton(verticalLayoutWidget);
        logoutButton->setObjectName(QStringLiteral("logoutButton"));
        sizePolicy.setHeightForWidth(logoutButton->sizePolicy().hasHeightForWidth());
        logoutButton->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(logoutButton);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        scheduleTableView = new QTableView(page_2);
        scheduleTableView->setObjectName(QStringLiteral("scheduleTableView"));
        scheduleTableView->setGeometry(QRect(10, 110, 581, 291));
        scheduleLabel = new QLabel(page_2);
        scheduleLabel->setObjectName(QStringLiteral("scheduleLabel"));
        scheduleLabel->setGeometry(QRect(16, 49, 571, 41));
        QFont font1;
        font1.setPointSize(12);
        scheduleLabel->setFont(font1);
        scheduleLabel->setMidLineWidth(4);
        scheduleLabel->setAlignment(Qt::AlignCenter);
        line = new QFrame(page_2);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 80, 591, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        stackedWidget->addWidget(page_2);
        backButton = new QPushButton(studentView);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setEnabled(false);
        backButton->setGeometry(QRect(30, 520, 101, 31));
        usernameLabel = new QLabel(studentView);
        usernameLabel->setObjectName(QStringLiteral("usernameLabel"));
        usernameLabel->setGeometry(QRect(167, 80, 301, 20));
        usernameLabel->setAlignment(Qt::AlignCenter);

        retranslateUi(studentView);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(studentView);
    } // setupUi

    void retranslateUi(QWidget *studentView)
    {
        studentView->setWindowTitle(QApplication::translate("studentView", "studentView", Q_NULLPTR));
        welcomeLabel->setText(QApplication::translate("studentView", "Welcome Student", Q_NULLPTR));
        optionsGroupBox->setTitle(QApplication::translate("studentView", "Options", Q_NULLPTR));
        viewScheduleButton->setText(QApplication::translate("studentView", "View Schedule", Q_NULLPTR));
        manageClassesButton->setText(QApplication::translate("studentView", "Manage Classes", Q_NULLPTR));
        viewClassesButton->setText(QApplication::translate("studentView", "View Classes", Q_NULLPTR));
        pushButton->setText(QApplication::translate("studentView", "Change Password", Q_NULLPTR));
        logoutButton->setText(QApplication::translate("studentView", "Logout", Q_NULLPTR));
        scheduleLabel->setText(QApplication::translate("studentView", "Current Student Semester Schedule", Q_NULLPTR));
        backButton->setText(QApplication::translate("studentView", "Back", Q_NULLPTR));
        usernameLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class studentView: public Ui_studentView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTVIEW_H
