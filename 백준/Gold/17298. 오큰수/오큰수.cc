#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int arr[1000001];
    int ans[1000001];
    stack<int> s;
    int n, a;
    vector<int> ret;
    
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=n-1;i>=0;i--){
        while(!s.empty()&&s.top()<=arr[i]){
            s.pop();
        }
        if(s.empty())
            ans[i]=-1;
        else
            ans[i]=s.top();
        s.push(arr[i]);
    }
    
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    
    
    
}


