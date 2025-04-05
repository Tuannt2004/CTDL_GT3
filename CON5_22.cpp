#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;cin >> test;
    while(test--){
        int n;cin >> n;
        int a[n];
        for(int i=0;i<n;i++){cin >> a[i];}
        int l[n];
        for(int i=0;i<n;i++){l[i]=a[i];}
        for(int i = 0;i<n;i++){
            for(int j = i-2;j>=0;j--){
                l[i] = max(l[i], a[i]+l[j]);
            }
        }
        int maxn = 0;
        for(int i=0;i<n;i++){
            maxn = max(l[i], maxn);
        }
        cout << maxn << endl;
    }
    return 0;
}