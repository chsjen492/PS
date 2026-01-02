#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    int ret = 0;
    int girls[7]={0};
    int boys[7] = {0};
    cin>>n>>k;
    
    for(int i=0;i<n;i++){
        int s, y;
        cin>>s>>y;
        if(s==0) girls[y]++;
        else boys[y]++;
    }
    
    for(int i=1;i<7;i++){
        ret+=(girls[i]/k) + (girls[i]%k!=0);
        ret+=(boys[i]/k) + (boys[i]%k!=0);
    }
    
    cout<<ret;
}