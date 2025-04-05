#include <bits/stdc++.h>
using namespace std;

bool check[1001];
vector<int> a[1001];

int main(){
    int test;cin >> test;
    while(test--){
        int v,e,u;cin >> v >> e >> u;
        stack<int> stk;
        while(e--){
            int x,y;cin >> x >> y;
            a[x].push_back(y);
        }
        vector<int> kq;
        memset(check, true, sizeof(check));
        stk.push(u);
        check[u]=false;
        kq.push_back(u);
        while(!stk.empty()){
            int s = stk.top();
            stk.pop();
            for(int i =0;i<a[s].size();i++){
                if(check[a[s][i]]){
                    stk.push(s);
                    stk.push(a[s][i]);
                    check[a[s][i]] = false;
                    kq.push_back(a[s][i]);
                    break;
                }
            }
        }
        for(auto x : kq){
            cout << x <<' ';
        }
        cout << "\n" ;
    }
    return 0;
}