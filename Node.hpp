#include <vector>
/*
    Node for naviagation in undirected graph. Must have weight to each connected node


 */
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
        Node(const T& item, std::vector<NW> connections);

        void setItem(const T &item);

        T getItem() const;

        void setConnections(const std::vector<NW>& connections);
        
        bool addConnection(const std::vector<NW>& connections);

        bool removeConnection(const std::vector<NW>& connections);

        std::vector<NW> getConnections() const;

    private:
        T item;
        std::vector<NW> connections;



};