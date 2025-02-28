#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    long long m, d;
    cin>>m>>d;
    long long cnt = 0;
    
    if(d==m){
        cout<<0;
        return 0;
    }
    
    while((cnt*cnt)<(d-m)){
        cnt++;
    }
    
    if(cnt*cnt - cnt < (d-m)){
        cout<<cnt*2-1;
    }
    else {
        cout<<cnt*2-2;
    }
}