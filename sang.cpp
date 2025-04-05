#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll phi[1000001];

void sang(){
    for(int i=1;i<=1000000;i++){
        phi[i]=i;
    }
    for(int i=2;i<=1000000;i++){
        if(phi[i] == i){
            for(int j=i;j<=1000000;j+=i){
                phi[j]-=phi[j]/i;
            }
        }
    }
}
int main(){
    sang();
    int n;cin >> n;
    for(int i=2;i<=n;i++){
        cout << phi[i] << endl;
    }
}