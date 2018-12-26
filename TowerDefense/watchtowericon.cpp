#include "watchtowericon.h"
#include "game.h"
#include "towers.h"
#include <QGraphicsPixmapItem>

extern Game *g;

WatchTowerIcon::WatchTowerIcon(QGraphicsItem *parent) :QGraphicsPixmapItem(parent)
{
    setPixmap(QPixmap(":/images/towerStore_1.png"));
}

void WatchTowerIcon::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    if (!g->tower){
        g->tower = new WatchTower(event->pos().x(), event->pos().y());

        // if we have the gold to buy the tower, we can buy it
        if (g->getAmountOfGold() < g->tower->price()) {
            // notify the user about this <- TODO
            qDebug() << "not enough gold";
            delete g->tower;
            g->tower = nullptr;
            return ;
        }

        g->setCursor(QString(":/images/tower4.png"),
                     event->pos().x(), event->pos().y());
    }
}


