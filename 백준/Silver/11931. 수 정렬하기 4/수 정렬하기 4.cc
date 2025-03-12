#include <bits/stdc++.h>
using namespace std;

bool compare(int a, int b){
    return a>b;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end(), compare);
    
    for(auto a: v){
        cout<<a<<'\n';
    }
}