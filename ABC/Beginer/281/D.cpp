#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, d;
    cin >> n >> k >> d;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin >> a[i];
    vector<int> current;
    int sum=0, ans=-1;

    function<void(int)> dfs;
    dfs =[&](int start) {
        if(current.size() == k){
            for(int i = 0;i < current.size();i++)sum+=current[i];
            if(sum%d==0){
                //cout << sum << endl;
                ans=max(ans,sum);
            }
            sum=0;
            return;
        }
        for(int i=0; i<=n;i++){
            current.push_back(a[i]);
            dfs(i+1);
            current.pop_back();
        }
    };
    dfs(0);
    cout << ans << endl;
    return 0;
}
