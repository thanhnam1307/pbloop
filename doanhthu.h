// DoanhThu.h
#ifndef DOANHTHU_H
#define DOANHTHU_H

#include <iostream>

class DoanhThu {
public:
    // Constructors
    DoanhThu();  // Constructor mặc định
    DoanhThu(int ngay, int thang, int nam, double thuNhap);  // Constructor với thông tin khởi tạo

    // Destructor
    ~DoanhThu();

    // Getter và Setter
    int getNgay() const;
    void setNgay(int ngay);

    int getThang() const;
    void setThang(int thang);

    int getNam() const;
    void setNam(int nam);

    double getThuNhap() const;
    void setThuNhap(double thuNhap);

    // Phương thức thêm doanh thu
    void addDoanhThu(int ngay, int thang, int nam, double thuNhap);

    // Phương thức tính tổng doanh thu
    double tongDoanhThu() const;

    // Phương thức hiển thị thông tin doanh thu
    void display() const;

private:
    int ngay;
    int thang;
    int nam;
    double thuNhap;
};

#endif // DOANHTHU_H
