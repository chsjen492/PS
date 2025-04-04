#include <iostream>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int n;
    int arr[1001]={};
    int dp[1001] = {};
    int mx = -987654321;
    
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        dp[i] = arr[i];
    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            if(arr[j]<arr[i]) dp[i] = max(dp[i], dp[j]+arr[i]);
        }
        mx = max(dp[i], mx);
    }
    
    cout<<mx;
    
    
}