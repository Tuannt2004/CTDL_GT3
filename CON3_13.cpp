#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;cin >> test;
    while(test--){
        int d;cin >> d;
        string s;cin >> s;
        int n = s.size();
        map<char, int> mp;
        for(auto c : s){
            mp[c]++;
        }
        int maxn = -1e9;
        for(auto x : mp){
            maxn = max(maxn , x.second);
        }
        if(maxn - (n-maxn)/(d-1) <= 1){
            cout << "1" << endl;
        }
        else{
            cout << "-1" << endl;
        }
    }
}