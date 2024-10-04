#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, ret=0;
    for(int i=0;i<5;i++){
        cin>>n;
        ret += (n*n);
    }
    
    cout<<ret%10;
}