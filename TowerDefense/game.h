#ifndef GAME_H
#define GAME_H

#include "tower.h"
#include "enemy.h"
#include "lives.h"
#include "score.h"
#include "gold.h"
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QVector>
#include <QLinkedList>
#include <QGraphicsPixmapItem>
#include <QMouseEvent>
#include <QGraphicsPathItem>


class Game: public QGraphicsView
{
public:
    Game();
    void addTower(Tower *t);
    void addEnemy(Enemy *e);
    void removeEnemy(Enemy *e);
    bool containsEnemy(Enemy *e);

    QLinkedList<Enemy*> enemies() const;

    void increaseScore(int score);
    void decreaseLives();
    void increaseGold(int amount);
    void decreaseGold(int amount);
    int getAmountOfGold() const;

    void setCursor(QString filename);
    void mouseMoveEvent(QMouseEvent *event);
    void mousePressEvent(QMouseEvent *event);

    QGraphicsScene * scene;
    QGraphicsPixmapItem * cursor;
    Tower *tower;
private:
    QVector<Tower*> m_towers;
    QLinkedList<Enemy*> m_enemies;

    Lives * m_lives;
    Score * m_score;
    Gold * m_gold;
};

#endif // GAME_H
