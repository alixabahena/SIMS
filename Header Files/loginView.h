#pragma once
#include <qmainwindow.h>
#include <qobject.h>
#include <ui_loginView.h>
#include <qsqldatabase.h>
#include <qdir.h>
#include <qsqlquery.h>
#include <QWidget>
#include <QtWidgets/QMainWindow>
#include "qmessagebox.h"
#include <qobject.h>
#include <QtWidgets/QApplication>
#include <QPushButton>
#include <qmainwindow.h>

class loginView : public QMainWindow
{
	Q_OBJECT

public:
	loginView(QWidget *parent = Q_NULLPTR);

public slots:
void on_okButton_clicked();

private slots:


private:
	Ui::loginView ui;

};
