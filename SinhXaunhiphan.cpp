#include <bits/stdc++.h>
using namespace std;

int n, a[10];
bool ok;

void khoitao(){
    for(int i=1;i<=n;i++){
        a[i]=0;
    }
}

void xuat(){
    for(int i=1;i<=n;i++){
        cout << a[i];
    }
    cout << endl;
}

void sinh(){
    int i=n;
    while(i>0 && a[i]!=0){a[i]=0;i--;}
    if(i == 0) ok=false;
    else{
        a[i]=1;
    }
}
int main(){
    cin >> n;
    ok=true;
    khoitao();
    while(ok){
        xuat();
        sinh();
    }
    return 0;
}