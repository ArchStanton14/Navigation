#include "Floor.hpp"


Floor::Floor(){

}
Floor::Floor(const std::vector<Node<Room>*>& rooms):rooms_(rooms){

}

void Floor::setRooms(std::vector<Node<Room>*> rooms){
    rooms_ = rooms;
}
bool Floor::addRoom(Node<Room>* room){
    rooms_.push_back(room);
    return true;
}
std::vector<Node<Room>*> Floor::getRooms() const{
    return rooms_;
}


std::vector<Node<Room>*> Floor::Djikstra(Node<Room>* start, Node<Room>* destination){
    
}