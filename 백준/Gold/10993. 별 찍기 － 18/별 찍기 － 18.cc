#include <bits/stdc++.h>
using namespace std;

int n;
char board[1024][2048];

void fill_stars(int d, int x, int y){
    if(d==1){
        board[y][x]='*';
        return;
    }
    
    int row = pow(2, d+1)-3;
    int col = pow(2, d)-1;
    
    if(d%2==0){
        for(int i=x;i<x+row;i++){
            board[y][i]='*';
        }
        for(int i=1;i<col;i++){ // x와 y에 1씩 더함함
            board[y+i][x+i]='*';
            board[y+i][x+row-i-1]='*';
        }
        fill_stars(d-1, x+pow(2, d-1), y+1);
    }
    else{
        for(int i=x;i<row+x;i++){
            board[y+col-1][i]='*';
        }
        for(int i=0;i<col;i++){
            board[y+i][x+row/2-i]='*';
            board[y+i][x+row/2+i]='*';
        }
        fill_stars(d-1, x+pow(2, d-1), y+col/2);
    }
    return;
}
int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    cin>>n;
    int row = pow(2, n+1)-3;
    int col = pow(2, n) - 1;
    
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            board[i][j]=' ';
        }
    }
    fill_stars(n, 0, 0);
    
    if(n%2==0){
        for(int i=0;i<col;i++){
            for(int j=0;j<row-i;j++){
                cout<<board[i][j];
            }
            cout<<'\n';
        }
    }
    else{
        for(int i=0;i<col;i++){
            for(int j=0;j<row/2+1+i;j++){
                cout<<board[i][j];
            }
            cout<<'\n';
        }
    }
    
}