#include <bits/stdc++.h>
using namespace std;

int n;
int a[1000001];

int pati(int l, int r){
    int x = a[r], j = l-1;
    for(int i = l;i<r;i++){
        if(x >= a[i]){
            j++;
            swap(a[j], a[i]);
        }
    }
    swap(a[j+1], a[r]);
    return j+1;
}

void QuickSort(int l, int r){
    if(l < r){
        int x = pati(l, r);
        QuickSort(l, x-1);
        QuickSort(x+1, r);
    }
}
int main(){
    int test;cin >> test;
    while(test--){
        cin >> n;
        for(int i=0;i<n;i++){cin >> a[i]; }
        QuickSort(0, n-1);
        for(int i=0;i<n;i++){
            cout << a[i] << ' ';
        }
        cout << "\n";
    }
    return 0;
}