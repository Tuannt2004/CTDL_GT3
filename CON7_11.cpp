#include <bits/stdc++.h>
using namespace std;

int uutien(char c){
    if(c=='+' || c=='-') return 2;
    else if(c=='*' || c=='/') return 3;
    else if(c=='^') return 4;
    return 1;
}

int main(){
    int test;
    cin >> test;
    while(test--){
        string s;cin >> s;
        stack<char> stk;
        string tmp="";
        for(auto x : s){
            if(x=='(') stk.push(x);
            else if(x==')'){
                while(!stk.empty() && stk.top() != '('){
                    tmp+=stk.top();
                    stk.pop();
                }
                stk.pop();
            }
            else if(isalpha(x)){
                tmp+=x;
            }
            else{
                if(!stk.empty() && uutien(x) <= uutien(stk.top())){
                    tmp+=stk.top();
                    stk.pop();
                    stk.push(x);
                }
                if( (!stk.empty() && uutien(x) > uutien(stk.top())) || stk.empty()){
                    stk.push(x);
                }
            }
        }
        while(!stk.empty()){
            if(stk.top() != '('){
                tmp+=stk.top();
            }
            stk.pop();
        }
        cout << tmp << endl;
    }
    return 0;
}