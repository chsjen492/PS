#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    long long a[100001];
    int n, m;
    long long mn = 0x7fffffff;
    
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    sort(a, a+n);
    
    int st = 0, ed = 0;
    
    while(st<n&&ed<n){
        if(a[ed]-a[st]>=m){
            mn = min(a[ed]-a[st], mn);
            st++;
        }
        else ed++;
    }
    
    cout<<mn;
}