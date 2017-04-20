#pragma once
#include <qwidget.h>
#include <qobject.h>
#include <ui_studentView.h>



class studentView : public QWidget
{
	Q_OBJECT

public:
	studentView(QWidget *parent = Q_NULLPTR);
public slots:
	void on_viewScheduleButton_clicked();
	void on_backButton_clicked();
private:
	Ui::studentView ui;
};
