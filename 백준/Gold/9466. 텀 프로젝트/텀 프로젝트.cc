#include <bits/stdc++.h>
using namespace std;
int cnt = 0;
int t, n;
int arr[100001]={0,};
int state[100001]={0,};

void func(int x){
    int cur = x;
    while(true){
        state[cur] = x;
        cur = arr[cur];
        
        if(state[cur]==x){
            while(state[cur]!=-1){
                state[cur]=-1;
                cur = arr[cur];
            }
            return;
        }
        
        else if(state[cur]!=0){
            return;
        }
    }
}

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    cin>>t;
    
    for(int i=0;i<t;i++){
        cin>>n;
        int ret = 0;
        fill(state+1, state+n+1, 0);
        for(int j=1;j<=n;j++){
            cin>>arr[j];
        }
        
        for(int j=1;j<=n;j++){
            if(state[j]==0) func(j);
        }
        
        for(int j=1;j<=n;j++){
            if(state[j]!=-1) ret++;
        }
        
        cout<<ret<<'\n';
    }
}