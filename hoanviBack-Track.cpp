#include <bits/stdc++.h>
using namespace std;

int n, a[10];
bool chuaxet[10]={false};

void khoitao(){
    for(int i=1;i<=n;i++){
        a[i]=i;
    }
}

void xuat(){
    for(int i=1;i<=n;i++){
        cout << a[i] << ' ';
    }
    cout << endl;
}

void Try(int i){
    for(int j=1;j<=n;j++){
        if(!chuaxet[j]){
            chuaxet[j]=true;
            a[i]=j;
            if(i==n) xuat();
            else Try(i+1);
            chuaxet[j]=false;
        }
    }
}
int main(){
    cin >> n;
    Try(1);
    return 0;
}