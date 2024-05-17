#include "title.h"

#include <QMessageBox>

Title::Title(View *view, QWidget *parent) : QGraphicsScene(parent){

    viewer = view;
    viewer->setViewportUpdateMode(QGraphicsView::SmartViewportUpdate);
    scroll = new QScrollBar;
    scroll = viewer->horizontalScrollBar();
    foreground = new QGraphicsPixmapItem(QPixmap(":/images/fon.png"));
    logo = new QGraphicsPixmapItem(QPixmap(":/images/logo.png"));

    logo->setPos((width - logo->boundingRect().width()) / 2, height / 12);
    addItem(foreground);
    addItem(logo);
    this->setFocus();
    this->setSceneRect(0,0,1280,720);
    view->sceneSet(this);

    developerButton = new QPushButton(viewer);
    developerButton->setText("Start");
    developerButton->setToolTip("Please,press the button");
    developerButton->setGeometry(QRect(570, 420, 150, 45));
    connect(developerButton, SIGNAL(clicked()), this, SLOT(developerLogin()));


    result = new QPushButton(viewer);
    result->setText("Your result");
    result->setToolTip("Please,press");
    result->setGeometry(QRect(570, 470, 150, 45));
    connect(result, SIGNAL(clicked()), this, SLOT(opentable()));

    quitButton = new QPushButton(viewer);
    quitButton->setText("Quit");
    quitButton->setObjectName(QString("quitButton"));
    quitButton->setToolTip("Quit program");
    quitButton->setGeometry(QRect(570, 520, 150, 45));
    connect(quitButton, SIGNAL(clicked()), this, SLOT(quitProgram()));


}
void Title::quitProgram(){

    qApp->quit();
}
void Title::opentable(){



}


void Title::developerLogin(){

    developerButton->close();
    result->close();
    quitButton->close();
    scene = new MyScene(scroll,this);
    viewer->sceneSet(scene);
}
