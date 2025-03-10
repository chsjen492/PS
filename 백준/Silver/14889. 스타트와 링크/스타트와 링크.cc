#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, mn=987654321;
    int ability[21][21]={0};
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>ability[i][j];
        }
    }
    
    vector<int> brute(n, 1);
    fill(brute.begin(), brute.begin()+n/2, 0);
    
    do {
        int start = 0;
        int link = 0;
        int start_idx = 0;
        int link_idx = 0;
        
        for(int i=0;i<n;i++){
            if(brute[i]==0){
                start_idx = i;
                break;
            }
        }
        
        for(int i=0;i<n;i++){
            if(brute[i]==1){
                link_idx = i;
                break;
            }
        }
        
        for(int i=start_idx;i<n;i++){
            if(brute[i]==1) continue;
            for(int j=i+1;j<n;j++){
                if(brute[j]==1) continue;
                
                start += ability[i][j]+ability[j][i];
            }
        }
        
        for(int i=link_idx;i<n;i++){
            if(brute[i]==0) continue;
            for(int j=i+1;j<n;j++){
                if(brute[j]==0) continue;
                
                link += ability[i][j]+ability[j][i];
            }
        }
        
        mn = min(mn, abs(start-link));
        
        
    } while(next_permutation(brute.begin(), brute.end()));
    
    cout<<mn;
    
}