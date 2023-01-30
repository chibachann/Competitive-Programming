#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)


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
    int start = -1;
    int goal = -1;
    for (int i=0;i<v;i++){
        if(graph[i].size()==1 && start == -1){
            start = i;
        }else if (graph[i].size()==1 && start != -1){
            goal = i;
        }
        if (graph[i].size() != 1 && graph[i].size() != 2){
            cout << "No" << endl;
            return 0;
        }
    }
    if (start == -1 || goal == -1){
        cout << "No" << endl;
        return 0;
    }

    // 連結成分を数える
    int num_components = 1; // 連結成分数
    vector<bool> visited(v, false); //各頂点がすでに探索されたかどうか
    queue<int> q; // 幅優先探索用キュー
    // 未探索の頂点を探索する
        // 幅優先探索を開始する
    q.push(start);
    visited[start] = true;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        // uから接続されている頂点を探索する
        for (int next : graph[u]){
            
            if (!visited[next]){
                num_components++;
                
                visited[next] = true;
                q.push(next);
            }
        }
    }
    if(num_components != v){
        cout << "No" << endl;
    }else{
        cout << "Yes" << endl;
    }
    


    return 0;
}
