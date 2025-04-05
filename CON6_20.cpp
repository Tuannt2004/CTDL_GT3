#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;cin >> test;
    while(test--){
        int n, k;cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a, a+n);
        int dem=0;
        for(int i=1;i<n;i++){
            for(int j=i-1;j>=0;j--){
                if(a[i]-a[j] < k){
                    dem++;
                }
                else break;
            }
        }
        cout << dem << endl;
    }
    return 0;
}