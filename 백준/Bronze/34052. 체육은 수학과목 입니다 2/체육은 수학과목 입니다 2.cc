#include <iostream>
using namespace std;

int main(){
    int t, ret=0;
    
    for(int i=0;i<4;i++){
        cin>>t;
        ret+=t;
    }
    
    if(ret>1500){
        cout<<"No";
    }
    else cout<<"Yes";
}