#ifndef NODE_H
#define NODE_H
#include <vector>

/*
    Node for naviagation in undirected graph. Must have weight to each connected node


 */

template<class T>
class Node;

template<class T>
struct NW{  //struct to keep track of weights of connections
    Node<T>* node;   //pointer to node
    double weight;  //weight of connection
};

template<class T>
class Node{


    
    public:
      
        Node();
        Node(const T& item);
        Node(const T& item, std::vector<NW<T>> connections);

        void setItem(const T &item);

        T getItem() const;

        void setConnections(const std::vector<NW<T>>& connections);
        
        bool addConnection(const NW<T>& connection);

        bool removeConnection(const NW<T>& connection);    //remove all instances of a node

        std::vector<NW<T>> getConnections() const;

    private:
        T item_;
        std::vector<NW<T>> connections_;



};

#endif