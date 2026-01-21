#include <iostream>
using namespace std;

int main()
{
    int n, m, k;
    int cnt = -1;
    cin>>n>>m>>k;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cnt++;
            if(cnt==k){
                cout<<i<<" "<<j;
                return 0;
            }
        }
    }
}