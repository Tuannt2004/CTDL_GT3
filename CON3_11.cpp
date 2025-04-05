#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define ll long long

int main(){
    int test;cin >> test;
    while(test--){
        ll n;cin >> n;
        ll a[n];
        priority_queue<ll, vector<ll>, greater<ll>> qe;
    for(int i =0;i<n;i++){cin >> a[i];qe.push(a[i]);}
    ll sum =0;
    while(qe.size() != 1){
        ll a = qe.top();qe.pop();
        ll b = qe.top();qe.pop();
        ll c = a+b;
        qe.push(c);
        c%=MOD;
        sum+=c;sum%=MOD;
    }
    cout << sum << endl;
    }
    return 0;
}