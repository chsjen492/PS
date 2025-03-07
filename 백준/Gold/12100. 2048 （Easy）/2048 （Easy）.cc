#include <bits/stdc++.h>
using namespace std;
int board[21][21]={0};
int moved[21][21]={0};
int n, mx = 0;

void rotate(){
    int tmp[21][21]={0};
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            tmp[i][j]=moved[i][j];
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            moved[i][j]=tmp[n-j-1][i];
        }
    }
}

void move(int dir){
    while(dir--) rotate();
    
    for(int i=0;i<n;i++){
        int tmp[21]={0};
        int idx = 0;
        
        for(int j=0;j<n;j++){
            if(moved[i][j]!=0){
                if(tmp[idx]==0) tmp[idx]=moved[i][j];
                else if(moved[i][j]==tmp[idx]){
                    tmp[idx++]*=2;
                }
                else {
                    tmp[++idx]=moved[i][j];
                }
            }
            
        }
        
        for(int j=0;j<n;j++){
            moved[i][j]=tmp[j];
        }
        
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>board[i][j];
        }
    }
    
    for(int tmp=0;tmp<1024;tmp++){
        int brute = tmp;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                moved[i][j]=board[i][j];
            }
        }
        for(int t=0;t<5;t++){
            int dir = brute%4;
            brute/=4;
            
            move(dir);
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                mx = max(mx, moved[i][j]);
            }
        }
    }
    
    cout<<mx;
}