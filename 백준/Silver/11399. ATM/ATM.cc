#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    int arr[1001];
    int sum = 0;
    int prefix[1001]={0};
    
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    
    prefix[0]=arr[0];
    sum = arr[0];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+arr[i];
        sum+=prefix[i];
    }
    
    cout<<sum;
}