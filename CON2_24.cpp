#include <bits/stdc++.h>
using namespace std;

int n,k;
int a[11];
vector<int> A;
bool ok;

bool cmp(int a, int b){
    return a < b;
}
void Try(int index, int sum){
    if(sum == k){
        ok = true;
        cout << "[";
        for(int i=0;i<A.size();i++){
            cout << A[i];
            if(i < A.size()-1){
                cout <<' ';
            }
        }
        cout << "]";
        cout <<' ';
    }
    else{
        if(sum > k) return;
        for(int i = index;i<n;i++){
            A.push_back(a[i]);
            Try(i+1, sum+a[i]);
            A.pop_back();
        }
    }
}
int main(){
    int test;
    cin >> test;
    while(test--){
        cin >> n >> k;
        for(int i =0;i<n;i++){
            cin >> a[i];
        }
        sort(a, a+n,cmp);
        ok = false;
        Try(0,0);
        if(!ok){
            cout << "-1" << endl;
        }
    }
    return 0;
}