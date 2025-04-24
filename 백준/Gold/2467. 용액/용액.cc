#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int n;
int arr[100001];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    sort(arr, arr+n);
    
    long long mn = 2000000001;
    int ret1, ret2;
    
    for(int i=0;i<n;i++){
        int idx = lower_bound(arr, arr+n, -arr[i])-arr;
        // idx, idx-1, idx+1에 해당하는 값과 비교해야 한다.
        if(idx-1>=0 && idx-1!=i && abs(arr[i]+arr[idx-1])<mn){
            mn = abs(arr[i]+arr[idx-1]);
            ret1 = arr[i];
            ret2 = arr[idx-1];
        }
        if(idx<n && idx!=i && abs(arr[i]+arr[idx])<mn){
            mn = abs(arr[i] + arr[idx]);
            ret1 = arr[i];
            ret2 = arr[idx];
        }
        if(idx+1<n && idx+1!=i && abs(arr[i]+arr[idx+1])<mn){
            mn = abs(arr[i] + arr[idx+1]);
            ret1 = arr[i];
            ret2 = arr[idx+1];
        }
        
    }
    
    cout<<ret1<<" "<<ret2;
    
}