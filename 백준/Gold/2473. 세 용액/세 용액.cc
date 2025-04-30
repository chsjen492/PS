#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    long long a[5001];
    long long ret[3];
    long long mn = 3000000001;
    int n;
    
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a, a+n);
    
    for(int i=0;i<n-2;i++){
        int st = i+1, ed = n-1;
        while(st<ed){
            long long sum = a[i]+a[st]+a[ed];
            if(abs(sum)<mn){
                mn = abs(sum);
                ret[0] = a[i];
                ret[1] = a[st];
                ret[2] = a[ed];
            }
            if(sum<0) st++;
            else ed--;
        }
    }
    
    for(int i=0;i<3;i++) cout<<ret[i]<<" ";
}