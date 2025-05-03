#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, c;
    int a[200001];
    
    cin>>n>>c;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    sort(a, a+n);
    
    int st = 1;
    int ed = 1000000000;
    while(st<ed){
        int mid = (st+ed+1)/2;
        
        int cnt = 0;
        int idx = 0;
        while(idx<n){
            idx = lower_bound(a, a+n, a[idx]+mid)-a;
            cnt++;
        }
        
        if(cnt>=c) st = mid;
        else ed = mid-1;
    }
    
    cout<<st;
}