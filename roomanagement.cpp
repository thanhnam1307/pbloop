// RoomManagement.cpp
#include "roomanagement.h"

// Constructors
RoomManagement::RoomManagement() : customer_id(0) {
    // Khởi tạo thông tin quản lý phòng mặc định
}

RoomManagement::~RoomManagement() {
    // Không có công việc đặc biệt cần thực hiện trong destructor ở đây
}

// Phương thức thêm phòng
void RoomManagement::addRoom(int room_id, const std::string& kind_of, double cost) {
    rooms.emplace_back(room_id, kind_of, cost, false);
}

// Phương thức tìm phòng theo ID
Room* RoomManagement::findRoomByID(int room_id) {
    for (auto& room : rooms) {
        if (room.getRoomID() == room_id) {
            return &room;
        }
    }
    return nullptr; // Không tìm thấy phòng
}

// Phương thức xoá phòng theo ID
void RoomManagement::deleteRoomByID(int room_id) {
    for (auto it = rooms.begin(); it != rooms.end(); ++it) {
        if (it->getRoomID() == room_id) {
            rooms.erase(it);
            break;
        }
    }
}

// Phương thức cập nhật thông tin phòng
void RoomManagement::updateRoom(int room_id, const std::string& kind_of, double cost, bool occupied) {
    Room* room = findRoomByID(room_id);
    if (room != nullptr) {
        room->setKindOf(kind_of);
        room->setCost(cost);
        room->setOccupied(occupied);
    }
}

// Phương thức thêm khách hàng vào phòng
void RoomManagement::addCustomerToRoom(int room_id, int customer_id) {
    Room* room = findRoomByID(room_id);
    if (room != nullptr && !room->isOccupied()) {
        room->setOccupied(true);
        this->customer_id = customer_id;
    }
}

// Phương thức hiển thị thông tin quản lý phòng
void RoomManagement::display() const {
    for (const auto& room : rooms) {
        room.display();
        std::cout << "Customer ID: " << customer_id << std::endl;
        std::cout << "-------------------------" << std::endl;
    }
}
