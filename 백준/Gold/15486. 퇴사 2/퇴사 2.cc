#include <iostream>
using namespace std;

int t[1500001]={};
int p[1500001]={};
int dp[1500001]={};
    
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;

    int mx = 0;
    
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>t[i]>>p[i];
    }
    
    for(int i=n;i>=1;i--){
        if(i+t[i]<=n+1){
            dp[i] = max(dp[i+t[i]]+p[i], dp[i+1]);
        }
        else dp[i] = dp[i+1];
        
        mx = max(mx, dp[i]);
    }
    
    cout<<mx;
    return 0;
}