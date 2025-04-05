#include <bits/stdc++.h>
using namespace std;

void Insertion(int *a, int n){
    for(int i=1;i<n;i++){
        int x = a[i], k=i;
        for(int j=i-1;j>=0;j--){
            if(a[j] > x){
                a[j+1] = a[j];
                k--;
            }
        }
        a[k] = x;
    }
}
int main(){
    int n;cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    Insertion(a, n);
    for(auto x : a){
        cout << x <<' ';
    }
}