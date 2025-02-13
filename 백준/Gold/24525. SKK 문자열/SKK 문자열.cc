#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int cnt[100001] = {0};
    int s[100001] = {0};
    int k[100001] = {0};
    int mx = -1;
    map<int, int> m; // 각 누적합의 값의 첫 등장 위치를 저장
    string str;
    
    cin>>str;
    
    for(int i=0;i<str.length();i++){
        cnt[i+1] = cnt[i];
        s[i+1] = s[i];
        k[i+1] = k[i];
        
        if(str[i]=='S') {
            cnt[i+1]+=2;
            s[i+1]++;
        }
        if(str[i]=='K') {
            cnt[i+1]-=1;
            k[i+1]++;
        }
        
    }
    
    for(int i=0;i<=str.length();i++){
        if(m.find(cnt[i])!=m.end()){
            int j = m[cnt[i]];
            
            if(s[i]==s[j] && k[i]==k[j]) continue;
            mx = max(mx, i - j);
        }
        else {
            m[cnt[i]]=i;
        }
    }
    
    cout<<mx;
}