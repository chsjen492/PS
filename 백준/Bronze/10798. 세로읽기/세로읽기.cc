#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    string s;
    char arr[5][15];

    for(int i=0;i<5;i++){
        fill(arr[i], arr[i]+15, '-');
    }

    for(int i=0;i<5;i++){
        cin>>s;
        for(int j=0;j<s.size();j++){
            arr[i][j]=s[j];
        }
    }

    for(int i=0;i<15;i++){
        for(int j=0;j<5;j++){
            if(arr[j][i]!='-'){
                cout<<arr[j][i];
            }
        }
    }

    return 0;
}