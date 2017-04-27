#pragma once
#include <qmainwindow.h>
#include <qobject.h>
#include <qwidget.h>
#include <ui_adminView.h>


class adminView : public QMainWindow
{
	Q_OBJECT

public:
	adminView(QWidget *parent = Q_NULLPTR);

	public slots:
	void on_changePasswordButton_clicked();
	void on_submitButton_clicked();

	private slots:


private:
	Ui::adminView ui;

};
