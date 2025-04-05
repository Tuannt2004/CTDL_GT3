#include <bits/stdc++.h>
using namespace std;

struct tree{
    int data;
    tree* phai;
    tree* trai;
};

tree* Newtree(int x){
    tree* tmp = new tree;
    tmp->data = x;
    tmp->trai = NULL;
    tmp->phai = NULL;
    return tmp;
}

void addRoot(tree* &root, int x){
    if(root!= NULL){
        cout << "Da co node goc" << endl;
        return;
    }
    root = Newtree(x);
}

void themtrai(tree* &root, int x){
    if(root == NULL){
        cout << "khong the them trai" << endl;
        return;
    }
    tree* tmp = Newtree(x);
    root->trai = tmp;
}

void themphai(tree* &root, int x){
    if(root == NULL){
        cout << "khong the them phai" << endl;
        return;
    }
    tree* tmp = Newtree(x);
    root->phai = tmp;
}
void addtrai(tree* &root, int x, int k){ //them node trai tai node x
    if(root == NULL) return;
    else{
        if(root->data == x){
            if(root->trai != NULL){
                cout << "da co nhanh trai" << endl;
                return;
            }
            themtrai(root,k);
            return;
        }
        addtrai(root->trai,x,k);
        addtrai(root->phai,x,k);
    }
}

void addphai(tree* &root, int x, int k){ // them node phai tai node y
    if(root == NULL) return ;
    else{
        if(root->data == x){
            if(root->phai != NULL){
                cout << "da co nhanh phai" << endl;
                return;
            }
            themphai(root,k);
            return;
        }
        addphai(root->phai,x, k);
        addphai(root->trai,x,k);
    }
}

void duyet(tree* root){
    if(root == NULL){
        cout << "khong co cay nhi phan" << endl;
        return;
    }
    cout << root->data <<' ';
    while(root->trai != NULL || root->phai!=NULL){

    }

}

void xoanodetrai(tree* &root, int x){
    if(root==NULL){return;}
    else{
        if(root->data == x){
            if(root->trai == NULL){
                cout << "khong co node de xoa" << endl;
                return ;
            }
            else if(root->trai->trai != NULL || root->trai->phai!= NULL){
                cout << "Node la nay la cay con khong xoa duoc" << endl;
                return;
            }
            else if(root->trai->trai == NULL && root->trai->phai ==NULL){
                tree* tmp = root->trai;
                root->trai = NULL;
                delete tmp;
                return;
            }
        }
        xoanodetrai(root->trai,x);
        xoanodetrai(root->phai,x);
    }
}

void xoanodephai(tree* &root, int x){
    if(root == NULL){return;}
    else{
        if(root->data == x){
            if(root->phai == NULL){
                cout << "khong co node la phai de xoa" << endl;return;
            }
            else if(root->phai->trai != NULL || root->phai->phai != NULL){
                cout << "node la nay la nodae cay con khong xoa duoc" << endl;return;
            }
            else if(root->phai->trai == NULL && root->phai->phai == NULL){
                tree* tmp = root->phai;
                root->phai = NULL;
                delete tmp;
                return;
            } 
        }
        xoanodephai(root->phai, x);
        xoanodephai(root->trai,x);
    }
}

void xoanodegoc(tree* root){
    if(root == NULL) return;
    else{
        xoanodegoc(root->trai);
        xoanodegoc(root->phai);
        delete root;
        return;
    }
}

void duyettruoc(tree* root){
    if(root == NULL) return;
    else{
        cout << root->data << ' ';
        duyettruoc(root->trai);
        duyettruoc(root->phai);
        return;
    }
}

void duyetgiua(tree* root){
    if(root == NULL) return;
    else{
        duyetgiua(root->trai);
        cout << root->data << ' ';
        duyetgiua(root->phai);
        return;
    }
}

void duyetsau(tree* root){
    if(root == NULL) return;
    else{
        duyetsau(root->trai);
        duyetsau(root->phai);
        cout << root->data <<' ';
        return;
    }
}

int main(){
    tree* root = NULL;
    addRoot(root,50);
    themtrai(root,40);
    themphai(root,60);
    addtrai(root,40,30);
    addphai(root,40,45);
    duyetsau(root);
}