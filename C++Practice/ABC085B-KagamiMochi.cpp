#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, i,count=1;
    cin >> N;
    vector<int> d(N);

    for(i=0;i<N;i++){
        cin >> d.at(i);
    }

    sort(d.begin(),d.end());

    for(i=0;i<N-1;i++){
        if(d.at(i) < d.at(i+1))count++;
    }

    cout << count << endl;

    return 0;
}
