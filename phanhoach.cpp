#include <bits/stdc++.h>
using namespace std;

int n, cnt;
int a[1000001];
bool ok;

void khoitao(){
    for(int i=1;i<=cnt;i++){
        a[i]=n;
    }
}

void xuat(){
    for(int i=1;i<=cnt;i++){
        cout << a[i] << ' ';
    }
    cout << endl;
}

void sinh(){
    int i=cnt;
    while(i>0 && a[i]==1){i--;}
    if(i >0){
        a[i]--;
        int q = cnt-i+1;
        int p = q/a[i];
        int h = q%a[i];
        cnt = i;
        if(p >0){
            for(int j = i+1;j<=i+q;j++){
                a[j]=a[i];
            }
            cnt+=p;
        }
        if(h > 0){
            cnt++;
            a[cnt]=h;
        }
    }
    else{
        ok = false;
    }
}
int main(){
    cin >> n;
    cnt=1;
    ok=true;
    khoitao();
    while(ok){
        xuat();
        sinh();
    }
    return 0;
}