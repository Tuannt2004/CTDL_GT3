#include <bits/stdc++.h>
using namespace std;

int a[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};

int main(){
    int test;cin >> test;
    while(test--){
        int n;cin >> n;
        int i =9;
        int dem=0;
        while(i>=0 && n != 0){
            while(n >= a[i]){
                n-=a[i];
                dem++;
            }
            i--;
        }
        cout << dem << endl;
    }
}