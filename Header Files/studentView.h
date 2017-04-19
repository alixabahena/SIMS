#pragma once
#include <qwidget.h>
#include <qobject.h>
#include <ui_studentView.h>
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

class studentView : public QWidget
{
	Q_OBJECT

public:
	studentView(QWidget *parent = Q_NULLPTR);

private:
	Ui::studentView ui;
};
