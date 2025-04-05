#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int main(){
    int test;cin >> test;
    while(test--){
        int n;cin >> n;
        int a[n];
        priority_queue<int, vector<int>, greater<int>> qe;
        for(int i =0;i<n;i++){
            cin >> a[i];
            qe.push(a[i]);
        }
        ll sum =0;
        while(qe.size() != 1){
            int a = qe.top();qe.pop();
            int b = qe.top();qe.pop();
            int c = a+b;
            sum+=c;
            qe.push(c);
        }
        cout << sum << endl;
    }
    return 0;
}