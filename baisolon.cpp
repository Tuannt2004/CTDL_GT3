#include <bits/stdc++.h>
using namespace std;

int n;
int cot[11];
int xuoi[105];
int nguoc[105];
int dem=0;

void Try(int i){
    for(int j =1;j<=n;j++){
        if(cot[j] && xuoi[i-j+n] && nguoc[i+j-1]){
            cot[j]=xuoi[i-j+n]=nguoc[i+j-1]=false;
            if(i == n) dem++;
            else{
                Try(i+1);
            }
            cot[j]=xuoi[i-j+n]=nguoc[i+j-1]=true;
        }
    }
}

int main(){
    int test;cin >> test;
    while(test--){
        dem=0;
        cin >> n;
    for(int i =0;i<11;i++){cot[i]=true;}
    for(int i =0;i<105;i++){xuoi[i]=true;nguoc[i]=true;}
    Try(1);
    cout << dem << endl;
    }
    return 0;
}