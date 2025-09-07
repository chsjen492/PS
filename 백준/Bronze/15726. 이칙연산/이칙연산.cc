#include <iostream>
using namespace std;

int main()
{
    double a, b, c;
    cin>>a>>b>>c;
    
    int ret = max(((a*b)/c), ((a/b)*c));
    cout<<ret;
}