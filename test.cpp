#include <iostream>
#include <iomanip>
#include "admin.h"
#include "customer.h"
#include "room.h"
#include "List.h"
#include <iomanip>

using namespace std;
void menu()
{
    cout << "\t\t\t*****************************************************************" << endl;
    cout << "\t\t\t*\t                                                        *" << endl;
    cout << "\t\t\t*\t **** Welcome To System Phong Tro Manager ****          *" << endl;
    cout << "\t\t\t*\t                                                        *" << endl;
    cout << "			*    	                                                        *" << endl;
    cout << "\t\t\t*\t|  1) Login                     |                       *" << endl;
    cout << "			*    	                                                        *" << endl;
    cout << "\t\t\t*\t|  2) View Phong Tro Dang Trong |                       *" << endl;
    cout << "			*    	                                                        *" << endl;
    cout << "\t\t\t*\t|  0) Exit                      |                       *" << endl;
    cout << "			*    	                                                        *" << endl;
    cout << "\t\t\t*****************************************************************" << endl;
    cout << endl;
}
void menu_login()
{
    cout << "\t\t\t*****************************************************************" << endl;
    cout << "\t\t\t*\t                                                        *" << endl;
    cout << "\t\t\t*\t **** Login  ****                                       *" << endl;
    cout << "\t\t\t*\t                                                        *" << endl;
    cout << "\t\t\t* Are You:                                                      *      " << endl;
    cout << "			*    	                                                        *" << endl;
    cout << "\t\t\t*\t|  1) Admin    |                                        *" << endl;
    cout << "			*    	                                                        *" << endl;
    cout << "\t\t\t*\t|  2) Customer |                                        *" << endl;
    cout << "			*    	                                                        *" << endl;
    cout << "\t\t\t*\t|  0) Exit     |                                        *" << endl;
    cout << "			*    	                                                        *" << endl;
    cout << "\t\t\t*****************************************************************" << endl;
    cout << endl;
}
void menu_admin(string str)
{
    cout << "\t\t\t*****************************************************************" << endl;
    cout << "\t\t\t*\t                                                        *" << endl;
    cout << "\t\t\t*\t **** Welcome To Admin " << setw(10) << str << " ****                *" << endl;
    cout << "\t\t\t*\t                                                        *" << endl;
    cout << "			*    	                                                        *" << endl;
    cout << "\t\t\t*\t|  1) Manager Customer             |                    *" << endl;
    cout << "			*    	                                                        *" << endl;
    cout << "\t\t\t*\t|  2) Manager Phong Tro            |                    *" << endl;
    cout << "			*    	                                                        *" << endl;
    cout << "\t\t\t*\t|  3) Manager Dien Nuoc            |                    *" << endl;
    cout << "			*    	                                                        *" << endl;
    cout << "\t\t\t*\t|  4) Thong Ke Doanh Thu Phong Tro |                    *" << endl;
    cout << "			*    	                                                        *" << endl;
    cout << "\t\t\t*\t|  5) Tinh Doanh Thu Theo Thang    |                    *" << endl;
    cout << "			*    	                                                        *" << endl;
    cout << "\t\t\t*\t|  0) Logout                       |                    *" << endl;
    cout << "			*    	                                                        *" << endl;
    cout << "\t\t\t*****************************************************************" << endl;
    cout << endl;
}
void menu_Manager_Customer()
{
    cout << "\t\t\t*****************************************************************" << endl;
    cout << "\t\t\t*\t                                                        *" << endl;
    cout << "\t\t\t*\t **** Welcome To Customer Manager ****                  *" << endl;
    cout << "\t\t\t*\t                                                        *" << endl;
    cout << "			*    	                                                        *" << endl;
    cout << "\t\t\t*\t|  1) View List Customer |                              *" << endl;
    cout << "			*    	                                                        *" << endl;
    cout << "\t\t\t*\t|  2) Add Customer       |                              *" << endl;
    cout << "			*    	                                                        *" << endl;
    cout << "\t\t\t*\t|  3) Delete Customer    |                              *" << endl;
    cout << "			*    	                                                        *" << endl;
    cout << "\t\t\t*\t|  4) Edit Customer      |                              *" << endl;
    cout << "			*    	                                                        *" << endl;
    cout << "\t\t\t*\t|  0) Exit               |                              *" << endl;
    cout << "			*    	                                                        *" << endl;
    cout << "\t\t\t*****************************************************************" << endl;
    cout << endl;
}

void menu_Manager_Phong_Tro() {
    int choice_Phong_Tro;

    do {
        // Hiển thị menu quản lý phòng trọ
    cout << "\t\t\t*****************************************************************" << endl;
    cout << "\t\t\t*\t                                                        *" << endl;
    cout << "\t\t\t*\t **** Welcome To Phong Tro Manager ****                 *" << endl;
    cout << "\t\t\t*\t                                                        *" << endl;
    cout << "			*    	                                                        *" << endl;
    cout << "\t\t\t*\t|  1) View List Phong Tro              |                *" << endl;
    cout << "			*    	                                                        *" << endl;
    cout << "\t\t\t*\t|  2) View List Phong Tro Da Duoc Thue |                *" << endl;
    cout << "			*    	                                                        *" << endl;
    cout << "\t\t\t*\t|  3) View List Phong Tro Dang Trong   |                *" << endl;
    cout << "			*    	                                                        *" << endl;
    cout << "\t\t\t*\t|  4) Add Phong Tro                    |                *" << endl;
    cout << "			*    	                                                        *" << endl;
    cout << "\t\t\t*\t|  5) Delete Phong Tro                 |                *" << endl;
    cout << "			*    	                                                        *" << endl;
    cout << "\t\t\t*\t|  6) Edit Phong Tro                   |                *" << endl;
    cout << "			*    	                                                        *" << endl;
    cout << "\t\t\t*\t|  7) View List Thanh Toan Phong Tro   |                *" << endl;
    cout << "			*    	                                                        *" << endl;
    cout << "\t\t\t*\t|  8) Add Thanh Toan Phong Tro         |                *" << endl;
    cout << "			*    	                                                        *" << endl;
    cout << "\t\t\t*\t|  9) Delete Thanh Toan Phong Tro      |                *" << endl;
    cout << "			*    	                                                        *" << endl;
    cout << "\t\t\t*\t|  10) Edit Thanh Toan Phong Tro       |                *" << endl;
    cout << "			*    	                                                        *" << endl;
    cout << "\t\t\t*\t|  0) Exit                             |                *" << endl;
    cout << "			*    	                                                        *" << endl;
    cout << "\t\t\t*****************************************************************" << endl;
    cout << endl;
    cout << "\nEnter your choice_Phong_Tro: ";
        cin >> choice_Phong_Tro;
        List<Room> roomList;  
        switch (choice_Phong_Tro) {
            case 1:
                // Xử lý tùy chọn 1
                cout << "View List Phong Tro" << endl;

                // Gọi phương thức để load dữ liệu từ file
                Room::loadRoomListFromFile(roomList);
                // Gọi hàm hoặc thêm mã nguồn xử lý tùy chọn 1 ở đây
                 // Hiển thị thông tin phòng
                 cout << "Total room : " << endl;
                 cout << roomList.getSize() << endl;
                cout << "===Detail room================================================= " << endl;
                cout << std::left << std::setw(20) << "|Room ID" << std::setw(20) << "|Kind Of" << std::setw(15) << "|Cost" << std::setw(10) << "|Occupied|" << std::endl;
                cout << "================================================================ " << endl;

                for (int i = 0; i < roomList.getSize(); i++) {
                    const Room& currentRoom = roomList[i];
                    cout << std::left << std::setw(1) << "|" << std::setw(19) << currentRoom.getRoomID() << "|" << std::setw(20) << currentRoom.getKindOf()
                        << "|" << std::setw(15) << currentRoom.getCost() << "|" << std::setw(6) << (currentRoom.isOccupied() ? "True" : "False") << "|" << std::endl;
                }

                break;

            case 2:
                // Xử lý tùy chọn 2
                cout << "View List Phong Tro Da Duoc Thue" << endl;
                // Gọi hàm hoặc thêm mã nguồn xử lý tùy chọn 2 ở đây
                break;
            case 3:
                // Xử lý tùy chọn 3
                cout << "View List Phong Tro Dang Trong" << endl;
                // Gọi hàm hoặc thêm mã nguồn xử lý tùy chọn 3 ở đây
                break;
            case 4:
            {
                cout << "Add Phong Tro" << endl;
                 List<Room> roomList;
                // Nhập thông tin về phòng từ người dùng
                int roomID;
                string kindOf;
                double cost;
                bool occupied;

                cout << "Nhap Room ID: ";
                cin >> roomID;

                cout << "Nhap Kind of (loai phong): ";
                cin.ignore(); // Đọc kí tự '\n' còn tồn đọng trong bộ nhớ đệm
                getline(cin, kindOf);

                cout << "Nhap Cost: ";
                cin >> cost;

                cout << "Phong da thue? (1: Yes, 0: No): ";
                cin >> occupied;

                // Tạo đối tượng Room mới và thêm vào danh sách
                Room newRoom(roomID, kindOf, cost, occupied);
                roomList.push_back(newRoom);

                // Lưu thông tin phòng vào file "room.txt"
                ofstream file("room.txt", ios::app); // Mở file để ghi thêm vào cuối
                if (file.is_open()) {
                    file << newRoom.getRoomID() << "\t" << newRoom.getKindOf() << "\t" << newRoom.getCost() << "\t" << newRoom.isOccupied()  << endl;
                    file.close();
                    cout << "Da them phong tro moi va luu vao file room.txt.\n";
                } else {
                    cout << "Khong the mo file de ghi.\n";
                }

                break;
            }
            case 5:
                // Xử lý tùy chọn 5
                cout << "Delete Phong Tro" << endl;
                // Gọi hàm hoặc thêm mã nguồn xử lý tùy chọn 5 ở đây
                break;
            case 6:
                // Xử lý tùy chọn 6
                cout << "Edit Phong Tro" << endl;
                // Gọi hàm hoặc thêm mã nguồn xử lý tùy chọn 6 ở đây
                break;
            case 7:
                // Xử lý tùy chọn 7
                cout << "View List Thanh Toan Phong Tro" << endl;
                // Gọi hàm hoặc thêm mã nguồn xử lý tùy chọn 7 ở đây
                break;
            case 8:
                // Xử lý tùy chọn 8
                cout << "Add Thanh Toan Phong Tro" << endl;
                // Gọi hàm hoặc thêm mã nguồn xử lý tùy chọn 8 ở đây
                break;
            case 9:
                // Xử lý tùy chọn 9
                cout << "Delete Thanh Toan Phong Tro" << endl;
                // Gọi hàm hoặc thêm mã nguồn xử lý tùy chọn 9 ở đây
                break;
            case 10:
                // Xử lý tùy chọn 10
                cout << "Edit Thanh Toan Phong Tro" << endl;
                // Gọi hàm hoặc thêm mã nguồn xử lý tùy chọn 10 ở đây
                break;
            case 0:
                cout << "Back to Main Menu." << endl;
                break;
            default:
                cout << "Invalid choice_Phong_Tro. Please try again." << endl;
                break;
        }

    } while (choice_Phong_Tro != 0);
}

void menu_Manager_Dien_Nuoc()
{
    cout << "\t\t\t*****************************************************************" << endl;
    cout << "\t\t\t*\t                                                        *" << endl;
    cout << "\t\t\t*\t **** Welcome To Dien Nuoc Manager ****                 *" << endl;
    cout << "\t\t\t*\t                                                        *" << endl;
    cout << "			*    	                                                        *" << endl;
    cout << "\t\t\t*\t|  1) View list Dien Nuoc |                             *" << endl;
    cout << "			*    	                                                        *" << endl;
    cout << "\t\t\t*\t|  2) Add Dien Nuoc       |                             *" << endl;
    cout << "			*    	                                                        *" << endl;
    cout << "\t\t\t*\t|  3) Delete Dien Nuoc    |                             *" << endl;
    cout << "			*    	                                                        *" << endl;
    cout << "\t\t\t*\t|  4) Edit Dien Nuoc      |                             *" << endl;
    cout << "			*    	                                                        *" << endl;
    cout << "\t\t\t*\t|  0) Exit                |                             *" << endl;
    cout << "			*    	                                                        *" << endl;
    cout << "\t\t\t*****************************************************************" << endl;
    cout << endl;
}
void menu_user(string str)
{
    cout << "\t\t\t*****************************************************************" << endl;
    cout << "\t\t\t*\t                                                        *" << endl;
    cout << "\t\t\t*\t **** Wellcome Khach Tro" << setw(15) << str << " ****            *" << endl;
    cout << "\t\t\t*\t                                                        *" << endl;
    cout << "			*    	                                                        *" << endl;
    cout << "\t\t\t*\t|  1) Info Khach Tro |                                  *" << endl;
    cout << "			*    	                                                        *" << endl;
    cout << "\t\t\t*\t|  2) Info Phong Tro |                                  *" << endl;
    cout << "			*    	                                                        *" << endl;
    cout << "\t\t\t*\t|  3) Info Dien Nuoc |                                  *" << endl;
    cout << "			*    	                                                        *" << endl;
    cout << "\t\t\t*\t|  0) Logout         |                                  *" << endl;
    cout << "			*    	                                                        *" << endl;
    cout << "\t\t\t*****************************************************************" << endl;
    cout << endl;
}
void menu_Info_Khach_Tro()
{
    cout << "\t\t\t*****************************************************************" << endl;
    cout << "\t\t\t*\t                                                        *" << endl;
    cout << "\t\t\t*\t **** Welcome To Info Khach Tro ****                    *" << endl;
    cout << "\t\t\t*\t                                                        *" << endl;
    cout << "			*    	                                                        *" << endl;
    cout << "\t\t\t*\t|  1) View Info Khach Tro |                             *" << endl;
    cout << "			*    	                                                        *" << endl;
    cout << "\t\t\t*\t|  2) Edit Info Khach Tro |                             *" << endl;
    cout << "			*    	                                                        *" << endl;
    cout << "\t\t\t*\t|  0) Exit                |                             *" << endl;
    cout << "			*    	                                                        *" << endl;
    cout << "\t\t\t*****************************************************************" << endl;
    cout << endl;
}
void menu_Info_Phong_Tro()
{
    cout << "\t\t\t*****************************************************************" << endl;
    cout << "\t\t\t*\t                                                        *" << endl;
    cout << "\t\t\t*\t **** Welcome To Info Phong Tro ****                    *" << endl;
    cout << "\t\t\t*\t                                                        *" << endl;
    cout << "			*    	                                                        *" << endl;
    cout << "\t\t\t*\t|  1) View Info Phong Tro       |                       *" << endl;
    cout << "			*    	                                                        *" << endl;
    cout << "\t\t\t*\t|  2) Huy Phong Tro             |                       *" << endl;
    cout << "			*    	                                                        *" << endl;
    cout << "\t\t\t*\t|  3) View Thanh Toan Phong Tro |                       *" << endl;
    cout << "			*    	                                                        *" << endl;
    cout << "\t\t\t*\t|  0) Exit                      |                       *" << endl;
    cout << "			*    	                                                        *" << endl;
    cout << "\t\t\t*****************************************************************" << endl;
    cout << endl;
}
void menu_Info_Dien_Nuoc()
{
    cout << "\t\t\t*****************************************************************" << endl;
    cout << "\t\t\t*\t                                                        *" << endl;
    cout << "\t\t\t*\t **** Welcome To Info Dien Nuoc ****                    *" << endl;
    cout << "\t\t\t*\t                                                        *" << endl;
    cout << "			*    	                                                        *" << endl;
    cout << "\t\t\t*\t|  1) View Info Dien Nuoc  |                            *" << endl;
    cout << "			*    	                                                        *" << endl;
    cout << "\t\t\t*\t|  2) Thanh Toan Dien Nuoc |                            *" << endl;
    cout << "			*    	                                                        *" << endl;
    cout << "\t\t\t*\t|  0) Exit                 |                            *" << endl;
    cout << "			*    	                                                        *" << endl;
    cout << "\t\t\t*****************************************************************" << endl;
    cout << endl;
}
void warn()
{
    cout << "Chua Co Gi" << endl;
}
int main()
{
    // string name = "iloveuhiuhiu";
    // menu_admin(name);
    // menu_Manager_Customer();
    // menu_Manager_Phong_Tro();
    // menu_Info_Khach_Tro();
    // menu_Info_Dien_Nuoc();
    // menu_Info_Phong_Tro();
    // string name = "Thai Viet Hung";
    // menu_user(name);
    char ch_value;
    do
    {
        menu();
        int choice1;
        cout << "***********************" << endl
             << endl;
        cout << "Enter Your Choice : ";
        cin >> choice1;
        while (choice1 < 0 || choice1 > 2)
        {
            cout << "Enter Right Choice : ";
            cin >> choice1;
        }
        cout << "\n***********************" << endl;
        admin object1;
        customer object2;
        string user_name, password;
        switch (choice1)
        {
        case 1:
            do
            {
                menu_login();
                int choice2;
                cout << "***********************" << endl
                     << endl;
                cout << "Enter Your Choice : ";
                cin >> choice2;
                while (choice2 < 0 || choice2 > 2)
                {
                    cout << "Enter Right Choice : ";
                    cin >> choice2;
                }
                cout << "\n***********************" << endl;

                switch (choice2)
                {
                case 1:

                    do
                    {
                        cin.ignore();
                        cout << "Enter Admin: ";
                        getline(cin, user_name);
                        object1.set_user_name(user_name);
                        cout << "Enter Admin Password: ";
                        getline(cin, password);
                        object1.set_password(password);
                    } while (!object1.login());
                    do
                    {
                        menu_admin(object1.get_user_name());
                        int choice3;
                        cout << "***********************" << endl
                             << endl;
                        cout << "Enter Your Choice : ";
                        cin >> choice3;
                        while (choice3 < 0 || choice3 > 5)
                        {
                            cout << "Enter Right Choice : ";
                            cin >> choice3;
                        }
                        cout << "\n***********************" << endl;
                        switch (choice3)
                        {
                        case 1:
                            do
                            {
                                menu_Manager_Customer();
                                int choice4;
                                cout << "***********************" << endl
                                     << endl;
                                cout << "Enter Your Choice : ";
                                cin >> choice4;
                                while (choice4 < 0 || choice4 > 4)
                                {
                                    cout << "Enter Right Choice : ";
                                    cin >> choice4;
                                }
                                cout << "\n***********************" << endl;
                                switch (choice4)
                                {
                                case 1:
                                    warn();
                                    break;
                                case 2:
                                    warn();
                                    break;
                                case 3:
                                    warn();
                                    break;
                                case 4:
                                    warn();
                                    break;
                                default:
                                    break;
                                }
                                cout << endl;
                                menu_Manager_Customer();
                                cout << "Do You Want To Continue Again Customer Manager (y/n)? : ";
                                cin >> ch_value;
                                system("cls");
                            } while (ch_value == 'Y' || ch_value == 'y');
                            break;
                        case 2:
                            do
                            {
                                menu_Manager_Phong_Tro();
                                int choice5;
                                cout << "***********************" << endl
                                     << endl;
                                cout << "Enter Your Choice : ";
                                cin >> choice5;
                                while (choice5 < 0 || choice5 > 10)
                                {
                                    cout << "Enter Right Choice : ";
                                    cin >> choice5;
                                }
                                cout << "\n***********************" << endl;
                                switch (choice5)
                                {
                                case 1:
                                    warn();
                                    break;
                                case 2:
                                    warn();
                                    break;
                                case 3:
                                    warn();
                                    break;
                                case 4:
                                    warn();
                                    break;
                                case 5:
                                    warn();
                                    break;
                                case 6:
                                    warn();
                                    break;
                                case 7:
                                    warn();
                                    break;
                                case 8:
                                    warn();
                                    break;
                                case 9:
                                    warn();
                                    break;
                                case 10:
                                    warn();
                                    break;
                                default:
                                    break;
                                }
                                cout << endl;
                                menu_Manager_Phong_Tro();
                                cout << "Do You Want To Continue Again Phong Tro Manager (y/n)? : ";
                                cin >> ch_value;
                                system("cls");
                            } while (ch_value == 'Y' || ch_value == 'y');
                            break;
                        case 3:
                            do
                            {
                                menu_Manager_Dien_Nuoc();
                                int choice6;
                                cout << "***********************" << endl
                                     << endl;
                                cout << "Enter Your Choice : ";
                                cin >> choice6;
                                while (choice6 < 0 || choice6 > 4)
                                {
                                    cout << "Enter Right Choice : ";
                                    cin >> choice6;
                                }
                                cout << "\n***********************" << endl;
                                switch (choice6)
                                {
                                case 1:
                                    warn();
                                    break;
                                case 2:
                                    warn();
                                    break;
                                case 3:
                                    warn();
                                    break;
                                case 4:
                                    warn();
                                    break;
                                default:
                                    break;
                                }
                                cout << endl;
                                menu_Manager_Dien_Nuoc();
                                cout << "Do You Want To Continue Again Dien Nuoc Manager (y/n)? : ";
                                cin >> ch_value;
                                system("cls");
                            } while (ch_value == 'Y' || ch_value == 'y');
                            break;
                        case 4:
                            warn();
                            break;
                        case 5:
                            warn();
                            break;
                        default:
                            break;
                        }
                        cout << endl;
                        menu_admin(object1.get_user_name());
                        cout << "Do You Want To Continue Again Admin (y/n)? : ";
                        cin >> ch_value;
                        system("cls");
                    } while (ch_value == 'Y' || ch_value == 'y');

                    break;
                case 2:
                    do
                    {
                        cin.ignore();
                        cout << "Enter Customer: ";
                        getline(cin, user_name);
                        object2.set_user_name(user_name);
                        cout << "Enter Customer Password: ";
                        getline(cin, password);
                        object2.set_password(password);
                    } while (!object2.login());
                    do
                    {
                        menu_user(object2.get_customer_name());
                        int choice7;
                        cout << "***********************" << endl
                             << endl;
                        cout << "Enter Your Choice : ";
                        cin >> choice7;
                        while (choice7 < 0 || choice7 > 3)
                        {
                            cout << "Enter Right Choice : ";
                            cin >> choice7;
                        }
                        cout << "\n***********************" << endl;
                        switch (choice7)
                        {
                        case 1:
                            do
                            {
                                menu_Info_Khach_Tro();
                                int choice8;
                                cout << "***********************" << endl
                                     << endl;
                                cout << "Enter Your Choice : ";
                                cin >> choice8;
                                while (choice8 < 0 || choice8 > 2)
                                {
                                    cout << "Enter Right Choice : ";
                                    cin >> choice8;
                                }
                                cout << "\n***********************" << endl;
                                switch (choice8)
                                {
                                case 1:
                                    warn();
                                    break;
                                case 2:
                                    warn();
                                    break;
                                default:
                                    break;
                                }
                                cout << endl;
                                menu_Info_Khach_Tro();
                                cout << "Do You Want To Continue Again Info Khach Tro (y/n)? : ";
                                cin >> ch_value;
                                system("cls");
                            } while (ch_value == 'Y' || ch_value == 'y');
                            break;
                        case 2:
                            do
                            {
                                menu_Info_Phong_Tro();
                                int choice9;
                                cout << "***********************" << endl
                                     << endl;
                                cout << "Enter Your Choice : ";
                                cin >> choice9;
                                while (choice9 < 0 || choice9 > 3)
                                {
                                    cout << "Enter Right Choice : ";
                                    cin >> choice9;
                                }
                                cout << "\n***********************" << endl;
                                switch (choice9)
                                {
                                case 1:
                                    warn();
                                    break;
                                case 2:
                                    warn();
                                    break;
                                case 3:
                                    warn();
                                    break;
                                default:
                                    break;
                                }
                                cout << endl;
                                menu_Info_Phong_Tro();
                                cout << "Do You Want To Continue Again Info Phong Tro (y/n)? : ";
                                cin >> ch_value;
                                system("cls");
                            } while (ch_value == 'Y' || ch_value == 'y');
                            break;
                        case 3:
                            do
                            {
                                menu_Info_Dien_Nuoc();
                                int choice10;
                                cout << "***********************" << endl
                                     << endl;
                                cout << "Enter Your Choice : ";
                                cin >> choice10;
                                while (choice10 < 0 || choice10 > 2)
                                {
                                    cout << "Enter Right Choice : ";
                                    cin >> choice10;
                                }
                                cout << "\n***********************" << endl;
                                switch (choice10)
                                {
                                case 1:
                                    warn();
                                    break;
                                case 2:
                                    warn();
                                    break;
                                default:
                                    break;
                                }
                                cout << endl;
                                menu_Info_Dien_Nuoc();
                                cout << "Do You Want To Continue Again Info Phong Tro (y/n)? : ";
                                cin >> ch_value;
                                system("cls");
                            } while (ch_value == 'Y' || ch_value == 'y');
                            break;
                        default:
                            break;
                        }
                        cout << endl;
                        menu_user(object2.get_customer_name());
                        cout << "Do You Want To Continue Again Customer (y/n)? : ";
                        cin >> ch_value;
                        system("cls");
                    } while (ch_value == 'Y' || ch_value == 'y');
                    break;
                default:
                    break;
                }
                cout << endl;
                menu_login();
                cout << "Do You Want To Continue Again Login (y/n)? : ";
                cin >> ch_value;
                system("cls");
            } while (ch_value == 'Y' || ch_value == 'y');
            break;
        case 2:
            menu_Manager_Phong_Tro();
            break;
        default:
            break;
        }

        cout << endl;
        menu();
        cout << "Do You Want To Continue Again System Phong Tro Manager(y/n)? : ";
        cin >> ch_value;
        system("cls");
    } while (ch_value == 'Y' || ch_value == 'y');

    // login
    //  string admin_name= "Long", admin_email = "long2019@gmail.com", user_name= "iloveuhiuhiu", password = "1234";
    //  while (true) {
    //      // admin obj;
    //      customer obj;
    //      string user_name, password;
    //      cout <<"nhap ten dang nhap: "; getline(cin,user_name);
    //      cout << "nhap pasword: "; getline(cin,password);
    //      obj.set_user_name(user_name);
    //      obj.set_password(password);
    //      if (obj.login()) {
    //          cout << "Thong tin cua ban: " <<endl;
    //          cout << obj;
    //          break;
    //      }
    //  }
    //  them 1 customer
    //  customer obj1;
    //  cin >> obj1;
    //  obj1.add_customer();
    //  tim don
    //  string id; cin >> id;
    //  customer obj;
    //  obj.find_customer(id);
    //  tim doi
    //  string id; cin >> id;
    //  customer obj;
    //  obj.update_customer(id);
    // xoa
    //  string id; cin >> id;
    //  customer obj;
    //  obj.delete_customer(id);
}