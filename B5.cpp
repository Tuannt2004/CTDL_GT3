#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<char,int> a, pair<char,int> b){
  return a.second > b.second;
}

bool check(string s,int n, int d){
  string KQ(n,' ');
  map<char,int> mp;
  for(int i =0;i<n;i++){
    mp[s[i]]++;
  }
  vector<pair<char,int>> A;
  for(auto x : mp){
    pair<char,int> p;
    p.first = x.first;p.second=x.second;
    A.push_back(p);
  }
  sort(A.begin(),A.end(), cmp);
  int pos=0;
  for(int i=0;i<A.size();i++){
    while(pos<n && KQ[pos]!=' ') pos++;
    int j =0;
    while(j < A[i].second){
      if(pos+(j*d) > n-1) return false;
      j++;
    }
  }
  return true;
}
int main(){
  int test;cin >> test;
  while(test--){
    int d;cin >> d;
    string s;cin >> s;
    int n = s.size();
    cout << (check(s,n,d) ? "1" : "-1") << endl;
  }
  return 0;
}