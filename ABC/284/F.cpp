#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    string T;
    cin >> N;
    cin >> T;

    string S;
    // 反転させた文字列
    string rev;
    string make;
    reverse(rev.begin(), rev.end());
    for(int i=0;i<N;i++){
        S = T.substr(0, i+1) + T.substr(i+N+1);
        rev=S;
        reverse(rev.begin(), rev.end());
        make = T.substr(0, i+1) + rev + T.substr(i+N+1);
        if(T == make){
            cout << S << "\n" << i+1 << endl;
            return 0;
        }
        rev.clear();
        make.clear();
    }
    cout << -1 << endl;
    return 0;
}
