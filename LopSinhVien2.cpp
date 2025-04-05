#include <bits/stdc++.h>
using namespace std;

class SinhVien{
    private:
      string ten ,lop, date, msv;
      float gpa;
      static int dem;
    public:
       SinhVien();
       SinhVien(string ten, string lop, string date, string msv, float gpa);
       void chuanhoaten();
       void chuanhoans();
       //
       friend istream& operator >> (istream &in, SinhVien &a);
       friend ostream& operator << (ostream &out , SinhVien a);
};

int SinhVien :: dem=0;

SinhVien :: SinhVien(){
    this->ten=this->lop=this->date=this->msv="";
    this->gpa=0;
}

SinhVien :: SinhVien(string ten , string lop, string date, string msv, float gpa){
    dem++;
    this->ten=ten; this->lop=lop; this->date=date;
    this->msv="B20DCCN" + string(3-to_string(dem).size(), '0') + to_string(dem);
    this->gpa=gpa;
}

void SinhVien :: chuanhoaten(){
    string name="", w;
    stringstream ss(this-> ten);
    while(ss >> w){
        name+=toupper(w[0]);
        for(int i=1;i<w.size();i++){
            name+=tolower(w[i]);
        }
        name+=' ';
    }
    name.pop_back();
    this->ten =name;
}

void SinhVien:: chuanhoans(){
    if(this->date[1]=='/') this->date="0" + this->date;
    if(this->date[4]=='/') this->date.insert(3, "0");
}

istream& operator >> (istream &in, SinhVien &a){
    getline(cin, a.ten);getline(cin, a.lop);getline(cin , a.date);
    cin >> a.gpa; cin.ignore();
    return in;
}

ostream& operator << (ostream& out, SinhVien a){
    cout << a.msv <<' '<< a.ten <<' '<< a.lop <<' '<< a.date <<' ';
    cout << fixed << setprecision(2) << a.gpa << endl;
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