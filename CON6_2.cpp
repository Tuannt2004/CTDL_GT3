#include <bits/stdc++.h>
using namespace std;

int a[100005];
int X;
int n;
bool ok;

void swap(int i, int j){
    int tmp = a[i];
    a[i] = a[j];
    a[j] = tmp;
}

int main(){
    int test;cin >> test;
    while(test--){
        cin >> n >> X;
        for(int i=0;i<n;i++)cin >> a[i];
        for(int i=0;i<n-1;i++){
            ok = true;
            for(int j = 0;j<n-i-1;j++){
                if(abs(X - a[j]) >= abs(X- a[j+1])){
                    ok = false;
                    if(abs(X - a[j]) == abs(X- a[j+1]) && a[j] > a[j+1]) swap(j, j+1);
                    else swap(j, j+1);
                }
            }
            if(ok) break;
        }
        for(int i=0;i<n;i++){
            cout << a[i] <<' ';
        }
        cout << "\n";
    }
    return 0;
}