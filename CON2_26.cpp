#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;cin >> test;
    while(test--){
        int k;cin >> k;
        string s;cin >> s;
        char c = '0';
        int i =0;
        int j =0;
        int idx=0;
        while(j < k){
            for(int h = i;h<s.size();h++){
                if(c < s[h]){
                    c = s[h];
                    idx = h;
                }
            }
            if(idx == i){
                i++;
                c='0';
            }
            else{
                swap(s[i],s[idx]);
                i++;
                j++;
                c ='0';
            }
        }
        cout << s << endl;
    }
    return 0;
}