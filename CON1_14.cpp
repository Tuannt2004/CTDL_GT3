#include <bits/stdc++.h>
using namespace std;

int n, k;
int a[41];
int b[41];

void sinh(){
    int j = k;
    while(j > 0 && a[j] == n-k+j) j--;
    if(j == 0) return;
    else{
        a[j]+=1;
        for(int u=j+1; u<=k; u++){
            a[u]=a[u-1]+1;
        }
        return;
    }
}
int main(){
    int test;
    cin >> test;
    while(test--){
        cin >> n >> k;
        int dem = 0;
        bool ok = true;
        for(int i=1;i<=k;i++){
            cin >> a[i];
        }
        for(int i = 1;i<=k;i++){
            b[i]=a[i];
        }
        sinh();
        // for(int i=1;i<=k;i++){
        //     cout << a[i] << ' ';
        // }
        for(int i = 1; i<=k;i++){
            for(int j=1;j<=k;j++){
                if(a[i] == b[j]){
                    dem++;
                    continue;
                }
            }
        }
        if(dem != k){
            cout << k - dem << endl;
        }
        else{
            cout << dem << endl;
        }
    }
    return 0;
}