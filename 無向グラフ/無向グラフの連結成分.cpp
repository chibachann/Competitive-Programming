#include<bits/stdc++.h>
using namespace std;

int main(){
    // 頂点数と辺数を入力する
    //v: 頂点, e: 辺の数
    int v, e;
    cin >> v >> e;
    // グラフ作成
    vector<int> graph[v];
    // 辺を追加する
    for (int i=0;i<e;i++){
        int a,b;
        cin >> a >> b;
        --a, --b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    // グラフの表示
    for(int i=0;i<v;i++){
        cout << i+1 << ": ";
        for(int j=0;j<graph[i].size();j++){
            cout << graph[i][j] + 1 << " ";
        }
        cout << endl;
    }

    // 連結成分を数える
    int num_components = 0; // 連結成分数
    vector<bool> visited(v, false); //拡張店がすでに探索されたかどうか
    queue<int> q; // 幅優先探索用キュー

    // 未探索の頂点を探索する
    for (int i=0;i<v;i++){
        if(!visited[i]){
            // 未探索の頂点が見つかったので、新しい連結成分をカウントする
            num_components++;
            cout << "not search: " << i+1 << endl; 

            // 幅優先探索を開始する
            q.push(i);
            visited[i] = true;
            while(!q.empty()){
                int u=q.front();
                q.pop();
                // uから接続されている頂点を探索する
                for (int next : graph[u]){
                    cout << "next: " << next << endl;
                    if (!visited[next]){
                        visited[next] = true;
                        q.push(next);
                    }
                }
            }
        }
    }

    cout << num_components << endl;

    return 0;
}
