#include <bits/stdc++.h>
using namespace std;

int arr[9]={0,};
bool vis[9];
int n, m;

void func(int t){
    if(t==m){
        for(int i=0;i<m;i++){
            cout<<arr[i]<<" ";
        }
        cout<<'\n';
        return;
    }
    for(int i=1;i<=n;i++){
        if(i>=arr[t-1]){
            arr[t] = i;
            func(t+1);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin>>n>>m;
    func(0);
}