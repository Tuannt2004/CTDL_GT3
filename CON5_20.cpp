#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    int test;cin >> test;
    while(test--){
        string s;cin >> s;
        ll n = s.size();
        ll i =1;
        ll sum =0;
        while(i <= n){
            for(int j =0;j<n;j++){
                if(j + i > n) break;
                else{
                    sum+=stoll(s.substr(j,i));
                }
            }
            i++;
        }
        cout << sum << endl;
    }
    return 0;
}