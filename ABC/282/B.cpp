#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    int count=0;
    bool judge = false;
    cin >> n >> m;
    vector<string> s(n);
    for(int i=0;i<n;i++)cin >> s[i];

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            for(int k=0;k<m;k++){
                if(s[i][k] == 'x' && s[j][k] == 'x'){
                    judge = true;
                    
                    break;
                }
            }
            
            if(!judge){
                count++;
            }
            judge = false;
        }
    }
    cout << count << "\n";
    return 0;
}
