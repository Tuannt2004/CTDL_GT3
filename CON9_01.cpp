#include <bits/stdc++.h>
using namespace std;

vector<int> a[1001];

int main(){
    int test;cin >> test;
    while(test--){
        int v, e;
        cin >> v >> e;
        int x,y;
        while(e--){
            cin >> x >> y;
            a[x].push_back(y);a[y].push_back(x);
        }
        for(int i=1;i<=v;i++){
            cout << i <<": ";
            for(int j =0;j<a[i].size();j++){cout << a[i][j]<<" ";}
            cout << "\n";
        }
        for(int i =1;i<=v;i++){a[i].clear();}
    }
    return 0;
}