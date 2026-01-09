#include <iostream>
using namespace std;

int main()
{
    int n, m, k;
    cin>>n>>m>>k;
    
    int ret = 0;

    ret+=min(m, k);
    ret+=min(n-m, n-k);
    
    cout<<ret;
        
}