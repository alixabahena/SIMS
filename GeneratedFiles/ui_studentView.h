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
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_studentView
{
public:
    QLabel *welcomeLabel;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGroupBox *optionsGroupBox;
    QSplitter *splitter;
    QPushButton *viewScheduleButton;
    QPushButton *manageClassesButton;
    QPushButton *viewClassesButton;
    QPushButton *logoutButton;
    QWidget *page_2;
    QTableView *scheduleTableView;
    QLabel *scheduleLabel;
    QFrame *line;
    QPushButton *backButton;

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
        splitter = new QSplitter(optionsGroupBox);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(30, 40, 531, 331));
        splitter->setOrientation(Qt::Vertical);
        splitter->setHandleWidth(30);
        viewScheduleButton = new QPushButton(splitter);
        viewScheduleButton->setObjectName(QStringLiteral("viewScheduleButton"));
        splitter->addWidget(viewScheduleButton);
        manageClassesButton = new QPushButton(splitter);
        manageClassesButton->setObjectName(QStringLiteral("manageClassesButton"));
        splitter->addWidget(manageClassesButton);
        viewClassesButton = new QPushButton(splitter);
        viewClassesButton->setObjectName(QStringLiteral("viewClassesButton"));
        splitter->addWidget(viewClassesButton);
        logoutButton = new QPushButton(splitter);
        logoutButton->setObjectName(QStringLiteral("logoutButton"));
        splitter->addWidget(logoutButton);
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

        retranslateUi(studentView);

        stackedWidget->setCurrentIndex(1);


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
