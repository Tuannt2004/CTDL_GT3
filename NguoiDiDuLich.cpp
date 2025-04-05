#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INT = 1e9+7;

int n, X[100], c[100][100];
int d,ans, cmin;
bool check[100];

void Try(int i){
    if(i == n+1){
        ans = min(ans, d + c[X[n]][1]);
        return;
    }
    for(int j=1;j<=n;j++){
        if(check[j]){
            X[i]=j;
            check[j]=false;
            d += c[X[i-1]][X[i]];
            if(d + (n-i+1)*cmin < ans){
                Try(i+1);
            }
            // Backtrack
            d-=c[X[i-1]][X[i]];
            check[j]=true;
        }
    }
}

int main(){
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> c[i][j];
        }
    }
    cmin = -1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(c[i][j] != 0){
                cmin = min(cmin, c[i][j]);
            }
        }
    }
    memset(check, true, sizeof(check));
    ans = INT;
    d=0;
    X[1]=1;check[1]=false;
    Try(2);
    cout << ans << endl;
    return 0;
}