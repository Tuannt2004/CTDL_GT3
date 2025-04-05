#include <bits/stdc++.h>
using namespace std;

class SinhVien{
    private:
      string ten, lop, date;
      float gpa;
    public:
       SinhVien();
       SinhVien(string ten, string lop, string date, float gpa);
       void chuanhoaten();
       void chuanhoans();
       friend istream& operator >>(istream& in, SinhVien& a);
       friend ostream& operator <<(ostream& out, SinhVien a);
};

SinhVien:: SinhVien(){
    this->ten= this->lop = this->date = "";
    this->gpa=0;
}

SinhVien::SinhVien(string ten , string lop, string date, float gpa){
    this-> ten =ten ;
    this-> lop=lop;
    this-> date=date;
    this-> gpa=gpa;
}

void SinhVien:: chuanhoaten(){
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
    this-> ten =name;
}

void SinhVien :: chuanhoans(){
    if(date[1]=='/') date = "0" + date;
    if(date[4]=='/') date.insert(3, "0");
} 

istream& operator >> (istream& in, SinhVien &a){
    getline(cin, a.ten);getline(cin, a.lop); getline(cin , a.date);
    cin >> a.gpa;cin.ignore();
    return in;  
}

ostream& operator << (ostream& out, SinhVien a){
    cout <<a.ten <<' '<< a.lop << ' ' << a.date << ' ' << fixed << setprecision(2) << a.gpa << endl;
    return out;
}
int main(){
    SinhVien x;
    cin >> x;
    x.chuanhoaten();
    x.chuanhoans();
    cout << x;
    return 0;
}