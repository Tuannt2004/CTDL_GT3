#include <bits/stdc++.h>
using namespace std;

bool check(string a, string b){
    int dem1=0,dem2=0;
    set<char> se1;set<char> se2;
    for(auto x : a){se1.insert(x);}
    for(auto x : b){
        se2.insert(x);
    }
    for(auto x : b){
        if(se1.find(x) == se1.end()) dem1++;
    }
    for(auto x : a){
        if(se2.find(x) == se2.end()) dem2++;
    }
    return (dem1==1 && dem2==1) || (dem1==0 && dem2==1) || (dem1==1 && dem2==0) ;
}

int main(){
    int test;cin >> test;
    while(test--){
        int n;cin >> n;
        string t,s;cin >> t >> s;
        set<string> se;
        string tmp;
        for(int i=1;i<=n;i++){
            cin >> tmp;
            se.insert(tmp);
        }
        int dem=0;
        stack<string> stk;
        stk.push(t);
        se.erase(t);
        dem++;
        while(!stk.empty()){
            string u = stk.top();stk.pop();
            if(u == s) break;
            for(auto x : se){
                if(check(u, x)){
                    dem++;
                    stk.push(u);
                    stk.push(x);
                    se.erase(x);
                    break;
                }
            }
        }
        cout << dem << endl;
    }
}