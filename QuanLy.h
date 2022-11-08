#include<iostream>
#include"bill.h"
using namespace std;

class QuanLy{
    private:
        string tenNhaHang = "Nha hang hai nguoi ban";
    public:
        QuanLy();
        void capNhatTenNhaHang();
        string getTenNhaHang();
        void capNhatGiaBan();
        void themMonVaoMenu();
        void xoaMonKhoiMenu();
        void DoanhThuTrongNgay();
        void DoanhThu();
};