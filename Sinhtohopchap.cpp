#include <bits/stdc++.h>
using namespace std;

int n,k;
int a[10];
bool ok;

void khoitao(){
    for(int i=1;i<=k;i++){
        a[i]=i;
    }
}

void xuat(){
    for(int i=1;i<=k;i++){
        cout << a[i];
    }
    cout << endl;
}

void sinh(){
    int i=k;
    while(i>0 && a[i]==n-k+i){ i--;}
    if(i>0){
        a[i]++;
        for(int j=i+1;j<=k;j++){
            a[j]=a[j-1]+1;
        }
    }
    else{
        ok = false;
    }
}
int main(){
    cin >> n >> k;
    ok = true;
    khoitao();
    while(ok){
        xuat();
        sinh();
    }
    return 0;
}