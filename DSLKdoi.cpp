#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
    node *prev;
};

node* newNode(int x){
    node* newNODE = new node;
    newNODE->data=x;
    newNODE ->next = newNODE->prev = NULL;
    return newNODE;
}

node* themvaodau(node *head, int x){
    node* Nodemoi = newNode(x);
    Nodemoi ->next = head;
    if(head != NULL){
        head->prev = Nodemoi;
    }
    head = Nodemoi;
    return head;
}

node* thamvaocuoi(node* head, int x){
    node* nodemoi = newNode(x);
    if(head == NULL){
        head = nodemoi;
    }
    else{
        node* tmp = head;
        while(tmp->next != NULL){
            tmp = tmp->next;
        }
        tmp->next = nodemoi;
        nodemoi->prev = tmp;
    }
    return head;
}

int len(node* head){
    int dem=0;
    while(head != NULL){
        dem++;
        head = head->next;
    }
    return dem;
}

node* themvaogiua(node* head, int k, int x){
    node *nodemoi = newNode(x);
    int n = len(head);
    if(k<1 || k>n+1){
        return 0;
    }
    else if(k == 1){
        head = themvaodau(head, x);
    }
    else{
        node *tmp = head;
        for(int i=1;i<k;i++){
            tmp = tmp->next;
        }
        tmp->prev->next= nodemoi;
        nodemoi->prev=tmp->prev;
        nodemoi->next = tmp;
        tmp->prev = nodemoi;
    }
    return head;
}

node* xoanodedau(node* head){
    node* tmp = head;
    if(head == NULL){
        return 0;
    }
    if(len(head) == 1){
        delete head;
        head = NULL;
        return head;
    }
    head = head->next;
    head->prev = NULL;
    delete tmp;
    return head;
}

node* xoanodecuoi(node* head){
    node* tmp = head;
    if(head == NULL){
        return 0;
    }
    if(len(head)==1){
        delete head;
        head=NULL;
        return head;
    }
    while(tmp-> next != NULL){
        tmp = tmp->next;
    }
    tmp->prev->next = NULL;
    delete tmp;
    return head;
}

node* xoanodegiua(node* head, int k){
    node* tmp = head;
    if(k<1 || k >len(head)+1){
        return head;
    }
    if(k==1){
        head = xoanodedau(head);// xoa node cuoi
        return head;
    }
    for(int i=1;i<k;i++){
        tmp = tmp->next;
    }
    tmp->prev->next = tmp->next;
    tmp->next->prev = tmp->prev;
    delete tmp;
    return head;
}

void duyet(node* head){
    if(head == NULL){
        cout << "khong co node" << endl;
    }
    else{
        while(head != NULL){
            cout << head->data << endl;
            head = head->next;
        }
    }
}
int main(){
    int k, n;cin >> k >> n;
    node* head=NULL;
    head = themvaodau(head, 28);
    head = themvaodau(head, 29);
    head = thamvaocuoi(head, 1);
    head = themvaogiua(head, k, 30);
    duyet(head);
    head = xoanodegiua(head, n);
    duyet(head);
}