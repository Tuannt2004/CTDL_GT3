#include <bits/stdc++.h>
using namespace std;

void next_combination(vector<int>& a, int n, int k) {
    int i = k - 1;
    while (i >= 0 && a[i] == n - k + i + 1) i--;
    
    if (i < 0) { 
        for (int j = 0; j < k; j++) a[j] = j + 1;
    } else {
        a[i]++;
        for (int j = i + 1; j < k; j++) {
            a[j] = a[j - 1] + 1;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int test;
    cin >> test;
    
    while (test--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> a(k);
        for (int i = 0; i < k; i++) cin >> a[i];

        next_combination(a, n, k);

        for (int x : a) cout << x << " ";
        cout << "\n";
    }
}