/********************************************************************************
** Form generated from reading UI file 'facultyView.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FACULTYVIEW_H
#define UI_FACULTYVIEW_H

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

class Ui_facultyView
{
public:
    QLabel *welcomeLabel;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGroupBox *optionsGroupBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *manageCoursesButton;
    QPushButton *viewCoursesButton;
    QPushButton *changePassButton;
    QPushButton *logoutButton_2;
    QLabel *usernameLabel;
    QWidget *page_2;
    QTableView *scheduleTableView;
    QLabel *scheduleLabel;
    QFrame *line;
    QPushButton *backButton;

    void setupUi(QWidget *facultyView)
    {
        if (facultyView->objectName().isEmpty())
            facultyView->setObjectName(QStringLiteral("facultyView"));
        facultyView->resize(636, 558);
        welcomeLabel = new QLabel(facultyView);
        welcomeLabel->setObjectName(QStringLiteral("welcomeLabel"));
        welcomeLabel->setGeometry(QRect(30, 20, 581, 61));
        QFont font;
        font.setPointSize(20);
        welcomeLabel->setFont(font);
        welcomeLabel->setAlignment(Qt::AlignCenter);
        stackedWidget = new QStackedWidget(facultyView);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 70, 591, 431));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        optionsGroupBox = new QGroupBox(page);
        optionsGroupBox->setObjectName(QStringLiteral("optionsGroupBox"));
        optionsGroupBox->setGeometry(QRect(10, 30, 581, 391));
        verticalLayoutWidget = new QWidget(optionsGroupBox);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(39, 40, 511, 321));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        manageCoursesButton = new QPushButton(verticalLayoutWidget);
        manageCoursesButton->setObjectName(QStringLiteral("manageCoursesButton"));

        verticalLayout->addWidget(manageCoursesButton);

        viewCoursesButton = new QPushButton(verticalLayoutWidget);
        viewCoursesButton->setObjectName(QStringLiteral("viewCoursesButton"));

        verticalLayout->addWidget(viewCoursesButton);

        changePassButton = new QPushButton(verticalLayoutWidget);
        changePassButton->setObjectName(QStringLiteral("changePassButton"));

        verticalLayout->addWidget(changePassButton);

        logoutButton_2 = new QPushButton(verticalLayoutWidget);
        logoutButton_2->setObjectName(QStringLiteral("logoutButton_2"));

        verticalLayout->addWidget(logoutButton_2);

        usernameLabel = new QLabel(page);
        usernameLabel->setObjectName(QStringLiteral("usernameLabel"));
        usernameLabel->setGeometry(QRect(160, 10, 301, 20));
        usernameLabel->setAlignment(Qt::AlignCenter);
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
        backButton = new QPushButton(facultyView);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setEnabled(false);
        backButton->setGeometry(QRect(20, 510, 101, 31));

        retranslateUi(facultyView);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(facultyView);
    } // setupUi

    void retranslateUi(QWidget *facultyView)
    {
        facultyView->setWindowTitle(QApplication::translate("facultyView", "Form", Q_NULLPTR));
        welcomeLabel->setText(QApplication::translate("facultyView", "Welcome Faculty", Q_NULLPTR));
        optionsGroupBox->setTitle(QApplication::translate("facultyView", "Options", Q_NULLPTR));
        manageCoursesButton->setText(QApplication::translate("facultyView", "Manage Courses", Q_NULLPTR));
        viewCoursesButton->setText(QApplication::translate("facultyView", "View Courses", Q_NULLPTR));
        changePassButton->setText(QApplication::translate("facultyView", "Change Password", Q_NULLPTR));
        logoutButton_2->setText(QApplication::translate("facultyView", "Logout", Q_NULLPTR));
        usernameLabel->setText(QString());
        scheduleLabel->setText(QApplication::translate("facultyView", "Current Student Semester Schedule", Q_NULLPTR));
        backButton->setText(QApplication::translate("facultyView", "Back", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class facultyView: public Ui_facultyView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACULTYVIEW_H
