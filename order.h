#include<iostream>
using namespace std;

class order {
    protected:
        string tenMon;
        int gia;
        bool kt; //true - food | flase - drink
    public:
        virtual void setTenMon(const string&);
        virtual string getTenMon();
        virtual void setGia(const int&);
        virtual int getGia();
        virtual void setKT(bool);
        virtual bool getKT();
        virtual void xuat();
};

class foods : public order {
    private:
    public:
        friend ostream& operator << (ostream&, const foods&);
};

class drinks : public order {
    private:
    public:
        friend ostream& operator << (ostream&, const drinks&);
};