#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;cin >> test;
    while(test--){
        int n;cin >> n;
        vector<string> a(n);
        set<char> se;
        for(int i =0;i<n;i++){
            cin >> a[i];
            for(int j =0;j<a[i].size();j++){
                se.insert(a[i][j]);
            }
        }
        for(auto x : se){
            cout << x <<' ';
        }
        cout << "\n";
    }
    return 0;
}