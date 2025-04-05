#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, s, t[30];
int check[31];
bool ok;
ll sum=0;

void Try(int i, int dem){
    if(i == dem && sum == s){
        ok = true;return;
    }
    if(i == dem && sum != s) return;
    for(int j=1;j<=n;j++){
        if(j > check[i-1]){
            sum+=t[j];
            check[i]=j;
            if(sum <= s){
                Try(i+1, dem);
            }
            sum-=t[i];
            check[i]=0;
        }
    }
}
void Init(){
    cin >> n >> s;
    for(int i=1;i<=n;i++){cin >> t[i];}
    ok = false;
    int dem=0;
    for(dem =1;dem<=n;dem++){
        sum=0;
        Try(0,dem);
        if(ok) break;
    }
    cout << dem << "\n";
}
int main(){
    Init();
    return 0;
}