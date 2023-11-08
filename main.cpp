// main.cpp
#include "DoanhThu.h"
#include "Room.h"
#include "roomanagement.h"
#include <iostream>

int main() {
    // Nhập thông tin DoanhThu từ người dùng
    int ngay, thang, nam;
    double thuNhap;

    std::cout << "Nhap ngay: ";
    std::cin >> ngay;

    std::cout << "Nhap thang: ";
    std::cin >> thang;

    std::cout << "Nhap nam: ";
    std::cin >> nam;

    std::cout << "Nhap thu nhap: ";
    std::cin >> thuNhap;

    DoanhThu doanhThu(ngay, thang, nam, thuNhap);
    doanhThu.display();

    // Nhập thông tin Room từ người dùng
    int roomID;
    std::string kind_of;
    double cost;
    bool occupied;

    std::cout << "\nNhap Room ID: ";
    std::cin >> roomID;

    std::cout << "Nhap kind of room: ";
    std::cin >> kind_of;

    std::cout << "Nhap cost: ";
    std::cin >> cost;

    std::cout << "Phong da duoc thue? (1: Co, 0: Khong): ";
    std::cin >> occupied;

    Room room(roomID, kind_of, cost, occupied);
    room.display();

    // Nhập thông tin RoomManagement từ người dùng
    RoomManagement roomManagement;
    int choice;

    do {
        std::cout << "\nMenu:\n";
        std::cout << "1. Them phong\n";
        std::cout << "2. Tim phong\n";
        std::cout << "3. Xoa phong\n";
        std::cout << "4. Cap nhat phong\n";
        std::cout << "5. Them khach hang vao phong\n";
        std::cout << "0. Thoat\n";

        std::cout << "Nhap lua chon: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                int roomID;
                std::string kind_of;
                double cost;

                std::cout << "Nhap Room ID: ";
                std::cin >> roomID;

                std::cout << "Nhap kind of room: ";
                std::cin >> kind_of;

                std::cout << "Nhap cost: ";
                std::cin >> cost;

                roomManagement.addRoom(roomID, kind_of, cost);
                std::cout << "Da them phong.\n";
                break;
            }
            case 2: {
                int roomIDToFind;
                std::cout << "Nhap Room ID can tim: ";
                std::cin >> roomIDToFind;

                Room* foundRoom = roomManagement.findRoomByID(roomIDToFind);
                if (foundRoom != nullptr) {
                    std::cout << "Room found:\n";
                    foundRoom->display();
                } else {
                    std::cout << "Room not found with ID: " << roomIDToFind << std::endl;
                }
                break;
            }
            case 3: {
                int roomIDToDelete;
                std::cout << "Nhap Room ID can xoa: ";
                std::cin >> roomIDToDelete;

                roomManagement.deleteRoomByID(roomIDToDelete);
                std::cout << "Room " << roomIDToDelete << " da duoc xoa.\n";
                break;
            }
            case 4: {
                int roomIDToUpdate;
                std::string kind_of;
                double cost;
                bool occupied;

                std::cout << "Nhap Room ID can cap nhat: ";
                std::cin >> roomIDToUpdate;

                std::cout << "Nhap kind of room: ";
                std::cin >> kind_of;

                std::cout << "Nhap cost: ";
                std::cin >> cost;

                std::cout << "Phong da duoc thue? (1: Co, 0: Khong): ";
                std::cin >> occupied;

                roomManagement.updateRoom(roomIDToUpdate, kind_of, cost, occupied);
                std::cout << "Room " << roomIDToUpdate << " da duoc cap nhat.\n";
                break;
            }
            case 5: {
                int roomID, customerID;

                std::cout << "Nhap Room ID: ";
                std::cin >> roomID;

                std::cout << "Nhap Customer ID: ";
                std::cin >> customerID;

                roomManagement.addCustomerToRoom(roomID, customerID);
                std::cout << "Da them Customer " << customerID << " vao Room " << roomID << ".\n";
                break;
            }
            case 0:
                std::cout << "Ket thuc chuong trinh.\n";
                break;
            default:
                std::cout << "Lua chon khong hop le. Vui long nhap lai.\n";
                break;
        }
    } while (choice != 0);

    return 0;
}
