#include <bits/stdc++.h>
using namespace std;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;cin >> test;
    while(test--){
        int n;cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        vector<int> L(n,1);
        int maxn = -1e9;
        for(int i =1;i<n;i++){
            for(int j =0;j<i;j++){
                if(a[i] > a[j]){
                    L[i] = max(L[i], L[j]+1);
                }
            }
            maxn = max(maxn, L[i]);
        }
        cout << maxn << endl;
    }
}