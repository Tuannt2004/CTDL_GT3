#include <bits/stdc++.h>
using namespace std;
int main(){
  int test;cin >> test;
  while(test--){
    int N,S,M;cin >> N >> S >> M;
    int t=0;
    if(S > 5){
      t = (S-5)/7 + 1;
    }
    else{
      t = S/5;
    }
    if( N < M){
      cout << "-1 " << endl;
    }
    else{
      int days = S-t;
      int minn = M*S, maxn = N*days;
      if(minn > maxn){
        cout << "-1" << endl;
      }
      else{
        for(int i = 1;i<=days;i++){
          if(N*i >= minn){
            cout << i << endl;
            break;
          }
        }
      }
    }
  }
  return 0;
}