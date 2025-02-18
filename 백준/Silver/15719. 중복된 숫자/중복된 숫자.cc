#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    long long n, a, sum=0;
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>a;
        sum+=a;
    }
    sum-=(n-1)*n/2;
    cout<<sum;
}