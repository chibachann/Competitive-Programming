#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,x;
    int count=0;
    // input
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> x;

    for(int i=0;i<=a;i++){
        if(x < 500*i)break;
        for(int j=0;j<=b;j++){
            if(x < 100*j)break;
            for(int k=0;k<=c;k++){
                if(x < 50*k)break;
                if(x - 500*i - 100*j -50*k == 0)count++;
            }
        }
    }
    cout << count << endl;

    return 0;
}
