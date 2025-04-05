#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;cin >> test;
    while(test--){
        int n;cin >> n;
        int maxn = -1e9;
        int a[n];
        for(int i =0;i<n;i++){
            cin >> a[i];
        }
        int L[n];
        for(int i =0;i<n;i++){L[i]=1;}
        for(int i =1;i<n;i++){
            for(int j =0;j<i;j++){
                if(a[i] > a[j]){
                    L[i] = max(L[i], L[j]+1);
                }
            }
            maxn = max(L[i], maxn);
        }
        cout << maxn << endl;
    }
    return 0;
}