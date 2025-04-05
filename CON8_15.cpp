#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;

int n,m, ans;
int a[1005][1005];
int check[1005][1005];

struct node{
    int x, y, s;
};
int main(){
    int test;cin >> test;
    while(test--){
        cin >> n >> m;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin >> a[i][j];
            }
        }
        ans = INF;
        memset(check, 0, sizeof(check));
        node st, k;
        queue<node> qe;
        st.x = 1;st.y=1;
        st.s=0;
        qe.push(st);
        check[1][1] = 1;
        while(!qe.empty()){
            node u = qe.front();qe.pop();
            if(u.x == n && u.y == m){
                ans = min(ans, u.s);
            }
            k = u;
            k.s++;
            if(u.x + a[u.x][u.y] <= n && check[u.x + a[u.x][u.y]][u.y]==0){
                check[u.x + a[u.x][u.y]][u.y] = 1;
                k.x += a[u.x][u.y];
                qe.push(k);
                k.x-=a[u.x][u.y];
            }
            if(u.y + a[u.x][u.y] <= m && check[u.x][u.y + a[u.x][u.y]]==0){
                check[u.x][u.y+a[u.x][u.y]] = 1;
                k.y += a[u.x][u.y];
                qe.push(k);
                k.y -= a[u.x][u.y];
            }
        }
        if(ans == INF) cout << "-1" << "\n";
        else cout << ans << "\n";
    }
    return 0;
}