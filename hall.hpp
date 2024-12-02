//Author: Nathaniel Stanford
//2024-10-25
//Software Analysis and Design II
//Navigation project
//Implementation first attempt for hall object

//This object will be a template usable for halls, floors, and buildings
#ifndef HALL_
#define HALL_
#include "room.hpp"

template <class T> 
class hall{
    public:
        addRoom();
        isEmpty();
        removeRoom();
        
        travel(string roomName1, string roomName2);    //this is where the magic happens. Calculate a path from a room to another. once this works it can be extrapolated to calculate routes from halls to halls and floors to floors

    private:
        Room* headptr;  //pointer to first room. Since connections go both ways it's arbitrary
        int roomCount();
        //we don't need a member array for rooms because they're dynamic linked objects


};


#endif