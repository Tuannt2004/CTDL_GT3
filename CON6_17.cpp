#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;cin>> test;
    while(test--){
        int n,m;cin >> n >> m;
        int a[n];
        int b[m];
        set<int> A;
        set<int> B;
        for(int i=0;i<n;i++){cin>>a[i];A.insert(a[i]);}
        for(int j=0;j<m;j++){cin>>b[j];B.insert(b[j]);}
        set<int> :: reverse_iterator it = A.rbegin();
        set<int> :: iterator it1 = B.begin();
        cout << (*it) * (*it1) << endl;
    }
    return 0;
}