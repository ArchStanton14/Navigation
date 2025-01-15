
#include "Node.hpp"
#include "Floor.hpp"
#include <iostream>
int main(){
    Node<Room> Office;
    Office.setItem({"101", 0, 5});
    Room r = {"103", 0, 0};
    Node<Room> Auditorium(r);
    Node<Room>* k = &Auditorium;
    Node<Room> rm1(r);
    NW<Room> a = {k, 10};
    Office.addConnection(a);
    std::cout << Office.getItem().name << Office.getConnections()[0].node->getItem().name;

}