#include <bits/stdc++.h>
using namespace std;

int dp[501][501];
int main(){
    int test;cin >> test;
    while(test--){
        string a,b;
        cin >> a >> b;
        int n1 = a.size(), n2 = b.size();
        a="x"+a;
        b="x"+b;
        memset(dp, 0, sizeof(dp));
        for(int i=0;i<=n1;i++){
            for(int j=0;j<=n2;j++){
                if(i == 0 || j==0){
                    dp[i][j]=0;
                }
                else if(a[i] == b[j]){
                    dp[i][j]=dp[i-1][j-1]+1;
                }
                else{
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        cout << dp[n1][n2] << endl;
    }
    return 0;
}