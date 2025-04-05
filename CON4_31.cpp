#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9+7;

struct matrix{
    ll a[11][11] = {};
    ll n;
    void init(){
        for(int i =0;i<n;i++){
            a[i][i]=1;
        }
    }
    matrix operator* (matrix o){
        matrix res;
        res.n = n;
        for(int i =0;i<n;i++){
            for(int j =0;j<n;j++){
                for(int k = 0;k<n;k++){
                    res.a[i][j] += (a[i][k]*o.a[k][j])%MOD;
                    res.a[i][j]%=MOD;
                }
            }
        }
        return res;
    }

};

int main(){
    int test;cin >> test;
    while(test--){
        matrix x, tmp;
        ll k;
        cin >> x.n >> k;
        for(int i=0;i<x.n;i++){
            for(int j =0;j<x.n;j++){
                cin >> x.a[i][j];
            }
        }
        tmp.n = x.n;
        tmp.init();
        while(k != 0){
            if(k%2 != 0){
                tmp = tmp*x;
            }
            x = x* x;
            k/=2;
        }
        for(int i=0;i<tmp.n;i++){
            for(int j =0;j<tmp.n;j++){
                cout << tmp.a[i][j] << ' ';
            }
            cout << endl;
        }
    }
}