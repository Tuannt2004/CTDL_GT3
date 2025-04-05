#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;cin >> test;
    while(test--){
        int n;cin >> n;
        int a[n];
        multiset<int> se;
        for(int i =0;i<n;i++){
            cin >> a[i];
            se.insert(a[i]);
        }
        for(auto x : se){
            cout << x <<' ';
        }
        cout << "\n";
    }
    return 0;
}