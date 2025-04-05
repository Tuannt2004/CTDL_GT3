#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;cin>> test;
    while(test--){
        int n;cin >> n;
        int a[n];
        for(auto &i : a){cin >> i;}
        int b[n];
        for(int i=0;i<n;i++){
            b[i]=a[i];
        }
        sort(b, b+n);
        int l=0, r=0;
        for(int i=0;i<n;i++){
            if(a[i] != b[i]){
                l = i;break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(a[i] != b[i]){
                r = i;break;
            }
        }
        cout << l+1 <<' '<< r+1 << endl;
    }
    return 0;
}