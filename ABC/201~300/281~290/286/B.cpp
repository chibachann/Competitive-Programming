#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    size_t pos = 0;
    while ((pos = s.find("na", pos)) != std::string::npos) {
        s.replace(pos, 2, "nya");
        pos += 3;
     }
    cout << s << endl;
    return 0;
}
