#include <bits/stdc++.h>
using namespace std;

string s;

void sinh(){
    int i = s.size()-1;
    int k;
    bool check=true;
    for(int j =i;j>=0;j--){
        if(s[j]=='0'){
            k = j;
            check=false;
            break;
        }
    }
    s[k]='1';
    for(int j=k+1;j<=i;j++){
        s[j]='0';
    }
    if(check){
        for(int j =0;j<=i;j++){
            cout << '0';
        }
        cout << endl;
    }
    else{
        cout << s << endl;
    }
}
int main(){
    int test;
    cin >> test;
    while(test--){
        cin >> s;
        sinh();
    }
    return 0;
}