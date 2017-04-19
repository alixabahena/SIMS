#pragma once
#include <qmainwindow.h>
#include <qobject.h>
#include <qwidget.h>
#include <ui_adminView.h>
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

class adminView : public QMainWindow
{
	Q_OBJECT

public:
	adminView(QWidget *parent = Q_NULLPTR);

	public slots:


	private slots:


private:
	Ui::adminView ui;

};
