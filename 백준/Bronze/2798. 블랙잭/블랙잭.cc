#include <iostream>
using namespace std;

int main(){
    int n, m;
    int arr[101];
    
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    if(n==3){
        cout<<arr[0]+arr[1]+arr[2];
        return 0;
    }
    
    int sum = 0;
    int ans = 0;
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                sum=arr[i]+arr[j]+arr[k];
                if(sum<=m){
                    ans = (m-ans)<(m-sum)?ans:sum;
                }
            }
        }
    }
    
    cout<<ans;
}