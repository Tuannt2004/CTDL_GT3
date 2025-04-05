#include <bits/stdc++.h>
using namespace std;

int truoc[1001];
vector<int> a[1001];
bool check[1001];

int main(){
    int test;cin >> test;
    while(test--){
        int v, e, s, t;cin >> v >> e >> s >> t;
        while(e--){
            int x,y;cin >> x >> y;
            a[x].push_back(y);
        }
        memset(check, true, sizeof(check));
        memset(truoc, 0, sizeof(truoc));
        queue<int> qe;
        qe.push(s);
        check[s]=false;
        while(!qe.empty()){
            int u = qe.front();
            qe.pop();
            for(int i=0;i<a[u].size();i++){
                if(check[a[u][i]]){
                    truoc[a[u][i]]=u;
                    qe.push(a[u][i]);
                    check[a[u][i]]=false;
                }
            }
        }
        vector<int> kq;
        int y = truoc[t];
        if(y == 0){
            cout << "-1" << endl;
        }
        else{
            kq.push_back(t);
            while(y != s){
                kq.push_back(y);
                y = truoc[y];
            }
            kq.push_back(s);
            for(int i = kq.size()-1;i>=0;i--){
                cout << kq[i] << ' ';
            }
            cout << "\n";
        }
        for(int i =1;i<=v;i++){
            a[i].clear();
        }
    }
    return 0;
}