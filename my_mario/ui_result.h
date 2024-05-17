    /********************************************************************************
** Form generated from reading UI file 'result.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULT_H
#define UI_RESULT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_open;
    QPushButton *pushButton_save;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *pushButton_Add;
    QPushButton *pushButton_search;
    QPushButton *pushButton_sort;
    QRadioButton *radioButton_company;
    QRadioButton *radioButton_model;
    QLineEdit *lineEdit_search;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *lineEdit_type;
    QLineEdit *lineEdit_company;
    QLineEdit *lineEdit_model;
    QLineEdit *lineEdit_param;
    QCheckBox *checkBox_ava;
    QDoubleSpinBox *doubleSpinBox_coast;
    QPushButton *pushButton_showAll;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QTableWidget *tableWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1247, 721);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_open = new QPushButton(centralwidget);
        pushButton_open->setObjectName(QString::fromUtf8("pushButton_open"));
        pushButton_open->setGeometry(QRect(10, 20, 221, 51));
        pushButton_save = new QPushButton(centralwidget);
        pushButton_save->setObjectName(QString::fromUtf8("pushButton_save"));
        pushButton_save->setGeometry(QRect(10, 80, 221, 51));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(480, 10, 121, 16));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(480, 50, 111, 16));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(480, 90, 71, 16));
        pushButton_Add = new QPushButton(centralwidget);
        pushButton_Add->setObjectName(QString::fromUtf8("pushButton_Add"));
        pushButton_Add->setGeometry(QRect(620, 200, 161, 31));
        pushButton_search = new QPushButton(centralwidget);
        pushButton_search->setObjectName(QString::fromUtf8("pushButton_search"));
        pushButton_search->setGeometry(QRect(890, 10, 321, 41));
        pushButton_sort = new QPushButton(centralwidget);
        pushButton_sort->setObjectName(QString::fromUtf8("pushButton_sort"));
        pushButton_sort->setGeometry(QRect(450, 270, 331, 41));
        radioButton_company = new QRadioButton(centralwidget);
        radioButton_company->setObjectName(QString::fromUtf8("radioButton_company"));
        radioButton_company->setGeometry(QRect(900, 70, 141, 22));
        radioButton_model = new QRadioButton(centralwidget);
        radioButton_model->setObjectName(QString::fromUtf8("radioButton_model"));
        radioButton_model->setGeometry(QRect(1070, 70, 91, 22));
        lineEdit_search = new QLineEdit(centralwidget);
        lineEdit_search->setObjectName(QString::fromUtf8("lineEdit_search"));
        lineEdit_search->setGeometry(QRect(910, 110, 281, 31));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(480, 120, 101, 16));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(480, 160, 71, 16));
        lineEdit_type = new QLineEdit(centralwidget);
        lineEdit_type->setObjectName(QString::fromUtf8("lineEdit_type"));
        lineEdit_type->setGeometry(QRect(600, 10, 113, 24));
        lineEdit_company = new QLineEdit(centralwidget);
        lineEdit_company->setObjectName(QString::fromUtf8("lineEdit_company"));
        lineEdit_company->setGeometry(QRect(600, 50, 113, 24));
        lineEdit_model = new QLineEdit(centralwidget);
        lineEdit_model->setObjectName(QString::fromUtf8("lineEdit_model"));
        lineEdit_model->setGeometry(QRect(600, 80, 113, 24));
        lineEdit_param = new QLineEdit(centralwidget);
        lineEdit_param->setObjectName(QString::fromUtf8("lineEdit_param"));
        lineEdit_param->setGeometry(QRect(600, 120, 113, 24));
        checkBox_ava = new QCheckBox(centralwidget);
        checkBox_ava->setObjectName(QString::fromUtf8("checkBox_ava"));
        checkBox_ava->setGeometry(QRect(480, 200, 121, 22));
        doubleSpinBox_coast = new QDoubleSpinBox(centralwidget);
        doubleSpinBox_coast->setObjectName(QString::fromUtf8("doubleSpinBox_coast"));
        doubleSpinBox_coast->setGeometry(QRect(600, 150, 111, 31));
        doubleSpinBox_coast->setMaximum(99999999.989999994635582);
        pushButton_showAll = new QPushButton(centralwidget);
        pushButton_showAll->setObjectName(QString::fromUtf8("pushButton_showAll"));
        pushButton_showAll->setGeometry(QRect(30, 270, 331, 41));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(20, 320, 1141, 311));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 1137, 307));
        tableWidget = new QTableWidget(scrollAreaWidgetContents_2);
        if (tableWidget->columnCount() < 7)
            tableWidget->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(150, 40, 871, 211));
        scrollArea->setWidget(scrollAreaWidgetContents_2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1247, 30));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_open->setText(QCoreApplication::translate("MainWindow", "open file", nullptr));
        pushButton_save->setText(QCoreApplication::translate("MainWindow", "save file", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\321\200 :", nullptr));
        pushButton_Add->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\262 \321\202\320\260\320\261\320\273\320\270\321\206\321\203", nullptr));
        pushButton_search->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\271\321\202\320\270 \320\277\320\276 \320\260\320\262\321\202\320\276\321\200\321\203, \320\273\320\270\320\261\320\276 \320\277\320\276 \320\275\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\321\216 ", nullptr));
        pushButton_sort->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\272\320\260 \320\277\320\276 \320\260\320\262\321\202\320\276\321\200\321\203", nullptr));
        radioButton_company->setText(QCoreApplication::translate("MainWindow", "\320\275\320\260\320\270\320\274\320\265\320\275\320\276\320\260\320\262\320\275\320\270\320\265", nullptr));
        radioButton_model->setText(QCoreApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\321\200", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\320\274\320\265\321\207\320\260\320\275\320\270\320\265", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\320\246\320\265\320\275\320\260 :", nullptr));
        checkBox_ava->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\321\201\321\202\321\203\320\277\320\275\320\276\321\201\321\202\321\214", nullptr));
        pushButton_showAll->setText(QCoreApplication::translate("MainWindow", "Show all", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "\342\204\226", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "\320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "\320\275\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "\320\260\320\262\321\202\320\276\321\200\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "\320\277\321\200\320\270\320\274\320\265\321\207\320\260\320\275\320\270\320\265", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "\320\246\320\265\320\275\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\321\201\321\202\321\203\320\277\320\275\320\276\321\201\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULT_H
