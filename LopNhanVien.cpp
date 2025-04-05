#include <bits/stdc++.h>
using namespace std;

class NhanVien{
    private:
       string ten, sex, date, add, tax, contract, mnv;
       static int dem ;
    public:
       NhanVien();
       NhanVien(string ten,string sex,string date,string add,string tax,string contract);
       void chuanhoaten();
       void chuanhoans();
       friend istream& operator >> (istream& in, NhanVien &a);
       friend ostream& operator << (ostream& out, NhanVien a);
       string getNS();
       bool operator < (NhanVien other);
};

int NhanVien :: dem=0;

NhanVien  :: NhanVien(){
    this->ten=this->sex=this->date=this->add=this->tax=this->contract = "";
    this->mnv="";
}

NhanVien :: NhanVien(string ten ,string sex, string add, string tax, string contract, string mnv){
    dem++;
    this->mnv= string(5-to_string(dem).size(),'0') + to_string(dem);
    this->ten=ten;
    this->tax=tax;
    this->sex=sex; this->date=date; this->add=add; this->contract=contract;
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
    if(this->date[1] == '/') this->date = "0" + this->date;
    if(this->date[4] == '/') this->date.insert(3, "0");
}

istream& operator >> (istream& in, NhanVien &a){
    getline(cin, a.ten); getline(cin , a.sex); getline(cin, a.date); getline(cin, a.add); getline(cin, a.tax);
    getline(cin, a.contract);
    return in;
}

ostream& operator << (ostream& out, NhanVien a){
    cout << a.mnv << ' ' << a.ten << ' ' << a.sex <<' '<< a.date <<' '<< a.add <<' ' << a.tax <<' '<< a.contract << endl;
    return out ;
}

string NhanVien :: getNS(){
    string ns="", n, t, y;
    stringstream ss(this->date);
    getline(ss, n, '/');
    getline(ss, t, '/');
    getline(ss, y, '/');
    ns+=y;
    ns+=t;
    ns+=n;
    return ns;
}

bool NhanVien :: operator < (NhanVien other){
    return this->getNS() < other.getNS();
}

int main(){
    int n;cin >> n;cin.ignore();
    vector<NhanVien> NV;
    while(n--){
        NhanVien x;
        cin >> x;
        x.chuanhoaten();
        x.chuanhoans();
        NV.push_back(x);
    }
    sort(NV.begin(), NV.end());
    for(NhanVien x : NV){
        cout << x;
    }
    return 0;
}