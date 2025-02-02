#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    long long n, k;
    int ret = 0;
    cin>>n>>k;
    
    int coin[10];
    
    for(int i=0;i<n;i++){
        cin>>coin[i];
    }
    for(int i=n-1;i>=0;i--){
        if(coin[i]>k)
            continue;
        else {
            int tmp=k/coin[i];
            ret+=tmp;
            k=k%coin[i];
        }
    }
    cout<<ret;
}