#ifndef MARIO_GAME_LEADERBOARDWINDOW_H
#define MARIO_GAME_LEADERBOARDWINDOW_H

#include "database.h"
#include <QWidget>
#include "title.h"

QT_BEGIN_NAMESPACE
namespace Ui { class LeaderBoardWindow; }
QT_END_NAMESPACE

class MainWindow;

class LeaderBoardWindow : public QWidget {
    Q_OBJECT

public:
    explicit LeaderBoardWindow(QString n, QWidget *parent = nullptr);
    ~LeaderBoardWindow() override;

private:
    QString name;
    QSqlDatabase db;
    Ui::LeaderBoardWindow *ui;
    QSqlTableModel* model;
    MainWindow* mainwindow;
    MainWindow* menuWindow;
    Database database;

private slots:
    void backToMenu();
    void addToTable(QString playerName, int coinCount, QString time);
};

#endif // MARIO_GAME_LEADERBOARDWINDOW_H
