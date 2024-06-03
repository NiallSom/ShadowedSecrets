#include "room.h"
#include "exitnotfoundexception.h"

template<typename T>
Room<T>::Room(T roomID) : roomID(roomID) {}

template<typename T>
void Room<T>::setExits(int N, int E, int S, int W) {
    exits["North"] = N;
    exits["East"] = E;
    exits["South"] = S;
    exits["West"] = W;
}

template<typename T>
void Room<T>::addEnemy(Entity* entity) {
    enemies.push_back(entity);
}

template<typename T>
void Room<T>::addItem(item* item) {
    items.push_back(item);
}

template<typename T>
T Room<T>::getID() {
    return roomID;
}

template<typename T>
int Room<T>::getExit(string exit) {
    if (exits.find(exit) == exits.end()) {
        throw ExitNotFoundException(exit);
    }
    return exits[exit];
}

template<typename T>
string Room<T>::getDescription() {
    return description;
}

template<typename T>
void Room<T>::setDescription(string desc) {
    description = desc;
}

template<typename T>
void Room<T>::setAction(string action, int leadsTo) {
    exits[action] = leadsTo;
}

template<typename T>
vector<item*> Room<T>::getItems() {
    return items;
}

// Explicit instantiation of template class for supported types
template class Room<int>;  // Example: for room IDs of type int

// Add more instantiations here if needed for other types
