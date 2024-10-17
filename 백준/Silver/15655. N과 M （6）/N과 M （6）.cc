#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[8];
bool isused[8];
int ret[8];

void func(int t){
    if(t==m){
        for(int i=0;i<m;i++){
            cout<<ret[i]<<" ";
        }
        cout<<'\n';
    }
    for(int i=0;i<n;i++){
        if(!isused[i]&&ret[t-1]<arr[i]){
            ret[t]=arr[i];
            isused[i]=true;
            func(t+1);
            isused[i]=false;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    func(0);
}