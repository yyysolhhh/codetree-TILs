#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int MAX = n * m + 1;
    int ans;
    int numbers[MAX];
    fill(numbers, numbers + MAX, 0);
    for (int i = 1; n * i < MAX; i++) {
        numbers[n * i] = 1;
    }
    for (int i = 1; m * i < MAX; i++) {
        if (numbers[m * i] == 1) {
            ans = m * i;
            break;
        }
    }
    cout << ans;
    return 0;
}