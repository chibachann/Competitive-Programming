#include<bits/stdc++.h>
using namespace std;

int main(){
    int count=0;
    string s;
    cin >> s;

    int n = s.length();
    vector<bool> used(256);
    vector<vector<char>> v(n);

    for(int i=0;i < n;i++){
        if(s[i] == '(')count++;
        else if(s[i] == ')'){
            for(char c:v[count])used[c] = false;
            v[i].clear();
            count--;
            
        }
        else{
            if(used[s[i]]){
                cout << "No\n";
                return 0;
            }
            v[count].push_back(s[i]);
            used[s[i]] = true;
        }
    }
    cout << "Yes\n";
}
