#include <iostream>
using namespace std;

int main(){
    int t, h, w, n;
    
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>h>>w>>n;
        if(n%h==0)
            cout<<h;
        else
            cout<<n%h;
        printf("%02d\n", (n-1)/h+1);
    }
}