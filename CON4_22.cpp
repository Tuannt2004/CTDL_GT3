#include <bits/stdc++.h>
using namespace std;

int binary_search(int *a, int l, int r, int k){
    while(l <= r){
        int mid = (l+r)/2;
        if(a[mid] == k) return mid;
        else if(a[mid] > k){
            r = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    return -1;
}
int main(){
    int test;cin >> test;
    while(test--){
        int n,k;cin >> n >> k;
        int a[n];
        for(int i =0;i<n;i++){
            cin >> a[i];
        }
        int kq = binary_search(a,0,n-1,k);
        if(kq == -1){
            cout << "NO" << endl;
        }
        else{
            cout << kq +1 << endl;
        }
    }
    return 0;
}