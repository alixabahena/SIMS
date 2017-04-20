#pragma once
#include <qwidget.h>
#include <qobject.h>
#include <ui_facultyView.h>


class facultyView : public QWidget
{
	Q_OBJECT

public:
	facultyView(QWidget *parent = Q_NULLPTR);

private:
	Ui::facultyView ui;
};
