#include <bits/stdc++.h>
using namespace std;

char case1[8][8]={
    'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
    'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
    'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
    'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
    'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
    'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
    'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
    'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'
};

char case2[8][8] = {
    'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
    'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
    'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
    'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
    'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
    'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
    'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
    'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'
};

int main(){
    int n, m;
    char board[50][50];
    
    int cnt1 = 0;
    int cnt2 = 0;
    int mn = 987654321;
    cin>>n>>m;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>board[i][j];
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cnt1 = 0;
            cnt2 = 0;
            if(i+7<n&&j+7<m){
                for(int k=0;k<8;k++){
                    for(int h=0;h<8;h++){
                        if(board[k+i][h+j]!=case1[k][h])
                            cnt1++;
                        if(board[k+i][h+j]!=case2[k][h])
                            cnt2++;
                    }
                }
                mn = min(mn, min(cnt1, cnt2));
            }
            else
                continue;
        }
    }
    
    cout<<mn;
}