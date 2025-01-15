#ifndef FLOOR_H
#define FLOOR_H
#include "Node.hpp"
#include <string>

/*
Floor class has nodes and can find routes between them. will eventually read from csv for floorplan, and display graphically
Since we don't know where we will be starting, we need to store the nodes for access in this class. We can't rely on a starting pointer
*/
struct Room{    //what our nodes will hold
    std::string name;
    double x;   //x coord on map
    double y;   //y coord on map
};

class Floor{
    public:
        Floor();
        Floor(const std::vector<Node<Room>*>& rooms);

        void setRooms(std::vector<Node<Room>*> rooms);
        bool addRoom(Node<Room>* room);
        std::vector<Node<Room>*> getRooms() const;


        std::vector<Node<Room>*> Djikstra(Node<Room>* start, Node<Room>* destination);    //our pathfinding algorithm. It will return a list of nodes to follow

    private:
        std::vector<Node<Room>*> rooms_;

    
};
#endif