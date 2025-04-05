#include <bits/stdc++.h>
using namespace std;

// int TamPhan(int *a, int x, int l, int r){
//     while(l <= r){
//         int m1 = l + (r-l)/3;
//         int m2 = l + ((r-l)*2)/3;
//         if(x < a[m1]){
//             m1--;
//             r=m1;
//         }
//         else if(x > a[m2]){
//             m2++;
//             l=m2;
//         }
//         else if(x > a[m1] && x < a[m2]){
//             m1++;l=m1;
//             m2--;r=m2;
//         }
//         else{
//             if(x == a[m1]) return m1;
//             else return m2;
//         }
//     }
//     return -1;
// }

int TamPhan(int *a, int x, int l, int r){
    if(l > r) return -1;
    int m1 = l + (r-l)/3, m2 = l + ((r-l)*2)/3;
    if(x == a[m1]) return m1;
    if(x == a[m2]) return m2;
    if(x < a[m1]){
        return TamPhan(a, x,l,m1-1);
    }
    else if(x > a[m2]){
        return TamPhan(a,x,m2+1,r);
    }
    else{
        return TamPhan(a,x,m1+1, m2-1);
    }
}
int main(){
    int n, x;cin >> n >> x;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    if(TamPhan(a, x, 0, n-1)==-1) return 0;
    else{
        cout << TamPhan(a,x, 0, n-1) << endl;
    }
}