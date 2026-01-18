#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int ret = 0, sum=0;
    
    for(int i=0;i<n;i++){
        int r[2]={0};
        int t[5]={0};
        for(int j=0;j<2;j++){
            cin>>r[j];
        }
        for(int j=0;j<5;j++){
            cin>>t[j];
        }
        sum+=max(r[0], r[1]);
        sort(t, t+5);
        sum+=t[4]+t[3];
        
        ret = max(ret, sum);
        sum=0;
    }
    
    cout<<ret;
}