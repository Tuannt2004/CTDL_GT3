#include <bits/stdc++.h>
using namespace std;

string s;
bool ok;

void daonguoc(int l, int r){
    int i = l, j = r;
    while(i < j){
        swap(s[i],s[j]);
        i++;
        j--;
    }
}

void sinh(){
    int i = s.size()-2;
    while(i >= 0 && s[i] >= s[i+1]) i--;
    if(i == -1) ok=false;
    else{
        int j = s.size()-1;
        while(s[i] >= s[j]) j--;
        swap(s[i], s[j]);
        int h = i+1, hh = s.size()-1;
        daonguoc(h,hh);
    }
}
int main(){
    int test;
    cin >> test;
    for(int i =1;i<=test;i++){
        int t;
        cin >> t;
        cin >> s;
        ok = true;
        sinh();
        cout << t <<' ';
        if(!ok){
            cout << "BIGGEST" << endl;continue;
        }
        else{
            cout << s << endl;
        }
    }
}