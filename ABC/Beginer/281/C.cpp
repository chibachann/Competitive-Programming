#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long int t;
    cin >> n >> t;
    vector<long long int> a(n);
    long long int sum=0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        sum += a[i];
    }
    long long int mod = t%sum;
    int now=0;
    while(mod>a[now]){
        mod -= a[now];
        ++now;
    }
    ++now;
    cout << now << " " << mod << endl;
    return 0;
}
