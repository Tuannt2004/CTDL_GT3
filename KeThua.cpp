#include <bits/stdc++.h>
using namespace std;

class Tim{
  private:
   int x, n;
   int *A;
   static int idx;
  public:
   Tim();
  //  Tim(int x, int n);
   int Search();
   void trave();
   void nhap();
   void xuat();
   ~Tim();
};

int Tim :: idx =0;

Tim :: Tim(){
  this->x=0;this->n=0;
}

int Tim :: Search(){
  int dx=0;
  for(int i=0;i<this->n;i++){
    if(A[i] == x) dx=i+1;
  }
  return dx;
}

void Tim :: trave(){
  idx = Search();
}

void Tim ::nhap(){
  cin >> this->n;cin >> this->x;
  this->A = new int[this->n];
  for(int i=0;i<this->n;i++){
    cin >> A[i];
  }
}

void Tim :: xuat(){
  cout << this->idx << endl;
}

Tim :: ~Tim(){
  delete [] A;
}

int main(){
  Tim x;
  x.nhap();
  x.Search();x.trave();
  x.xuat();
  return 0;
}