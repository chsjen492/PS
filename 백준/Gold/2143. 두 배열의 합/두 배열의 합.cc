#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int a[1001];
    int b[1001];
    long long dp1[1001];
    long long dp2[1001];
    long long t;
    long long n, m, ret = 0;
    
    vector<long long> a_sum;
    vector<long long> b_sum;
    
    cin>>t;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        dp1[i] = dp1[i-1]+a[i];
    }
    cin>>m;
    for(int i=1;i<=m;i++){
        cin>>b[i];
        dp2[i] = dp2[i-1]+b[i];
    }
    
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            a_sum.push_back(dp1[i]-dp1[j]);
        }
    }
    
    for(int i=1;i<=m;i++){
        for(int j=0;j<i;j++){
            b_sum.push_back(dp2[i]-dp2[j]);
        }
    }
    
    sort(a_sum.begin(), a_sum.end());
    sort(b_sum.begin(), b_sum.end());
    
    for(int i=0;i<a_sum.size();i++){
        ret+=upper_bound(b_sum.begin(), b_sum.end(), t-a_sum[i])-lower_bound(b_sum.begin(), b_sum.end(), t-a_sum[i]);
    }
    
    cout<<ret;
}