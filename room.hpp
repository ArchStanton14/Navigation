#ifndef ROOM_
#define ROOM_

//This is the node we will use for our graph of the floorplan. It can have any number of connections to other nodes, and has a unique identifying (floor number, room number, etc)


template <class T> class room{
    private:
        std::string number; //unique identifyer
        //maybe could be hashmap?
        std::vector<T*> connections;    //adjacent structures
        std::vector<int> connectionWeights; //distance to them (same order)
        tuple int coords;   //coordinates on map image, for graphical representation
    
    public:
        /*
        @pre must have number
        @return unique identifyer */
        std::string getNumber() const;
        
        /*
        @param string representing a unique identifyer 
        @post sets number to string
        */
        void setNumber(const std::string &number);

        /*
        @return vector of connected nodes
        */
        std::vector<T*> getConnections() const;

        /*
        @param connections: a vector of connected nodes
        */
        void setConnections(const std::vector<T*>& connections);
        /*
        @param connection: a single connected node
        */

        void addConnection(T* connection);


};
#endif