#include <bits/stdc++.h>
using namespace std;

int degree[1001];

int main(){
    int test;cin >> test;
    while(test--){
        int e, v;cin >> e >> v;
        memset(degree, 0, sizeof(degree));
        while(v--){
            int x,y;cin >> x >> y;
            degree[x]++;
            degree[y]++;
        }
        int dem=0;
        for(int i=1;i<=e;i++){
            if(degree[i]%2 != 0){
                dem++;
            }
        }
        if(dem == 0){
            cout << "2" << endl;
        }
        else if(dem == 2){
            cout << "1" << endl;
        }
        else{
            cout << "0" << endl;
        }
    }
    return 0;
}