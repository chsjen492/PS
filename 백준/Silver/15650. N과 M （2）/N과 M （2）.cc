#include <bits/stdc++.h>
using namespace std;
int n, m;
int arr[9]={0,};
bool visited[9];
void func(int t, int num){
    if(t==m){
        for(int i=0;i<m;i++){
            cout<<arr[i]<<" ";
        }
        cout<<'\n';
        return;
    }
    for(int i=num;i<=n;i++){
        if(!visited[i]){
            arr[t]=i;
            visited[i]=true;
            func(t+1, i+1);
            visited[i]=false;
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    cin>>n>>m;
    func(0, 1);
   
}