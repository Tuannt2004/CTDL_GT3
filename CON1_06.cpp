#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;cin >> test;
    while(test--){
        int n;cin >> n;
        vector<int> arr;
        for(int i =1;i<=n;i++){
            arr.push_back(i);
        }
        do{
            for(int i =0;i<arr.size();i++){
                cout << arr[i];
            }
            cout << ' ';
        }while(next_permutation(arr.begin(), arr.end()));
        cout <<"\n";
    }
    return 0;
}