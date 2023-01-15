#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,M;
    cin >> N >> M;
    vector<vector<int>> g(N);
    for(int i=0;i<M;i++){
        int u,v;
        cin >> u >> v;
        --u, --v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    cout << calc(N, g) << "\n";
}
