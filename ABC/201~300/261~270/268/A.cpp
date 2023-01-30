#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)

int main(){
    int a;
    vector<bool> t(101,false);
    rep(i,5){
        cin >> a;
        t[a]=true;
    }
    int count=0;
    rep(i,101){
        if(t[i])count++;
    }
    cout << count << endl;
    return 0;
}
