#include <bits/stdc++.h>
using namespace std;
int main(){
    stack<int> stk;
    string s;
    while(cin >> s){
        if(s == "push"){
            if(stk.size() > 200) continue;
            else{
                int x;cin >> x;
                stk.push(x);
            }
        }
        else if(s == "pop"){
            if(!stk.empty()){
                stk.pop();
            }
        }
        else{
            if(stk.empty()){
                cout << "empty" << endl;
            }
            else{
                stack<int> tmp = stk;
            vector<int> tmp1;
            while(!tmp.empty()){
                tmp1.push_back(tmp.top());
                tmp.pop();
            }
            for(int i = tmp1.size()-1;i>=0;i--){
                cout << tmp1[i] <<' ';
            }
            cout << endl;
            }
        }
    }
}