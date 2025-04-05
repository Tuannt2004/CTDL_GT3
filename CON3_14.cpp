#include <bits/stdc++.h>
using namespace std;

using ll = long long;
vector<ll>v;

void khoitao(){
    for(int i = 100;i>=1;i--){
        v.push_back(i * i * i);
    }
}

string solve(string s){
    string tmp="";
    for(auto i :v){
        tmp = to_string(i);
        int id =0;
        for(char j : s){
            if(j==tmp[id]){
                id++;
            }
        }
        if(id == tmp.size()) return tmp;
    }
    return "-1";
}

int main(){
    int test;cin >> test;
    khoitao();
    while(test--){
        string s;cin >> s;
        cout << solve(s) << endl;
    }
    return 0;
}