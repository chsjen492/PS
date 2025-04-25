#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int m, n;
    int a[1000001];
    
    cin>>m>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    sort(a, a+n);
    
    int st = 1;
    int ed = 1000000000;
    int mx = 0;
    
    while(st<=ed){
        int mid = (st+ed+1)/2;
        int cnt = 0;
        for(int i=0;i<n;i++){
            cnt += (a[i]/mid);
        }
        
        if(cnt>=m){
            mx = max(mx, mid);
            st = mid+1;
        }
        else{
            ed = mid-1;
        }
    }
    
    cout<<mx;
}