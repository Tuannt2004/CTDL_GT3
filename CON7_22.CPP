#include <bits/stdc++.h>
using namespace std;
const int INF = -1e9-9;


int main(){
    int test;cin >> test;
    while(test--){
        int n;cin >> n;
        int a[n];
        for(int i=0;i<n;i++){cin >> a[i];}
        int cnt = 1;
        int maxn = INF;
        for(int i=0;i<n;i++){
            cnt = 1;
            for(int j = i-1;j>=0;j--){
                if(a[j] >= a[i]) cnt++;
                else break;
            }
            for(int j = i+1;j<n;j++){
                if(a[j] >= a[i]) cnt++;
                else break;
            }
            maxn = max(maxn, a[i]*cnt);
        }
        cout << maxn << endl;
    }
    return 0;
}