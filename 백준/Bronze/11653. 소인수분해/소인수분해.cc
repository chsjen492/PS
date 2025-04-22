#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin>>n;
    
    if(n==1) return 0;
    
    for(int i=2;i*i<=n;i++){
        while(true){
            if(n%i==0){
                n/=i;
                cout<<i<<'\n';
            }
            else break;
        }
    }
    if(n!=1) cout<<n;
}