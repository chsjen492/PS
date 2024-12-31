#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int k=0;k<t;k++){
        string s;
        cin>>s;
        int cnt = 0;
        int sum = 0;
    
        for(int i=0;i<s.length();i++){
            if(s[i]=='X'){
                cnt=0;
            }
            else {
                sum+=++cnt;
            }
        }
        cout<<sum<<'\n';
    }
    
}