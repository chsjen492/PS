#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, milk, before = 2;

    int ret=0;
    
    cin>>n;
    vector<vector<int>> cnt(n+1, vector<int>(n+1));
    vector<vector<int>> last(n+1,vector<int>(n+1));
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>milk;
        
            cnt[i][j]=max(cnt[i-1][j], cnt[i][j-1]);
            
            if(i==1 && j==1){
                
            }
            else if(i==1 && j!=1){
                before = last[i][j-1];
            }
            else if(i!=1&&j==1){
                before = last[i-1][j];
            }
            else{
                if(cnt[i-1][j]>cnt[i][j-1]){
                    before = last[i-1][j];
                }
                else{
                    before = last[i][j-1];
                }
            }
            
            last[i][j]=before;
            
            if((before+1)%3==milk){
                cnt[i][j]++;
                last[i][j]=milk;
            }


            ret = max(ret, cnt[i][j]);
        }
    }
    
    cout<<ret;
}