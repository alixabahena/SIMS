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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_studentView
{
public:
    QLabel *welcomeLabel;
    QGroupBox *optionsGroupBox;
    QSplitter *splitter;
    QPushButton *viewScheduleButton;
    QPushButton *manageClassesButton;
    QPushButton *viewClassesButton;
    QTableView *tableView;

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
        optionsGroupBox = new QGroupBox(studentView);
        optionsGroupBox->setObjectName(QStringLiteral("optionsGroupBox"));
        optionsGroupBox->setGeometry(QRect(30, 100, 581, 91));
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
        tableView = new QTableView(studentView);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(30, 220, 581, 321));

        retranslateUi(studentView);

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
    } // retranslateUi

};

namespace Ui {
    class studentView: public Ui_studentView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTVIEW_H
