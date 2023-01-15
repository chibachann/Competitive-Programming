#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)

int main(){
    long n,q;
    cin >> n >> q;
    int t, a, b;
    unordered_map<int, set<int>> followers;
    vector<string> s(q);
    int count=0;
    rep(i, q){
        cin >> t >> a >> b;

        if(t==1){
            followers[a].insert(b);
        } else if (t==2){
            followers[a].erase(b);
        } else{
            
            if(followers[a].count(b) && followers[b].count(a)){
                s[count] = "Yes";
            } else {
                s[count] = "No";
            }
            count++;
        }
    }
    rep(i, count)cout << s[i] << endl;
    return 0;
}
