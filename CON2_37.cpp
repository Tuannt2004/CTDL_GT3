#include <bits/stdc++.h>
using namespace std;

vector<int> KE[21]; // Danh sách kề
bool check[21][21]; // Đánh dấu cạnh đã đi qua
int maxn = 0;

void khoitao() {
    for (int i = 0; i < 21; i++) {
        for (int j = 0; j < 21; j++) {
            check[i][j] = true; // Ban đầu tất cả cạnh chưa đi qua
        }
    }
}

void Try(int u, int sum) {
    maxn = max(maxn, sum); // Cập nhật đường đi dài nhất

    for (auto v : KE[u]) {
        if (check[u][v]) { // Nếu cạnh chưa đi qua
            check[u][v] = check[v][u] = false; // Đánh dấu đi qua
            Try(v, sum + 1); // Đi tiếp
            // check[u][v] = check[v][u] = true; // Quay lui
        }
    }
}

int main() {
    int test;
    cin >> test;
    while (test--) {
        int n, m;
        cin >> n >> m;

        // Xóa dữ liệu cũ
        for (int i = 0; i < 21; i++) KE[i].clear();
        maxn = 0; // Reset kết quả

        // Nhập đồ thị
        while (m--) {
            int x, y;
            cin >> x >> y;
            KE[x].push_back(y);
            KE[y].push_back(x); // Đồ thị vô hướng
        }

        khoitao(); // Reset trạng thái cạnh

        // Thử xuất phát từ tất cả các đỉnh
        for (int i = 0; i < n; i++) {
            Try(i, 0);
        }

        cout << maxn << endl; // In kết quả
    }
    return 0;
}
