#include <bits/stdc++.h>
using namespace std;

int n, m;
int ret[8];

void func(int t){
    if(m==t){
        for(int i=0;i<m;i++){
            cout<<ret[i]<<" ";
        }
        cout<<'\n';
        return;
    }
    
    for(int i=1;i<=n;i++){
        ret[t]=i;
        func(t+1);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin>>n>>m;
    func(0);
}