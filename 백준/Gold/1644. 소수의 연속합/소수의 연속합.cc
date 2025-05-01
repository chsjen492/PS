#include <iostream>
#include <vector>
using namespace std;
vector<int> v;

void eratos(int n){
    bool arr[4000001] ={};
    
    for(int i=2;i*i<=n;i++){
        if(!arr[i]){
            for(int j=i*i;j<=n;j+=i){
                arr[j]=true;
            }
        }
    }
    
    for(int i=2;i<=n;i++){
        if(!arr[i]) v.push_back(i);
    }
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin>>n;
    
    if(n<2){
        cout<<0;
        return 0;
    }
    
    eratos(n);
    int ret = 0;
    int ed = 0;
    long long sum = v[0];
    if(sum==n) ret++;
    for(int i=0;i<v.size();i++){
        while(sum<n&&ed<v.size()){
            ed++;
            sum+=v[ed];
            if(sum==n) ret++;
        }
        sum-=v[i];
        if(sum==n) ret++;
    }
    
    cout<<ret;
}