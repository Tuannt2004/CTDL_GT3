#include <bits/stdc++.h>
using namespace std;

bool check(string &a){
    stack<char> stk;
    for(auto x : a){
        if(x<='z' && x >= 'a') continue;
        if(x != ')'){
            stk.push(x);
        }
        else{
            if(stk.empty() || stk.top()=='(') return false;
            while(!stk.empty() && stk.top() != '(') stk.pop();
            if(stk.empty()) return false;
            stk.pop();
        }
    }
    return true;
}
int main(){
    int test;cin >> test;cin.ignore();
    while(test--){
        string s;getline(cin, s);
        cout << (check(s) ? "NO" : "YES") << endl;
    }
    return 0;
}