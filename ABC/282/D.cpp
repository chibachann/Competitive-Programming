#include<bits/stdc++.h>
using namespace std;

bool judge(vector<vector<bool>> a, int u, int v, int n){
        //二部グラフ判定
    vector<int> color(n);

    a[u][v] = 1;
    a[v][u] = 1;


    for(int i=0;i<n;i++)color[i] = 0;
    for(int i=0;i<n-1;i++){
        if(color[i] == 0)color[i] = 1;
        for(int j=1+i;j<n;j++){
            if(a[i][j] && color[i] == color[j]){
                return false;
            }
            if(a[i][j] && color[i] == 1 && color[j] == 0)color[j] = 2;
            else if(a[i][j] && color[i] == 2 && color[j] == 0)color[j] = 1;
        }

    }
    
    return true;
}

int main(){
    int n,m;

    cin >> n >> m;

    int u,v;
    vector<vector<bool>> a(n, vector<bool>(n));

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j] = 0;
        }
    }

    for(int i=0;i<m;i++){
        cin >> u >> v;
        a[u-1][v-1] = 1;
        a[v-1][u-1] = 1;
    }

    int count = 0;

    for(int i=0;i<n-1;i++){
        for(int j=1+i;j<n;j++){
            if(a[i][j] == 0 && judge(a,i,j, n))count++;
        }
    }

    cout << count << "\n";

    return 0;
}
