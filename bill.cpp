#include"bill.h"
#include<fstream>
#include<ctime>
#include<iomanip>
using namespace std;

int bill::indexOfVector(const string& str){
    for(int i = 0;i<vBill.size();i++){
        if(vBill[i].first.getTenMon() == str) return i;
    }
    return -1;
}

void bill::GoiMon(){
    clistFoods lf;
    clistDrinks ld;
    int choice;
    while (true)
    {
        system("cls");
        cout << "\t\t ==========GOI MON==========" << endl;
        cout << "1. Dat do an" << endl;
        cout << "2. Dat thuc uong" << endl;
        cout << "3. Cap nhat hoa don" << endl;
        cout << "4. Xem hoa don" << endl;
        cout << "5. Xuat hoa don" << endl;
        cout << "0. Thoat" << endl;
        cout << "Vui long nhap lua chon: ";
        cin >> choice;
        if(choice == 1){
            system("cls");
            int goimon;
            lf.DSMonAn();
            cout<<"0. Thoat"<<endl;
            while (true)
            {
                pair <foods, int> p;
                cout<<"Vui long chon mon: ";
                cin>>goimon;
                if(goimon == 1){
                    do
                    {
                        cout<<lf[0];
                        cout<<"-Vui long nhap so luong muon goi: ";
                        if(indexOfVector(lf[0].getTenMon()) == -1){
                        p.first = lf[0];
                        cin>>p.second;
                        vBill.push_back(p);
                        }
                        else{
                            vBill.erase(vBill.begin() + indexOfVector(lf[0].getTenMon()));
                            p.first = lf[0];
                            cin>>p.second;
                            vBill.push_back(p);
                        }
                        if(p.second < 0) cout<<"Nhap khong hop le vui long nhap lai!"<<endl;
                        if(p.second == 0) {
                            vBill.pop_back();
                        }
                    } while (p.second < 0);
                    cout<<"Dat thanh cong!"<<endl;
                }
                else if(goimon == 2){
                    do
                    {
                        cout<<lf[1];
                        cout<<"-Vui long nhap so luong muon goi: ";
                        if(indexOfVector(lf[1].getTenMon()) == -1){
                        p.first = lf[1];
                        cin>>p.second;
                        vBill.push_back(p);
                        }
                        else{
                            vBill.erase(vBill.begin() + indexOfVector(lf[1].getTenMon()));
                            p.first = lf[1];
                            cin>>p.second;
                            vBill.push_back(p);
                        }
                        if(p.second < 0) cout<<"Nhap khong hop le vui long nhap lai!"<<endl;
                        if(p.second == 0) {
                            vBill.pop_back();
                        }
                    } while (p.second < 0);
                    cout<<"Dat thanh cong!"<<endl;
                }
                else if(goimon == 3){
                    do
                    {
                        cout<<lf[2];
                        cout<<"-Vui long nhap so luong muon goi: ";
                        if(indexOfVector(lf[2].getTenMon()) == -1){
                        p.first = lf[2];
                        cin>>p.second;
                        vBill.push_back(p);
                        }
                        else{
                            vBill.erase(vBill.begin() + indexOfVector(lf[2].getTenMon()));
                            p.first = lf[2];
                            cin>>p.second;
                            vBill.push_back(p);
                        }
                        if(p.second < 0) cout<<"Nhap khong hop le vui long nhap lai!"<<endl;
                        if(p.second == 0) {
                            vBill.pop_back();
                        }
                    } while (p.second < 0);
                    cout<<"Dat thanh cong!"<<endl;
                }
                else if(goimon == 4){
                    do
                    {
                        cout<<lf[3];
                        cout<<"-Vui long nhap so luong muon goi: ";
                        if(indexOfVector(lf[3].getTenMon()) == -1){
                        p.first = lf[3];
                        cin>>p.second;
                        vBill.push_back(p);
                        }
                        else{
                            vBill.erase(vBill.begin() + indexOfVector(lf[3].getTenMon()));
                            p.first = lf[3];
                            cin>>p.second;
                            vBill.push_back(p);
                        }
                        if(p.second < 0) cout<<"Nhap khong hop le vui long nhap lai!"<<endl;
                        if(p.second == 0) {
                            vBill.pop_back();
                        }
                    } while (p.second < 0);
                    cout<<"Dat thanh cong!"<<endl;
                }
                else if(goimon == 5){
                    do
                    {
                        cout<<lf[4];
                        cout<<"-Vui long nhap so luong muon goi: ";
                        if(indexOfVector(lf[4].getTenMon()) == -1){
                        p.first = lf[4];
                        cin>>p.second;
                        vBill.push_back(p);
                        }
                        else{
                            vBill.erase(vBill.begin() + indexOfVector(lf[4].getTenMon()));
                            p.first = lf[4];
                            cin>>p.second;
                            vBill.push_back(p);
                        }
                        if(p.second < 0) cout<<"Nhap khong hop le vui long nhap lai!"<<endl;
                        if(p.second == 0) {
                            vBill.pop_back();
                        }
                    } while (p.second < 0);
                    cout<<"Dat thanh cong!"<<endl;
                }
                else if(goimon == 6){
                    do
                    {
                        cout<<lf[5];
                        cout<<"-Vui long nhap so luong muon goi: ";
                        if(indexOfVector(lf[5].getTenMon()) == -1){
                        p.first = lf[5];
                        cin>>p.second;
                        vBill.push_back(p);
                        }
                        else{
                            vBill.erase(vBill.begin() + indexOfVector(lf[5].getTenMon()));
                            p.first = lf[5];
                            cin>>p.second;
                            vBill.push_back(p);
                        }
                        if(p.second < 0) cout<<"Nhap khong hop le vui long nhap lai!"<<endl;
                        if(p.second == 0) {
                            vBill.pop_back();
                        }
                    } while (p.second < 0);
                    cout<<"Dat thanh cong!"<<endl;
                }
                else if(goimon == 7){
                    do
                    {
                        cout<<lf[6];
                        cout<<"-Vui long nhap so luong muon goi: ";
                        if(indexOfVector(lf[6].getTenMon()) == -1){
                        p.first = lf[6];
                        cin>>p.second;
                        vBill.push_back(p);
                        }
                        else{
                            vBill.erase(vBill.begin() + indexOfVector(lf[6].getTenMon()));
                            p.first = lf[6];
                            cin>>p.second;
                            vBill.push_back(p);
                        }
                        if(p.second < 0) cout<<"Nhap khong hop le vui long nhap lai!"<<endl;
                        if(p.second == 0) {
                            vBill.pop_back();
                        }
                    } while (p.second < 0);
                    cout<<"Dat thanh cong!"<<endl;
                }
                else if(goimon == 0) break;
                else {
                    cout<<"Nhap khong hop le, vui long nhap lai!"<<endl;
                }
            }
        }
        else if(choice == 2){
            system("cls");
            int goimon;
            ld.DSThucUong();
            cout<<"0. Thoat"<<endl;
            while (true)
            {
                pair <drinks, int> p;
                cout<<"-Vui long nhap lua chon: ";
                cin>>goimon;
                if(goimon == 1){
                    do
                    {
                        cout<<ld[0];
                        cout<<"-Vui long nhap so luong muon goi: ";
                        if(indexOfVector(ld[0].getTenMon()) == -1){
                        p.first = ld[0];
                        cin>>p.second;
                        vBill.push_back(p);
                        }
                        else{
                            vBill.erase(vBill.begin() + indexOfVector(ld[0].getTenMon()));
                            p.first = ld[0];
                            cin>>p.second;
                            vBill.push_back(p);
                        }
                        if(p.second < 0) cout<<"Nhap khong hop le vui long nhap lai!"<<endl;
                        if(p.second == 0) {
                            vBill.pop_back();
                        }
                    } while (p.second < 0);
                    cout<<"Dat thanh cong!"<<endl;
                }
                else if(goimon == 2){
                    do
                    {
                        cout<<ld[1];
                        cout<<"-Vui long nhap so luong muon goi: ";
                        if(indexOfVector(ld[1].getTenMon()) == -1){
                        p.first = ld[1];
                        cin>>p.second;
                        vBill.push_back(p);
                        }
                        else{
                            vBill.erase(vBill.begin() + indexOfVector(ld[1].getTenMon()));
                            p.first = ld[1];
                            cin>>p.second;
                            vBill.push_back(p);
                        }
                        if(p.second < 0) cout<<"Nhap khong hop le vui long nhap lai!"<<endl;
                        if(p.second == 0) {
                            vBill.pop_back();
                        }
                    } while (p.second < 0);
                    cout<<"Dat thanh cong!"<<endl;
                }
                else if(goimon == 3){
                    do
                    {
                        cout<<ld[2];
                        cout<<"-Vui long nhap so luong muon goi: ";
                        if(indexOfVector(ld[2].getTenMon()) == -1){
                        p.first = ld[2];
                        cin>>p.second;
                        vBill.push_back(p);
                        }
                        else{
                            vBill.erase(vBill.begin() + indexOfVector(ld[2].getTenMon()));
                            p.first = ld[2];
                            cin>>p.second;
                            vBill.push_back(p);
                        }
                        if(p.second < 0) cout<<"Nhap khong hop le vui long nhap lai!"<<endl;
                        if(p.second == 0) {
                            vBill.pop_back();
                        }
                    } while (p.second < 0);
                    cout<<"Dat thanh cong!"<<endl;
                }
                else if(goimon == 4){
                    do
                    {
                        cout<<ld[3];
                        cout<<"-Vui long nhap so luong muon goi: ";
                        if(indexOfVector(ld[3].getTenMon()) == -1){
                        p.first = ld[3];
                        cin>>p.second;
                        vBill.push_back(p);
                        }
                        else{
                            vBill.erase(vBill.begin() + indexOfVector(ld[3].getTenMon()));
                            p.first = ld[3];
                            cin>>p.second;
                            vBill.push_back(p);
                        }
                        if(p.second < 0) cout<<"Nhap khong hop le vui long nhap lai!"<<endl;
                        if(p.second == 0) {
                            vBill.pop_back();
                        }
                    } while (p.second < 0);
                    cout<<"Dat thanh cong!"<<endl;
                }
                else if(goimon == 5){
                    do
                    {
                        cout<<ld[4];
                        cout<<"-Vui long nhap so luong muon goi: ";
                        if(indexOfVector(ld[4].getTenMon()) == -1){
                        p.first = ld[4];
                        cin>>p.second;
                        vBill.push_back(p);
                        }
                        else{
                            vBill.erase(vBill.begin() + indexOfVector(ld[4].getTenMon()));
                            p.first = ld[4];
                            cin>>p.second;
                            vBill.push_back(p);
                        }
                        if(p.second < 0) cout<<"Nhap khong hop le vui long nhap lai!"<<endl;
                        if(p.second == 0) {
                            vBill.pop_back();
                        }
                    } while (p.second < 0);
                    cout<<"Dat thanh cong!"<<endl;
                }
                else if(goimon == 6){
                    do
                    {
                        cout<<ld[5];
                        cout<<"-Vui long nhap so luong muon goi: ";
                        if(indexOfVector(ld[5].getTenMon()) == -1){
                        p.first = ld[5];
                        cin>>p.second;
                        vBill.push_back(p);
                        }
                        else{
                            vBill.erase(vBill.begin() + indexOfVector(ld[5].getTenMon()));
                            p.first = ld[5];
                            cin>>p.second;
                            vBill.push_back(p);
                        }
                        if(p.second < 0) cout<<"Nhap khong hop le vui long nhap lai!"<<endl;
                        if(p.second == 0) {
                            vBill.pop_back();
                        }
                    } while (p.second < 0);
                    cout<<"Dat thanh cong!"<<endl;
                }
                else if(goimon == 0){
                    break;
                }
                else {
                    cout<<"Nhap khong hop le, vui long nhap lai!"<<endl;
                }
            }
            
        }
        else if(choice == 3){
            while (true)
            {
                system("cls");
                cout<<"\t\t========Cap nhat hoa don======="<<endl;
                this->HoaDon();
                cout<<"\n0. Thoat"<<endl;
                cout<<"Con mon muon cap nhat: ";
                int stt;
                cin>>stt;
                if(stt == 0) break;
                pair<order, int> p;
                while (true)
                {
                    vBill[stt - 1].first.xuat();
                    cout<<"Nhap vao so luong mon muon cap nhat: ";
                    p.first = vBill[stt - 1].first;
                    cin>>p.second;
                    if(p.second == 0){
                        vBill.erase(vBill.begin() + stt - 1);
                        cout<<"Cap nhat thanh cong!"<<endl;
                        system("pause");
                        break;
                    }
                    else if(p.second < 0) cout<<"Nhap khong hop le, vui long nhap lai!"<<endl; 
                    else {
                        vBill.erase(vBill.begin() + stt - 1);
                        vBill.insert(vBill.begin() + stt -1, p);
                        cout<<"Cap nhat thanh cong!"<<endl;
                        system("pause");
                        break;
                    }
                }
            }
        }
        else if(choice == 4){
            system("cls");
            cout<<"\t\t\t=====HOA DON=====\n"<<endl;
            this->HoaDon();
            system("pause");
        }
        else if(choice == 5){
            this->XuatHoaDon();
            break;
        }
        else if(choice == 0){
            break;
        }
        else{
            cout<<"Nhap khong hop le, vui long nhap lai!"<<endl;
            system("pause");
        }
    }
}

void bill::HoaDon(){
    long long total = 0;
    cout<<setfill('-')<<setw(62)<<"-"<<endl;
	cout<<setfill(' ');
    cout<<left<<setw(7)<<"STT"<<left<<setw(25)<<"Ten mon"<<left<<setw(10)<<"Gia"<<left<<setw(10)<<"So luong"<<left<<setw(10)<<"Thanh tien"<<endl;
    int i = 1;
    cout<<setfill('-')<<setw(62)<<"-"<<endl;
	cout<<setfill(' ');
    for(auto it : vBill){
        cout<<left<<setw(7)<<i++<<left<<setw(25)<<it.first.getTenMon()<<left<<setw(10)<<it.first.getGia()<<left<<setw(10)<<it.second<<right<<setw(10)<<it.first.getGia() * it.second<<endl;
        total += (it.first.getGia() * it.second);
    }
    cout<<setfill('-')<<setw(62)<<"-"<<endl;
	cout<<setfill(' ');
    cout<<left<<setw(52)<<"TONG"<<right<<setw(10)<<total<<endl;
}

void bill::XuatHoaDon(){
    time_t now = time('\0');
    tm *t = localtime(&now);
    char *ch = asctime(t);
    ofstream billOut;
    billOut.open("bill.txt", ios::out);
    billOut.clear();
    billOut << "\n\t =====================HOA DON======================" << endl;
    billOut<<"\n"<<ch<<endl;
    billOut<<setfill('-')<<setw(62)<<"-"<<endl;
	billOut<<setfill(' ');
    billOut<<left<<setw(7)<<"STT"<<left<<setw(25)<<"Ten mon"<<left<<setw(10)<<"Gia"<<left<<setw(10)<<"So luong"<<left<<setw(10)<<"Thanh tien"<<endl;
    billOut<<setfill('-')<<setw(62)<<"-"<<endl;
	billOut<<setfill(' ');
    int stt = 1;
    long long total = 0;
    for(auto it : vBill){
        billOut<<left<<setw(7)<<stt++<<left<<setw(25)<<it.first.getTenMon()<<left<<setw(10)<<it.first.getGia()<<left<<setw(10)<<it.second<<right<<setw(10)<<it.first.getGia() * it.second<<endl;
        total += (it.first.getGia() * it.second);
    }
    billOut<<setfill('-')<<setw(62)<<"-"<<endl;
	billOut<<setfill(' ');
    billOut<<left<<setw(52)<<"TONG"<<right<<setw(10)<<total<<endl;
    billOut<<"\n\t\t\t\t\t\tCam on quy khach!"<<endl;
    billOut.close();
    ifstream check("DoanhThuTrongNgay.txt", ios::in);
    int day;
    check >> day;
    check.seekg(0, ios::end);
    int empty = check.tellg();
    check.close();
    ofstream FileDT("DoanhThuTrongNgay.txt", ios::app);
    if(empty == 0 || day != t->tm_mday){
        FileDT.close();
        FileDT.clear();
        FileDT.open("DoanhThuTrongNgay.txt");
        FileDT<<t->tm_mday<<"/"<<t->tm_mon<<"/"<<1900 + t->tm_year;
    }
    FileDT<<"\n";
    FileDT<<total;
    FileDT.close();
    cout<<"Xuat hoa don thanh cong!"<<endl;
    system("pause");
}