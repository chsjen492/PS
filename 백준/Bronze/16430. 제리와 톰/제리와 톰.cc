#include <iostream>
using namespace std;

int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b, a%b);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int a, b;
    cin>>a>>b;
    
    int p, q;
    p = b-a;
    q = b;
    
    int tmp = gcd(p, q);
    
    cout<<p/tmp<<" "<<q/tmp;
    
}