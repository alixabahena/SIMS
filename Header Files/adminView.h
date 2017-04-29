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
	
	void on_editUsersButton_clicked();
	void on_editFacultyButton_clicked();
	void on_editStudentsButton_clicked();
	void on_editRecordsButton_clicked();
	void on_editClassesButton_clicked();

	void on_changePasswordButton_clicked();
	void on_submitButton_clicked();

	void on_logoutButton_clicked();
	void on_backButton_clicked();

	void on_addItemButton_clicked();
	void on_removeItemButton_clicked();

	private slots:
private:
	Ui::adminView ui;

};
