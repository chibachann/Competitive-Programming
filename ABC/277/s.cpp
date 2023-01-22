#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)

const int MAX_N = 1000000;
const int MAX_V = 1000000000;

int N;
vector<int> to[MAX_N];
int d[MAX_V];
bool used[MAX_V];

void bfs(int start) {
    queue<int> q;
    q.push(start);
    d[start] = 0;
    used[start] = true;
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        for (int i = 0; i < to[v].size(); i++) {
            if (!used[to[v][i]]) {
                used[to[v][i]] = true;
                d[to[v][i]] = d[v] + 1;
                q.push(to[v][i]);
            }
        }
    }
}

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        int a, b;
        cin >> a >> b;
        to[a].push_back(b);
        to[b].push_back(a);
    }

    bfs(0);

    int ans = 0;
    for (int i = 0; i < MAX_V; i++) {
        ans = max(ans, d[i]);
    }
    cout << ans << endl;
    return 0;
}
