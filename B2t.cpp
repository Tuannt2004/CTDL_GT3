#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll a[10000001];
ll b[10000001];
int n;

bool cmp1(int a, int b){
    return a<b;
}
bool cmp2(int a, int b){
    return a>b;
}
int main(){
    int test;cin >> test;
    while(test--){
        cin >> n;
        for(int i =0;i<n;i++){
            cin >> a[i];
        }
        for(int i =0;i<n;i++){
            cin >> b[i];
        }
        sort(a,a+n,cmp1);
        sort(b,b+n,cmp2);
        ll sum = 0;
        for(int i =0;i<n;i++){
            sum+=(a[i]*b[i]);
        }
        cout << sum << endl;
    }
    return 0;
}