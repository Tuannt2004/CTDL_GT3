#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;cin >> test;
    while(test--){
        int n,k;cin >> n >> k;
        int a[n];
        priority_queue<int> qe;
        for(int i =0;i<n;i++){
            cin >> a[i];
            qe.push(a[i]);
        }
        while(k>0 && !qe.empty()){
            cout << qe.top() <<' ';
            qe.pop();
            k--;
        }
        cout << "\n";
    }
return 0;
}