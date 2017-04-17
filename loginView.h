#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_loginView.h"
#include "sqlite3.h"
#include "users.h"
#include "loginView.h"
#include "qmessagebox.h"

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
