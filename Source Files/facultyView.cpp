#include "Header Files\stdafx.h"


facultyView::facultyView(QWidget *parent)
	: QWidget(parent)
{
	
	ui.setupUi(this);
	ui.backButton->hide();
	ui.stackedWidget->setCurrentIndex(0);

}
