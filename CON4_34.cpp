#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;cin >> test;
    while(test--){
        int n,m;cin >> n >> m;
        vector<int>P(n);vector<int> Q(m); vector<int> C(n+m, 0);
        for(int i=0;i<n;i++) cin >> P[i];
        for(int j=0;j<m;j++) cin >> Q[j];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                C[i+j] = Q[i] * P[j] + C[i+j];
            }
        }
        while(!C.empty() && C.back()==0) C.pop_back();
        for(auto x : C){
            cout << x << ' ';
        }
        cout << "\n";
    }
    return 0;
}