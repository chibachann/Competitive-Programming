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
    // グラフの表示
    for(int i=0;i<v;i++){
        cout << graph[i].size() << " ";
        sort(graph[i].begin(),graph[i].end());
        for(int j=0;j<graph[i].size();j++){
            cout << graph[i][j] + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}
