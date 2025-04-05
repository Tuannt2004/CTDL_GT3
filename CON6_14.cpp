#include <bits/stdc++.h>
using namespace std;

int n;
bool mang[1000001];
vector<int> a;

void sang(){
    for(int i=0;i<=1000001;i++){
        mang[i]=true;
    }
    mang[0]=mang[1]=false;
    for(int i=2;i*i<=1000001;i++){
        if(mang[i]){
            for(int j=2*i ; j<=1000001;j+=i){
                mang[j]=false;
            }
        }
    }
    for(int i=0;i<=1000001;i++){
        if(mang[i]) a.push_back(i);
    }
}
int main(){
sang();
    int test;cin >> test;
    while(test--){
        cin >> n;
        bool ok = true;
        int l =0, r=a.size()-1;
        while(l <= r){
            int x = a[l] + a[r];
            if(x == n){
                ok = false;
                cout << a[l] << ' ' << a[r] << endl;
                break;
            }
            else if(x > n){
                r--;
            }
            else{
                l ++;
            }
        }
        if(ok) cout << "-1" << endl;
    }
    return 0;
}