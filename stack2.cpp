#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
};

class Stack{
    private:
      node* head;
    public:
      Stack();
      bool checkStack();
      node* Newnode(int x);
      void pushStack(int x);
      void popStack();
      void display();
      int front();
      int size();
};

Stack :: Stack(){
    head = NULL;
}

bool Stack :: checkStack(){
    if(this->head == NULL) return false;
    return true;
}

node* Stack:: Newnode(int x){
    node* tmp = new node;
    tmp->data = x;
    tmp->next = NULL;
    return tmp;
}

void Stack :: pushStack(int x){
    node* tmp = Newnode(x);
    if(this->head == NULL){
        head = tmp;
    }
    else{
        tmp->next = head;
        head = tmp;
    }
}

void Stack :: popStack(){
    if(!checkStack()) return;
    node* tmp = head;
    head = head->next;
    delete tmp;
}

void Stack :: display(){
    if(this->head == NULL){
        cout << " khong co gia tri trong Stack" << endl;
        return;
    }
    node* tmp = head;
    while(tmp != NULL){
        cout << tmp->data << endl;
        tmp = tmp->next;
    }
}

int Stack :: front(){
    int x = head ->data;
    return x;
}

int Stack :: size(){
    int dem =0;
    if(!checkStack()){
        return 0;
    }
    node *tmp = head;
    while(tmp != NULL){
        dem++;
        tmp = tmp->next;
    }
    return dem;
}
int main(){
    Stack x;
    x.display();
}