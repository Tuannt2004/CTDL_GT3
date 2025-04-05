#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        string s;cin>> s;
        int a =0;
        int b =0;
        for(int i =0;i<s.size();i++){
            if(s[i]=='['){
                a++;
            }
            else{
                a--;
            }
            if(a < 0){
                for(int j =i+1;j<s.size();j++){
                    if(s[j] == '['){
                        b+=(j-i);
                        swap(s[i], s[j]);
                        a=1;
                        break;
                    }
                }
            }
        }
        cout<< b << "\n";
    }
    return 0;
}