//
// Created by dbehl on 5/19/2022.
//

#ifndef GUIAPP_GUI_H
#define GUIAPP_GUI_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class Gui; }
QT_END_NAMESPACE

class Gui : public QWidget {
    Q_OBJECT

public:
    explicit Gui(QWidget *parent = nullptr);

    ~Gui() override;

private:
    Ui::Gui *ui;
};


#endif //GUIAPP_GUI_H
