#include <iostream>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int n, x;
    int a[100001];
    
    cin>>n>>x;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    int ret = 2000000001;
    
    for(int i=0;i<n-1;i++){
        ret = min(ret, x*(a[i]+a[i+1]));
    }
    cout<<ret;
}