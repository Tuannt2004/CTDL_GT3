#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;cin >> test;
    queue<int> qe;
    while(test--){
        string s;cin >> s;
        if(s == "PUSH"){
            int x;cin >> x;
            qe.push(x);
        }
        else if(s == "PRINTFRONT"){
            if(qe.empty()){
                cout << "NONE" << endl;
            }
            else{
                cout << qe.front() << endl;
            }
        }
        else if(s == "POP"){
            if(!qe.empty()){
                qe.pop();
            }
            else{
                continue;
            }
        }
    }
    return 0;
}