#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, tmp, ret = 0;
    int price[200000], dp[200000];
    
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>price[i];
        if(i==0){
            dp[i]=price[i];
        }
        else{
            dp[i]=min(dp[i-1], price[i]);
        }
    }
    
    
    for(int i=n-1; i>0;i--){
        ret = max(ret, price[i]-dp[i-1]);
    }
    cout<<ret;
}