#include <bits/stdc++.h>
using namespace std;

// int n;
// int a[1001];
// int dem;
// bool ok;

// void insert(){
//     for(int i=1;i<n;i++){
//         int x = a[i];
//         int j = i;
//         ok = true;
//         for(int u = j-1;u>=0;u--){
//             if(x < a[u]){
//                 ok = false;
//                 a[u+1] = a[u];
//                 j--;
//             }
//         }
//         a[j] = x;
//         if(!ok) dem++;
//     }
// }
// int main(){
//     int test;cin>> test;
//     while(test--){
//         cin >> n;
//         for(int i=0;i<n;i++){cin >> a[i];}
//         ok = true;
//         dem=0;insert();
//         // for(int i =0;i<n;i++){
//         //     cout << a[i] << endl;
//         // }
//         cout << dem << endl;
//     }
//     return 0;
// }

int main(){
    int test;cin >> test;
    while(test--){
        int n;cin >> n;
        int a[n];
        for(int i=0;i<n;i++){cin >> a[i];}
        int L[n];
        int maxn = 0;
        for(int i=0;i<n;i++){L[i]=1;}
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(a[i] >= a[j]){
                    L[i] = max(L[i], 1 + L[j]);
                }
            }
            maxn = max(maxn, L[i]);
        }
        cout << n-maxn << endl;
    }
    return 0;
}