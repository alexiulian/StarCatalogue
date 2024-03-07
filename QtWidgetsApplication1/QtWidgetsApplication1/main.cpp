#include "QtWidgetsApplication1.h"
#include <QtWidgets/QApplication>
#include "Repo.h"
#include "RepoAstronomer.h"
#include "TableModel.h"

using namespace std;

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    vector<QtWidgetsApplication1*> windows;
    int position = 0;

        Repo repo;
        repo.readFromFile();

        TableModel* table = new TableModel(repo);

        RepoAstronomer astronomerRepo;
        astronomerRepo.readFromFile();

        auto astronomers = astronomerRepo.getAstronomers();

        for (auto& a : astronomers) {
            QtWidgetsApplication1* w = new QtWidgetsApplication1(table, &a);
            w->setWindowTitle(QString::fromStdString(a.getName()));
            w->show();
            windows.push_back(w);
        }
        return a.exec();
    }
