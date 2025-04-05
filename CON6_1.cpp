#include <bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){
    return a > b;
}
int main(){
    int test;cin >> test;
    while(test--){
        int n;cin >> n;
        int a[n];
        for(int i=0;i<n;i++){cin >> a[i];}
        sort(a,a+n,cmp);
        int i=0,j=n-1;
        while(i < j){
            cout << a[i] << ' ' << a[j] << ' ';
            i++;j--;
        }
        if(i == j) cout << a[i];
        cout << "\n";
    }
    return 0;
}