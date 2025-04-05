#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;cin >> test;
    while(test--){
        string s;cin >> s;
        stack<string> stk;
        for(auto x : s){
            if(isalpha(x)){
                stk.push(string(1,x));
            }
            else{
                if(!stk.empty() && stk.size() >= 2){
                    string tmp1 = stk.top();stk.pop();
                    string tmp2 = stk.top();stk.pop();
                    string tmp3 = "(" + tmp2 + string(1,x) + tmp1 + ")";
                    stk.push(tmp3);
                }
            }
        }
        cout << stk.top() << endl;
    }
    return 0;
}