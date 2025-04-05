#include <bits/stdc++.h>
#include <tuple>
using namespace std;

bool cmp(tuple<int,int,int> a,tuple<int,int,int> b){
    if(get<1>(a) != get<1>(b)) return get<1>(a) < get<1>(b);
    return get<2>(a) > get<2>(b);
}
int main(){
    int test;cin >> test;
    while(test--){
        int n;cin >> n;
        vector<tuple<int, int, int>> tup;
        for(int i =0;i<n;i++){
            tuple<int,int,int> a;
            int ma, kt, ln;
            cin >> ma >> kt >> ln;
            get<0>(a) = ma;get<1>(a)=kt;get<2>(a)=ln;
            tup.push_back(a);
        }
        sort(tup.begin(), tup.end(), cmp);
        // for(int i =0;i<tup.size();i++){
        //     cout << get<0>(tup[i]) <<' ' << get<1>(tup[i]) << ' ' << get<2>(tup[i]) << endl;
        // }
        int tmp =0;
        int sum =0;
        int dem=0;
        for(int i=0;i<n;i++){
            if(get<1>(tup[i]) >= tmp){
                dem++;
                sum+=get<2>(tup[i]);
                tmp = get<1>(tup[i]);
            }
        }
        cout << dem << ' ' << sum << endl;
    }
    return 0;
}