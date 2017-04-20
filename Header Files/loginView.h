#pragma once
#include <qmainwindow.h>
#include <qobject.h>
#include <ui_loginView.h>


class loginView : public QMainWindow
{
	Q_OBJECT

public:
	loginView(QWidget *parent = Q_NULLPTR);
	bool eventFilter(QObject* obj, QEvent* event);

public slots:
void on_okButton_clicked();

private slots:


private:
	Ui::loginView ui;

};
