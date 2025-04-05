#include <bits/stdc++.h>
using namespace std;

int Binary(int *a, int l, int r, int x){
    while(l <= r){
        int m = (l+r)/2;
        if(x < a[m]){m--;r=m;}
        else if(x > a[m]) {m++;l=m;}
        else return m;
    }
    return -1;
}
int main(){
    int n, x;cin >> n >> x;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    if(Binary(a, 0, n-1, x) == -1) cout << "khong tim thay" << endl;
    else{
        cout << Binary(a, 0, n-1, x) << endl;
    }
}