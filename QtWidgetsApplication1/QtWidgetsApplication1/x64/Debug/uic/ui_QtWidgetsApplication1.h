/********************************************************************************
** Form generated from reading UI file 'QtWidgetsApplication1.ui'
**
** Created by: Qt User Interface Compiler version 6.5.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTWIDGETSAPPLICATION1_H
#define UI_QTWIDGETSAPPLICATION1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtWidgetsApplication1Class
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTableView *starsTableView;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *nameLE;
    QLabel *label_2;
    QLineEdit *RALE;
    QLabel *label_3;
    QLineEdit *decLE;
    QLabel *label_4;
    QLineEdit *diameterLE;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBox;
    QPushButton *addPushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtWidgetsApplication1Class)
    {
        if (QtWidgetsApplication1Class->objectName().isEmpty())
            QtWidgetsApplication1Class->setObjectName("QtWidgetsApplication1Class");
        QtWidgetsApplication1Class->resize(445, 420);
        centralWidget = new QWidget(QtWidgetsApplication1Class);
        centralWidget->setObjectName("centralWidget");
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        starsTableView = new QTableView(centralWidget);
        starsTableView->setObjectName("starsTableView");

        verticalLayout->addWidget(starsTableView);

        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName("formLayout");
        label = new QLabel(centralWidget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        nameLE = new QLineEdit(centralWidget);
        nameLE->setObjectName("nameLE");

        formLayout->setWidget(0, QFormLayout::FieldRole, nameLE);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        RALE = new QLineEdit(centralWidget);
        RALE->setObjectName("RALE");

        formLayout->setWidget(1, QFormLayout::FieldRole, RALE);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        decLE = new QLineEdit(centralWidget);
        decLE->setObjectName("decLE");

        formLayout->setWidget(2, QFormLayout::FieldRole, decLE);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        diameterLE = new QLineEdit(centralWidget);
        diameterLE->setObjectName("diameterLE");

        formLayout->setWidget(3, QFormLayout::FieldRole, diameterLE);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName("checkBox");

        horizontalLayout->addWidget(checkBox);

        addPushButton = new QPushButton(centralWidget);
        addPushButton->setObjectName("addPushButton");

        horizontalLayout->addWidget(addPushButton);


        verticalLayout->addLayout(horizontalLayout);

        QtWidgetsApplication1Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtWidgetsApplication1Class);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 445, 22));
        QtWidgetsApplication1Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtWidgetsApplication1Class);
        mainToolBar->setObjectName("mainToolBar");
        QtWidgetsApplication1Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtWidgetsApplication1Class);
        statusBar->setObjectName("statusBar");
        QtWidgetsApplication1Class->setStatusBar(statusBar);

        retranslateUi(QtWidgetsApplication1Class);

        QMetaObject::connectSlotsByName(QtWidgetsApplication1Class);
    } // setupUi

    void retranslateUi(QMainWindow *QtWidgetsApplication1Class)
    {
        QtWidgetsApplication1Class->setWindowTitle(QCoreApplication::translate("QtWidgetsApplication1Class", "QtWidgetsApplication1", nullptr));
        label->setText(QCoreApplication::translate("QtWidgetsApplication1Class", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("QtWidgetsApplication1Class", "RA", nullptr));
        label_3->setText(QCoreApplication::translate("QtWidgetsApplication1Class", "Dec", nullptr));
        label_4->setText(QCoreApplication::translate("QtWidgetsApplication1Class", "Diameter", nullptr));
        checkBox->setText(QCoreApplication::translate("QtWidgetsApplication1Class", "CheckBox", nullptr));
        addPushButton->setText(QCoreApplication::translate("QtWidgetsApplication1Class", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtWidgetsApplication1Class: public Ui_QtWidgetsApplication1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTWIDGETSAPPLICATION1_H
