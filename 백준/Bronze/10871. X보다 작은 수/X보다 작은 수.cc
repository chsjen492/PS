#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    
    int n, x, tmp;
    cin>>n>>x;
    for(int i=0;i<n;i++){
        cin>>tmp;
        if(tmp<x){
            cout<<tmp<<" ";
        }
    }

}