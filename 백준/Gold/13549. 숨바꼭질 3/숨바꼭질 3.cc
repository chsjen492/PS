#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    
    int n, k, cur, tmp;
    int arr[100001];
    queue<int> q;
    
    cin>>n>>k;
    if(n==k){
        cout<<0;
        return 0;
    }
    fill(arr, arr+100001, -1);
    arr[n]=0;
    q.push(n);

    while(!q.empty()){
        cur = q.front();
        q.pop();
        
        tmp = cur*2;
        while(tmp<=100000&&arr[tmp]==-1){
            arr[tmp] = arr[cur];
            q.push(tmp);
            tmp*=2;
        }
        for(auto nx : {cur-1, cur+1}){
            if(nx<0||nx>100000){
                continue;
            }
            if(arr[nx]>-1)
                continue;
            arr[nx]=arr[cur]+1;
            q.push(nx);
        }
    }
    cout<<arr[k];
}