#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    string s;
    string num="";
    int ret = 0;
    bool minus = false;
    cin>>s;
    
    for(int i=0;i<=s.length();i++){
        if(s[i]=='+'||s[i]=='-'||i==s.length()){
            if(minus){
                ret-=stoi(num);
            }
            else ret+=stoi(num);
            num="";
        }
        else num+=s[i];
        
        if(s[i]=='-') minus=true;
    }
    
    cout<<ret;
}