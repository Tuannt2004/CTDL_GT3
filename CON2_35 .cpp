#include <bits/stdc++.h>
using namespace std;

int n,k,s;
int a[100];
bool ok;
void khoitao(){
    for(int i=1;i<=k;i++){
        a[i]=i;
    }
}

void sinh(){
    int j = k;
    while(j>0 && a[j] == n-k+j) j--;
    if(j==0){
        ok=false;
    }
    else{
        a[j]++;
        for(int t = j+1;t<=k;t++){
            a[t] = a[t-1]+1;
        }
    }
}

int tong(){
    int sum=0;
    for(int i=1;i<=k;i++){
        sum+=a[i];
    }
    return sum;
}
int main(){
    while(true){
        cin >> n >> k >> s;
        if(n==0 && k ==0 && s==0){break;}
        if(k>n){
            cout << false << endl;
            continue;
        }
        ok=true;
        int dem=0;
        khoitao();
        while(ok){
            int check = tong();
            if(check == s) dem++;
            sinh();
        }
        cout << dem << endl;
    }
    return 0;
}