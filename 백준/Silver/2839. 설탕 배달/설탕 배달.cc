#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin>>n;
    
    int mx_5 = n/5;
    for(int i=mx_5;i>0;i--){
        int mod = n-(5*i);
        if(mod%3==0){
            cout<<i+(mod/3);
            return 0;
        }
    }
    if(n%3==0){
        cout<<n/3;
    }
    else
        cout<<-1;
    return 0;
}