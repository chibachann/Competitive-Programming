#include<bits/stdc++.h>
using namespace std;

int main(){
    int height, width;
    cin >> height >> width;
    int count=0;
    string s;
    for(int i=0;i<height;i++){
        cin >> s;
        for (int j = 0; j < width; j++)
        {
            if(s[j] == '#')count++;
        }
        
    }
    cout << count << endl;

    return 0;
}
