#include<bits/stdc++.h>
using namespace std;

int main(){
    string S;
    int count=0,p=0;
    bool flg = 1;
    cin >> S;

    while(S[p] != 0){
        //cout << p << endl;
        if (S[p] == '0' && S[p+1] == '0'){
            p++;
        }
        p++;
        count++;
    }

    cout << count << endl;

    return 0;
}
