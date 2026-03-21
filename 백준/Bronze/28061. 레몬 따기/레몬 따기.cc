#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin>>n;
    int ret = 0;
    
    for(int i=1;i<=n;i++){
        cin>>t;
        
        ret = max((t-(n-i+1)), ret);
    }
    cout<<ret;
}