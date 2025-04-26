#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, m;
    int trees[1000001];
    
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>trees[i];
    }
    sort(trees, trees+n);
    
    long long st = 0;
    long long ed = *max_element(trees, trees+n);
    long long mx = 0;
    while(st<ed){
        long long mid = (st+ed+1)/2;
        long long ret = 0;
        for(int i=0;i<n;i++){
            if(trees[i]<=mid) continue;
            ret+=(trees[i]-mid);
        }
        if(ret>=m){
            st = mid;
        }
        else{
            ed = mid-1;
        }
    }
    
    cout<<st;
}