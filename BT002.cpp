#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;

int n,m;
int a[105][105], dp[105][105];
int dx[4]= {-1,0,1,0};
int dy[4]={0,-1,0,1};

int BFS(int x1, int y1, int x2, int y2){
    dp[x1][y1] = a[x1][y1];
    queue<pair<int,int>> qe;
    qe.push({x1,y1});
    while(!qe.empty()){
        auto [x,y] = qe.front();qe.pop();
        for(int i=0;i<4;i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx>=0 && nx<n && ny>=0 && ny<m){
                int mn = a[nx][ny] + dp[x][y];
                if(mn < dp[nx][ny]){
                    dp[nx][ny] = mn;
                    qe.push({nx, ny});
                }
            }
        }
    }
    return dp[x2][y2];
}

int main(){
    int test;cin >> test;
    while(test--){
        cin >> n >> m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin >> a[i][j];
            }
        }
        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;x1--;y1--;x2--;y2--;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                dp[i][j]=INF;
            }
        }
        cout << BFS(x1,y1,x2,y2) << endl;
    }
    return 0;
}