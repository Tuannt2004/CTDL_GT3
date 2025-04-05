#include <bits/stdc++.h>
using namespace std;

bool check[1001];
vector<int> a[1001];

int main(){
    int test;cin >> test;
    while(test--){
        int u,v,s;cin >> u >> v >> s;
        while(v--){
            int x,y;cin>> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        memset(check, true , sizeof(check));
        queue<int> qe;
        qe.push(s);
        check[s]=false;
        while(!qe.empty()){
            int u = qe.front();
            qe.pop();
            cout << u << ' ';
            for(int i =0;i<a[u][i];i++){
                if(check[a[u][i]]){
                    qe.push(a[u][i]);
                    check[a[u][i]]=false;
                }
            }
        }
        cout << "\n";
    }
    return 0;
}