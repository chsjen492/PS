#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[3]={0};
    int mn = 999999999;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mn = min(mn, arr[i]);
    }
    
    for(int i=1;i<=mn;i++){
        if(n==2){
            if(arr[0]%i==0&&arr[1]%i==0){
                cout<<i<<'\n';
            }
        }
        else{
            if(arr[0]%i==0&&arr[1]%i==0&&arr[2]%i==0){
                cout<<i<<'\n';
            }
        }
    }
}