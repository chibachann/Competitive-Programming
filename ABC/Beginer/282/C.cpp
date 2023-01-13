#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;

    bool open=0;

    cin >> n;
    cin >> s;

    for(int i=0;i<n;i++){
        if(s[i] == '\"' && !open)open=1;
        else if(!open && s[i] == ',')s[i] = '.';
        else if(s[i] == '\"' && open)open = 0;
    }

    cout << s << "\n";

    return 0;
}
