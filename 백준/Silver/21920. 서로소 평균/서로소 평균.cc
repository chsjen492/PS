#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b, a%b);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, t;
    double sum = 0;
    double cnt = 0;
    vector<int> v;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>t;
        v.push_back(t);
    }
    int x;
    cin>>x;
    
    for(int i=0;i<n;i++){
        if(gcd(x, v[i])==1){
            sum+=v[i];
            cnt++;
        }
    }
    
    cout.precision(7);
    cout<<sum/cnt;
}