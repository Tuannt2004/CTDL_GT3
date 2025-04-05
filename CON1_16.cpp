#include <bits/stdc++.h>
using namespace std;

int n, k;
int a[11][11];
vector<vector<int>> c;  
vector<int> b;          
int dem = 0;            
bool used[11];          

void Try(int i, int sum) {
    if (sum > k) return; 
    
    if (i == n) { 
        if (sum == k) {
            dem++;
            c.push_back(b);
        }
        return;
    }

    for (int j = 0; j < n; j++) {
        if (!used[j]) { 
            used[j] = true;
            b.push_back(j + 1);
            Try(i + 1, sum + a[i][j]);
            b.pop_back();
            used[j] = false;
        }
    }
}

int main() {
    cin >> n >> k;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    memset(used, false, sizeof(used)); 

    Try(0, 0);

    cout << dem << endl;
    for (auto v : c) {
        for (int x : v) cout << x << ' ';
        cout << endl;
    }

    return 0;
}
