#include <bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){
    return a < b;
}
int main(){
    int test;cin >> test;
    while(test--){
        int n, m;cin >> n >> m;
        int a[n], b[m];
        for(int i=0;i<n;i++){cin >> a[i];}
        for(int j=0;j<m;j++){cin >> b[j];}
        vector<int> c;
        sort(a,a+n,cmp);sort(b,b+m,cmp);
        int l=0, r=0;
        while(l < n && r < m){
            if(a[l] >= b[r]){
                c.push_back(b[r]);
                r++;
            }
            else{
                c.push_back(a[l]);
                l++;
            }
        }
        while(l < n){c.push_back(a[l]);l++;}
        while(r < m){c.push_back(b[r]);r++;}
        for(auto x : c){
            cout << x <<' ';
        }
        cout << endl;
    }
}