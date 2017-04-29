#pragma once
#include <qdialog.h>
#include <qobject.h>
#include <qwidget.h>
#include <ui_gradeDialog.h>


class gradeDialog : public QDialog
{
	Q_OBJECT

public:
	gradeDialog(QWidget *parent = Q_NULLPTR);
	gradeDialog(int row,QString facultyUserName, QString student);

	public slots:
	void on_okButton_clicked();
	void on_cancelButton_clicked();

	private slots:


private:
	Ui::gradeDialog ui;

};
