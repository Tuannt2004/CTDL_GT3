#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    int test;cin >> test;
    while(test--){
        int n;cin>> n;
        queue<string> a;
        a.push("9");
        string kq = "";
        while(!a.empty()){
            string i = a.front();
            a.pop();
            ll m = stoll(i);
            if( m % n==0){
                kq = to_string(m);
                break;
            }
            else{
                string u = to_string(m) + "0";
                string v = to_string(m) + "9";
                a.push(u);a.push(v);
            }
        }
        cout << kq << endl;
    }
    return 0;
}