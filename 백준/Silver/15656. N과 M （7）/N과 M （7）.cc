#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[9];
int ret[9];

void func(int t){
    if(t==m){
        for(int i=0;i<m;i++){
            cout<<ret[i]<<" ";
        }
        cout<<'\n';
        return;
    }
    
    for(int i=0;i<n;i++){
        ret[t]=arr[i];
        func(t+1);
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr, arr+n);
    func(0);
}