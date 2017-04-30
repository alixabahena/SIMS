/********************************************************************************
** Form generated from reading UI file 'gradeDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRADEDIALOG_H
#define UI_GRADEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_gradeDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *gradeLabel;
    QLineEdit *lineEdit;
    QHBoxLayout *hboxLayout;
    QToolButton *okButton;
    QToolButton *cancelButton;

    void setupUi(QDialog *gradeDialog)
    {
        if (gradeDialog->objectName().isEmpty())
            gradeDialog->setObjectName(QStringLiteral("gradeDialog"));
        gradeDialog->setWindowModality(Qt::ApplicationModal);
        gradeDialog->resize(176, 93);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(gradeDialog->sizePolicy().hasHeightForWidth());
        gradeDialog->setSizePolicy(sizePolicy);
        gradeDialog->setMinimumSize(QSize(176, 73));
        gradeDialog->setMaximumSize(QSize(176, 93));
        gradeDialog->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        gradeDialog->setSizeGripEnabled(false);
        verticalLayout = new QVBoxLayout(gradeDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gradeLabel = new QLabel(gradeDialog);
        gradeLabel->setObjectName(QStringLiteral("gradeLabel"));
        QFont font;
        font.setPointSize(10);
        gradeLabel->setFont(font);

        verticalLayout->addWidget(gradeLabel);

        lineEdit = new QLineEdit(gradeDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setFont(font);

        verticalLayout->addWidget(lineEdit);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        okButton = new QToolButton(gradeDialog);
        okButton->setObjectName(QStringLiteral("okButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(okButton->sizePolicy().hasHeightForWidth());
        okButton->setSizePolicy(sizePolicy1);
        okButton->setStyleSheet(QLatin1String("QToolButton { /* all types of tool button */\n"
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

        hboxLayout->addWidget(okButton);

        cancelButton = new QToolButton(gradeDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        sizePolicy1.setHeightForWidth(cancelButton->sizePolicy().hasHeightForWidth());
        cancelButton->setSizePolicy(sizePolicy1);
        cancelButton->setStyleSheet(QLatin1String("QToolButton { /* all types of tool button */\n"
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

        hboxLayout->addWidget(cancelButton);


        verticalLayout->addLayout(hboxLayout);


        retranslateUi(gradeDialog);
        QObject::connect(lineEdit, SIGNAL(returnPressed()), okButton, SLOT(click()));

        QMetaObject::connectSlotsByName(gradeDialog);
    } // setupUi

    void retranslateUi(QDialog *gradeDialog)
    {
        gradeDialog->setWindowTitle(QApplication::translate("gradeDialog", "Enter Grade", Q_NULLPTR));
        gradeLabel->setText(QApplication::translate("gradeDialog", "Enter Grade:", Q_NULLPTR));
        okButton->setText(QApplication::translate("gradeDialog", "OK", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("gradeDialog", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class gradeDialog: public Ui_gradeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRADEDIALOG_H
