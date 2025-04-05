#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;cin >> test;
    while(test--){
        int n;cin >> n;
        int a[n];
        for(int i =0;i<n;i++){cin >> a[i];}
        bool ok;
        int dem =1;
        for(int i =0;i<n-1;i++){
            ok = true;
            for(int j =0;j<n-i-1;j++){
                if(a[j] > a[j+1]){
                    swap(a[j], a[j+1]);
                    ok = false;
                }
            }
            if(ok) break;
            cout << "Buoc " << dem++ << ": ";
            for(int h = 0;h<n;h++){
                cout << a[h] <<' ';
            }
            cout << "\n";
        }
    }
    return 0;
}