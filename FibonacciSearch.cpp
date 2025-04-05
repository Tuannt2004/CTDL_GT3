#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll fibo[93];
void khoitao(){
    fibo[0]=0;
    fibo[1]=1;
    for(int i=2;i<=92;i++){
        fibo[i]=fibo[i-1]+fibo[i-2];
    }
}

int FibonacciSearch(int *a, int x, int n){
    int k=0;
    if(n==0) return 0;
    while(fibo[k]<n)k++;
    int inf=0;
    while(k > 0){
        int pos = inf + fibo[--k];
        if((pos >= n) || (x < a[pos]));
        else if(x > a[pos]) inf = pos;
        else return pos;
    }
    return -1;
}
int main(){
    khoitao();
    int n, x;cin >> n >> x;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    if(FibonacciSearch(a,x,n)==-1) cout << "khong thay " << endl;
    else{
        cout << FibonacciSearch(a,x, n) << endl;
    }
    return 0;
}

// Fibonacci thuc chat lay chi so dua tren de tim gia tri x bat ki