#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;cin >> test;
    while(test--){
        int n;cin >> n;
        int a[n];
        for(int i=0;i<n;i++){cin >> a[i];}
        bool ok;
        for(int i=0;i<n;i++){
            ok = true;
            for(int j=i+1;j<n;j++){
                if(a[j] > a[i]){
                    ok = false;
                    cout << a[j] << ' ';
                    break;
                }
            }
            if(ok) cout << "-1" <<' ';
        }
        cout << "\n";
    }
    return 0;
}