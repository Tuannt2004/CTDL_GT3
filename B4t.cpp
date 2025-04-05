#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;cin >> test;
    while(test--){
        string s;cin >> s;
        int n = s.size();
        s = "x" + s;
        bool dp[n+1][n+1];
        memset(dp, false, sizeof(dp));
        int maxn=1;
        for(int i =1;i<=n;i++) dp[i][i]=true;
        for(int len = 2;len<=n;len++){
            for(int i = 1;i<=n-len+1;i++){
                int j = i + len -1;
                if(s[i] == s[j]){
                    if(len == 2) dp[i][j]=true;
                    else{
                        if(dp[i+1][j-1] == true) dp[i][j]=true;
                    }
                    if(dp[i][j] == true){
                        maxn = max(maxn, len);
                    }
                }
            }
        }
        cout << maxn << endl;
    }
    return 0;
}