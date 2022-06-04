//
// Created by dbehl on 5/19/2022.
//

// You may need to build the project (run Qt uic code generator) to get "ui_Gui.h" resolved

#include "gui.h"
#include "ui_Gui.h"


Gui::Gui(QWidget *parent) :
        QWidget(parent), ui(new Ui::Gui) {
    ui->setupUi(this);
}

Gui::~Gui() {
    delete ui;
}
