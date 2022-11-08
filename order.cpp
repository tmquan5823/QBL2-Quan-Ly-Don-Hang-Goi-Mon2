#include"order.h"
#include<string>
using namespace std;

void order::setTenMon(const string& ten){
    this->tenMon = ten;
}

string order::getTenMon(){
    return this->tenMon;
}

void order::setGia(const int &gia){
    this->gia = gia;
}

int order::getGia(){
    return this->gia;
}

void order::xuat(){
    cout<<this->tenMon<<": "<<this->gia<<endl;
}

void order::setKT(bool kt){
    this->kt = kt;
}

bool order::getKT(){
    return this->kt;
}

ostream& operator << (ostream& o,  const foods& f){
    o<<f.tenMon<<": "<<f.gia<<endl;
    return o;
}

ostream& operator << (ostream& o, const drinks& d){
    cout<<d.tenMon<<": "<<d.gia<<endl;
    return o;
}




