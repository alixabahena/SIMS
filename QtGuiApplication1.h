#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtGuiApplication1.h"
#include "sqlite3.h"
#include "users.h"
#include "QtGuiApplication1.h"
#include "qmessagebox.h"

class QtGuiApplication1 : public QMainWindow
{
	Q_OBJECT

public:
	QtGuiApplication1(QWidget *parent = Q_NULLPTR);

public slots:
void on_okButton_clicked();

private slots:


private:
	Ui::QtGuiApplication1Class ui;

};
