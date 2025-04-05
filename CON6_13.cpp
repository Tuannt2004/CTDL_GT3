#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;cin >> test;
    while(test--){
        int n,x;cin >> n >> x;
        int a[n];
        map<int,int> mp;
        for(int i=0;i<n;i++){
            cin >> a[i];
            mp[a[i]]++;
        }
        map<int, int> :: iterator it = mp.find(x);
        if(it != mp.end()){
            cout << (*it).second << endl;
        }
        else{
            cout << "-1" << endl;
        }
    }
    return 0;
}