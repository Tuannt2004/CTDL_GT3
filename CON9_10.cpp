#include <bits/stdc++.h>
using namespace std;

bool check[1001];
int truoc[1001];
vector<int> a[1001];


int main(){
    int test;cin >> test;
    while(test--){
        int v,e,t,s;cin >> v >> e >> s >> t;
        stack<int> stk;
        while(e--){
            int x,y;cin>> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        memset(check, true, sizeof(check));
        stk.push(s);
        check[s]=false;
        while(!stk.empty()){
            int x = stk.top();
            stk.pop();
            for(int i =0;i<a[x].size();i++){
                if(check[a[x][i]]){
                    truoc[a[x][i]]=x;
                    stk.push(x);
                    stk.push(a[x][i]);
                    check[a[x][i]] = false;
                    break;
                }
            }
        }
        stack<int> dd;
        dd.push(t);
        int y = truoc[t];
        while(y != s){
            dd.push(y);
            y = truoc[y];
        }
        dd.push(s);
        while(!dd.empty()){
            cout << dd.top() <<' ';
            dd.pop();
        }
        cout << endl;
    }
    return 0;
}