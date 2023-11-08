// DoanhThu.cpp
#include "DoanhThu.h"

// Constructors
DoanhThu::DoanhThu() : ngay(0), thang(0), nam(0), thuNhap(0.0) {
    // Khởi tạo thông tin doanh thu mặc định
}

DoanhThu::DoanhThu(int ngay, int thang, int nam, double thuNhap)
    : ngay(ngay), thang(thang), nam(nam), thuNhap(thuNhap) {
    // Khởi tạo thông tin doanh thu với giá trị được cung cấp
}

// Destructor
DoanhThu::~DoanhThu() {
    // Không có công việc đặc biệt cần thực hiện trong destructor ở đây
}

// Getter và Setter
int DoanhThu::getNgay() const {
    return ngay;
}

void DoanhThu::setNgay(int ngay) {
    this->ngay = ngay;
}

int DoanhThu::getThang() const {
    return thang;
}

void DoanhThu::setThang(int thang) {
    this->thang = thang;
}

int DoanhThu::getNam() const {
    return nam;
}

void DoanhThu::setNam(int nam) {
    this->nam = nam;
}

double DoanhThu::getThuNhap() const {
    return thuNhap;
}

void DoanhThu::setThuNhap(double thuNhap) {
    this->thuNhap = thuNhap;
}

// Phương thức thêm doanh thu
void DoanhThu::addDoanhThu(int ngay, int thang, int nam, double thuNhap) {
    // Thêm thông tin doanh thu mới
    setNgay(ngay);
    setThang(thang);
    setNam(nam);
    setThuNhap(thuNhap);
}

// Phương thức tính tổng doanh thu
double DoanhThu::tongDoanhThu() const {
    return thuNhap;
}

// Phương thức hiển thị thông tin doanh thu
void DoanhThu::display() const {
    std::cout << "Ngay: " << ngay << "/" << thang << "/" << nam << std::endl;
    std::cout << "Thu nhap: " << thuNhap << std::endl;
}
