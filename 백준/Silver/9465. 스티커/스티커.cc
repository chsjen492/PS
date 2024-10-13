#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int dp[2][100001];
    int board[2][100001];
    int t, n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        for(int j=0;j<2;j++){
            for(int k=0;k<n;k++){
                cin>>board[j][k];
            }
        }
        dp[0][0]=board[0][0];
        dp[0][1]=board[0][1]+board[1][0];
        dp[1][0]=board[1][0];
        dp[1][1]=board[0][0]+board[1][1];
        
        for(int j=2;j<n;j++){
            dp[0][j]=board[0][j]+max(dp[1][j-1], dp[1][j-2]);
            dp[1][j]=board[1][j]+max(dp[0][j-1], dp[0][j-2]);
        }
        cout<<max(dp[0][n-1], dp[1][n-1])<<'\n';
    }
    
}