#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m, i, j, x, y, t;
    int arr[301][301]={0};
    int prefix[301][301]={0};
    int sum = 0;
    cin>>n>>m;
    for(int k=1;k<=n;k++){
        for(int h=1;h<=m;h++){
            cin>>arr[k][h];
            prefix[k][h]=arr[k][h]+prefix[k-1][h]+prefix[k][h-1]-prefix[k-1][h-1];
        }
    }
    
    cin>>t;
    
    for(int k=0;k<t;k++){
        cin>>i>>j>>x>>y;
        cout<<prefix[x][y]-prefix[x][j-1]-prefix[i-1][y]+prefix[i-1][j-1]<<'\n';
    }
}