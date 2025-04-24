#include <iostream>
#include <algorithm>
using namespace std;
int arr[500001];
int n, m;

int lowerIdx(int x){
    int st = 0;
    int en = n;
    
    while(st!=en){
        int md = (st+en)/2;
        if(arr[md]>=x){
            en=md;
        }
        else {
            st=md+1;
        }
    }
    return st;
}

int upperIdx(int x){
    int st = 0;
    int en = n;
    
    while(st!=en){
        int md = (st+en)/2;
        if(arr[md]>x){
            en=md;
        }
        else {
            st=md+1;
        }
    }
    return st;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    sort(arr, arr+n);
    
    cin>>m;
    int fd;
    for(int i=0;i<m;i++){
        cin>>fd;
        cout<<upperIdx(fd)-lowerIdx(fd)<<" ";
    }
}