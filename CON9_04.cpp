#include <bits/stdc++.h>
using namespace std;

int a[1001][1001];
int main(){
    int n;cin >> n;
    memset(a, 0, sizeof(a));
    int i =1;
    while(i <= n){
        int x,y;
        cin >> x >> y;
        a[i][x]=1;
        a[i][y]=1;
        i++;
    }
    for(int i =1;i<=n;i++){
        for(int j =1;j<=n;j++){
            cout << a[i][j] << ' ';
        }
        cout << "\n";
    }
    return 0;
}