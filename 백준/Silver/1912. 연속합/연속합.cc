#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int dp[100001]={};
    int arr[100001]={};
    int n, mx=-9999;
    
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    
    for(int i=1;i<=n;i++){
        dp[i] = max(dp[i-1]+arr[i], arr[i]);
        mx = max(dp[i], mx);
    }
    cout<<mx;
}