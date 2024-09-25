#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int n;
    int ret = 0;
    int idx = 0;
    int arr[1001]={0,};
    int dp[1001];
    
    fill(dp, dp+1001, 1);
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<1000;i++){
        for(int j=0;j<=i;j++){
            if(arr[i]>arr[j]){
                dp[i] = max(dp[i], dp[j]+1);
            }
        }
    }
    
    cout<<*max_element(dp, dp+1001);
}