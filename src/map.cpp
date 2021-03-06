#include <map.h>

const int initialMap[high][length][width] = 
{
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, //0层
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 

    
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, //1层
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 15, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 19, 0, 0, 2, 2, 2, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 2, 31, 0, 2, 
    2, 3, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 2, 31, 0, 2, 
    2, 0, 0, 0, 0, 0, 20, 0, 0, 2, 2, 2, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 17, 2, 
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 

    
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, //2层
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 3, 0, 0, 0, 0, 35, 0, 0, 0, 0, 4, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 


    
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, //3层
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2
};

#include <iostream>
using namespace std;
map::map()
{
    for(int floor = 0; floor < high; floor ++)
        for(int x = 0; x < length; x ++)
            for(int y = 0; y < width; y ++)
                theMap[floor][x][y] = initialMap[floor][x][y];
}

bool map::checkPoint(point position)
{
    int floor = position.getFloor();
    int x = position.getX();
    int y = position.getY();
    return 0 <= floor && floor < high 
           && 0 <= x && x < length 
           && 0 <= y && y < width;
}

int map::getPoint(point position)
{
    int floor = position.getFloor();
    int x = position.getX();
    int y = position.getY();
    if(checkPoint(position)) 
        return theMap[floor][x][y];
}

void map::setPoint(point position, int val)
{
    int floor = position.getFloor();
    int x = position.getX();
    int y = position.getY();
    if(checkPoint(position)) 
        theMap[floor][x][y] = val;
}