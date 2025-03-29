#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    int dp[1000001];
    int pre[1000001];
    
    cin>>n;
    dp[1] = 0;
    pre[1] = 0;
    
    for(int i=2;i<=n;i++){
        dp[i] = dp[i-1]+1;
        pre[i] = i-1;
        
        if(i%3==0 && dp[i]>dp[i/3]+1){
            dp[i] = dp[i/3]+1;
            pre[i] = i/3;
        }
        if(i%2==0 && dp[i]>dp[i/2]+1){
            dp[i] = dp[i/2]+1;
            pre[i] = i/2;
        }
    }
    
    int cur = n;
    cout<<dp[n]<<'\n';
    while(true){
        cout<<cur<<" ";
        if(cur==1) break;
        cur= pre[cur];
    }
}