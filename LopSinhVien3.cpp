#include <bits/stdc++.h>
using namespace std;

class SinhVien{
    private:
       string msv, ten , lop, email;
    public:
       SinhVien();
       SinhVien(string msv, string ten, string lop, string email);
       void chuanhoaten();
       friend istream& operator >> (istream& in, SinhVien &a);
       friend ostream& operator << (ostream& out, SinhVien a);
       bool operator < (SinhVien a);
};

SinhVien :: SinhVien(){
    this->msv=this->ten=this->lop=this->email= "";
}

SinhVien :: SinhVien(string msv, string ten , string lop, string email){
    this->msv=msv;this->ten=ten;this->lop=lop;this->email=email;
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

bool SinhVien :: operator < (SinhVien a){
    return this->lop < a.lop;
}

istream& operator >> (istream& in, SinhVien &a){
    getline(cin, a.msv); getline(cin, a.ten); getline(cin, a.lop);getline(cin, a.email);
    return in;
}

ostream& operator << (ostream& out, SinhVien a){
    cout << a.msv << ' ' << a.ten << ' ' << a.lop <<' ' << a.email << endl;
    return out;
}
int main(){
    int n;cin >> n;
    cin.ignore();
    SinhVien a[n];
    for(int i=0;i<n;i++){
        cin >> *(a+i);
        (*(a+i)).chuanhoaten();
    }
    sort(a, a+n);
    for(SinhVien x : a){
        cout << x;
    }
}