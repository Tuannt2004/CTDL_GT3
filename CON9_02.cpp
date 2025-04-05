#include <bits/stdc++.h>
using namespace std;

vector<int> a[1001];
int main(){
    int n;cin >> n;cin.ignore();
    for(int i =1;i<=n;i++){
        string s;int v;
        getline(cin, s);
        stringstream ss(s);
        while(ss >> v){
            if(i < v){
                a[i].push_back(v);
            }
        }
    }
    for(int u =1;u<=n;u++){
        for(int j=0;j<a[u].size();j++){
            cout << u <<' '<<a[u][j];
            cout << endl;
        }
    }
    return 0;
}