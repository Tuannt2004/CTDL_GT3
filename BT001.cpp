#include <bits/stdc++.h>
using namespace std;

int a[101];
int b[101];
int c[101];
int dp[101][101][101];


int main(){
    int test;cin >> test;
    while(test--){
        int x, y, z;
        cin >> x;
        for(int i =1;i<=x;i++){cin >> a[i];}
        cin >> y;
        for(int i =1;i<=y;i++){cin >> b[i];}
        cin >> z;
        for(int i=1;i<=z;i++){cin >> c[i];}
        memset(dp,0,sizeof(dp));
        for(int i =1;i<=x;i++){
            for(int j =1;j<=y;j++){
                for(int h=1;h<=z;h++){
                    if(a[i]==b[j] && b[j]==c[h]){
                        dp[i][j][h] = dp[i-1][j-1][h-1]+1;
                    }
                    else{
                        dp[i][j][h] = max({dp[i-1][j][h],dp[i][j-1][h], dp[i][j][h-1]});
                    }
                }
            }
        }
        cout << dp[x][y][z] << endl;
    }
    return 0;
}