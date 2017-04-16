#pragma once

#include <QWidget>
#include "ui_studentView.h"

class studentView : public QWidget
{
	Q_OBJECT

public:
	studentView(QWidget *parent = Q_NULLPTR);

private:
	Ui::studentView ui;
};
