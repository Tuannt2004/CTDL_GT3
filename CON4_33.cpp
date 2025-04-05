#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9+7;

ll res(ll n){
    ll tmp=0;
    while(n>0){
        tmp = tmp*10 + n%10;
        n/=10;
    }
    return tmp;
}
int main(){
    int test;cin >> test;
    while(test--){
        ll n;cin >> n;
        ll mu = res(n);
        ll tmp=1;
        n%=MOD;
        while(mu!=0){
            if(mu%2 != 0){
                tmp = tmp*n;
                tmp%=MOD;
            }
            n=n*n;
            n%=MOD;
            mu/=2;
        }
        cout << tmp << endl;
    }
    return 0;
}