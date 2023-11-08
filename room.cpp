// Room.cpp
#include "Room.h"
#include <fstream>

// Default constructor
Room::Room() : room_id(0), kind_of(""), cost(0.0), occupied(false) {}

// Constructor with initialization
Room::Room(int room_id, const std::string& kind_of, double cost, bool occupied)
    : room_id(room_id), kind_of(kind_of), cost(cost), occupied(occupied) {}

// Destructor
Room::~Room() {}

// Getter and Setter
int Room::getRoomID() const {
    return room_id;
}

void Room::setRoomID(int room_id) {
    this->room_id = room_id;
}

const std::string& Room::getKindOf() const {
    return kind_of;
}

void Room::setKindOf(const std::string& kind_of) {
    this->kind_of = kind_of;
}

double Room::getCost() const {
    return cost;
}

void Room::setCost(double cost) {
    this->cost = cost;
}

bool Room::isOccupied() const {
    return occupied;
}

void Room::setOccupied(bool occupied) {
    this->occupied = occupied;
}

// Display room information method
// Function to load room data from file
void Room::loadRoomListFromFile(List<Room>& roomList) {
    std::ifstream inFile("room.txt");

    // Check if the file is open
    if (inFile.is_open()) {
        int roomID;
        std::string kindOf;
        double cost;
        bool occupied;

        // Read room details from file
        while (inFile >> roomID >> kindOf >> cost >> occupied) {
            // Create a new room and add it to the list
            Room newRoom(roomID, kindOf, cost, occupied);
            roomList.push_back(newRoom);
        }

        // Close the file
        inFile.close();
    } else {
        std::cerr << "Error opening file for reading: room.txt" << std::endl;
    }
}

