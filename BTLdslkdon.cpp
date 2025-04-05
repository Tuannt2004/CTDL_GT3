#include <bits/stdc++.h>
using namespace std;

using ll = long long;

struct node{
    int data;
    node* next;
};

class Solon{
    private:
      node* head;
    public:
      Solon();
      node* makenode(int x);
      node* themnodedau(int x);
      node* themnodecuoi(int x);
      Solon operator + (Solon other);
      ll leng();
      bool operator > (Solon other);
      bool operator < (Solon other);
      bool operator == (Solon other);
      friend ostream& operator << (ostream& out, Solon other);
      ~Solon();
};

Solon :: Solon(){
    this->head = NULL;
}

Solon :: ~Solon(){
    delete head;
}

node* Solon :: makenode(int x){
    node* newNode = new node;
    newNode->data = x;
    newNode->next=NULL;
    return newNode;
}

node* Solon :: themnodedau(int x){
    node* nodemoi = makenode(x);
    if(this->head == NULL){
        head = nodemoi;
        return head;
    }
    nodemoi->next = head;
    head = nodemoi;
    return this->head;
}

node* Solon :: themnodecuoi(int x){
    node* nodemoi = makenode(x);
    if(this->head == NULL){
        head = nodemoi;
        return head;
    }
    head->next = nodemoi;
    return head;
}

Solon Solon :: operator + (Solon other){
    Solon add;
    int nho=0;
    while(this->head != NULL || other.head != NULL){
        int sum = nho;
        if(this->head != NULL){
            sum+=head->data;
            head=head->next;
        }
        if(other.head != NULL){
            sum+=other.head->data;
            other.head=other.head->next;
        }
        add.themnodedau(sum%10);
        nho=sum/10;
    }
    if(nho > 0){
        add.themnodedau(nho);
    }
    return add;
}

ll Solon :: leng(){
    ll dem =0;
    while(this->head != NULL){
        dem++;
        this->head = head->next;
    }
    return dem;
}

bool Solon :: operator > (Solon other){
    ll a = this->leng(), b= other.leng();
    if(a != b){
        if(a>b) return true;
        else if(a < b) return false;
    }
    while(this->head != NULL){
        if(this->head->data > other.head->data) return true;
        if(this->head->data < other.head->data) break;
        head = head->next;
        other.head = other.head->next;
    }
    return true;
}

bool Solon :: operator < (Solon other){
    ll a = this->leng(), b= other.leng();
    if(a != b){
        if(a<b) return true;
        else if(a > b) return false;
    }
    while(this->head != NULL){
        if(this->head->data < other.head->data) return true;
        if(this->head->data > other.head->data) break;
        head = head->next;
        other.head = other.head->next;
    }
    return false;
}

bool Solon :: operator == (Solon other){
    ll a = this->leng(), b= other.leng();
    if(a > b || a < b) return false;
    while(this->head != NULL){
        if(this->head->data != other.head->data)return false;
        head = head->next;
        other.head = other.head->next;
    }
    return true;
}

ostream& operator << (ostream& out, Solon other){
    if(other.head == NULL){
        cout << "0" << endl;
    }
    else{
        while(other.head != NULL){
            cout << other.head->data;
            other.head = other.head->next;
        }
        cout << endl;
    }
    return out;
}

void xuly(){
    Solon x,y;
    string pt;getline(cin, pt);
    string sh1, op, sh2;
    stringstream ss(pt);
    getline(ss,sh1, ' ');getline(ss, op, ' ');getline(ss, sh2,' ');
    if(op == "+"){
        for(auto a : sh1){
            x.themnodedau(a -'0');
        }
        for(auto b : sh2){
            y.themnodedau(b-'0');
        }
        Solon z=x+y;
        cout << z;
    }
    else{
        for(auto a : sh1){
            x.themnodecuoi(a-'0');
        }
        for(auto b : sh2){
            y.themnodecuoi(b-'0');
        }
        if(op == ">") cout << (x>y ? true : false) << endl;
        else if( op =="<") cout << (x<y ? true : false) << endl;
        else{
            cout << (x==y ? true : false) << endl;
        }
    }
}

int main(){
    int test;cin >> test;cin.ignore();
    while(test--){
        xuly();
    }
    return 0;
}