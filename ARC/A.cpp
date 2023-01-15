#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)

int main() {
    int n;
    cin >> n;
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        for (int k = 0; k <= 9; k++) {
            for (int l = 0; l <= 9; l++) {
                for (int m = 0; m <= 9; m++) {
                    for (int p = 0; p <= 9; p++) {
                        for(int q = 0; q <= 9; q++) {
                            count++;
                            if (count == n) {
                                int x = 100000000 * i + 10000000 * i + 1000000 * k + 100000 * l + 10000 * m + 1000 * m + 100 * p + 10 * q + p;
                                cout << x << endl;
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}


