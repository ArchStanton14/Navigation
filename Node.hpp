/*
    Node for naviagation in undirected graph. Must have weight to each connected node


 */

struct NW{  //struct to keep track of weights of connections
    *Node<T>;   //pointer to node
    double weight;  //weight of connection
}

template<class T>
class Node{
    public:
      
        Node();
        Node(T item);
        Node(T item, vector<NW> connections);

        void setItem(const T &item);

        T getItem() const;

        void setConnections(const vector<NW>& connections);
        
        bool addConnection(const vector<NW>& connections);

        bool removeConnection(const vector<NW>& connections);

        vector<NW> getConnections() const;

    private:
        T item;
        vector<NW> connections;



}