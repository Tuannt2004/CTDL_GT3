#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* prev;
    node* next;
};

class Priority_Queue{
    private:
      node* head;
    public:
      Priority_Queue();
      node* Newnode(int x);
      node* adddau(int x);
      node* addcuoi(int x);
      bool empty();
      void push(int n);
      void pop();
      int front();
      int size();
      void display();
};

Priority_Queue :: Priority_Queue(){
    head = NULL;
}

node* Priority_Queue :: Newnode(int x){
    node* tmp = new node;
    tmp->data = x;
    tmp->prev = NULL;
    tmp->next = NULL;
    return tmp;
}

node* Priority_Queue :: adddau(int x){
    node* tmp = Newnode(x);
    if(head == NULL) head=tmp;
    else{
        tmp->next = head;
        head->prev = tmp;
        head = tmp;
    }
    return head;
}

node* Priority_Queue :: addcuoi(int x){
    node* tmp = Newnode(x);
    if(head == NULL) head=tmp;
    else{
        node* tmp2 = head;
        while(tmp2 ->next != NULL){
            tmp2 = tmp2->next;
        }
        tmp2->next = tmp;
        tmp->prev = tmp2;
    }
    return head;
}

bool Priority_Queue :: empty(){
    if(head != NULL) return false;
    return true;
}

void Priority_Queue :: push(int x){
    node* tmp = Newnode(x);
    if(head == NULL){
        head = tmp;
    }
    else{
        node* tmp2 = head;
        while(tmp2 != NULL && tmp2->data <= x){tmp2 = tmp2->next;}
        if(tmp2 == NULL) addcuoi(x);
        else if(tmp2==head) adddau(x);
        else{
            tmp2->prev->next= tmp;
            tmp->prev=tmp2->prev;
            tmp->next = tmp2;
            tmp2->prev = tmp;
        }
    }
}

void Priority_Queue :: pop(){
    if(head == NULL){
        cout << "khong co gia tri nao trong hang doi " << endl;return;
    }
    node* tmp = head;
    head = head->next;
    delete tmp;
}

int Priority_Queue :: front(){
    if(head == NULL){
        return -1;
    }
    int x = head->data;
    return x;
}

int Priority_Queue :: size(){
    int dem =0;
    node* tmp =head;
    while(tmp != NULL){
        dem++;tmp=tmp->next;
    }
    return dem;
}

void Priority_Queue :: display(){
    if(head == NULL){
        cout << "khong co gia tri nao trong hang doi" << endl;
        return;
    }
    node* tmp = head;
    while(tmp != NULL){
        cout << tmp->data << endl;
        tmp = tmp ->next;
    }
}

int main(){
    Priority_Queue x;
    x.push(11);
    x.push(9);
    x.push(2);
    x.display();
    cout << endl;
    x.push(10);
    x.display();
    // int a = x.front();
}