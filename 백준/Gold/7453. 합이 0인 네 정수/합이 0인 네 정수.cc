#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int a[4001];
int b[4001];
int c[4001];
int d[4001];
vector<long long> sum1;
vector<long long> sum2;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i]>>c[i]>>d[i];
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            sum1.push_back(a[i]+b[j]);
            sum2.push_back(c[i]+d[j]);
        }
    }
    
    sort(sum1.begin(), sum1.end());
    sort(sum2.begin(), sum2.end());
    
    long long ret = 0;
    for(int i=0;i<sum1.size();i++){
        ret+=upper_bound(sum2.begin(), sum2.end(), -sum1[i])-lower_bound(sum2.begin(), sum2.end(), -sum1[i]);
    }
    
    cout<<ret;
    
}