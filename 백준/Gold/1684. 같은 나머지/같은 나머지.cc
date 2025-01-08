#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    return b ? gcd(b, a%b) : a;
}

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n;
    int in[1001];
    int arr[1000];
    
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>in[i];
    }
    
    sort(in, in+n);
    
    for(int i=0;i<n-1;i++){
        arr[i] = in[i+1]-in[i];
    }
    
    int res = arr[0];
    for(int i=1;i<n-1;i++){
        res = gcd(res, arr[i]);
    }
    cout<<res;
}