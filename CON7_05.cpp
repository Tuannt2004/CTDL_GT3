#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;cin >> test;
    while(test--){
        string s;cin >> s;
        stack<int> stk;
        stk.push(-1);
        int maxn =0;
        for(int i=0;i<s.size();i++){
            if(s[i] =='('){
                stk.push(i);
            }
            else{
                stk.pop();
                if(!stk.empty()){
                    maxn = max(maxn, i-stk.top());
                }
                else{
                    stk.push(i);
                }
            }
        }
        cout << maxn << endl;
    }
    return 0;
}