#include <iostream>
#include <algorithm>
using namespace std;
long long arr[1001];
long long two[1000001];
int n;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    
    int idx = 0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            two[idx++] = arr[i]+arr[j];
        }
    }
    
    sort(two, two+idx);
    
    long long mx = 0;
    
    for(int k=0;k<n;k++){
        for(int l=0;l<n;l++){
            if(binary_search(two, two+idx, arr[l]-arr[k])) mx = max(mx, arr[l]);
        }
    }
    
    cout<<mx;
    
}