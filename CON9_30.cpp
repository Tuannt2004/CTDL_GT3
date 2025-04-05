#include <bits/stdc++.h>
using namespace std;

int vao[1001];
int ra[1001];

int main(){
    int test;cin >> test;
    while(test--){
        int n,e;cin >> n >> e;
        memset(vao, 0, sizeof(vao));
        memset(ra, 0, sizeof(ra));
        while(e--){
            int x,y;cin >> x >> y;
            ra[x]++;
            vao[y]++;
        }
        bool ok = true;
        for(int i=1;i<=n;i++){
            if(ra[i] != vao[i]){
                ok = false;
                break;
            }
        }
        if(ok) cout << true << endl;
        else{
            cout << false << endl;
        }
    }
}