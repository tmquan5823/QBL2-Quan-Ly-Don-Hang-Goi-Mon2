#include"list.h"
#include<string>
#include<fstream>
using namespace std;

clistFoods::clistFoods(){
}   

clistFoods::~clistFoods(){
}

void clistFoods::DSMonAn(){
    this->soLuongMonAn = 0;
    listFoods = new foods[100];
    //Doc file foods
    ifstream fileFoods;
    fileFoods.open("foods.txt", ios::in);
    fileFoods.seekg(0, ios::beg);
    while(!fileFoods.eof()){
        string food;
        getline(fileFoods, food);
        (listFoods + soLuongMonAn)->setTenMon(food);
        int price;
        fileFoods >> price;
        string s;
        getline(fileFoods, s);
        (listFoods + soLuongMonAn)->setGia(price);
        (listFoods + soLuongMonAn)->setKT(true);
        soLuongMonAn++;
    }
    fileFoods.close();
    cout<<"=====DANH SACH MON AN======"<<endl;
    for(int i = 0;i<soLuongMonAn;i++){
        cout<<i + 1<<". ";
        cout<<*(listFoods + i);
    }   
}

foods& clistFoods::operator[](const int& index){
    return *(this->listFoods + index);
}

clistDrinks::~clistDrinks(){}

clistDrinks::clistDrinks(){
}

void clistDrinks::DSThucUong(){
    this->soLuongThucUong = 0;
    listDrinks = new drinks[100];
    //Doc file drinks
    ifstream fileDrinks;
    fileDrinks.open("drinks.txt", ios::in);
    fileDrinks.seekg(0, ios::beg);
    while(!fileDrinks.eof()){
        string drink;
        getline(fileDrinks, drink);
        (listDrinks + soLuongThucUong)->setTenMon(drink);
        int price;
        fileDrinks >> price;
        string s;
        getline(fileDrinks, s);
        (listDrinks + soLuongThucUong)->setGia(price);
        (listDrinks + soLuongThucUong)->setKT(true);
        soLuongThucUong++;
    }
    fileDrinks.close();
    cout<<"=====DANH SACH THUC UONG======"<<endl;
    for(int i = 0;i<soLuongThucUong;i++){
        cout<<i + 1<<". ";
        cout<<*(listDrinks + i);
    }   
}

drinks& clistDrinks::operator[](const int& index){
    return *(this->listDrinks + index);
}