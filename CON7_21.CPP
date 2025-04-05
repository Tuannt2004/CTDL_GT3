#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;cin >> test;
    while(test--){
        int n;cin >> n;
        int a[n];
        for(int i=0;i<n;i++){cin >> a[i]; }
        int idx = 0;
        bool ok1 = true;
        bool ok2 = true;
        vector<int> kq;
        for(int i=0;i<n-1;i++){
            idx =0;ok1 = true;ok2 = true;
            for(int j = i+1;j<n;j++){
                if(a[i] < a[j]){
                    idx = j;ok1 = false;
                    break;
                }
            }
            if(ok1) kq.push_back(-1);
            else{
                for(int h = idx+1;h<n;h++){
                    if(a[idx] > a[h]){
                        kq.push_back(a[h]);
                        ok2 = false;
                        break;
                    }
                }
                if(ok2) kq.push_back(-1);
            }
            }
            kq.push_back(-1);
            for(auto x : kq){
                cout << x <<' ';
            }
            cout << endl;
        }
        return 0;
}