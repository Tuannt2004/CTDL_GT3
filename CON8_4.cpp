#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int main(){
    int test;cin >> test;
    while(test--){
        int k;cin >> k;
        string s;cin >> s;
        map<char,ll> mp;
        priority_queue<ll> pq;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(map<char,ll> :: iterator it = mp.begin();it != mp.end();it++){
            pq.push(it->second);
        }
        while(k--){
            int x = pq.top();
            pq.pop();
            x--;
            pq.push(x);
        }
        ll res =0;
        while(!pq.empty()){
            res += pq.top()*pq.top();
            pq.pop();
        }
        cout << res << endl;
    }
    return 0;
}