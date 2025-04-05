#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll solve(string a){
    ll tmp = 1;
    ll sum = 0;
    for(int i=a.size()-1;i>=0;i--){
        if(a[i]=='1'){
            sum += tmp;
        }
        tmp = tmp << 1;
    }
    return sum;
}
int main(){
    int test;cin >> test;
    while(test--){
        string s1,s2;cin >> s1 >> s2;
        cout << solve(s1) * solve(s2) << endl;
    }
    return 0;
}