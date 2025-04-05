#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;cin >> test;
    while(test--){
        int n;cin >> n;
        queue<string> qe;
        string a = "A";
        string b = "B";
        qe.push(a);qe.push(b);
        string kq = "";
        while(true){
            kq = qe.front();
            if(kq.size()==n) break;
            qe.pop();
            string u = kq +"A";
            qe.push(u);
            string v = kq+"B";
            qe.push(v);
        }
        while(!qe.empty()){
            cout << qe.front() << ' ';
            qe.pop();
        }
        cout << endl;
    }
    return 0;
}