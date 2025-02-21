#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n;
    cin>>n;
    
    long long fibo[91] = {0};
    fibo[1]=1;
    if(n<2){
        cout<<fibo[n];
        return 0;
    }
    for(int i=2;i<=n;i++){
        fibo[i]=fibo[i-1]+fibo[i-2];
    }
    
    cout<<fibo[n];
}