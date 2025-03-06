#include <bits/stdc++.h>
using namespace std;
int laptop[42][42]={0};
int sticker[12][12]={0};
int n, m, k, r, c;

bool check(int x, int y){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(laptop[i+x][j+y]==1 && sticker[i][j]==1)
                return false;
        }
    }
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(sticker[i][j]==1) laptop[i+x][j+y] = 1;
        }
    }
    
    return true;
}

void rotation(){
    int tmp[12][12]={0};
    
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            tmp[i][j]=sticker[i][j];
        }
    }
    
    for(int i=0; i<c; i++){
        for(int j=0; j<r; j++){
            sticker[i][j] = tmp[r-1-j][i]; 
        }
    }
    
    swap(r, c);
}
    

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin>>n>>m>>k;
    
    for(int tmp=0;tmp<k;tmp++){
        cin>>r>>c;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cin>>sticker[i][j];
            }
        }
        
        for(int dir=0;dir<4;dir++){
           bool pasted = false;
           for(int i=0;i<=n-r;i++){
               if(pasted) break;
                for(int j=0;j<=m-c;j++){
                    if(check(i,j)){
                        pasted = true;
                        break;
                    }
                }
            }
            if(pasted) break;
            rotation();
        }
        
        
    }
    int cnt = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(laptop[i][j]==1) cnt++;
        }
    }
    cout<<cnt;
}