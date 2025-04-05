#include <bits/stdc++.h>
using namespace std;

void swap(int  &a, int &b){
    int tmp=a;
    a=b;
    b=tmp;
}
// co chot danh cho QuickSort muc dich chia va tri

int Partition(int *a, int l, int r){
    int x = a[r], j=l-1;
    for(int i=l;i<r;i++){
        if(a[i] <= x){
            j++;
            swap(a[j], a[i]);
        }
    }
    swap(a[j+1], a[r]);
    return j+1;
}

void QuickSort(int *a, int l, int r){
    if(l  < r){
        int p = Partition(a, l, r);
        QuickSort(a, l, p-1);
        QuickSort(a, p+1, r);
    }
}
int main(){
    int n;cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    QuickSort(a, 0, n-1);
    for(auto x : a){
        cout << x << ' ';
    }
}