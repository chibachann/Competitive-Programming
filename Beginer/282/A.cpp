#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    string s;

    for(int i=0;i<n;i++){
        s.push_back('A'+i);
    }
    cout << s << '\n';
    return 0;
}
