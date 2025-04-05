#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
};

class Queue{
    private:
      node* head;
    public:
       Queue();
       bool checkQueue();
       node* Newnode(int x);
       void pushQueue(int x);
       void popQueue();
       void display();
       int topQueue();
       int Size();
       friend ostream& operator << (ostream& out, Queue x);
};

Queue :: Queue (){
    head == NULL;
}

bool Queue :: checkQueue(){
    if(this->head == NULL) return false;
    return true;
}

node* Queue :: Newnode(int x){
    node* tmp = new node;
    tmp->data=x;
    tmp->next=NULL;
    return tmp;
}

void Queue :: pushQueue(int x){
     node* tmp = Newnode(x);
     if(this->head == NULL) head=tmp;
     else{
        node* tmp2 = head;
        while(tmp->next != NULL){
            tmp = tmp -> next;
        }
        tmp2->next = tmp;
     }
}

void Queue :: popQueue(){
    if(!checkQueue()){return ;}
    else{
        node* tmp = head;
        head = head ->next;
        delete tmp;
    }
}

void Queue :: display (){
    if(!checkQueue()){
        cout << " khong co gia tri trong hang doi" << endl;
        return;
    }
    node* tmp = head;
    while(tmp != NULL){
        cout << tmp -> data << endl;
        tmp = tmp->next;
    }
}

int Queue :: topQueue(){
    int x = this->head->data;
    return x;
}

int Queue :: Size(){
    int dem=0;
    if(!checkQueue()){
        return 0;
    }
    node* tmp = this->head;
    while(tmp != NULL){
        dem++;
        tmp = tmp ->next;
    }
    return dem;
}

ostream& operator << (ostream& out, Queue x){
    if(x.head == NULL){
        cout << "khong co gia tri trong hang doi" << endl;
    }
    else{
        node* tmp = x.head;
        while(tmp != NULL){
            cout << tmp->data << endl;
            tmp = tmp->next;
        }
    }
    return out;
}
int main(){
    Queue x;
    // cout << x ;
    x.pushQueue(30);
    // x.display();
    x.pushQueue(20);
    // x.display();
    // // cout << a << endl;
    x.popQueue();
    x.display();
    // int y = x.Size();
    // cout << y << endl;
}