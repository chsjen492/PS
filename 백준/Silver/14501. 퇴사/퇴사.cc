#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    int dp[17]={};
    int t[16];
    int p[16];
    
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>t[i]>>p[i];
    }
    
    for(int i=n;i>=1;i--){
        if(i+t[i]<=n+1) dp[i] = max(dp[i+1], p[i]+dp[i+t[i]]);
        else dp[i] = dp[i+1];
    }
    
    cout<<*max_element(dp, dp+n+1);
}