#include "prop.h"

void prop::takeEvent(point destination, theBrave &aStrongBrave, tools &usefulTools, map &theBigMap)
{
    int id = theBigMap.getPoint(destination);
    if(id == 15)
    {
        aStrongBrave.setAttack(aStrongBrave.getAttack() + 1);
        theBigMap.setPoint(destination, 0);
    }
    else if(id == 16)
    {
        aStrongBrave.setDefence(aStrongBrave.getDefence() + 1);
        theBigMap.setPoint(destination, 0);
    }
    else if(id == 17)
    {
        aStrongBrave.setHealthPoint(aStrongBrave.getHealthPoint() + 100);
        theBigMap.setPoint(destination, 0);
    }
    else if(id == 18)
    {
        aStrongBrave.setHealthPoint(aStrongBrave.getHealthPoint() + 200);
        theBigMap.setPoint(destination, 0);
    }
    if(id == 15 || id == 16 || id == 17 || id == 18) aStrongBrave.setPosition(destination);
}