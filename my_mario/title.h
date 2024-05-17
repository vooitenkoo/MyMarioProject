
#ifndef TITLE_H
#define TITLE_H

#include <QPushButton>
#include <QLineEdit>
#include <QRadioButton>
#include <QMessageBox>
#include <QRegularExpression>
#include <QRegularExpressionMatch>
#include "mainwindow.h"
#include "myscene.h"


class View;
class MyScene;
class AnimatedGraphicsItem : public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
    Q_PROPERTY(QPointF pos READ pos WRITE setPos)
};

class Title : public QGraphicsScene {
    Q_OBJECT
public:
    Title(View *view, QWidget *parent = 0);


signals:
    void quitGame();
    void playSound(QString);

private slots:
     void developerLogin();
    void quitProgram();
     void opentable();
private:
    int selection = 0;
    const int width = 1280;
    const int height = 720;

    View *viewer;
    QGraphicsPixmapItem *foreground;
    QGraphicsPixmapItem *logo;
    QGraphicsTextItem *start;
    QGraphicsTextItem *quit;
    QPushButton *result;
    QScrollBar *scroll;
    MyScene *scene;
    QPushButton *developerButton;
    QPushButton *quitButton;


};
#endif // TITLE_H
