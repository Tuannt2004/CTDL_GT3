#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        string s;cin >> s;
        stack<int> stk;
        for(auto x : s){
            if(isdigit(x)){
                stk.push(x-'0');
            }
            else{
                if(!stk.empty() && stk.size()>=2){
                    int a = stk.top();stk.pop();
                    int b = stk.top();stk.pop();
                    if(x=='+') stk.push(b+a);
                    else if(x=='-') stk.push(b-a);
                    else if(x=='*') stk.push(b*a);
                    else{
                        if(a == 0) continue;
                        else{
                            stk.push(b/a);
                        }
                    }
                }
            }
        }
        cout << stk.top() << endl;
    }
    return 0;
}