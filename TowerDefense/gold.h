#ifndef GOLD_H
#define GOLD_H

#include <QGraphicsTextItem>

class Gold: public QGraphicsTextItem
{
public:
    Gold(int initAmount);
    void decreaseGold(int amount);
    void increaseGold(int amount);
    int getGold() const;
private:
    int m_goldAmount;
};

#endif // GOLD_H
