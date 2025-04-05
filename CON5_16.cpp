#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    int test;cin >> test;
    while(test--){
        int n;cin >> n;
        ll a[n];
        for(int i =0;i<n;i++){
            cin >> a[i];
        }
        ll L[n]={0};
        ll maxn=-1e9;
        for(int i =0;i<n;i++){
            L[i]=a[i];
            for(int j=0;j<i;j++){
                if(a[i] > a[j]){
                    L[i] = max(L[i], L[j]+a[i]);
                }
            }
            maxn = max(maxn, L[i]);
        }
        cout << maxn << endl;
    }
    return 0;
}