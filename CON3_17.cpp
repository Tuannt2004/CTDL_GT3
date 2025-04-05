#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    int test;cin >> test;
    while(test--){
        int k;cin >> k;
        string s;cin>> s;
        priority_queue<ll> qe;
        map<char,ll> mp;
        for(auto x : s){
            mp[x]++;
        }
        for(auto x : mp){
            qe.push(x.second);
        }
        ll b = 0;
        while(k--){
            ll a = qe.top();
            a-=1;
            qe.pop();
            qe.push(max(a,b));
        }
        ll sum =0;
        while(!qe.empty()){
            ll x = qe.top();
            qe.pop();
            sum += (x * x);
        }
        cout << sum << endl;
    }
    return 0;
}