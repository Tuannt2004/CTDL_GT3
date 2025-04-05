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
        ll l[n]={0}, r[n]={0};
        for(int i =0;i<n;i++){
            l[i]=a[i];
            for(int j =0;j<i;j++){
                if(a[i] > a[j]){
                    l[i]=max(l[i], l[j]+a[i]);
                }
            }
        }
        for(int i=n-1;i>=0;i--){
            r[i]=a[i];
            for(int j=n-1;j>i;j--){
               if(a[i] > a[j]){
                r[i]=max(r[i], r[j]+a[i]);
               }
            }
        }
        ll res=0;
        for(int i =0;i<n;i++){
            res = max(res, r[i]+l[i]-a[i]);
        }
        cout << res << endl;
    }
    return 0;
}