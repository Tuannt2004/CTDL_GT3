#include <bits/stdc++.h>
using namespace std;

int n,m;
int a[100001];
int b[100001];

// bool check(vector<int> a, int n){
//     for(int i =0;i<a.size();i++){
//         if(a[i] == n) return false;
//     }
//     return true;
// }

int main(){
    int test;cin >> test;
    while(test--){
        cin >> n >> m;
        for(int i=0;i<n;i++){cin >> a[i];}
        for(int i=0;i<m;i++){cin >> b[i];}
        sort(a,a+n);sort(b,b+n);
        vector<int> hop;
        vector<int> giao;
        int l=0,r=0;
        while(l < n && r<m){
            if(a[l] > a[r]){
                hop.push_back(a[r]);
                r++;
            }
            else if(a[l] < a[r]){
                hop.push_back(a[l]);
                l++;
            }
            else{
                hop.push_back(a[l]);
                giao.push_back(a[r]);
                r++;l++;
            }
        }
        while(l < n){
            hop.push_back(a[l]);
            l++;
        }
        while(r < m){
            hop.push_back(a[r]);
            r++;
        }
        for(int i =0;i<hop.size();i++){
            cout << hop[i] <<' ';
            if(i == hop.size()-1) cout << "\n";
        }
        for(int i =0;i<giao.size();i++){
            cout << giao[i] <<' ';
            if(i == giao.size()-1) cout << "\n";
        }
    }
    return 0;
}