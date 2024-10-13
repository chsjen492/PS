#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int dp[501][501]={0};
    int board[501][501]={0};
    
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cin>>board[i][j];
        }
    }
    dp[1][1]=board[1][1];
    
    for(int i=2;i<=n;i++){
        for(int j=1;j<=i;j++){
            dp[i][j]=max(dp[i-1][j-1], dp[i-1][j])+board[i][j];
        }
    }
    
    int max=0;
    for(int i=1;i<=n;i++){
        if(max<dp[n][i]){
            max=dp[n][i];
        }
    }
    cout<<max;
    
}