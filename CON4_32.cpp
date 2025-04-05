#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll cnt;


void Merger(ll *a, int l, int m, int r){
    vector<ll> x(a+l, a+m +1);
    vector<ll> y(a+m+1, a+r+1);
    int i=0,j=0;
    int k =l;
    while(i < x.size() && j < y.size()){
        if(x[i] <= y[j]){
            a[k]=x[i];k++;i++;
        }
        else{
            cnt += x.size()-i;
            a[k]=y[j];k++;j++;
        }
    }
    while(i < x.size()) {a[k]=x[i];k++;i++;}
    while(j < y.size()) {a[k]=y[j];k++;j++;}
}

void MergeSort(ll *a, int l, int r){
    if(l >= r) return ;
    int m = (l+r)/2;
    MergeSort(a,l,m);
    MergeSort(a,m+1,r);
    Merger(a, l, m, r);
}
int main(){
    int test;cin >> test;
    while(test--){
        int n;cin >> n;
        ll a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        cnt=0;
        MergeSort(a, 0, n-1);
        cout << cnt << endl;
    }
    return 0;
}