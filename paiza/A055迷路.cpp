#include <iostream>
#include <queue>
using namespace std;

const int dx[4] = {1, -1, 0, 0}, dy[4] = {0, 0, 1, -1};
int h, w;
string s[105];
bool used[105][105];

int main() {
    cin >> h >> w;
    for (int i = 0; i < h; i++) cin >> s[i];

    int x = -1, y = -1; // 起点の座標
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (s[i][j] == 'S') x = i, y = j;
        }
    }

    queue<pair<int, int>> q;
    q.push({x, y});
    while (!q.empty()) {
        auto p = q.front();
        q.pop();
        int x = p.first, y = p.second;
        if (x == 0 || x == h - 1 || y == 0 || y == w-1) {
            cout << "YES" << endl;
            return 0;
        }
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i], ny = y + dy[i];
            if (nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
            if (used[nx][ny] || s[nx][ny] == '#') continue;
            q.push({nx, ny});
            used[nx][ny] = true;
        }
    }

    cout << "NO" << endl;
    return 0;
}
