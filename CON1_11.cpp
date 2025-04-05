#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;cin >> test;
    while(test--){
        string s;cin >> s;
        string b="";
        b = s[0];
        for(int i =1;i<s.size();i++){
            if(s[i] != s[i-1]) b +="1";
            else{
                b+="0";
            }
        }
        cout << b << endl;
    }
    return 0;
}