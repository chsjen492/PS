#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int s[1025][1025];
    int n, m, tmp, x1, y1, x2, y2;
    
    cin>>n>>m;
    
    for(int i=0;i<1025;i++){
        fill(s[i], s[i]+1025, 0);
    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>tmp;
            
            s[i][j]=s[i-1][j]+s[i][j-1]-s[i-1][j-1]+tmp;
        }
    }
    
    for(int i=0;i<m;i++){
        cin>>x1>>y1>>x2>>y2;

        cout<<s[x2][y2]-s[x1-1][y2]-s[x2][y1-1]+s[x1-1][y1-1]<<'\n';
    }
    
    return 0;
}