#include <bits/stdc++.h>
using namespace std;
int main(){
   string v;
   string s;getline(cin, s);
   stringstream ss(s);
   while(ss >> v){
      try{
         int u = stoll(v);
         cout << u << endl;
      }catch(...){
         cout << "Loi xay ra khi co chuoi ki tu" <<endl;
      }
   }
}