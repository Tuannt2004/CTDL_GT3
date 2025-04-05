#include <bits/stdc++.h>
using namespace std;

int k;
string a,b;

string ketqua(){
    stack<char>stk;
    int x = a.size(), y = b.size();
    while(x < y){a="0"+a; x++;}
    while(y < x){b="0"+b; y++;}
    int nho=0, m;
    for(int i=a.size()-1;i>=0;i--){
        int u = a[i]-'0' + b[i]-'0' + nho;
        nho = u/k;
        m = u%k;
        stk.push(m+'0');
    }
    if(nho  > 0) stk.push(nho+'0');
    string tmp ="";
    while(!stk.empty()){
        tmp += stk.top();
        stk.pop();
    }
    return tmp;
}
int main(){
    int test;cin >> test;
    while(test--){
        cin >> k >> a >> b;
        cout << ketqua() << "\n";
    }
    return 0;
}