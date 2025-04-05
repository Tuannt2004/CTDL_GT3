#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;cin >> test;
    while(test--){
        int n;cin >> n;
        vector<int> a;
        while(n--){
            char c;cin>> c;
            if(c=='1'){
                cout << a.size() << endl;
            }
            else if(c == '2'){
                if(!a.empty()){
                    cout << "NO" << endl;
                }
                else{
                    cout << "YES" << endl;
                }
            }
            else if(c == '3'){
                int x;cin >> x;
                a.push_back(x);
            }
            else if(c =='4'){
                if(!a.empty()){
                    a.erase(a.begin());
                }
                else{
                    continue;
                }
            }
            else if(c=='5'){
                if(!a.empty()){
                    vector<int> :: iterator y = a.begin();
                    cout << *y << endl;
                }
                else{
                    cout << "-1" << endl;
                }
            }
            else if(c == '6'){
                if(!a.empty()){
                    cout << a[a.size()-1] << endl;
                }
                else{
                    cout << -1 << endl;
                }
            }
        }
    }
}