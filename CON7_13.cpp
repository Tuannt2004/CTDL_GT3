#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;cin >> test;
    while(test--){
        string s;cin >> s;
        stack<string> stk;
        for(int i=s.size()-1;i>=0;i--){
            if(isalpha(s[i])){
                stk.push(string(1,s[i]));
            }
            else{
                if(!stk.empty() && stk.size() >= 2){
                    string tmp1 = stk.top();stk.pop();
                    string tmp2 = stk.top();stk.pop();
                    string tmp3 = tmp1 + tmp2 + string(1,s[i]);
                    stk.push(tmp3);
                }
            }
        }
        cout << stk.top() << endl;
    }
    return 0;
}