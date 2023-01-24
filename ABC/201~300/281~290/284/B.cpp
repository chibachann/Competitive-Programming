#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    int n,a;
    vector<int> count(t);
    for(int i=0;i<t;i++)count[i] = 0;
    for(int i=0;i<t;i++){
        cin >> n;
        for(int j=0;j<n;j++){
            cin >> a;
            if(a%2 == 1){
                count[i]++;
                }
        }
    }
    for(int i=0;i<t;i++)cout << count[i] << endl;
    return 0;
}
