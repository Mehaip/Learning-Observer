#include "QtWidgetsApplication5.h"
#include "qlayout.h"

void Aplicatie::initGUI() {

	auto mainLy = new QHBoxLayout{};
	setLayout(mainLy);
	mainLy->addWidget(list2);
	mainLy->addWidget(reload);
	mainLy->addWidget(newWindow);
	mainLy->addWidget(addBtn);
	mainLy->addWidget(text_line);
	auto newApp = new App2{ srv };
	newApp->show();
}

void Aplicatie::initTable() {
	list2->blockSignals(true);
	list2->clear();
	list2->blockSignals(false);
	vector<string> list = srv.get_all();

	for (auto& it : list) {
		list2->addItem(QString::fromStdString(it));
	}
}

void Aplicatie::connect() {
	QWidget::connect(reload, &QPushButton::clicked, [&]() {
		initTable();
		});

	QWidget::connect(newWindow, &QPushButton::clicked, [&]() {
		auto newApp = new App2{ srv };
		newApp->show();
		});

	QWidget::connect(addBtn, &QPushButton::clicked, [&]() {
		auto text = text_line->text().toStdString();
		srv.add(text);
		initTable();
		});
}

void App2::initGUI2() {
	auto mainLy = new QHBoxLayout{};
	setLayout(mainLy);

	mainLy->addWidget(list3);
}

void App2::reloadList() {
	vector<string> list = srv.get_all();
	list3->blockSignals(true);
	list3->clear();
	list3->blockSignals(false);
	for (auto& it : list) {
		if(isdigit(it[0]))
		list3->addItem(QString::fromStdString(it));
	}
}
