// RoomManagement.h
#ifndef ROOMMANAGEMENT_H
#define ROOMMANAGEMENT_H

#include "Room.h"
#include <vector>

class RoomManagement {
public:
    // Constructors
    RoomManagement();  // Constructor mặc định
    ~RoomManagement();

    // Phương thức thêm phòng
    void addRoom(int room_id, const std::string& kind_of, double cost);

    // Phương thức tìm phòng theo ID
    Room* findRoomByID(int room_id);

    // Phương thức xoá phòng theo ID
    void deleteRoomByID(int room_id);

    // Phương thức cập nhật thông tin phòng
    void updateRoom(int room_id, const std::string& kind_of, double cost, bool occupied);

    // Phương thức thêm khách hàng vào phòng
    void addCustomerToRoom(int room_id, int customer_id);

    // Phương thức hiển thị thông tin quản lý phòng
    void display() const;

private:
    std::vector<Room> rooms;
    int customer_id;
};

#endif // ROOMMANAGEMENT_H
