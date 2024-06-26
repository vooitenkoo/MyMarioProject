#ifndef REDTURTLE_H
#define REDTURTLE_H
#include <QGraphicsItem>
#include <QPixmap>
#include "objecttype.h"

class RedTurtle : public QGraphicsItem
{
public:
    enum { Type = UserType + redTurtleType };
RedTurtle(const QRectF& platformRect, int direction, QGraphicsItem* parent = nullptr);
    void nextFrame();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    int type() const;
private:

    int mCurrentFrame;
    QPixmap mPixmap;
    QRectF mPlatform;
    int mDirection;
};
#endif // REDTURTLE_H
