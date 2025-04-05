#include <bits/stdc++.h>
using namespace std;

int n;
bool check[1000001];
int a[1000001];

int main(){
    int test;cin >>test;
    while(test--){
        cin >> n;
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a, a+n);
        memset(check, true, sizeof(check));
        int m = n/2;
        int i =0, j=m;
        int dem=0;
        while(i < m && j < n){
            if(a[j] >= 2* a[i]){
                dem++;
                check[i]=check[j]=false;
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        for(int i=0;i<n;i++){
            if(check[i]) dem++;
        }
        cout << dem << endl;
    }
    return 0;
}