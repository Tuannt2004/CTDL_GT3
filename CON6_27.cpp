#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;cin >> test;
    while(test--){
        int n;cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        int xx=0, j=0;
        for(int i=0;i<n;i++){
            xx = a[i];
            j =i-1;
            while(j >=0 && a[j]>xx){
                a[j+1] = a[j];
                j--;
            }
            a[j+1]=xx;
            cout << "Buoc " << i << ": ";
            for(int j =0;j<=i;j++){
                cout << a[j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
