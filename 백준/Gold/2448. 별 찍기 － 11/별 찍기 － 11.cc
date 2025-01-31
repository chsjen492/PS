#include <bits/stdc++.h>
using namespace std;

char board[3072][6144]; 
void fill_star(int i, int j, int n){
    if(n==3){
        board[i][j]='*';
        board[i+1][j-1]='*';
        board[i+1][j+1]='*';
        for(int k=j-2;k<j+3;k++){
            board[i+2][k]='*';
        }
    }
    else{
        fill_star(i, j, n/2);
        fill_star(i+n/2, j-n/2, n/2);
        fill_star(i+n/2, j+n/2, n/2);
    }
}
int main(){
    int n;
    cin>>n;
    
    fill_star(0, n-1, n);
    
    for(int i=0;i<n;i++){
        for(int j=0;j<2*n-1;j++){
            if(board[i][j]=='*')
                cout<<board[i][j];
            else
                cout<<' ';
        }
        cout<<'\n';
    }
}