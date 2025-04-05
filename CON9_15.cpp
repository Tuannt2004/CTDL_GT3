#include <bits/stdc++.h>
using namespace std;

bool check[1001];
vector<int> a[1001];
stack<int> stk;

void DFS(int v){
    check[v]=false;
    stk.push(v);
    while(!stk.empty()){
        int s = stk.top();
        stk.pop();
        for(int i=0;i<a[s].size();i++){
            if(check[a[s][i]]){
                check[a[s][i]] = false;
                stk.push(s);
                stk.push(a[s][i]);
                break;
            }
        }
    }
}


int main(){
    int test;cin >> test;
    while(test--){
        int v,e;cin >> v >> e;
        int dem=0;
        while(e--){
            int x,y;cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        memset(check, true, sizeof(check));
        for(int i =1;i<=v;i++){
            if(check[i]){
                dem++;
                DFS(i);
            }
        }
        cout << dem << endl;
    }
    return 0;
}