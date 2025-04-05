#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll ugly[10001];
ll n;

bool isUgly(int num) {
    if (num <= 0) return false;
    while (num % 2 == 0) num /= 2;
    while (num % 3 == 0) num /= 3;
    while (num % 5 == 0) num /= 5;
    return num == 1;
}

void so_ugly() {
    int i = 1, j = 1;
    while (i < n+1) {
        if (isUgly(j)) {
            ugly[i] = j;
            i++;
        }
        j++;
    }
}

int main() {
    int test;
    cin >> test;
    while (test--) {
        cin >> n;
        memset(ugly,0,sizeof(ugly));
        so_ugly();
        cout << ugly[n] << endl;
    }
    return 0;
}
