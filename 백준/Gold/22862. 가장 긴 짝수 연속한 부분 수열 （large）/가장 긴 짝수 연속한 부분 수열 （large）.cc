#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, k;
    int s[1000001];
    
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    
    int cnt = 0;
    int ed = 0;
    int mx = -1;
    for(int i=0;i<n;i++){
        while(ed<n&&cnt<=k){
            if(s[ed]%2!=0) cnt++;
            ed++;
        }
        
        mx = max(mx, ed-i-cnt);
        
        if(s[i]%2!=0) cnt--;
    }
    
    cout<<mx;
}