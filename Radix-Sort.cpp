#include <bits/stdc++.h>
using namespace std;

void RadixSort(int *a, int n){
    int maxn = -1e9;
    for(int i=0;i<n;i++){
        maxn = max(a[i], maxn);
    }
    int exp=1;
    while(maxn/exp > 0){
        int cnt[10]={0}, b[n];
        for(int i=0;i<n;i++){
            cnt[(a[i]/exp)%10]++;
        }
        for(int i=1;i<10;i++){
            cnt[i]+=cnt[i-1];
        }
        for(int i=n-1;i>=0;i--){
            b[--cnt[(a[i]/exp)%10]] = a[i];
        }
        for(int i=0;i<n;i++){
            a[i]=b[i];
        }
        exp*=10;
    }
}
int main(){
    int n;cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    RadixSort(a, n);
    for(auto x : a){
        cout << x << ' ';
    }
}