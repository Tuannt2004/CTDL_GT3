#include <bits/stdc++.h>
using namespace std;

int N,V;
int A[105], C[105];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;cin >> test;
    while(test--){
        cin >> N >> V;
        for(int i=1;i<N;i++){
            cin >> A[i];
        }
        for(int i=1;i<N;i++){
            cin >> C[i];
        }
        int dp[N+1][V+1];
        memset(dp,0,sizeof(dp));
        for(int i =1;i<=N;i++){
            for(int j = 1;j<=V;j++){
                dp[i][j] = dp[i-1][j];
                if(j >= A[i]){
                    dp[i][j] = max(dp[i][j], dp[i-1][j-A[i]] + C[i]);
                }
            }
        }
        cout << dp[N][V] << endl;
    }
    return 0;
}