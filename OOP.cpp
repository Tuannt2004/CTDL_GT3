#include <bits/stdc++.h>
using namespace std;

class SinhVien{
    private:
       string ten, lop;
       double gpa;
    public:
       SinhVien();
       SinhVien(string ten, string lop, double gpa);
       friend istream& operator >>(istream& in, SinhVien &a);// bat buoc phair friend
       friend ostream& operator << (ostream& out, SinhVien a);
       bool operator < (SinhVien a);
};

SinhVien:: SinhVien(){
    this->ten=this->lop="";
    this->gpa=0;
}
SinhVien:: SinhVien(string ten , string lop, double gpa){
    this->ten=ten;this->lop=lop;this->gpa=gpa;
}

bool SinhVien :: operator < (SinhVien a){
    return this->gpa < a.gpa;
}

istream& operator >> (istream& in, SinhVien &a){
    getline(cin, a.ten);getline(cin, a.lop);
    cin >> a.gpa;cin.ignore();
    return in;
}

ostream& operator << (ostream& out, SinhVien a){
    cout << a.ten << ' ' << a.lop << ' ' << fixed << setprecision(2) << a.gpa << endl;
    return out;
}
int main(){
    int n;cin >> n;
    vector<SinhVien> SV;
    cin.ignore();
    while(n--){
        SinhVien x;
        cin >> x;
        SV.push_back(x);
    }
    sort(SV.begin(), SV.end());
    for(SinhVien a : SV){
        cout << a << endl;
    }
}