#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    long long m;
    long long a[10001];
    
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    int ed = 0;
    long long sum = 0;
    long long ret = 0;
    for(int i=0;i<n;i++){
        while(ed<n&&sum<m){
            sum+=a[ed];
            ed++;
        }
        if(sum==m){
            ret++;
        }
        sum-=a[i];
    }
    
    cout<<ret;
}