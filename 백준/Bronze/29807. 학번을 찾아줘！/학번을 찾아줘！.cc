#include  <iostream>
using namespace std;

int main(){
    int t;
    int arr[6] = {0};
    
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
    
    int ret = 0;
    if(t==5){
        ret+=(arr[4]*707);
    }
    if(arr[0]>arr[2]){
        ret+=(arr[0]-arr[2])*508;
    }
    else{
        ret+=(arr[2]-arr[0])*108;
    }
    if(arr[1]>arr[3]){
        ret+=(arr[1]-arr[3])*212;
    }
    else{
        ret+=(arr[3]-arr[1])*305;
    }
    
    cout<<ret*4763;
}