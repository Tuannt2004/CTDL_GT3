#include <bits/stdc++.h>
using namespace std;

vector<int> a[1001];
int main(){
    int n;cin>> n;
    while(n--){
        int v, e;
        cin >> v >> e;
        while(e--){
            int x,y;
            cin >> x >> y;
            a[x].push_back(y);
        }
        for(int i = 1;i<=v;i++){
            cout << i <<": ";
            for(int j =0;j<a[i].size();j++){
                cout << a[i][j] <<' ';
            }
            cout <<"\n";
        }
        for(int i =1;i<=v;i++){
            a[i].clear();
        }
    }
    return 0;
}