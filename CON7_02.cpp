#include <bits/stdc++.h>
using namespace std;
int main(){
    int q;cin >> q;
    vector<int> stk;
    while(q--){
        string s;cin>> s;
        if(s == "PUSH"){
            int x;cin >> x;
            stk.push_back(x);
        }
        else if(s == "PRINT"){
            if(stk.empty()){
                cout << "NONE" << endl;
            }
            else{
                cout << stk[stk.size()-1] << endl;
            }
        }
        else{
            if(stk.empty()){
                continue;
            }
            else{
                stk.pop_back();
            }
        }
    }
    return 0;
}