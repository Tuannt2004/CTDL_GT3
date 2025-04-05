#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* trai;
    node* phai;
};

class BTS{
    private:
      node* root;
    public:
      BTS();
      node* Newnode(int x);
      void timnode(int x);
      void themnode(int x);
      node* nodemin();
      void xoanode(int x);
      void duyettruoc();
      void duyetgiua();
      void duyetsau();
      ~BTS();
};

BTS :: BTS(){
    this->root = NULL;
}

node* BTS :: Newnode(int x){
    node* tmp = new node;
    tmp->data = x;
    tmp->trai = NULL;
    tmp->phai = NULL;
    return tmp;
}

void BTS :: timnode(int x){
    if(this->root == NULL){
        cout << "khong tim thay node" << endl;
    }
    else if(this->root->data == x){
        cout << "Da tim thay node co gia tri la: " << x << endl;
    }
    else if(x < this->root->data){
        this->root = root->trai;
        timnode(x);
    }
    else{
        this->root = root->phai;
        timnode(x);
    }
    return;
}
int main(){

}