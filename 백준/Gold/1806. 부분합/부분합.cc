#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    long long a[100001];
    int n, s;
    int mn = 0x7fffffff;
    
    cin>>n>>s;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    int ed = 0;
    long long sum = a[0];
    
    for(int st=0;st<n;st++){
        while(ed<n && sum<s){
            ed++;
            if(ed<n) sum+=a[ed];
        }
        if(ed==n) break;
        mn = min(mn, ed-st+1);
        sum-=a[st];
    }
    if(mn==0x7fffffff) cout<<0;
    else cout<<mn;
}