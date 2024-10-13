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
    int tmp = 0;
    int before = 0;
    if(t>0){
        before = ret[t-1];
    }
    for(int i=0;i<n;i++){
        if(tmp!=arr[i]&&before<=arr[i]){
            ret[t]=arr[i];
            tmp = arr[i];
            func(t+1);
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