#include<bits/stdc++.h>
using namespace std;

// 頂点 1 を始点とする単純パスの個数
// 最大値は10^6

int calc(int num_of_vertices, vector<vector<int>> graph) {
    // ans : 最小のステップ数
    // limit : 最大のステップ数(終了判定)
    int ans = 0, limit = 1000000; 
    vector<bool> visited(num_of_vertices); 
    // dfs (depth first search) 関数 : 再帰でグラフを探索
    function<void(int)> dfs; 
    dfs = [&](int current_vertex) {
        if (ans == limit) return; // 探索回数が最大に達したら終了
        ans++;
        visited[current_vertex] = true;
        for (auto& next_vertex : graph[current_vertex]) {
            if (visited[next_vertex]) continue;
            dfs(next_vertex);
        }
        visited[current_vertex] = false;
    };
    dfs(0); 
    return ans;
}

int main() {
  int N, M;
  cin >> N >> M;
  vector<vector<int>> g(N);
  for (int i = 0; i < M; i++) {
    int u, v;
    cin >> u >> v;
    --u, --v;
    g[u].push_back(v);
    g[v].push_back(u);
  }
  cout << calc(N, g) << "\n";
}
