#include <bits/stdc++.h>
using namespace std;

vector<int> a[1001];
bool check[1001];

int main(){
    int test;cin >> test;
    while(test--){
        int v,e,s;cin >> v >> e >> s;
        while(e--){
            int x,y;cin >> x >> y;
            a[x].push_back(y);
        }
        memset(check, true, sizeof(check));
        queue<int> qe;
        qe.push(s);
        check[s]=false;
        while(!qe.empty()){
            int u = qe.front();qe.pop();
            cout << u <<' ';
            for(int i=0;i<a[u].size();i++){
                if(check[a[u][i]]){
                    qe.push(a[u][i]);
                    check[a[u][i]]=false;
                }
            }
        }
        cout << "\n";
        for(int i=1;i<=v;i++){
            a[i].clear();
        }
    }
    return 0;
}