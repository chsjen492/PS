#include <bits/stdc++.h>
using namespace std;

int n, m;
int num[9]={0,};
int ret[9];
bool vis[9];

void func(int t){
    if(t==m){
        for(int i=0;i<m;i++){
            cout<<ret[i]<<" ";
        }
        cout<<'\n';
        return;
    }
    for(int i=0;i<n;i++){
        if(!vis[i]){
            ret[t]=num[i];
            vis[i]=true;
            func(t+1);
            vis[i]=false;
        }
    }
}
int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    sort(num, num+n);
    func(0);
}