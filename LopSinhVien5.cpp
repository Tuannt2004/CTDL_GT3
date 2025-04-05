#include <bits/stdc++.h>
using namespace std;

class NhanVien{
    private:
       string ten, sex, date, add, tax, contract;
       string mnv;
       static int dem;
    public:
       NhanVien();
       NhanVien(string ten ,string sex, string date, string add, string tax, string contract);
       void chuanhoaten();
       void chuanhoans();
       friend istream& operator >> (istream& in, NhanVien& a);
       friend ostream& operator << (ostream& out, NhanVien a);
};

int NhanVien :: dem=0;

NhanVien :: NhanVien(){
    this->ten = this->sex = this->date = this->add = this->tax = this->contract ="";
}

NhanVien::NhanVien(string ten, string sex, string date, string add, string tax, string contract){
    dem++;
    this->ten = ten; this->sex=sex; this->date=date; this->add=add; this->tax=tax;
    this->contract=contract;
    this->mnv = string(3-to_string(dem).size(),'0') + to_string(dem);
}

void NhanVien :: chuanhoaten(){
    string name="", w;
    stringstream ss(this->ten);
    while(ss >> w){
        name+=toupper(w[0]);
        for(int i=1;i<w.size();i++){
            name+=tolower(w[i]);
        }
        name+=' ';
    }
    name.pop_back();
    this->ten = name;
}

void NhanVien :: chuanhoans(){
    if(this->date[1] == '/') this->date="0" + this->date;
    if(this->date[4] == '/') this->date.insert(3, "0");
}

istream& operator >> (istream& in, NhanVien& a){
    getline(cin , a.ten);getline(cin, a.sex);getline(cin, a.date);getline(cin,a.add);getline(cin, a.tax);getline(cin, a.contract);
    return in;
}

ostream& operator << (ostream& out, NhanVien a){
    cout << a.mnv <<' ' <<a.ten <<' '<< a.sex<< ' ' << a.date <<' '<< a.add <<' '<< a.tax << ' ' << a.contract << endl;
    return out;
}

int main(){
    NhanVien x;
    cin >> x;
    x.chuanhoaten();
    x.chuanhoans();
    cout << x;
    return 0;
}