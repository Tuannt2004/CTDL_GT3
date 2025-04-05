#include <bits/stdc++.h>
using namespace std;

bool check(string s){
    stack<char> stk;
    for(auto x : s){
        if(x =='{' || x=='[' || x=='(') stk.push(x);
        else if(x == '}'){
            if(stk.empty()) return false;
            else if(stk.top() == '{') stk.pop();
        }
        else if(x==']'){
            if(stk.empty()) return false;
            else if(stk.top() == '[') stk.pop();
        }
        else{
            if(stk.empty()) return false;
            else if(stk.top() == '(') stk.pop();
        }
    }
    if(!stk.empty()) return false;
    return true;
}
int main(){
    int test;cin >> test;
    while(test--){
        string s;cin >> s;
        cout << (check(s)?"YES":"NO") << endl;
    }
    return 0;
}