#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b){
    int tmp=a;
    a=b;
    b=tmp;
}
void BubbleSort(int *a, int n){
    bool check;
    for(int i=0;i<n-1;i++){
        check = true;
    for(int j=0;j<n-i-1;j++){
            if(a[j] > a[j+1]){
                check=false;
                swap(a[j], a[j+1]);
            }
        }
        if(check) break;
    }
}
int main(){
    int n;cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    BubbleSort(a, n);
    for(auto x: a){
        cout << x <<' ';
    }
}