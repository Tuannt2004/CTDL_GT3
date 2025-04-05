#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
using ll = long long;

ll chiadu(ll a, ll n){
    if(n==0) return 1;
    ll tmp = chiadu(a, n/2);
    if(n%2 != 0){
        return (((tmp%MOD) * (tmp%MOD))%MOD * (a%MOD))%MOD;
    }
    else{
        return ((tmp%MOD) * (tmp%MOD))%MOD;
    }
}

int main(){
    int test;cin >> test;
    while(test--){
        ll n,k;cin >> n >> k;
        cout << chiadu(n,k) << endl;
    }
    return 0;
}