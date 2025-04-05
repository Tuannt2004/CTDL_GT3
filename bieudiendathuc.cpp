#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int a[9][9];
bool cot[9];
bool xuoi[70];
bool nguoc[70];
int sum =0;
int maxn = -1e9;

void Try(int i){
    for(int j =1;j<=8;j++){
        if(cot[j] && xuoi[i-j+8] && nguoc[i+j-1]){
            sum+=a[i][j];
            cot[j]=nguoc[i-j+8]=nguoc[i+j-1]=false;
            if(i == 8) maxn = max(maxn, sum);
            else{
                Try(i+1);
            }
            cot[j]=xuoi[i-j+8]=nguoc[i+j-1]=true;
            sum-=a[i][j];
        }
    }
}
int main(){
    int test;cin >> test;
    while(test--){
        for(int i=0;i<9;i++){cot[i]=true;}
        for(int i =0;i<70;i++){xuoi[i]=nguoc[i]=true;}
        for(int i=1;i<=8;i++){
            for(int j =1;j<=8;j++){
                cin >> a[i][j];
            }
        }
        Try(1);
        cout << maxn << endl;
    }
    return 0;
}