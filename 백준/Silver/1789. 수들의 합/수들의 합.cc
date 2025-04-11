#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    long long s;
    int n = 0;
    
    cin>>s;
    while(true){
        s-=n;
        if(s<0) break;
        n++;
    }
    cout<<n-1;
}