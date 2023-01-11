#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int count=0;
    // 入力
    cin >> s;
    // 1のカウント
    for(int i=0; i<3;i++){
        if(s.at(i) == '1'){
            count++;
        }
    }
    // 出力
    cout << count <<endl;

    return 0;
}
