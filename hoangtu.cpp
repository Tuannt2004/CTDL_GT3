#include <bits/stdc++.h>
using namespace std;

class HoangTu{
    private: 
       long long power, blood;
       string tt;
    public:
       HoangTu();
       HoangTu(long long power, long long blood, string tt);
    //    friend istream& operator >> (istream& in, HoangTu& a);
       friend ostream& operator << (ostream& out, HoangTu a);
       string trth(){
        return this->tt;
       }
       long long powerr(){
        return this->power;
       }
       void song(){
        this->tt = "ALIVE";
       }
       void chet(){
         this->tt = "DEAD";
         this->power=0;
         this->blood=0;
       }
       void bloodg(){
        this->blood = this->blood - 15;
       }
       void bloodt(){
        this->blood = this->blood + 10;
       }
       void bloodt2(){
        this->blood = this->blood +5;
       }
       void powert(){
         this->power = this->power+5;
       }
       void powert2(){
        this->power = this->power+2;
       }
       void powerg2(){
        this->power = this->power - 2;
       }
       void powert3(){
         this->power = this->power + 7;
       }
};

HoangTu :: HoangTu(){
    this->power = this->blood = 0;
    this->tt="";
}

HoangTu :: HoangTu(long long power, long long blood, string tt){
    this->power=power; this->blood=blood; this->tt=tt;
}

// istream& operator >> (istream& in, HoangTu& a){
//     cout << "POWER : ";cin >> a.power;
//     cout << "BLOOD : ";cin >> a.blood;
//     cin >> a.tt;
//     return in;
// }

ostream& operator << (ostream& out, HoangTu a){
    cout << "POWER : " << a.power << endl;
    cout << "BLOOD : " << a.blood << endl;
    cout << a.tt << endl;
    cout << "--------------------" << endl;
    return out;
}
int main(){
    // HoangTu x;
    // cin >> x;
    string p, op1, op2,op3, b, op4, op5, op6, a;
    getline(cin, p);getline(cin, b);getline(cin, a);
    stringstream ss(p);
    getline(ss, op1,' ');
    getline(ss, op2,' ');
    getline(ss, op3,' ');
    stringstream s(b);
    getline(s, op4,' ');
    getline(s, op5,' ');
    getline(s, op6,' ');
    long long P=stoll(op3), B=stoll(op6);
    HoangTu x(P, B, a);
    vector<HoangTu> HT;
    int n;cin >> n;cin.ignore();
    while(n--){
        string sk, nv, cs;getline(cin, sk);
        stringstream ss(sk);
        getline(ss, nv , ' ');
        getline(ss, cs, ' ');
        if(x.trth() == "DEAD"){
            HT.push_back(x);
            continue;
        }
        if(nv == "witch"){
            if(x.powerr() <= stoll(cs)) x.chet();
            else{
                x.powert();
            }
        }
        else if(nv == "mushroom"){
            x.bloodg();
            x.powerg2();
        }
        else if(nv == "pea"){
            x.powert2();
            x.bloodt();
        }
        else if(nv == "soldier"){
            if(x.powerr() <= stoll(cs)){
                x.chet();
            }
            else{
                x.powert3();
                x.bloodt2();
            }
        }
        HT.push_back(x);
    }
    for(HoangTu d : HT){
        cout << d;
    }
}