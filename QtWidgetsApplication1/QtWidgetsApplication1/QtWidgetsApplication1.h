#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtWidgetsApplication1.h"
#include "TableModel.h"
#include "Astronomer.h"
class QtWidgetsApplication1 : public QMainWindow
{
    Q_OBJECT

public:
    QtWidgetsApplication1(TableModel* _table, Astronomer* _astronomer, QWidget* parent = nullptr);
    ~QtWidgetsApplication1();
private:
    void connectSignalsAndSlots();
    Ui::QtWidgetsApplication1Class ui;
    TableModel* table;
    Astronomer* astronomer;
};
