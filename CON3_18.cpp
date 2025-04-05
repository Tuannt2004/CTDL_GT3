#include <bits/stdc++.h>
using namespace std;

int n;

void kq(){
    for(int i = n/7;i>=0;i--){
        if((n-7*i)%4 == 0){
            int a = (n-7*i)/4;
            cout << string(a,'4') + string(i, '7') << endl;
            return;
        }
    }
    cout << "-1" << endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int test; cin >> test;
    while(test--){
        cin >> n;
        kq();
    }
    return 0;
}