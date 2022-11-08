#include"order.h"

class clistFoods{
    private:
        foods *listFoods;
        int soLuongMonAn;
    public:
        ~clistFoods();
        clistFoods();
        void DSMonAn();
        foods& operator[] (const int&);
};

class clistDrinks{
    private:
        drinks *listDrinks;
        int soLuongThucUong;
    public:
        clistDrinks();
        ~clistDrinks();
        void DSThucUong();
        drinks& operator[] (const int&);
};