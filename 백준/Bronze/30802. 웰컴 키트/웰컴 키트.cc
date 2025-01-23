#include <iostream>
using namespace std;

int main(){
    int n, t, p;
    int t_size[6];
    int ret = 0;
    
    cin>>n;
    for(int i=0;i<6;i++){
        cin>>t_size[i];
    }
    cin>>t>>p;
    
    for(int i=0;i<6;i++){
        ret+=(t_size[i] / t + (t_size[i] % t > 0));
    }
    
    cout<<ret<<'\n';
    cout<<n/p<<" "<<n%p;
}