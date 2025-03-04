#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, m;
    char in[51][51];
    int mx = 1;
    
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>in[i][j];
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            for(int k=1;;k++){
                if(i+k>=n||j+k>=m) break;
                if(in[i][j]==in[i+k][j] && in[i][j]==in[i][j+k] && in[i][j]==in[i+k][j+k]){
                    mx = max(mx, k+1);
                }
            }
        }
    }
    
    cout<<mx*mx;
}