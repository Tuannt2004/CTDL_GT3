#include <bits/stdc++.h>
using namespace std;

int m,n;
int a[105][105];
int dp[105][105];
int main(){
    int test;cin >> test;
    while(test--){
        cin >> m >> n;
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                cin >> a[i][j];
            }
        }
        for(int i=1;i<=m;i++){for(int j=1;j<=n;j++){dp[i][j]=0;}}
        for(int i=1;i<=m;i++) dp[i][1]=1;
        for(int i=1;i<=n;i++) dp[1][i]=1;
        for(int i=2;i<=m;i++){
            for(int j=2;j<=n;j++){
                dp[i][j] = dp[i][j-1] + dp[i-1][j];
            }
        }
        cout << dp[m][n] << endl;
    }
    return 0;
}