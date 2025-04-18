#include <iostream>
#include <cstring>
using namespace std;
string a, b;
int dp[1001][1001]={0};
int ret = -1;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    cin>>a>>b;
    
    for(int i=1;i<=b.length();i++){
        for(int j=1;j<=a.length();j++){
            if(b[i-1]==a[j-1]) dp[i][j] = dp[i-1][j-1]+1;
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            ret = max(ret, dp[i][j]);
        }
    }
    
    cout<<ret;
}