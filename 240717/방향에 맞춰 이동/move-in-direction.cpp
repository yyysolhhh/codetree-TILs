#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int x = 0, y = 0;
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};
    int nx = 0, ny = 0;
    while (N--) {
        char dir;
        int dist;
        cin >> dir >> dist;
        if (dir == 'N') {
            nx += dx[2] * dist;
            ny += dy[2] * dist;
        } else if (dir == 'E') {
            nx += dx[0] * dist;
            ny += dy[0] * dist;
        } else if (dir == 'S') {
            nx += dx[3] * dist;
            ny += dy[3] * dist;
        } else if (dir == 'W') {
            nx += dx[1] * dist;
            ny += dy[1] * dist;
        }
    }
    x += nx;
    y += ny;
    cout << x << ' ' << y;
    return 0;
}