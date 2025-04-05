#include <bits/stdc++.h>
using namespace std;

int v, e;
int parent[1005], kt[1005];

void make(){
    for(int i =1;i<=v;i++){
        parent[i]=i;
        kt[i]=1;
    }
}

int find(int a){
    if( a == parent[a]) return a;
    return parent[a] = find(parent[a]);
}

bool check(int a, int b){
    a = parent[a];
    b = parent[b];
    if(a == b){
        return false;
    }
    if(kt[a] < kt[b]) swap(a,b);
    parent[b]=a;
    kt[a]+=kt[b];
    return true;
}
int main(){
    int test;cin >> test;
    while(test--){
        cin >> v >> e;
        vector<pair<int, int >> cay;
        while(e--){
            pair<int, int> p;
            int a, b;
            cin >> a >> b;
            p.first = a; p.second=b;
            cay.push_back(p);
        }
        bool ok = true;
        for(int i=0;i<cay.size();i++){
            if(!check(cay[i].first, cay[i].second)){
                ok=false;
                break;
            }
        }
        if(ok){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
}