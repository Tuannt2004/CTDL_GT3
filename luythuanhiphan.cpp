#include <bits/stdc++.h>
using namespace std;

int power(int n, int mu){
    if( mu == 0) return 1;
    int tmp = power(n, mu/2);
    if(mu%2==0){
        return tmp * tmp;
    }
    else{
        return n*tmp*tmp;
    }
}
int main(){
    int n, mu;cin >> n >> mu;
    cout << power(n, mu) << endl;
    return 0;
}