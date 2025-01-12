#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int arr[43];
    fill(arr, arr+43, 0);
    int n;
    for(int i=0;i<10;i++){
        cin>>n;
        arr[n%42]++;
    }
    
    int cnt = 0;
    for(int i=0;i<43;i++){
        if(arr[i]>0)
            cnt++;
    }
    cout<<cnt;
}