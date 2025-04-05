#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;

int n;
int dx[8]={-2,-1,1,2,2,1,-1,-2};
int dy[8]={-1,-2,-2,-1,1,2,2,1};

int BFS( vector<vector<int>> &a,int x1, int y1, int x2, int y2){
    vector<vector<int>> dp(n,vector<int> (n,INF));
    queue<pair<int,int>> qe;
    qe.push({x1,y1});
    dp[x1][y1]=a[x1][y1];
    while(!qe.empty()){
        auto [x,y]= qe.front();qe.pop();
        for(int i=0;i<8;i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx >=0 && nx<n && ny>=0 && ny<n){
                int mn = a[nx][ny] + dp[x][y];
                if(mn < dp[nx][ny]){
                    dp[nx][ny]=mn;
                    qe.push({nx, ny});
                }
            }
        }
    }
    return (dp[x2][y2]==INF) ? -1 : dp[x2][y2];
}

int main(){
    int test;cin >> test;
    while(test--){
        cin >> n;
        vector<vector<int>> a(n, vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin >> a[i][j];
            }
        }
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        x1--;y1--;y2--;x2--;
        cout << BFS(a,x1,y1,x2,y2) << endl;
    }
    return 0;
}