#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;cin >> test;
    while(test--){
        int n,s;
        cin >> n >> s;
        int a[n];
        for(int i =0;i<n;i++){
            cin >> a[i];
        }
        bool dp[s+1];
        for(int i =0;i<s+1;i++){
            dp[i]=false;
        }
        dp[0]=true;
        for(int j =0;j<n;j++){
            for(int i = s;i>=0;i--){
                if(i >= a[j] && dp[i-a[j]] == true){
                    dp[i]=true;
                }
            }
        }
        cout << (dp[s] ? "YES" : "NO") << endl;
    }
    return 0;
}