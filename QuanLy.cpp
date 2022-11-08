#include"QuanLy.h"
#include<fstream>
#include<string.h>
#include<ctime>
#include<string>
#include<vector>
clistFoods lf;
clistDrinks ld;
time_t now = time('\0');
tm *t = localtime(&now);
char *ch = asctime(t);

QuanLy::QuanLy(){
    clistFoods lf;
    clistDrinks ld;
    ifstream fileResName;
    fileResName.open("TenNhaHang.txt", ios::in);
    getline(fileResName, this->tenNhaHang);
    fileResName.close();
    while (true)
    {
        int choice;
        system("cls");
        cout<<"\t======"<<strupr((char*)this->tenNhaHang.c_str())<<"========"<<endl;
        cout<<"1. Dat hoa don"<<endl;
        cout<<"2. Cap nhat nha hang"<<endl;
        cout<<"3. Doanh thu trong ngay"<<endl;
        cout<<"4. Doanh thu trong thang"<<endl;
        cout<<"0. Ket thuc"<<endl;
        cout<<"Vui long nhap lua chon: ";
        cin>>choice;
        if(choice == 1){
            bill b;
            b.GoiMon();
        }
        else if(choice == 2){
            int choice;
            while (true)
            {
                system("cls");
                cout<<"=====Cap nhat nha hang====="<<endl;
                cout<<"1. Cap nhat ten nha hang"<<endl;
                cout<<"2. Cap nhat gia ban"<<endl;
                cout<<"3. Them mon vao Menu"<<endl;
                cout<<"4. Xoa mon khoi menu"<<endl;
                cout<<"0. Thoat"<<endl;
                cout<<"VUi long nhap lua chon: ";
                cin>>choice;
                if(choice == 1){
                    this->capNhatTenNhaHang();
                }
                else if(choice == 2){
                    this->capNhatGiaBan();
                }
                else if(choice == 3){
                    this->themMonVaoMenu();
                }
                else if(choice == 4){
                    this->xoaMonKhoiMenu();
                }
                else if(choice == 0) break;
                else {
                    cout<<"Nhap khong hop le, vui long nhap lai!"<<endl;
                    system("pause");
                }
            }
            
        }
        else if(choice == 3){
            this->DoanhThuTrongNgay();
        }
        else if(choice == 4){
            this->DoanhThu();
            system("cls");
            long long total = 0;
            ifstream fileDT("DoanhThu.txt");
            while (!fileDT.eof())
            {
                string day;
                fileDT>>day;
                long dt;
                fileDT>> dt;
                total += dt;
                string s;
                getline(fileDT, s);
                cout<<day<<": "<<dt<<endl;
            }
            cout<<"Tong doanh thu la: "<<total<<endl;
            system("pause");
        }
        else if(choice == 0) break;
        else {
            cout<<"Nhap khong hop le vui long nhap lai!"<<endl;
            system("pause");
        }
    }
}

//Cap nhat ten nha hang
void QuanLy::capNhatTenNhaHang(){
    system("cls");
    cout<<"=====Cap nhat ten nha hang====="<<endl;
    cout<<"Nhap ten nha hang: ";
    fflush(stdin);
    ofstream fileResName;
    fileResName.open("TenNhaHang.txt", ios::out);
    fileResName.clear();
    fflush(stdin);
    getline(cin, this->tenNhaHang);
    fileResName<<this->tenNhaHang;
    fileResName.close();
    cout<<"Cap nhat thanh cong!"<<endl;
    system("pause");
}

string QuanLy::getTenNhaHang(){
    return this->tenNhaHang;
}

//Cap nhat gia ban
void QuanLy::capNhatGiaBan(){
    while (true)
    {
        system("cls");
        cout<<"=====Cap nhat gia ban=====\n"<<endl;
        cout<<"1. Cap nhat gia mon an "<<endl;
        cout<<"2. Cap nhat gia thuc uong"<<endl;
        cout<<"0. Thoat"<<endl;
        int choice;
        cout<<"Vui long nhap lua chon: ";
        cin>>choice;
        if(choice == 1){
            system("cls");
            lf.DSMonAn();
            cout<<"Nhap so thu tu mon an muon cap nhat: ";
            int stt;
            cin>>stt;
            ifstream file("foods.txt");
            ofstream tmp("tmp.txt");
            int i = 1;
            vector<string> lines;
            string line;
            while(i != stt*2){
                i++;
                getline(file, line);
                lines.push_back(line);
            }
            cout<<lf[stt - 1];
            cout<<"Nhap gia muon cap nhat: ";
            string newPrice;
            cin>>newPrice;
            lines.push_back(newPrice);
            getline(file, line);
            while (!file.eof())
            {
                getline(file, line);
                lines.push_back(line);
            }
            file.close();
            for(int j = 0;j < lines.size() - 1; j++){
                tmp<<lines[j]<<endl;
            }
            tmp<<lines[lines.size() - 1];
            tmp.close();
            remove("foods.txt");
            rename("tmp.txt", "foods.txt");
            system("cls");
            lf.DSMonAn();
            cout<<"=====Cap nhat thanh cong!====="<<endl;
            system("pause");
        }
        else if(choice == 2){
            system("cls");
            ld.DSThucUong();
            cout<<"Nhap so thu tu mon an muon cap nhat: ";
            int stt;
            cin>>stt;
            ifstream file("drinks.txt");
            ofstream tmp("tmp.txt");
            int i = 1;
            vector<string> lines;
            string line;
            while(i != stt*2){
                i++;
                getline(file, line);
                lines.push_back(line);
            }
            cout<<ld[stt - 1];
            cout<<"Nhap gia muon cap nhat: ";
            string newPrice;
            cin>>newPrice;
            lines.push_back(newPrice);
            getline(file, line);
            while (!file.eof())
            {
                getline(file, line);
                lines.push_back(line);
            }
            file.close();
            for(int j = 0;j < lines.size() - 1; j++){
                tmp<<lines[j]<<endl;
            }
            tmp<<lines[lines.size() - 1];
            tmp.close();
            remove("drinks.txt");
            rename("tmp.txt", "drinks.txt");
            system("cls");
            ld.DSThucUong();
            cout<<"=====Cap nhat thanh cong!====="<<endl;
            system("pause");
        }
        else if(choice == 0) break;
        else {
            cout<<"Nhap khong hop le, vui long nhap lai!"<<endl;
            system("pause");
        }
    }
    
}

//Them mon vao menu
void QuanLy::themMonVaoMenu(){
    while(true){
        system("cls");
        cout<<"=====Them mon vao menu=====\n"<<endl;
        cout<<"1. Them mon an"<<endl;
        cout<<"2. Them thuc uong"<<endl;
        cout<<"0. Thoat"<<endl;
        int choice;
        cout<<"Vui long nhap lua chon: ";
        cin>>choice;
        if(choice == 1){
            ofstream file;
            system("cls");
            lf.DSMonAn();
            file.open("foods.txt", ios::app);
            cout<<"Nhap ten mon muon them: ";
            string newFood;
            fflush(stdin);
            getline(cin, newFood);
            file<<"\n"<<newFood<<endl;
            cout<<"Nhap gia mon: ";
            int newFoodPrice;
            cin>>newFoodPrice;
            file<<newFoodPrice;
            file.close();
            system("cls");
            clistFoods lf1;;
            lf1.DSMonAn();
            cout<<"Them thanh cong!"<<endl;
            system("pause");
        }
        else if(choice == 2){
            ofstream file;
            system("cls");
            ld.DSThucUong();
            file.open("drinks.txt", ios::app);
            cout<<"Nhap ten thuc uong muon them: ";
            string newDrink;
            fflush(stdin);
            getline(cin, newDrink);
            file<<"\n"<<newDrink<<endl;
            cout<<"Nhap gia thuc uong: ";
            int newDrinkPrice;
            cin>>newDrinkPrice;
            file<<newDrinkPrice;
            file.close();
            system("cls");
            clistDrinks ld1;;
            ld1.DSThucUong();
            cout<<"Them thanh cong!"<<endl;
            system("pause");
        }
        else if(choice == 0) break;
        else{
            cout<<"Nhap khong hop le, vui long nhap lai!"<<endl;
            system("pause");
        }
    }
}

//Xoa mon khoi menu
void QuanLy::xoaMonKhoiMenu(){
    while (true)
    {
        system("cls");
        cout<<"=====Xoa mon khoi menu=====\n"<<endl;
        cout<<"1. Xoa mon an khoi menu "<<endl;
        cout<<"2. Xoa thuc uong khoi menu"<<endl;
        cout<<"0. Thoat"<<endl;
        int choice;
        cout<<"Vui long nhap lua chon: ";
        cin>>choice;
        if(choice == 1){
            system("cls");
            lf.DSMonAn();
            cout<<"Nhap so thu tu mon an muon xoa khoi menu: ";
            int stt;
            cin>>stt;
            ifstream file("foods.txt");
            ofstream tmp("tmp.txt");
            int i = 1;
            vector<string> lines;
            string line;
            while(i != stt*2 - 1){
                i++;
                getline(file, line);
                lines.push_back(line);
            }
            getline(file, line);
            getline(file, line);
            while (!file.eof())
            {
                getline(file, line);
                lines.push_back(line);
            }
            file.close();
            for(int j = 0;j < lines.size() - 1; j++){
                tmp<<lines[j]<<endl;
            }
            tmp<<lines[lines.size() - 1];
            tmp.close();
            remove("foods.txt");
            rename("tmp.txt", "foods.txt");
            system("cls");
            lf.DSMonAn();
            cout<<"=====Xoa thanh cong!====="<<endl;
            system("pause");
        }
        else if(choice == 2){
            system("cls");
            ld.DSThucUong();
            cout<<"Nhap so thu tu thuc uong muon xoa khoi menu: ";
            int stt;
            cin>>stt;
            ifstream file("drinks.txt");
            ofstream tmp("tmp.txt");
            int i = 1;
            vector<string> lines;
            string line;
            while(i != stt*2 - 1){
                i++;
                getline(file, line);
                lines.push_back(line);
            }
            getline(file, line);
            getline(file, line);
            while (!file.eof())
            {
                getline(file, line);
                lines.push_back(line);
            }
            file.close();
            for(int j = 0;j < lines.size() - 1; j++){
                tmp<<lines[j]<<endl;
            }
            tmp<<lines[lines.size() - 1];
            tmp.close();
            remove("drinks.txt");
            rename("tmp.txt", "drinks.txt");
            system("cls");
            ld.DSThucUong();
            cout<<"=====Xpa thanh cong!====="<<endl;
            system("pause");
        }
        else if(choice == 0) break;
        else {
            cout<<"Nhap khong hop le, vui long nhap lai!"<<endl;
            system("pause");
        }
    }
}

//Doanh thu trong ngay
void QuanLy::DoanhThuTrongNgay(){
    system("cls");
    long long total = 0;
    string s;
    ifstream FileDT("DoanhThuTrongNgay.txt");
    getline(FileDT, s);
    while(!FileDT.eof()){
        int dt;
        FileDT >> dt;
        total += dt;
    }
    cout<<"Tong doanh thu trong ngay " <<t->tm_mday<<"/"<<t->tm_mon<<"/"<<1900 + t->tm_year<< " la: "<<total<<endl;
    system("pause");
}

// Tong doanh thu
void QuanLy::DoanhThu(){
    long long total = 0;
    int day;
    ifstream check("DoanhThu.txt", ios::in);
    check >> day;
    check.seekg(0, ios::end);
    int empty = check.tellg();
    check.close();
    string s;                           
    ifstream fileDT("DoanhThuTrongNgay.txt");
    getline(fileDT, s);
    while(!fileDT.eof()){
            int dt;
            fileDT >> dt;
            total += dt;
        }
    fstream fileTotalDT("DoanhThu.txt", ios::in | ios::out);
    if(empty == 0){
        fileTotalDT<<t->tm_mday<<"/"<<t->tm_mon<<"/"<<1900 + t->tm_year<<" "<<total;
        fileTotalDT.close();
    }
    else{
        ofstream tmp("tmp.txt");
        vector<string> lines;
        if(day == t->tm_mday){
            getline(fileTotalDT, s);
            while (!fileTotalDT.eof())
            {
                getline(fileTotalDT, s);
                lines.push_back(s);
            }
            tmp<<t->tm_mday<<"/"<<t->tm_mon<<"/"<<1900 + t->tm_year<<" "<<total;
            for(int i = 0;i<lines.size();i++){
                tmp<<"\n"<<lines[i];
            }
        }
        else {
            while (!fileTotalDT.eof())
            {
                getline(fileTotalDT, s);
                lines.push_back(s);
            }
            tmp<<t->tm_mday<<"/"<<t->tm_mon<<"/"<<1900 + t->tm_year<<" "<<total;
            for(int i = 0;i<lines.size();i++){
                tmp<<"\n"<<lines[i];
            }
        }
        fileTotalDT.close();
        tmp.close();
        remove("DoanhThu.txt");
        rename("tmp.txt", "DoanhThu.txt");
    }
}