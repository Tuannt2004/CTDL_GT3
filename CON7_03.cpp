#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;cin >> test;
    cin.ignore();
    while(test--){
        string str;getline(cin, str);
        string word, kq="";
        stringstream ss(str);
        queue<string> qe;
        while(ss >> word){
            stack<char> stk;kq="";
            for(auto x : word) stk.push(x);
            while(!stk.empty()){
                kq += stk.top();stk.pop();
            }
            qe.push(kq);
        }
        while(!qe.empty()){
            cout << qe.front() << ' ';
            qe.pop();
        }
        cout << "\n";
    }
    return 0;
}