#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int mx = -1000000000;
    int mn = 1000000000;
    
    int n;
    int arr[11]={0};
    int in[4] = {0};
    vector<char> cal;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<4;i++){
        cin>>in[i];
        if(i==0){
            for(int j=0;j<in[i];j++){
                cal.push_back('+');
            }
        }
        else if(i==1){
            for(int j=0;j<in[i];j++){
                cal.push_back('-');
            }
        }
        else if(i==2){
            for(int j=0;j<in[i];j++){
                cal.push_back('*');
            }
        }
        else {
            for(int j=0;j<in[i];j++){
                cal.push_back('/');
            }
        }
    }
    
    sort(cal.begin(), cal.end());
    do {
        int now = arr[0];
        for(int i=1;i<n;i++){
            if(cal[i-1]=='+'){
                now+=arr[i];
            }
            else if(cal[i-1]=='-'){
                now-=arr[i];
            }
            else if(cal[i-1]=='*'){
                now*=arr[i];
            }
            else{
                if(now>=0)
                    now/=arr[i];
                else {
                    now = -(-now/arr[i]);
                }
            }
        }
        mx = max(mx, now);
        mn = min(mn, now);
        
    } while(next_permutation(cal.begin(), cal.end()));
    
    cout<<mx<<'\n'<<mn;
    
    
}