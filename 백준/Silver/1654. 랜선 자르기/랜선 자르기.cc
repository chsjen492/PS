#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int k, n;
int arr[1000001];

bool cutting(int x){
    long long ret = 0;
    
    for(int i=0;i<k;i++){
        ret+=(arr[i]/x);
    }
    
    return ret>=n;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    cin>>k>>n;
    for(int i=0;i<k;i++){
        cin>>arr[i];
    }
    
    sort(arr, arr+k);
    
    long long st = 1;
    long long ed = pow(2, 31)-1;
    while(st<ed){
        long long mid = (st+ed+1)/2;
        if(cutting(mid)){
            st = mid;
        }
        else{
            ed = mid-1;
        }
        
    }
    
    cout<<st;
    
}