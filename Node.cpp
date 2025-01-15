#include "Node.hpp"

template<class T>
Node<T>::Node(){
    
}

template<class T>
Node<T>::Node(const T& item): item_(item){

}
template<class T>
Node<T>::Node(const T& item, std::vector<NW<T>> connections): item_(item), connections_(connections){

}

template<class T>
void Node<T>::setItem(const T &item){
    item_ = item;
}

template<class T>
T Node<T>::getItem() const{
    return item_;
}

template<class T>
void Node<T>::setConnections(const std::vector<NW<T>>& connections){
    connections_ = connections;
}

template<class T>
bool Node<T>::addConnection(const NW<T>& connection){
    connections_.push_back(connection);
}

template<class T>
bool Node<T>::removeConnection(const NW<T>& connection){
    bool removed = false;

    for (int i = 0; i < connections_.size(); i++){
        if (connections_[i] == connection){
            connections_.erase(connections_.begin() + i);
            removed = true;
        }
    }
    return(removed);
}

template<class T>
std::vector<NW<T>> Node<T>::getConnections() const{
    return connections_;
}

