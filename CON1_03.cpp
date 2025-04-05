#include <bits/stdc++.h>
using namespace std;

int n;
int a[105];
bool ok;

void daonguoc(){
    int i = 0, j= n-1;
    while(i < j){
        swap(a[i], a[j]);
        i++;j--;
    }
}

void sinh(){
    int i = n-2;
    while(i >= 0 && a[i] > a[i+1]) i--;
    if(i == -1) ok=false;
    else{
        int j = n-1;
        while(a[i] > a[j]) j--;
        swap(a[i],a[j]);
        int u = i+1, v = n-1;
        while(u < v){
            swap(a[u], a[v]);
            u++;v--;
        }
    }
}
int main(){
    int test;cin >> test;
    while(test--){
        cin >> n;
        ok = true;
        for(int i =0;i<n;i++){
            cin >> a[i];
        }
        sinh();
        if(!ok){
            daonguoc();
            for(int i=0;i<n;i++){
                cout << a[i] <<' ';
            }
        }
        else{
            for(int i =0;i<n;i++){
                cout << a[i] <<' ';
            }
        }
        cout << endl;
    }
    return 0;
}