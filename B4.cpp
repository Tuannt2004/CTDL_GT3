#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;cin >> test;
    while(test--){
        int n;cin >> n;
        int A[n];
        queue<int> qe;
        for(int i=0;i<n;i++){
            cin >> A[i];
            qe.push(A[i]);
        }
        int t = n;
        int j = 0,k=0;
        vector<vector<int>> a(n, vector<int>(n));
        while(!qe.empty()){
            int u = qe.size();
            while(u > 1){
                int so1 = qe.front();
                a[j][k] = so1;k++;
                qe.pop();
                int so2 = qe.front();
                int sum = so1 +so2;
                qe.push(sum);
                u--;
            }
            a[j][k] = qe.front();k++;
            qe.pop();
            for(int i = k ;i<t;i++){
                a[j][k] = 0;
            }
            j++;k=0;
        }
        int t1=0;
        for(int i = n-1;i>=0;i--){
            for(int h = 0;h<n;h++){
                if(a[i][h] != 0) t1 = h;
            }
            cout << "[";
            for(int j = 0;j<n;j++){
                if(a[i][j] != 0){
                    cout << a[i][j];
                    if(j < t1) cout << ' ';
                }
            }
            cout << "]" << ' ';
        }
        cout << endl;
    }
    return 0;
}