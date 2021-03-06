#include "theBrave.h"

const int initialHealthPoint = 1000;
const int initialDefence = 10;
const int initialAttack = 10;
const int initialX = 6;
const int initialY = 11;
const int initialFloor = 1;

theBrave::theBrave()
{
    healthPoint = initialHealthPoint;
    defence = initialDefence;
    attack = initialAttack;
    position.setFloor(initialFloor);
    position.setX(initialX);
    position.setY(initialY);
}