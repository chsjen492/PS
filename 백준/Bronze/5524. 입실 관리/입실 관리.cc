#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        for(int j=0;j<s.length();j++){
            cout<<(char)tolower(s[j]);
        }
        cout<<'\n';
    }
}