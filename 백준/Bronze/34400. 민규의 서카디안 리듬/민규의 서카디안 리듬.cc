#include <iostream>
using namespace std;

int main()
{
    int tc, t;
    cin>>tc;
    
    for(int i=0;i<tc;i++){
        cin>>t;
        if(t%25<17) cout<<"ONLINE\n";
        else cout<<"OFFLINE\n";
    }
}