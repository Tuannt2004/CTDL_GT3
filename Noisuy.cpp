#include <bits/stdc++.h>
using namespace std;

int Interpolution(int *a,int x, int l, int r){
    while(x >= a[l] & x <= a[r]){
        if(a[r]-a[l] == 0) return (r+l)/2;
        int m = l + ((x-a[l])*(r-l))/(a[r]-a[l]);
        if(a[m] < x) l=m+1;
        else if(a[m] > x) r=m-1;
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
    if(Interpolution(a, x, 0, n-1)==-1) cout << "khong Co" << endl;
    else{
        cout << Interpolution(a,x, 0, n-1) << endl;
    }
    return 0;
}