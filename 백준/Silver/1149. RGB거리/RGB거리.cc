#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    
    int dp[1001][3];
    dp[0][0]=dp[0][1]=dp[0][2]=0;
    for(int i=1;i<=n;i++){
        cin>>dp[i][0]>>dp[i][1]>>dp[i][2];
        
        dp[i][0]+=min(dp[i-1][1], dp[i-1][2]);
        dp[i][1]+=min(dp[i-1][0], dp[i-1][2]);
        dp[i][2]+=min(dp[i-1][0], dp[i-1][1]);
    }
    cout<<min(dp[n][0], min(dp[n][1], dp[n][2]));
}