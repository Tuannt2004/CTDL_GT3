#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;cin >> test;
    while(test--){
        int n;cin >> n;
        string s="1";
        queue<string> qe;
        qe.push(s);
        while(n--){
            string tmp = qe.front();
            cout << tmp <<' ';
            qe.pop();
            string tmp1 = tmp +"0";
            qe.push(tmp1);
            string tmp2 = tmp +"1";
            qe.push(tmp2);
        }
        cout << "\n";
    }
    return 0;
}