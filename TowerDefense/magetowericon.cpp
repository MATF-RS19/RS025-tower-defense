#include "magetowericon.h"
#include "towers.h"
#include "game.h"
#include <QGraphicsPixmapItem>

extern Game *g;

MageTowerIcon::MageTowerIcon(QGraphicsItem *parent) :QGraphicsPixmapItem(parent)
{
    setPixmap(QPixmap(":/images/mageTowerForStore.png"));
}

void MageTowerIcon::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    if (!g->tower){
        g->tower = new MageTower(event->pos().x(), event->pos().y());

        // if we have the gold to buy the tower, we can buy it
        if (g->getAmountOfGold() < g->tower->price()) {
            // notify the user about this <- TODO
            qDebug() << "not enough gold";
            delete g->tower;
            g->tower = nullptr;
            return ;
        }

        g->setCursor(QString(":/images/mage.png"),
                     event->pos().x(), event->pos().y()+436);
    }
}

