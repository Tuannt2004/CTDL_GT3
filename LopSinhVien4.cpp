#include <bits/stdc++.h>
using namespace std;

class SinhVien{
    private:
       string ten, lop, msv, email;
    public:
       SinhVien();
       SinhVien(string ten, string lop, string msv, string email);
       void chuanhoaten();
       friend istream& operator >>(istream& in, SinhVien& a);
       friend ostream& operator << (ostream& out, SinhVien a);
       string getnganh();
};

SinhVien::SinhVien(){
    this->ten= this->lop = this->msv = this->email="";
}

SinhVien :: SinhVien(string ten, string lop, string msv, string email){
    this->ten=ten;this->lop=lop;this->msv=msv;this->email=email;
}

void SinhVien :: chuanhoaten(){
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

istream& operator >> (istream& in, SinhVien &a){
    getline(cin , a.msv);getline(cin , a.ten);getline(cin, a.lop);getline(cin , a.email);
    return in;
}

ostream& operator << (ostream& out, SinhVien a){
    cout << a.msv <<' '<< a.ten << ' ' << a.lop << ' ' << a.email << endl;
    return out;
}

string SinhVien::getnganh(){
   string khoa="";
   khoa = this->msv.substr(3, 4);
   return khoa;
}

int main(){
    int n;cin >> n;cin.ignore();
    SinhVien A[n];
    for(int i=0;i<n;i++) cin >> A[i];
    int b;cin >>b;
    cin.ignore();
    while(b--){
        string s, ma="", w;getline(cin, s);
        for(int i=0;i<s.size();i++){
            s[i]=toupper(s[i]);
        }
        cout << "DANH SACH SINH VIEN KHOI NGANH " << s << " LA :" << endl;
        stringstream ss(s);
        while(ss >> w){
            ma+=w[0];
        }
        ma = "DC" + ma;
        for(SinhVien x : A){
            if(x.getnganh() == ma){
                cout << x ;
            }
        }
    }
    return 0;
}