#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    if (s.length() != 8) {
        cout << "No" << endl;
        return 0;
    }
    if (!isupper(s[0]) || !isdigit(s[1]) || !isdigit(s[2]) || !isdigit(s[3]) || !isdigit(s[4]) || !isdigit(s[5]) || !isdigit(s[6]) || !isupper(s[7])) {
        cout << "No" << endl;
        return 0;
    }
    int num = std::stoi(s.substr(1, 6));
    if (num < 100000 || num > 999999) {
        cout << "No" << endl;
        return 0;
    }
    cout << "Yes" << endl;
    return 0;
}
