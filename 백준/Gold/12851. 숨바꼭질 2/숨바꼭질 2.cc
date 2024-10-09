#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    
    int n, k, cur;
    int arr[100001];
    int cnt[100001]={0,};
    queue<int> q;
    
    cin>>n>>k;
    if(n==k){
        cout<<0<<'\n'<<1;
        return 0;
    }
    fill(arr, arr+100001, -1);
    arr[n]=0;
    cnt[n]=1;
    q.push(n);
    while(!q.empty()){
        cur = q.front();
        q.pop();
        
        for(auto nx : {cur-1, cur+1, cur*2}){
            if(nx<0||nx>100000){
                continue;
            }
            if(arr[nx]==-1){
                arr[nx]=arr[cur]+1;
                cnt[nx]=cnt[cur];
                q.push(nx);
            } else if(arr[nx]==arr[cur]+1){
                cnt[nx]+=cnt[cur];
            }
        }
    }
    cout<<arr[k]<<'\n'<<cnt[k];
}