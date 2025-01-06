#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    string s;
    getline(cin, s);
    
    int cnt = 0;
    if(s.length()==1 && s[0]==' '){
        cout<<0;
        return 0;
    }
    for(int i=1;i<s.length()-1;i++){
        if(s[i]==' '){
            cnt++;
        }
    }
    cout<<cnt+1;
}