#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int main(){
    int test;cin>> test;
    while(test--){
        int n;ll k;
        cin >> n >> k;
        int kq = 0;
        while(n>0){
            ll tmp = pow(2,n-1);
            if(k == tmp){
                kq = n;break;
            }
            else if(k > tmp){
                k = 2*tmp - k;
            }
            else{
                n--;
            }
        }
        cout << kq << endl;
    }
    return 0;
}