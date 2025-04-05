#include <bits/stdc++.h>
using namespace std;

string s;
int a[11];
bool check[11];

void Try(int i , int n){
    for(int j = 1;j<=n;j++){
        if(check[j]){
            a[i]=j;
            check[j]=false;
            if(i == n){
                for(int h = 1;h<=n;h++){
                    cout << s[a[h]];
                }
                cout << ' ';
            }
            else{
                Try(i+1,n);
            }
            check[j]=true;
        }
    }
}
int main(){
    int test;cin >> test;
    while(test--){
        cin >> s;
        int n = s.size();
        s = " " + s;
        memset(check, true, sizeof(check));
        Try(1,n);
        cout << "\n";
    }
    return 0;
}