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
        stack<string> kq;
        int dem=0,xx=0, j=0;
        for(int i=0;i<n;i++){
            xx = a[i];
            j =i-1;
            while(j >=0 && a[j]>xx){
                a[j+1] = a[j];
                j--;
            }
            a[j+1]=xx;
            string x ="";
            x+=("Buoc " + to_string(dem) + ": ");
            for(int j =0;j<=i;j++){
                x+=to_string(a[j]);
                if(j < i){
                    x+=' ';
                }
            }
            dem++;
            kq.push(x);
        }
        while(!kq.empty()){
            cout << kq.top() << endl;
            kq.pop();
        }
    }
    return 0;
}