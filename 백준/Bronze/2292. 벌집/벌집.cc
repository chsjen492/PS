#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    if(n==1){
        cout<<1;
        return 0;
    }
    
    int sum = 2;
    int i=1;
    for(sum;sum<=n;i++){
        sum+=6*i;
    }
    cout<<i;
}