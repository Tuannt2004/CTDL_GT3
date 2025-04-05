#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    vector<int> :: reverse_iterator it = lower_bound(a.rbegin(), a.rend(), 2);
    cout << it-a.rbegin() << endl;
    return 0;
}