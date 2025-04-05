#include <bits/stdc++.h>
using namespace std;

int n, a[10];
bool ok;

void swap(int &a, int &b){
    int tmp=b;
    b=a;
    a=tmp;
}

void khoitao(){
    for(int i=1;i<=n;i++){
        a[i]=i;
    }
}

void xuat(){
    for(int i=1;i<=n;i++){
        cout << a[i];
    }
    cout << endl;
}

void sinh(){
    int i=n-1;
    while(i>0 && a[i]>a[i+1]){i--;}
    if(i>0){
        int h=i+1;
        while(a[i] < a[h])h++;
        swap(a[i], a[h-1]);
        int u=i+1,k=n;
        while(u<k){
            swap(a[u], a[k]);
            u++;
            k--;
        }
    }
    else{
        ok=false;
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
