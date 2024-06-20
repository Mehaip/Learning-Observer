#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtWidgetsApplication5.h"
#include "qlistwidget.h"
#include "qpushbutton.h"
#include "qlineedit.h"
#include "Service.h"

class Aplicatie: public QWidget
{
	
public:
	Aplicatie(Service& srv) : srv{ srv }	 {
		initGUI();
		initTable();
		connect();
	}
private:
	Service& srv;
	void initGUI();
	void initTable();
	void connect();
	QListWidget* list2 = new QListWidget{};
	QPushButton* reload = new QPushButton{"&Reload"};
	QPushButton* newWindow = new QPushButton{"New Window"};
	QPushButton* addBtn = new QPushButton{ "Add" };
	QLineEdit* text_line = new QLineEdit{ };


};
