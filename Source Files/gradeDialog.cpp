#include "Header Files\stdafx.h"



gradeDialog::gradeDialog(QWidget *parent)
	: QDialog(parent)
{

	ui.setupUi(this);
}

gradeDialog::gradeDialog(int row)
{
	int studentRow = row;
		ui.setupUi(this);
}

void gradeDialog::on_okButton_clicked()
{
	this->hide();

}

void gradeDialog::on_cancelButton_clicked()
{
	this->hide();
}