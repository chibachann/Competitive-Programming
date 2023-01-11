#include<bits/stdc++.h>
using namespace std;

int main() {
  // 頂点数と辺数を入力する
  int n, m;
  cin >> n >> m;

  // 隣接行列を作成する
  vector<vector<bool>> adjacency_matrix(n, vector<bool>(n, false));
  // 辺を追加する
  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    u--;
    v--;
    adjacency_matrix[u][v] = true;
    adjacency_matrix[v][u] = true;
  }

   // 連結成分を数える
  int num_components = 0; // 連結成分数
  vector<bool> visited(n, false); // 各頂点が既に探索されたかどうか
  queue<int> q; // 幅優先探索用キュー

  // 未探索の頂点を探索する
  for (int v = 0; v < n; v++) {
    if (!visited[v]) {
      // 未探索の頂点が見つかったので、新しい連結成分をカウントする
      num_components++;

      //幅優先探索を開始する
      q.push(v);
      visited[v] = true;
      while (!q.empty()) {
        int u = q.front();
        q.pop();
        // uから接続されている頂点を探索する
        for (int v = 0; v < n; v++) {
          if (adjacency_matrix[u][v] && !visited[v]) {
            visited[v] = true;
            q.push(v);
          }
        }
      }
    }
  }

  // 連結成分数を出力する
  cout << num_components << endl;

  return 0;
}
