#include <bits/stdc++.h>
using namespace std;

// void swap(int &a, int &b){
//     int tmp = b;
//     b = a;
//     a = tmp;
// }


// void selection(int *a, int n){
//     for(int i=0;i<n-1;i++){
//         int minn = i;
//         for(int j=i+1;j<n;j++){
//             if(a[minn] > a[j]){
//                 minn = j;
//             }
//         }
//         swap(a[i], a[minn]);
//     }
// }

// void insertion(int *a, int n){
//     for(int i=1;i<n;i++){
//         int key = a[i];
//         int j=i-1;
//         while(j>=0 && a[j]>key){
//             a[j+1] = a[j];
//             j--;
//         }
//         a[j+1] = key;
//     }
// }

// void bubble(int *a, int n){
//     bool check;
//     for(int i=0;i<n;i++){
//         check = false;
//         for(int j=0;j<n-i-1;j++){
//             if(a[j] > a[j+1]){
//                 check = true;
//                 swap(a[i], a[j+1]);
//             }
//         }
//         if(!check) break;
//     }
// }

// int partition(int *a, int l, int r){
//     int x = a[r], i = l-1;
//     for(int j = l; j<r;j++){
//         if(a[j] <= x){
//             i++;
//             swap(a[i], a[j]);
//         }
//     }
//     swap(a[i+1], a[r]);
//     i++;
//     return i;
// }

// void QuickSort(int *a, int l, int r){
//     if(l < r){
//         int p =partition(a, l, r);
//         QuickSort(a, l, p-1);
//         QuickSort(a, p+1, r);
//     }
// }

void MergeS(int *a, int l, int m , int r){
    vector <int> A(a+l, a+m +1);
    vector <int> B(a+m+1, a+r+1);
    int i=0, j=0;
    while(i<A.size() && j<B.size()){
        if(A[i] <= B[j]){
            a[l]=A[i];
            i++;
            l++;
        }
        else{
            a[l]=B[j];
            j++;
            l++;
        }
    }
    while(i < A.size()){
        a[l]=A[i];i++;l++;
    }
    while(j < B.size()){
        a[l]=B[j];j++;l++;
    }
}

void MergeSort(int *a, int l, int r){
    if(l < r){
        int m = (l+r-1)/2;
        MergeSort(a, l, m);
        MergeSort(a, m+1, r);
        MergeS(a, l, m, r);
    }
}
int main(){
    int n;cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    // bubble(a, n);
    MergeSort(a, 0, n-1);
    for(auto x : a){
        cout << x << ' ';
    }
}