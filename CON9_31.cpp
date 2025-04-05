#include <bits/stdc++.h>
using namespace std;

int parent[1001];
int n;
vector<int> a[1001];
bool chuaxet[1001];

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
        if(n<2){
            cout << "NO" << endl;continue;
        }
        bool ok = true;
        make_set();
        vector<pair<int,int>> eg(n-1);
        stack<pair<int,int>> stk;
        
        for(int i=0;i<n-1;i++){
            cin >> eg[i].first >> eg[i].second;
            a[eg[i].first].push_back(eg[i].second);
            a[eg[i].second].push_back(eg[i].first);
        }

        int dem=0;

        //  kiem tra chu trinh
        for(int i=0;i<n-1;i++){
            if(check(eg[i].first, eg[i].second)){
                ok = false;
            }
        }
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}