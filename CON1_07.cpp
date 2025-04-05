#include <bits/stdc++.h>
using namespace std;

int n,cnt;
int a[11];
bool ok;

void khoitao(){
    cnt = 1;
    a[1]=n;
}

void sinh(){
    int i = cnt;
    while(i >0 && a[i]==1) i--;
    if(i == 0) ok = false;
    else{
        a[i]--;
        int d = cnt-i+1;
        int u = d/a[i];
        int s = d%a[i];
        cnt = i;
        if(u > 0){
            for(int j =1;j<=u;j++){
                ++cnt;
                a[cnt]=a[i];
            }
        }
        if(s > 0){
            ++cnt;
            a[cnt]=s;
        }
    }
}

void xuat(){
    cout << "(";
    for(int i =1;i<=cnt;i++){
        cout << a[i];
        if(i < cnt) cout <<' ';
    }
    cout << ")";
}
int main(){
    int test;cin >> test;
    while(test--){
        cin >> n;
        ok = true;
        khoitao();
        while(ok){
            xuat();
            cout << ' ';
            sinh();
        }
        cout << endl;
    }
    return 0;
}