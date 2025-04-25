#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    int a[10001];
    
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    sort(a, a+n);
    long long ret = 0;
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            auto first = lower_bound(a+j+1, a+n, -a[i]-a[j]);
            auto second = upper_bound(a+j+1, a+n, -a[i]-a[j]);
            
            ret+=(second-first);
        }
    }
    
    cout<<ret;
}