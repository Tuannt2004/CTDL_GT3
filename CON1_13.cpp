#include <bits/stdc++.h>
using namespace std;

int n,k;
int a[20];
bool ok;
vector<string> c;


void khoitao(){
    for(int i=1;i<=n;i++){
        a[i]=0;
    }
}

// bool check(){
//     int dem =1;
//     int maxn = 0;
//     for(int j = 2;j<=n;j++){
//         if(a[j] == a[j-1] && a[j]==0) dem++;
//         else{
//             dem=1;
//         }
//         maxn = max(dem, maxn);
//     }
//     if(maxn != k) return false;
//     return true;
// }

bool check(){
    int d=0, cnt =0;
    for(int i=1;i<=n;i++){
        if(a[i] == 0){
            d++;
            if(d > k) return false;
            else if(d == k){
                cnt++;
            }
        }
        else{
            d=0;
        }
    }
    return cnt == 1;
}

void sinh(){
    int i=n;
    while(i>0 && a[i]==1){
        a[i]=0;
        i--;
    }
    if(i == 0) ok=false;
    else{
        a[i]=1;
    }
}

int main(){
    int t;cin >> t;
    while(t--){
        cin >> n >> k;
    khoitao();
    ok = true;
    string tmp="";
    while(ok){
        if(check()){
            tmp="";
            for(int i=1;i<=n;i++){
                if(a[i]==0) tmp+='A';
                else tmp+='B';
            }
            c.push_back(tmp);
        }
        sinh();
    }
    cout << c.size() << endl;
    for(auto x : c){cout << x << endl;}
    c.clear();
    }
    return 0;
}