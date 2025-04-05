#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;cin>> test;
    while(test--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){cin >> a[i]; }
        sort(a,a+n);
        map<int, int> mp;
        for(int i = a[0]; i<= a[n-1];i++){
            mp[i]=0;
        }
        for(int i=0;i<n;i++){
            mp[a[i]]++;
        }
        int dem=0;
        for(auto x : mp){
            if(x.second == 0) dem++;
        }
        cout << dem << endl;
    }
    return 0;
}