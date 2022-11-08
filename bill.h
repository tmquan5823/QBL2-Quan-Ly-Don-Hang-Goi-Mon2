#include"list.h"
#include<map>
#include<vector>

class bill{
    private:
        vector<pair<order, int>> vBill;
        //vector<pair<order, int>> mDrinks;
    public:
        void GoiMon();
        int indexOfVector(const string&);
        void HoaDon();
        void XuatHoaDon();
        friend class QuanLy;
};