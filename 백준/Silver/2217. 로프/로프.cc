#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    int arr[100001];
    
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    sort(arr, arr+n);
    int k = 1;
    int mx = 0;
    for(int i=n-1;i>=0;i--){
        mx = max(mx, arr[i]*k);
        k++;
    }
    cout<<mx;
}