#include "QtWidgetsApplication1.h"
#include "TableModel.h"
#include "Astronomer.h"
#include <qmessagebox.h>


QtWidgetsApplication1::QtWidgetsApplication1(TableModel* _table, Astronomer* _astronomer, QWidget* parent)
    : QMainWindow(parent), table{ _table }, astronomer{ _astronomer }
{
    ui.setupUi(this);
    ui.starsTableView->setModel(table);
    connectSignalsAndSlots();
}

QtWidgetsApplication1::~QtWidgetsApplication1()
{}

void QtWidgetsApplication1::connectSignalsAndSlots()
{

    QObject::connect(this->ui.addPushButton, &QPushButton::clicked, [&]() {

        std::string name = this->ui.nameLE->text().toStdString();
        //std::string constellation = this->ui.constellationLE->text().toStdString();
        int RA = this->ui.RALE->text().toInt();
        int Dec = this->ui.decLE->text().toInt();
        int diameter = this->ui.diameterLE->text().toInt();

        Star star{ name,astronomer->getConstellation(),RA,Dec,diameter };
        try {
            this->table->addStar(star);
        }
        catch (std::exception& e) {
            QMessageBox::warning(this, "warning", "Ups the star already exist or you forget the name");
        }

        });

    QObject::connect(this->ui.checkBox, &QCheckBox::stateChanged, [&]() {

        if (this->ui.checkBox->isChecked() == true) {

            QMessageBox::information(this, "info", "Ups the star already exist or you forget the name");

        }

        });

}
