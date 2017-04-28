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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_gradeDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *gradeLabel;
    QLineEdit *lineEdit;
    QHBoxLayout *hboxLayout;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *gradeDialog)
    {
        if (gradeDialog->objectName().isEmpty())
            gradeDialog->setObjectName(QStringLiteral("gradeDialog"));
        gradeDialog->resize(176, 93);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(gradeDialog->sizePolicy().hasHeightForWidth());
        gradeDialog->setSizePolicy(sizePolicy);
        gradeDialog->setMinimumSize(QSize(176, 73));
        gradeDialog->setMaximumSize(QSize(176, 93));
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
        okButton = new QPushButton(gradeDialog);
        okButton->setObjectName(QStringLiteral("okButton"));

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(gradeDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        hboxLayout->addWidget(cancelButton);


        verticalLayout->addLayout(hboxLayout);


        retranslateUi(gradeDialog);
        QObject::connect(okButton, SIGNAL(clicked()), gradeDialog, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), gradeDialog, SLOT(reject()));

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
