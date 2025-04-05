#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b){
    if(a.second != b.second) return a.second > b.second;
    return a.first < b.first;
}
int main(){
    int test;cin>> test;
    while(test--){
        int n;cin >> n;
        int a[n];
        map<int,int> mp;
        for(int i =0;i<n;i++){
            cin >> a[i];
            mp[a[i]]++;
        }
        vector<pair<int,int>> kq;
        for(auto x : mp){
            pair<int,int> p;
            p.first = x.first;p.second=x.second;
            kq.push_back(p);
        }
        sort(kq.begin(), kq.end(), cmp);
        for(auto x : kq){
            while(x.second--){
                cout << x.first <<' ';
            }
        }
        cout << endl;
    }
    return 0;
}