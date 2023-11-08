#ifndef ROOM_H
#define ROOM_H

#include <iostream>
#include "List.h"

class Room {
public:
    // Constructors
    Room();  // Default constructor
    Room(int room_id, const std::string& kind_of, double cost, bool occupied);  // Constructor with initialization

    // Destructor
    ~Room();

    // Getter and Setter
    int getRoomID() const;
    void setRoomID(int room_id);

    const std::string& getKindOf() const;
    void setKindOf(const std::string& kind_of);

    double getCost() const;
    void setCost(double cost);

    bool isOccupied() const;
    void setOccupied(bool occupied);

    // Display room information method
    void display() const;
      // Function to load room data from file
    static void loadRoomListFromFile(List<Room>& roomList);


private:
    int room_id;
    std::string kind_of;
    double cost;
    bool occupied;
};

#endif // ROOM_H
