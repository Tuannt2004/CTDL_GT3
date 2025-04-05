#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
};

node* Nodemoi(int x){
    node *newNode = new node;
    newNode->data=x;
    newNode->next = NULL;
    return newNode;
}

node* change(node *&head, int x){ // co the dung tra ve con tro
    node* newNode = Nodemoi(x);
    newNode -> next = head;
    head = newNode;
    return head;
}

int cnt(node *head){
    int dem =0;
    while(head != NULL){
        dem++;
        head = head->next;
    }
    return dem;
}

node* change2(node *&head, int x){
    node* newNode = Nodemoi(x);
    if(head == NULL){
        head = newNode;
        return head;
    }
    node* tmp= head;
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->next = newNode;
    return head;
}

node* CHEN(node *&head, int x, int k){
    node *newNode = Nodemoi(x);
    int len= cnt(head);
    if(k<1 || k>len+1){
        return 0;
    }
    else if(k == 1){
        head = change(head,x);
        return head;
    }
    else{
        node* tmp = head;
        for(int i=1;i<k-1;i++){
            tmp = tmp->next;
        }
        newNode->next = tmp->next;
        tmp->next = newNode;
        return head;
    }
}

void duyet(node *head){
    while(head != NULL){
        cout << head->data << endl;
        head = head->next;
    }
}


node* xoanode(node *&head){
    if(head == NULL) return head;
    node* bonode = head;
    head = head->next;
    delete bonode;
    return head;
}

node* xoanodecuoi(node *&head){
    if(head == NULL) return head;
    else if(cnt(head) == 1){
        node* tmp=head;
        head=NULL;
        delete tmp;
        return head;
    }
    else{
        node* tmp2 = head;
        while(tmp2 ->next ->next != NULL){
            tmp2 = tmp2->next;
        }
        node* del = tmp2->next;
        delete del;
        tmp2->next = NULL;
        return head;
    }
}

node* xoanodok(node *&head, int k){
    if(k <1 || k > cnt(head)){
        return 0;
    }
    else if(k == 1){
        head = xoanode(head);
        return head;
    }
    else{
        node* tmp = head;
        for(int i=1;i<k-1;i++){
            tmp = tmp->next;
        }
        node* del = tmp->next;
        tmp->next = del->next;
        delete del;
        return head;
    }
}
int main(){
    int k;cin >> k;
    node* head = NULL;
    for(int i=10;i>=0;i--){
        head = change(head, i);
    }
    head = xoanode(head);
    head = xoanodecuoi(head);
    head = xoanodok(head, k);
    duyet(head);
}