#include <bits/stdc++.h>
using namespace std;
int n;
int s[8];
int w[8];
int mx = 0;
int cnt = 0;

void func(int x){
    if(x==n){
        mx = max(mx, cnt);
        return;
    }
    if(s[x]<=0 || cnt==n-1){
        func(x+1);
        return;
    }
    for(int i=0;i<n;i++){
        if(i==x || s[i]<=0)
            continue;
        s[x]-=w[i];
        s[i]-=w[x];
        if(s[x]<=0) cnt++;
        if(s[i]<=0) cnt++;
        func(x+1);
        if(s[x]<=0) cnt--;
        if(s[i]<=0) cnt--;
        s[x]+=w[i];
        s[i]+=w[x];
    }
}

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s[i]>>w[i];
    }
    func(0);
    cout<<mx;
    
}