#include "leaderboardwindow.h"
#include "ui_leaderboardwindow.h"
#include "mainwindow.h"
#include <QTableWidgetItem>
#include <QSqlRecord>
#include <QSqlError>

LeaderBoardWindow::LeaderBoardWindow(QString n, QWidget *parent) :
    QWidget(parent), ui(new Ui::LeaderBoardWindow) {
    name = n;
    ui->setupUi(this);

    QSqlTableModel* model = new QSqlTableModel(this, database.db);
    model->setTable("LeaderBoard");
    model->select();
    model->sort(2, Qt::DescendingOrder); // Сортировка по количеству монет в порядке убывания
    ui->tableView->setModel(model);
    ui->tableView->setColumnWidth(0, 250);
    ui->tableView->setColumnWidth(1, 130);
    ui->tableView->setColumnWidth(2, 130);
    ui->tableView->horizontalHeader()->setStretchLastSection(true);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    connect(ui->backToMenuBut, &QPushButton::clicked, this, &LeaderBoardWindow::backToMenu);
}

void LeaderBoardWindow::backToMenu() {


}
void LeaderBoardWindow::addToTable(QString playerName, int coinCount, QString time) {
    QSqlRecord record;
    record.setValue("Username", playerName);
    record.setValue("Coins", coinCount);
    record.setValue("Time", time);

    QSqlTableModel* model = qobject_cast<QSqlTableModel*>(ui->tableView->model());
    if (model) {
        model->insertRecord(-1, record);
        model->submitAll(); // Подтверждаем изменения в базе данных
    }
}

LeaderBoardWindow::~LeaderBoardWindow() {
    delete ui;
}
