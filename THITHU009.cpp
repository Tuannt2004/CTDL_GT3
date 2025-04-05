#include <bits/stdc++.h>
using namespace std;

int parent[1001];
int n;

void make_set(){
    for(int i=1;i<=n;i++){
        parent[i]=i;
    }
}

int find(int v){
    if(v == parent[v]) return v;
    return parent[v] = find(parent[v]);
}

bool check(int a, int b){
    a = find(a);
    b = find(b);
    if(a != b){
        parent[b]=a;
        return false;
    }
    return true;
}
int main(){
    int test;cin >> test;
    while(test--){
        cin >> n;
        make_set();
        vector<pair<int,int>> eg(n);
        stack<pair<int,int>> stk;
        for(int i=0;i<n;i++){
            cin >> eg[i].first >> eg[i].second ;
        }
        for(int i=0;i<n;i++){
            if(check(eg[i].first, eg[i].second)){
                stk.push({eg[i].first, eg[i].second});
            }
        }
        cout << stk.top().first << ' ' << stk.top().second << endl;
    }
    return 0;
}