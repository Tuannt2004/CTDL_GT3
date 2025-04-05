#include <bits/stdc++.h>
using namespace std;

void Merge (int *a, int l, int m, int r){
    vector<int> A(a+l, a+m+1);
    vector<int> B(a+m+1, a+r+1);
    int i=0,j=0;
    while(i < A.size() && j < B.size()){
        if(A[i] <= B[j]){
            a[l] = A[i];i++;l++;
        }
        else{
            a[l]=B[j];j++;l++;
        }
    }
    while(i<A.size()){
        a[l]=A[i];l++;i++;
    }
    while(j<B.size()){
        a[l]=B[j];j++;l++;
    }
}

void MergeSort(int *a, int l, int r){
    if(l < r){
        int m = (l+r-1)/2;
        MergeSort(a,l,m);
        MergeSort(a,m+1, r);
        Merge(a,l,m,r);
    }
}
int main(){
    int test;cin >> test;
    while(test--){
        int n;cin >> n;
    int *a = new int[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    MergeSort(a, 0, n-1);
    for(int i=0;i<n;i++){
        cout << a[i] << ' ';
    }
    cout << endl;
    delete []a;
    }
}