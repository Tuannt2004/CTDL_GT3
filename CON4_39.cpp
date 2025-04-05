#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int test;cin >> test;
    while(test--){
        int n;cin >> n;
        vector<ll> a(n);vector<ll>b(n-1);map<ll, int> mp;
        for(int i=0;i<n;i++){
            cin >> a[i];
            mp[a[i]]++;
        }
        for(int i=0;i<n-1;i++) {
            cin >> b[i];
            mp[b[i]]++;
        }
        ll u =0;
        for(auto x : mp){
            if(x.second == 1){
                u = x.first;break;
            }
        }
        auto it = find(a.begin(), a.end(), u);
        cout << distance(a.begin(), it) + 1 << endl;
    }
    return 0;
}