#include <bits/stdc++.h>
using namespace std;

int n;
int a[104];
int dem;

void Selection(){
    int min = 0;
    bool ok = false;
    for(int i=0;i<n-1;i++){
        min = i;
        ok = false;
        for(int j =i+1;j<n;j++){
            if(a[min] > a[j]){
                ok = true;
                min = j;
            }
        }
        swap(a[i], a[min]);
        if(ok) dem++;
    }
}
int main(){
    int test;cin >> test;
    while(test--){
        cin >> n;
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        dem=0;
        Selection();
        cout << dem << endl;
    }
    return 0;
}