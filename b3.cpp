#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b){
     return a.second < b.second;
}
int main(){
    int test;cin >> test;
    while(test--){
        int n;cin>> n;
        int s[n];
        vector<pair<int,int>> pr;
        for(int i =0;i<n;i++){
            cin >> s[i];
            pr.push_back({s[i],0});
        }
        for(int i =0;i<n;i++){
            cin >> pr[i].second;
        }
        sort(pr.begin(), pr.end(), cmp);
        int tmp =0, dem =0;
        for(int i =0;i<n;i++){
            if(pr[i].first > tmp){
                dem++;
                tmp = pr[i].second;
            }
        }
        cout << dem << endl;
    }
    return 0;
}