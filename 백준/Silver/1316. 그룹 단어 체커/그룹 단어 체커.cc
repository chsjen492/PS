#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n;
    string s;
    int cnt = 0;
    cin>>n;
    
    for(int i=0;i<n;i++){
        bool vis[26] = {false};
        bool flag = true;
        
        cin>>s;
        vis[s[0]-'a']=true;
        for(int j=1;j<s.length();j++){
            if(s[j] != s[j-1]){ 
                if(vis[s[j]-'a']){ 
                    flag = false;
                    break;
                }
                vis[s[j]-'a'] = true;
            }
        }
        if(flag)
            cnt++;
    }
    cout<<cnt;
}