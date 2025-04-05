#include <bits/stdc++.h>
using namespace std;

int n;
int a[11];
bool ok;

void khoitao(){
    int j = n;
    for(int i =1;i<=n;i++){
        a[i]=j;j--;
    }
}

void sinh(){
    int j = n-1;
    while(j > 0 && a[j] < a[j+1])j--;
    if(j==0) ok=false;
    else{
        int i = n;
        while(a[j] < a[i])i--;
        swap(a[j], a[i]);
        int u = j+1, v = n;
        while(u < v){
            swap(a[u], a[v]);u++;v--;
        }
    }
}
int main(){
    int test;cin >> test;
    while(test--){
        cin >> n;
        khoitao();
        ok = true;
        while(ok){
            for(int i =1;i<=n;i++){
                cout << a[i];
            }
            cout <<' ';
            sinh();
        }
        cout << "\n";
    }
    return 0;
}