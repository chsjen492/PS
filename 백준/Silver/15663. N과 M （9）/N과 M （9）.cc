#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[9];
bool isused[9];
int ret[9]={0,};

void func(int t){
    if(t==m){
        for(int i=0;i<m;i++){
            cout<<ret[i]<<" ";
        }
        cout<<'\n';
        return;
    }
    int tmp=0;
    for(int i=0;i<n;i++){
        if(!isused[i]&&tmp!=arr[i]){
            ret[t]=arr[i];
            tmp=arr[i];
            isused[i]=true;
            func(t+1);
            isused[i]=false;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    func(0);
    
}