#include <iostream>
#include <bitset>

using namespace std;

int main() {
    bitset<10> dp; // Mảng bitset có 10 phần tử

    cout << "Trạng thái ban đầu của dp: " << dp << endl;

    dp[3] = 1; // Bật bit thứ 3

    cout << "Sau khi bật bit 3 và 7: " << dp << endl;

    return 0;
}
