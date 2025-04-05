#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;cin >> test;
    while(test--){
        int n;cin >> n;
        int x = 1;
        queue<int> qe;
        qe.push(x);
        int dem =0;
        while(true){
            int tmp = qe.front();qe.pop();
            if(tmp > n) break;
            else{
               dem++;
               int tmp1 = tmp*10+0;
               qe.push(tmp1);
               int tmp2 = tmp*10+1;
               qe.push(tmp2);
            }
        }
        cout << dem << endl;
    }
    return 0;
}