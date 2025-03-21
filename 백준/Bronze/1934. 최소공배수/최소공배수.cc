#include <iostream>
using namespace std;

int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b, a%b);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t, a, b;
    cin>>t;
    while(t>0){
        cin>>a>>b;
        
        int tmp = gcd(a, b);
        cout<<a*b/tmp<<'\n';
        t--;
    }
}