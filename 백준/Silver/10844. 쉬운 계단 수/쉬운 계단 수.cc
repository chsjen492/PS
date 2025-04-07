#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    int dp[101][10]={};
    
    cin>>n;
    dp[1][0] = 0;
    for(int i=1;i<10;i++){
        dp[1][i]=1;
    }
    
    for(int i=2;i<=n;i++){
        for(int j=0;j<=9;j++){
            if(j==0){
                dp[i][0] = dp[i-1][1];
            }
            else if(j==9){
                dp[i][9] = dp[i-1][8];
            }
            else{
                dp[i][j] = (dp[i-1][j-1] + dp[i-1][j+1])%1000000000;
            }
        }
    }
    long long ret = 0;
    for(int i=0;i<=9;i++){
        ret += dp[n][i];
    }
    cout<<ret%1000000000;
}